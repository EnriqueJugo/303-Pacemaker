

#include "lib/ticktime.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "lib/cJSON.h"

#include "pacemaker.h"

// The data for the model
TickData model;

double _ticktime;


void receiveVariables() {
    size_t blocksize = 2048;
    char *buffer = realloc(NULL, sizeof(char) * blocksize);
    size_t i = 0;
    
    // read next line
    int c = getchar();
    while (c != EOF && c != '\n') {
        buffer[i++] = (char) c;
        if (i == blocksize) {
            buffer = realloc(buffer, sizeof(char) * (blocksize += 2048));
        }
        c = getchar();
    }
    buffer[i++] = '\0';
    
    if (c == EOF) {
        exit(EOF);
    }
    
    cJSON *root = cJSON_Parse(buffer);
    cJSON *item = NULL;
    if(root != NULL) {
        // Receive AS
        item = cJSON_GetObjectItemCaseSensitive(root, "AS");
        if(item != NULL) {
            model.AS = item->valueint;
        }
        // Receive VS
        item = cJSON_GetObjectItemCaseSensitive(root, "VS");
        if(item != NULL) {
            model.VS = item->valueint;
        }
        // Receive deltaT
        item = cJSON_GetObjectItemCaseSensitive(root, "deltaT");
        if(item != NULL) {
            model.deltaT = item->valuedouble;
        }
        // Receive AP
        item = cJSON_GetObjectItemCaseSensitive(root, "AP");
        if(item != NULL) {
            model.AP = item->valueint;
        }
        // Receive VP
        item = cJSON_GetObjectItemCaseSensitive(root, "VP");
        if(item != NULL) {
            model.VP = item->valueint;
        }
        // Receive sleepT
        item = cJSON_GetObjectItemCaseSensitive(root, "sleepT");
        if(item != NULL) {
            model.sleepT = item->valuedouble;
        }
        // Receive #ticktime
        item = cJSON_GetObjectItemCaseSensitive(root, "#ticktime");
        if(item != NULL) {
            _ticktime = item->valuedouble;
        }
        // Receive LRI_ACTIVE
        item = cJSON_GetObjectItemCaseSensitive(root, "LRI_ACTIVE");
        if(item != NULL) {
            model.LRI_ACTIVE = item->valueint;
        }
        // Receive PVARP_ACTIVE
        item = cJSON_GetObjectItemCaseSensitive(root, "PVARP_ACTIVE");
        if(item != NULL) {
            model.PVARP_ACTIVE = item->valueint;
        }
        // Receive URI_ACTIVE
        item = cJSON_GetObjectItemCaseSensitive(root, "URI_ACTIVE");
        if(item != NULL) {
            model.URI_ACTIVE = item->valueint;
        }
        // Receive VRP_ACTIVE
        item = cJSON_GetObjectItemCaseSensitive(root, "VRP_ACTIVE");
        if(item != NULL) {
            model.VRP_ACTIVE = item->valueint;
        }
        // Receive _GO
        item = cJSON_GetObjectItemCaseSensitive(root, "_GO");
        if(item != NULL) {
            model._GO = item->valueint;
        }
        // Receive _TERM
        item = cJSON_GetObjectItemCaseSensitive(root, "_TERM");
        if(item != NULL) {
            model._TERM = item->valueint;
        }
        // Receive _cg102
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg102");
        if(item != NULL) {
            model._cg102 = item->valueint;
        }
        // Receive _cg106
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg106");
        if(item != NULL) {
            model._cg106 = item->valueint;
        }
        // Receive _cg11
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg11");
        if(item != NULL) {
            model._cg11 = item->valueint;
        }
        // Receive _cg114
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg114");
        if(item != NULL) {
            model._cg114 = item->valueint;
        }
        // Receive _cg118
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg118");
        if(item != NULL) {
            model._cg118 = item->valueint;
        }
        // Receive _cg120
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg120");
        if(item != NULL) {
            model._cg120 = item->valueint;
        }
        // Receive _cg122
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg122");
        if(item != NULL) {
            model._cg122 = item->valueint;
        }
        // Receive _cg123
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg123");
        if(item != NULL) {
            model._cg123 = item->valueint;
        }
        // Receive _cg126
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg126");
        if(item != NULL) {
            model._cg126 = item->valueint;
        }
        // Receive _cg127
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg127");
        if(item != NULL) {
            model._cg127 = item->valueint;
        }
        // Receive _cg129
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg129");
        if(item != NULL) {
            model._cg129 = item->valueint;
        }
        // Receive _cg13
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg13");
        if(item != NULL) {
            model._cg13 = item->valueint;
        }
        // Receive _cg132
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg132");
        if(item != NULL) {
            model._cg132 = item->valueint;
        }
        // Receive _cg133
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg133");
        if(item != NULL) {
            model._cg133 = item->valueint;
        }
        // Receive _cg135
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg135");
        if(item != NULL) {
            model._cg135 = item->valueint;
        }
        // Receive _cg138
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg138");
        if(item != NULL) {
            model._cg138 = item->valueint;
        }
        // Receive _cg139
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg139");
        if(item != NULL) {
            model._cg139 = item->valueint;
        }
        // Receive _cg14
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg14");
        if(item != NULL) {
            model._cg14 = item->valueint;
        }
        // Receive _cg142
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg142");
        if(item != NULL) {
            model._cg142 = item->valueint;
        }
        // Receive _cg147
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg147");
        if(item != NULL) {
            model._cg147 = item->valueint;
        }
        // Receive _cg148
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg148");
        if(item != NULL) {
            model._cg148 = item->valueint;
        }
        // Receive _cg15
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg15");
        if(item != NULL) {
            model._cg15 = item->valueint;
        }
        // Receive _cg152
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg152");
        if(item != NULL) {
            model._cg152 = item->valueint;
        }
        // Receive _cg156
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg156");
        if(item != NULL) {
            model._cg156 = item->valueint;
        }
        // Receive _cg159
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg159");
        if(item != NULL) {
            model._cg159 = item->valueint;
        }
        // Receive _cg161
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg161");
        if(item != NULL) {
            model._cg161 = item->valueint;
        }
        // Receive _cg164
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg164");
        if(item != NULL) {
            model._cg164 = item->valueint;
        }
        // Receive _cg166
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg166");
        if(item != NULL) {
            model._cg166 = item->valueint;
        }
        // Receive _cg17
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg17");
        if(item != NULL) {
            model._cg17 = item->valueint;
        }
        // Receive _cg170
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg170");
        if(item != NULL) {
            model._cg170 = item->valueint;
        }
        // Receive _cg173
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg173");
        if(item != NULL) {
            model._cg173 = item->valueint;
        }
        // Receive _cg174
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg174");
        if(item != NULL) {
            model._cg174 = item->valueint;
        }
        // Receive _cg18
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg18");
        if(item != NULL) {
            model._cg18 = item->valueint;
        }
        // Receive _cg21
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg21");
        if(item != NULL) {
            model._cg21 = item->valueint;
        }
        // Receive _cg23
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg23");
        if(item != NULL) {
            model._cg23 = item->valueint;
        }
        // Receive _cg25
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg25");
        if(item != NULL) {
            model._cg25 = item->valueint;
        }
        // Receive _cg27
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg27");
        if(item != NULL) {
            model._cg27 = item->valueint;
        }
        // Receive _cg29
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg29");
        if(item != NULL) {
            model._cg29 = item->valueint;
        }
        // Receive _cg30
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg30");
        if(item != NULL) {
            model._cg30 = item->valueint;
        }
        // Receive _cg33
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg33");
        if(item != NULL) {
            model._cg33 = item->valueint;
        }
        // Receive _cg34
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg34");
        if(item != NULL) {
            model._cg34 = item->valueint;
        }
        // Receive _cg37
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg37");
        if(item != NULL) {
            model._cg37 = item->valueint;
        }
        // Receive _cg38
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg38");
        if(item != NULL) {
            model._cg38 = item->valueint;
        }
        // Receive _cg4
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg4");
        if(item != NULL) {
            model._cg4 = item->valueint;
        }
        // Receive _cg40
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg40");
        if(item != NULL) {
            model._cg40 = item->valueint;
        }
        // Receive _cg43
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg43");
        if(item != NULL) {
            model._cg43 = item->valueint;
        }
        // Receive _cg46
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg46");
        if(item != NULL) {
            model._cg46 = item->valueint;
        }
        // Receive _cg50
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg50");
        if(item != NULL) {
            model._cg50 = item->valueint;
        }
        // Receive _cg51
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg51");
        if(item != NULL) {
            model._cg51 = item->valueint;
        }
        // Receive _cg53
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg53");
        if(item != NULL) {
            model._cg53 = item->valueint;
        }
        // Receive _cg55
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg55");
        if(item != NULL) {
            model._cg55 = item->valueint;
        }
        // Receive _cg56
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg56");
        if(item != NULL) {
            model._cg56 = item->valueint;
        }
        // Receive _cg57
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg57");
        if(item != NULL) {
            model._cg57 = item->valueint;
        }
        // Receive _cg59
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg59");
        if(item != NULL) {
            model._cg59 = item->valueint;
        }
        // Receive _cg60
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg60");
        if(item != NULL) {
            model._cg60 = item->valueint;
        }
        // Receive _cg63
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg63");
        if(item != NULL) {
            model._cg63 = item->valueint;
        }
        // Receive _cg65
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg65");
        if(item != NULL) {
            model._cg65 = item->valueint;
        }
        // Receive _cg67
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg67");
        if(item != NULL) {
            model._cg67 = item->valueint;
        }
        // Receive _cg68
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg68");
        if(item != NULL) {
            model._cg68 = item->valueint;
        }
        // Receive _cg73
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg73");
        if(item != NULL) {
            model._cg73 = item->valueint;
        }
        // Receive _cg75
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg75");
        if(item != NULL) {
            model._cg75 = item->valueint;
        }
        // Receive _cg78
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg78");
        if(item != NULL) {
            model._cg78 = item->valueint;
        }
        // Receive _cg8
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg8");
        if(item != NULL) {
            model._cg8 = item->valueint;
        }
        // Receive _cg83
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg83");
        if(item != NULL) {
            model._cg83 = item->valueint;
        }
        // Receive _cg87
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg87");
        if(item != NULL) {
            model._cg87 = item->valueint;
        }
        // Receive _cg9
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg9");
        if(item != NULL) {
            model._cg9 = item->valueint;
        }
        // Receive _cg92
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg92");
        if(item != NULL) {
            model._cg92 = item->valueint;
        }
        // Receive _cg93
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg93");
        if(item != NULL) {
            model._cg93 = item->valueint;
        }
        // Receive _cg97
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg97");
        if(item != NULL) {
            model._cg97 = item->valueint;
        }
        // Receive _g102
        item = cJSON_GetObjectItemCaseSensitive(root, "_g102");
        if(item != NULL) {
            model._g102 = item->valueint;
        }
        // Receive _g103
        item = cJSON_GetObjectItemCaseSensitive(root, "_g103");
        if(item != NULL) {
            model._g103 = item->valueint;
        }
        // Receive _g103_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g103_e3");
        if(item != NULL) {
            model._g103_e3 = item->valueint;
        }
        // Receive _g104
        item = cJSON_GetObjectItemCaseSensitive(root, "_g104");
        if(item != NULL) {
            model._g104 = item->valueint;
        }
        // Receive _g104_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g104_e1");
        if(item != NULL) {
            model._g104_e1 = item->valueint;
        }
        // Receive _g106
        item = cJSON_GetObjectItemCaseSensitive(root, "_g106");
        if(item != NULL) {
            model._g106 = item->valueint;
        }
        // Receive _g107
        item = cJSON_GetObjectItemCaseSensitive(root, "_g107");
        if(item != NULL) {
            model._g107 = item->valueint;
        }
        // Receive _g107_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g107_e2");
        if(item != NULL) {
            model._g107_e2 = item->valueint;
        }
        // Receive _g109
        item = cJSON_GetObjectItemCaseSensitive(root, "_g109");
        if(item != NULL) {
            model._g109 = item->valueint;
        }
        // Receive _g11
        item = cJSON_GetObjectItemCaseSensitive(root, "_g11");
        if(item != NULL) {
            model._g11 = item->valueint;
        }
        // Receive _g110
        item = cJSON_GetObjectItemCaseSensitive(root, "_g110");
        if(item != NULL) {
            model._g110 = item->valueint;
        }
        // Receive _g114
        item = cJSON_GetObjectItemCaseSensitive(root, "_g114");
        if(item != NULL) {
            model._g114 = item->valueint;
        }
        // Receive _g115
        item = cJSON_GetObjectItemCaseSensitive(root, "_g115");
        if(item != NULL) {
            model._g115 = item->valueint;
        }
        // Receive _g12
        item = cJSON_GetObjectItemCaseSensitive(root, "_g12");
        if(item != NULL) {
            model._g12 = item->valueint;
        }
        // Receive _g120
        item = cJSON_GetObjectItemCaseSensitive(root, "_g120");
        if(item != NULL) {
            model._g120 = item->valueint;
        }
        // Receive _g121
        item = cJSON_GetObjectItemCaseSensitive(root, "_g121");
        if(item != NULL) {
            model._g121 = item->valueint;
        }
        // Receive _g121_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g121_e1");
        if(item != NULL) {
            model._g121_e1 = item->valueint;
        }
        // Receive _g125
        item = cJSON_GetObjectItemCaseSensitive(root, "_g125");
        if(item != NULL) {
            model._g125 = item->valueint;
        }
        // Receive _g126
        item = cJSON_GetObjectItemCaseSensitive(root, "_g126");
        if(item != NULL) {
            model._g126 = item->valueint;
        }
        // Receive _g128
        item = cJSON_GetObjectItemCaseSensitive(root, "_g128");
        if(item != NULL) {
            model._g128 = item->valueint;
        }
        // Receive _g128_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g128_e2");
        if(item != NULL) {
            model._g128_e2 = item->valueint;
        }
        // Receive _g12_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g12_e1");
        if(item != NULL) {
            model._g12_e1 = item->valueint;
        }
        // Receive _g13
        item = cJSON_GetObjectItemCaseSensitive(root, "_g13");
        if(item != NULL) {
            model._g13 = item->valueint;
        }
        // Receive _g131
        item = cJSON_GetObjectItemCaseSensitive(root, "_g131");
        if(item != NULL) {
            model._g131 = item->valueint;
        }
        // Receive _g135
        item = cJSON_GetObjectItemCaseSensitive(root, "_g135");
        if(item != NULL) {
            model._g135 = item->valueint;
        }
        // Receive _g136
        item = cJSON_GetObjectItemCaseSensitive(root, "_g136");
        if(item != NULL) {
            model._g136 = item->valueint;
        }
        // Receive _g137
        item = cJSON_GetObjectItemCaseSensitive(root, "_g137");
        if(item != NULL) {
            model._g137 = item->valueint;
        }
        // Receive _g137_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g137_e3");
        if(item != NULL) {
            model._g137_e3 = item->valueint;
        }
        // Receive _g139
        item = cJSON_GetObjectItemCaseSensitive(root, "_g139");
        if(item != NULL) {
            model._g139 = item->valueint;
        }
        // Receive _g14
        item = cJSON_GetObjectItemCaseSensitive(root, "_g14");
        if(item != NULL) {
            model._g14 = item->valueint;
        }
        // Receive _g140
        item = cJSON_GetObjectItemCaseSensitive(root, "_g140");
        if(item != NULL) {
            model._g140 = item->valueint;
        }
        // Receive _g142
        item = cJSON_GetObjectItemCaseSensitive(root, "_g142");
        if(item != NULL) {
            model._g142 = item->valueint;
        }
        // Receive _g143
        item = cJSON_GetObjectItemCaseSensitive(root, "_g143");
        if(item != NULL) {
            model._g143 = item->valueint;
        }
        // Receive _g143_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g143_e1");
        if(item != NULL) {
            model._g143_e1 = item->valueint;
        }
        // Receive _g145
        item = cJSON_GetObjectItemCaseSensitive(root, "_g145");
        if(item != NULL) {
            model._g145 = item->valueint;
        }
        // Receive _g147
        item = cJSON_GetObjectItemCaseSensitive(root, "_g147");
        if(item != NULL) {
            model._g147 = item->valueint;
        }
        // Receive _g148
        item = cJSON_GetObjectItemCaseSensitive(root, "_g148");
        if(item != NULL) {
            model._g148 = item->valueint;
        }
        // Receive _g149
        item = cJSON_GetObjectItemCaseSensitive(root, "_g149");
        if(item != NULL) {
            model._g149 = item->valueint;
        }
        // Receive _g149_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g149_e2");
        if(item != NULL) {
            model._g149_e2 = item->valueint;
        }
        // Receive _g15
        item = cJSON_GetObjectItemCaseSensitive(root, "_g15");
        if(item != NULL) {
            model._g15 = item->valueint;
        }
        // Receive _g151
        item = cJSON_GetObjectItemCaseSensitive(root, "_g151");
        if(item != NULL) {
            model._g151 = item->valueint;
        }
        // Receive _g152
        item = cJSON_GetObjectItemCaseSensitive(root, "_g152");
        if(item != NULL) {
            model._g152 = item->valueint;
        }
        // Receive _g154
        item = cJSON_GetObjectItemCaseSensitive(root, "_g154");
        if(item != NULL) {
            model._g154 = item->valueint;
        }
        // Receive _g156
        item = cJSON_GetObjectItemCaseSensitive(root, "_g156");
        if(item != NULL) {
            model._g156 = item->valueint;
        }
        // Receive _g157
        item = cJSON_GetObjectItemCaseSensitive(root, "_g157");
        if(item != NULL) {
            model._g157 = item->valueint;
        }
        // Receive _g157_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g157_e3");
        if(item != NULL) {
            model._g157_e3 = item->valueint;
        }
        // Receive _g159
        item = cJSON_GetObjectItemCaseSensitive(root, "_g159");
        if(item != NULL) {
            model._g159 = item->valueint;
        }
        // Receive _g160
        item = cJSON_GetObjectItemCaseSensitive(root, "_g160");
        if(item != NULL) {
            model._g160 = item->valueint;
        }
        // Receive _g161
        item = cJSON_GetObjectItemCaseSensitive(root, "_g161");
        if(item != NULL) {
            model._g161 = item->valueint;
        }
        // Receive _g162
        item = cJSON_GetObjectItemCaseSensitive(root, "_g162");
        if(item != NULL) {
            model._g162 = item->valueint;
        }
        // Receive _g163
        item = cJSON_GetObjectItemCaseSensitive(root, "_g163");
        if(item != NULL) {
            model._g163 = item->valueint;
        }
        // Receive _g163_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g163_e1");
        if(item != NULL) {
            model._g163_e1 = item->valueint;
        }
        // Receive _g167
        item = cJSON_GetObjectItemCaseSensitive(root, "_g167");
        if(item != NULL) {
            model._g167 = item->valueint;
        }
        // Receive _g167_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g167_e2");
        if(item != NULL) {
            model._g167_e2 = item->valueint;
        }
        // Receive _g17
        item = cJSON_GetObjectItemCaseSensitive(root, "_g17");
        if(item != NULL) {
            model._g17 = item->valueint;
        }
        // Receive _g170
        item = cJSON_GetObjectItemCaseSensitive(root, "_g170");
        if(item != NULL) {
            model._g170 = item->valueint;
        }
        // Receive _g171
        item = cJSON_GetObjectItemCaseSensitive(root, "_g171");
        if(item != NULL) {
            model._g171 = item->valueint;
        }
        // Receive _g172
        item = cJSON_GetObjectItemCaseSensitive(root, "_g172");
        if(item != NULL) {
            model._g172 = item->valueint;
        }
        // Receive _g172_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g172_e3");
        if(item != NULL) {
            model._g172_e3 = item->valueint;
        }
        // Receive _g174
        item = cJSON_GetObjectItemCaseSensitive(root, "_g174");
        if(item != NULL) {
            model._g174 = item->valueint;
        }
        // Receive _g175
        item = cJSON_GetObjectItemCaseSensitive(root, "_g175");
        if(item != NULL) {
            model._g175 = item->valueint;
        }
        // Receive _g176
        item = cJSON_GetObjectItemCaseSensitive(root, "_g176");
        if(item != NULL) {
            model._g176 = item->valueint;
        }
        // Receive _g18
        item = cJSON_GetObjectItemCaseSensitive(root, "_g18");
        if(item != NULL) {
            model._g18 = item->valueint;
        }
        // Receive _g184
        item = cJSON_GetObjectItemCaseSensitive(root, "_g184");
        if(item != NULL) {
            model._g184 = item->valueint;
        }
        // Receive _g192
        item = cJSON_GetObjectItemCaseSensitive(root, "_g192");
        if(item != NULL) {
            model._g192 = item->valueint;
        }
        // Receive _g21
        item = cJSON_GetObjectItemCaseSensitive(root, "_g21");
        if(item != NULL) {
            model._g21 = item->valueint;
        }
        // Receive _g22
        item = cJSON_GetObjectItemCaseSensitive(root, "_g22");
        if(item != NULL) {
            model._g22 = item->valueint;
        }
        // Receive _g22_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g22_e2");
        if(item != NULL) {
            model._g22_e2 = item->valueint;
        }
        // Receive _g23
        item = cJSON_GetObjectItemCaseSensitive(root, "_g23");
        if(item != NULL) {
            model._g23 = item->valueint;
        }
        // Receive _g24
        item = cJSON_GetObjectItemCaseSensitive(root, "_g24");
        if(item != NULL) {
            model._g24 = item->valueint;
        }
        // Receive _g25
        item = cJSON_GetObjectItemCaseSensitive(root, "_g25");
        if(item != NULL) {
            model._g25 = item->valueint;
        }
        // Receive _g26
        item = cJSON_GetObjectItemCaseSensitive(root, "_g26");
        if(item != NULL) {
            model._g26 = item->valueint;
        }
        // Receive _g27
        item = cJSON_GetObjectItemCaseSensitive(root, "_g27");
        if(item != NULL) {
            model._g27 = item->valueint;
        }
        // Receive _g28
        item = cJSON_GetObjectItemCaseSensitive(root, "_g28");
        if(item != NULL) {
            model._g28 = item->valueint;
        }
        // Receive _g29
        item = cJSON_GetObjectItemCaseSensitive(root, "_g29");
        if(item != NULL) {
            model._g29 = item->valueint;
        }
        // Receive _g3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g3");
        if(item != NULL) {
            model._g3 = item->valueint;
        }
        // Receive _g30
        item = cJSON_GetObjectItemCaseSensitive(root, "_g30");
        if(item != NULL) {
            model._g30 = item->valueint;
        }
        // Receive _g31
        item = cJSON_GetObjectItemCaseSensitive(root, "_g31");
        if(item != NULL) {
            model._g31 = item->valueint;
        }
        // Receive _g32
        item = cJSON_GetObjectItemCaseSensitive(root, "_g32");
        if(item != NULL) {
            model._g32 = item->valueint;
        }
        // Receive _g34
        item = cJSON_GetObjectItemCaseSensitive(root, "_g34");
        if(item != NULL) {
            model._g34 = item->valueint;
        }
        // Receive _g36
        item = cJSON_GetObjectItemCaseSensitive(root, "_g36");
        if(item != NULL) {
            model._g36 = item->valueint;
        }
        // Receive _g37
        item = cJSON_GetObjectItemCaseSensitive(root, "_g37");
        if(item != NULL) {
            model._g37 = item->valueint;
        }
        // Receive _g38
        item = cJSON_GetObjectItemCaseSensitive(root, "_g38");
        if(item != NULL) {
            model._g38 = item->valueint;
        }
        // Receive _g39
        item = cJSON_GetObjectItemCaseSensitive(root, "_g39");
        if(item != NULL) {
            model._g39 = item->valueint;
        }
        // Receive _g39_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g39_e1");
        if(item != NULL) {
            model._g39_e1 = item->valueint;
        }
        // Receive _g4
        item = cJSON_GetObjectItemCaseSensitive(root, "_g4");
        if(item != NULL) {
            model._g4 = item->valueint;
        }
        // Receive _g40
        item = cJSON_GetObjectItemCaseSensitive(root, "_g40");
        if(item != NULL) {
            model._g40 = item->valueint;
        }
        // Receive _g42
        item = cJSON_GetObjectItemCaseSensitive(root, "_g42");
        if(item != NULL) {
            model._g42 = item->valueint;
        }
        // Receive _g43
        item = cJSON_GetObjectItemCaseSensitive(root, "_g43");
        if(item != NULL) {
            model._g43 = item->valueint;
        }
        // Receive _g46
        item = cJSON_GetObjectItemCaseSensitive(root, "_g46");
        if(item != NULL) {
            model._g46 = item->valueint;
        }
        // Receive _g47
        item = cJSON_GetObjectItemCaseSensitive(root, "_g47");
        if(item != NULL) {
            model._g47 = item->valueint;
        }
        // Receive _g47_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g47_e2");
        if(item != NULL) {
            model._g47_e2 = item->valueint;
        }
        // Receive _g48
        item = cJSON_GetObjectItemCaseSensitive(root, "_g48");
        if(item != NULL) {
            model._g48 = item->valueint;
        }
        // Receive _g49
        item = cJSON_GetObjectItemCaseSensitive(root, "_g49");
        if(item != NULL) {
            model._g49 = item->valueint;
        }
        // Receive _g5
        item = cJSON_GetObjectItemCaseSensitive(root, "_g5");
        if(item != NULL) {
            model._g5 = item->valueint;
        }
        // Receive _g51
        item = cJSON_GetObjectItemCaseSensitive(root, "_g51");
        if(item != NULL) {
            model._g51 = item->valueint;
        }
        // Receive _g53
        item = cJSON_GetObjectItemCaseSensitive(root, "_g53");
        if(item != NULL) {
            model._g53 = item->valueint;
        }
        // Receive _g54
        item = cJSON_GetObjectItemCaseSensitive(root, "_g54");
        if(item != NULL) {
            model._g54 = item->valueint;
        }
        // Receive _g54_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g54_e1");
        if(item != NULL) {
            model._g54_e1 = item->valueint;
        }
        // Receive _g55
        item = cJSON_GetObjectItemCaseSensitive(root, "_g55");
        if(item != NULL) {
            model._g55 = item->valueint;
        }
        // Receive _g56
        item = cJSON_GetObjectItemCaseSensitive(root, "_g56");
        if(item != NULL) {
            model._g56 = item->valueint;
        }
        // Receive _g57
        item = cJSON_GetObjectItemCaseSensitive(root, "_g57");
        if(item != NULL) {
            model._g57 = item->valueint;
        }
        // Receive _g59
        item = cJSON_GetObjectItemCaseSensitive(root, "_g59");
        if(item != NULL) {
            model._g59 = item->valueint;
        }
        // Receive _g6
        item = cJSON_GetObjectItemCaseSensitive(root, "_g6");
        if(item != NULL) {
            model._g6 = item->valueint;
        }
        // Receive _g60
        item = cJSON_GetObjectItemCaseSensitive(root, "_g60");
        if(item != NULL) {
            model._g60 = item->valueint;
        }
        // Receive _g63
        item = cJSON_GetObjectItemCaseSensitive(root, "_g63");
        if(item != NULL) {
            model._g63 = item->valueint;
        }
        // Receive _g64
        item = cJSON_GetObjectItemCaseSensitive(root, "_g64");
        if(item != NULL) {
            model._g64 = item->valueint;
        }
        // Receive _g64_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g64_e2");
        if(item != NULL) {
            model._g64_e2 = item->valueint;
        }
        // Receive _g65
        item = cJSON_GetObjectItemCaseSensitive(root, "_g65");
        if(item != NULL) {
            model._g65 = item->valueint;
        }
        // Receive _g66
        item = cJSON_GetObjectItemCaseSensitive(root, "_g66");
        if(item != NULL) {
            model._g66 = item->valueint;
        }
        // Receive _g67
        item = cJSON_GetObjectItemCaseSensitive(root, "_g67");
        if(item != NULL) {
            model._g67 = item->valueint;
        }
        // Receive _g68
        item = cJSON_GetObjectItemCaseSensitive(root, "_g68");
        if(item != NULL) {
            model._g68 = item->valueint;
        }
        // Receive _g69
        item = cJSON_GetObjectItemCaseSensitive(root, "_g69");
        if(item != NULL) {
            model._g69 = item->valueint;
        }
        // Receive _g7
        item = cJSON_GetObjectItemCaseSensitive(root, "_g7");
        if(item != NULL) {
            model._g7 = item->valueint;
        }
        // Receive _g70
        item = cJSON_GetObjectItemCaseSensitive(root, "_g70");
        if(item != NULL) {
            model._g70 = item->valueint;
        }
        // Receive _g71
        item = cJSON_GetObjectItemCaseSensitive(root, "_g71");
        if(item != NULL) {
            model._g71 = item->valueint;
        }
        // Receive _g72
        item = cJSON_GetObjectItemCaseSensitive(root, "_g72");
        if(item != NULL) {
            model._g72 = item->valueint;
        }
        // Receive _g73
        item = cJSON_GetObjectItemCaseSensitive(root, "_g73");
        if(item != NULL) {
            model._g73 = item->valueint;
        }
        // Receive _g74
        item = cJSON_GetObjectItemCaseSensitive(root, "_g74");
        if(item != NULL) {
            model._g74 = item->valueint;
        }
        // Receive _g75
        item = cJSON_GetObjectItemCaseSensitive(root, "_g75");
        if(item != NULL) {
            model._g75 = item->valueint;
        }
        // Receive _g76
        item = cJSON_GetObjectItemCaseSensitive(root, "_g76");
        if(item != NULL) {
            model._g76 = item->valueint;
        }
        // Receive _g77
        item = cJSON_GetObjectItemCaseSensitive(root, "_g77");
        if(item != NULL) {
            model._g77 = item->valueint;
        }
        // Receive _g78
        item = cJSON_GetObjectItemCaseSensitive(root, "_g78");
        if(item != NULL) {
            model._g78 = item->valueint;
        }
        // Receive _g79
        item = cJSON_GetObjectItemCaseSensitive(root, "_g79");
        if(item != NULL) {
            model._g79 = item->valueint;
        }
        // Receive _g83
        item = cJSON_GetObjectItemCaseSensitive(root, "_g83");
        if(item != NULL) {
            model._g83 = item->valueint;
        }
        // Receive _g84
        item = cJSON_GetObjectItemCaseSensitive(root, "_g84");
        if(item != NULL) {
            model._g84 = item->valueint;
        }
        // Receive _g87
        item = cJSON_GetObjectItemCaseSensitive(root, "_g87");
        if(item != NULL) {
            model._g87 = item->valueint;
        }
        // Receive _g88
        item = cJSON_GetObjectItemCaseSensitive(root, "_g88");
        if(item != NULL) {
            model._g88 = item->valueint;
        }
        // Receive _g88_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g88_e1");
        if(item != NULL) {
            model._g88_e1 = item->valueint;
        }
        // Receive _g9
        item = cJSON_GetObjectItemCaseSensitive(root, "_g9");
        if(item != NULL) {
            model._g9 = item->valueint;
        }
        // Receive _g90
        item = cJSON_GetObjectItemCaseSensitive(root, "_g90");
        if(item != NULL) {
            model._g90 = item->valueint;
        }
        // Receive _g92
        item = cJSON_GetObjectItemCaseSensitive(root, "_g92");
        if(item != NULL) {
            model._g92 = item->valueint;
        }
        // Receive _g93
        item = cJSON_GetObjectItemCaseSensitive(root, "_g93");
        if(item != NULL) {
            model._g93 = item->valueint;
        }
        // Receive _g94
        item = cJSON_GetObjectItemCaseSensitive(root, "_g94");
        if(item != NULL) {
            model._g94 = item->valueint;
        }
        // Receive _g94_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g94_e2");
        if(item != NULL) {
            model._g94_e2 = item->valueint;
        }
        // Receive _g95
        item = cJSON_GetObjectItemCaseSensitive(root, "_g95");
        if(item != NULL) {
            model._g95 = item->valueint;
        }
        // Receive _g96
        item = cJSON_GetObjectItemCaseSensitive(root, "_g96");
        if(item != NULL) {
            model._g96 = item->valueint;
        }
        // Receive _g97
        item = cJSON_GetObjectItemCaseSensitive(root, "_g97");
        if(item != NULL) {
            model._g97 = item->valueint;
        }
        // Receive _g98
        item = cJSON_GetObjectItemCaseSensitive(root, "_g98");
        if(item != NULL) {
            model._g98 = item->valueint;
        }
        // Receive _g99
        item = cJSON_GetObjectItemCaseSensitive(root, "_g99");
        if(item != NULL) {
            model._g99 = item->valueint;
        }
        // Receive _pacemaker_local__Atrig
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local__Atrig");
        if(item != NULL) {
            model._pacemaker_local__Atrig = item->valueint;
        }
        // Receive _pacemaker_local__Atrig1
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local__Atrig1");
        if(item != NULL) {
            model._pacemaker_local__Atrig1 = item->valueint;
        }
        // Receive _pacemaker_local__Atrig2
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local__Atrig2");
        if(item != NULL) {
            model._pacemaker_local__Atrig2 = item->valueint;
        }
        // Receive _pacemaker_local__Atrig3
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local__Atrig3");
        if(item != NULL) {
            model._pacemaker_local__Atrig3 = item->valueint;
        }
        // Receive _pacemaker_local__Atrig4
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local__Atrig4");
        if(item != NULL) {
            model._pacemaker_local__Atrig4 = item->valueint;
        }
        // Receive _pacemaker_local__Atrig5
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local__Atrig5");
        if(item != NULL) {
            model._pacemaker_local__Atrig5 = item->valueint;
        }
        // Receive _pacemaker_local__Atrig6
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local__Atrig6");
        if(item != NULL) {
            model._pacemaker_local__Atrig6 = item->valueint;
        }
        // Receive _pacemaker_local__Atrig7
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local__Atrig7");
        if(item != NULL) {
            model._pacemaker_local__Atrig7 = item->valueint;
        }
        // Receive _pacemaker_local__Atrig8
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local__Atrig8");
        if(item != NULL) {
            model._pacemaker_local__Atrig8 = item->valueint;
        }
        // Receive _pacemaker_local__CFSterm
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local__CFSterm");
        if(item != NULL) {
            model._pacemaker_local__CFSterm = item->valueint;
        }
        // Receive _pacemaker_local__CFSterm1
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local__CFSterm1");
        if(item != NULL) {
            model._pacemaker_local__CFSterm1 = item->valueint;
        }
        // Receive _pacemaker_local_x
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local_x");
        if(item != NULL) {
            model._pacemaker_local_x = item->valuedouble;
        }
        // Receive _pacemaker_local_x1
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local_x1");
        if(item != NULL) {
            model._pacemaker_local_x1 = item->valuedouble;
        }
        // Receive _pg102
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg102");
        if(item != NULL) {
            model._pg102 = item->valueint;
        }
        // Receive _pg109
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg109");
        if(item != NULL) {
            model._pg109 = item->valueint;
        }
        // Receive _pg114
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg114");
        if(item != NULL) {
            model._pg114 = item->valueint;
        }
        // Receive _pg115
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg115");
        if(item != NULL) {
            model._pg115 = item->valueint;
        }
        // Receive _pg120
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg120");
        if(item != NULL) {
            model._pg120 = item->valueint;
        }
        // Receive _pg128
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg128");
        if(item != NULL) {
            model._pg128 = item->valueint;
        }
        // Receive _pg12_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg12_e1");
        if(item != NULL) {
            model._pg12_e1 = item->valueint;
        }
        // Receive _pg147
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg147");
        if(item != NULL) {
            model._pg147 = item->valueint;
        }
        // Receive _pg154
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg154");
        if(item != NULL) {
            model._pg154 = item->valueint;
        }
        // Receive _pg159
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg159");
        if(item != NULL) {
            model._pg159 = item->valueint;
        }
        // Receive _pg163_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg163_e1");
        if(item != NULL) {
            model._pg163_e1 = item->valueint;
        }
        // Receive _pg171
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg171");
        if(item != NULL) {
            model._pg171 = item->valueint;
        }
        // Receive _pg172_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg172_e3");
        if(item != NULL) {
            model._pg172_e3 = item->valueint;
        }
        // Receive _pg174
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg174");
        if(item != NULL) {
            model._pg174 = item->valueint;
        }
        // Receive _pg175
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg175");
        if(item != NULL) {
            model._pg175 = item->valueint;
        }
        // Receive _pg3
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg3");
        if(item != NULL) {
            model._pg3 = item->valueint;
        }
        // Receive _pg34
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg34");
        if(item != NULL) {
            model._pg34 = item->valueint;
        }
        // Receive _pg40
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg40");
        if(item != NULL) {
            model._pg40 = item->valueint;
        }
        // Receive _pg43
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg43");
        if(item != NULL) {
            model._pg43 = item->valueint;
        }
        // Receive _pg47_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg47_e2");
        if(item != NULL) {
            model._pg47_e2 = item->valueint;
        }
        // Receive _pg48
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg48");
        if(item != NULL) {
            model._pg48 = item->valueint;
        }
        // Receive _pg57
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg57");
        if(item != NULL) {
            model._pg57 = item->valueint;
        }
        // Receive _pg6
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg6");
        if(item != NULL) {
            model._pg6 = item->valueint;
        }
        // Receive _pg67
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg67");
        if(item != NULL) {
            model._pg67 = item->valueint;
        }
        // Receive _pg74
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg74");
        if(item != NULL) {
            model._pg74 = item->valueint;
        }
        // Receive _pg78
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg78");
        if(item != NULL) {
            model._pg78 = item->valueint;
        }
        // Receive _pg88
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg88");
        if(item != NULL) {
            model._pg88 = item->valueint;
        }
        // Receive _pg95
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg95");
        if(item != NULL) {
            model._pg95 = item->valueint;
        }
        // Receive _pg98
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg98");
        if(item != NULL) {
            model._pg98 = item->valueint;
        }
        // Receive _region0_null_x
        item = cJSON_GetObjectItemCaseSensitive(root, "_region0_null_x");
        if(item != NULL) {
            model._region0_null_x = item->valuedouble;
        }
        // Receive _taken_transitions
        item = cJSON_GetObjectItemCaseSensitive(root, "_taken_transitions");
        if(item != NULL) {
            for (int i0 = 0; i0 < cJSON_GetArraySize(item); i0++) {
                cJSON *item0 = cJSON_GetArrayItem(item, i0);
                model._taken_transitions[i0] = item0->valueint;
            }
        }
    }
  
    cJSON_Delete(root);
    free(buffer);
}

void sendVariables(int send_interface) {
    cJSON* root = cJSON_CreateObject();
    cJSON *array;
    
    // Send AS
    cJSON_AddItemToObject(root, "AS", cJSON_CreateBool(model.AS));
    // Send VS
    cJSON_AddItemToObject(root, "VS", cJSON_CreateBool(model.VS));
    // Send deltaT
    cJSON_AddItemToObject(root, "deltaT", cJSON_CreateNumber(model.deltaT));
    // Send AP
    cJSON_AddItemToObject(root, "AP", cJSON_CreateBool(model.AP));
    // Send VP
    cJSON_AddItemToObject(root, "VP", cJSON_CreateBool(model.VP));
    // Send sleepT
    cJSON_AddItemToObject(root, "sleepT", cJSON_CreateNumber(model.sleepT));
    // Send #ticktime
    cJSON_AddItemToObject(root, "#ticktime", cJSON_CreateNumber(_ticktime));
    // Send LRI_ACTIVE
    cJSON_AddItemToObject(root, "LRI_ACTIVE", cJSON_CreateBool(model.LRI_ACTIVE));
    // Send PVARP_ACTIVE
    cJSON_AddItemToObject(root, "PVARP_ACTIVE", cJSON_CreateBool(model.PVARP_ACTIVE));
    // Send URI_ACTIVE
    cJSON_AddItemToObject(root, "URI_ACTIVE", cJSON_CreateBool(model.URI_ACTIVE));
    // Send VRP_ACTIVE
    cJSON_AddItemToObject(root, "VRP_ACTIVE", cJSON_CreateBool(model.VRP_ACTIVE));
    // Send _GO
    cJSON_AddItemToObject(root, "_GO", cJSON_CreateBool(model._GO));
    // Send _TERM
    cJSON_AddItemToObject(root, "_TERM", cJSON_CreateBool(model._TERM));
    // Send _cg102
    cJSON_AddItemToObject(root, "_cg102", cJSON_CreateBool(model._cg102));
    // Send _cg106
    cJSON_AddItemToObject(root, "_cg106", cJSON_CreateBool(model._cg106));
    // Send _cg11
    cJSON_AddItemToObject(root, "_cg11", cJSON_CreateBool(model._cg11));
    // Send _cg114
    cJSON_AddItemToObject(root, "_cg114", cJSON_CreateBool(model._cg114));
    // Send _cg118
    cJSON_AddItemToObject(root, "_cg118", cJSON_CreateBool(model._cg118));
    // Send _cg120
    cJSON_AddItemToObject(root, "_cg120", cJSON_CreateBool(model._cg120));
    // Send _cg122
    cJSON_AddItemToObject(root, "_cg122", cJSON_CreateBool(model._cg122));
    // Send _cg123
    cJSON_AddItemToObject(root, "_cg123", cJSON_CreateBool(model._cg123));
    // Send _cg126
    cJSON_AddItemToObject(root, "_cg126", cJSON_CreateBool(model._cg126));
    // Send _cg127
    cJSON_AddItemToObject(root, "_cg127", cJSON_CreateBool(model._cg127));
    // Send _cg129
    cJSON_AddItemToObject(root, "_cg129", cJSON_CreateBool(model._cg129));
    // Send _cg13
    cJSON_AddItemToObject(root, "_cg13", cJSON_CreateBool(model._cg13));
    // Send _cg132
    cJSON_AddItemToObject(root, "_cg132", cJSON_CreateBool(model._cg132));
    // Send _cg133
    cJSON_AddItemToObject(root, "_cg133", cJSON_CreateBool(model._cg133));
    // Send _cg135
    cJSON_AddItemToObject(root, "_cg135", cJSON_CreateBool(model._cg135));
    // Send _cg138
    cJSON_AddItemToObject(root, "_cg138", cJSON_CreateBool(model._cg138));
    // Send _cg139
    cJSON_AddItemToObject(root, "_cg139", cJSON_CreateBool(model._cg139));
    // Send _cg14
    cJSON_AddItemToObject(root, "_cg14", cJSON_CreateBool(model._cg14));
    // Send _cg142
    cJSON_AddItemToObject(root, "_cg142", cJSON_CreateBool(model._cg142));
    // Send _cg147
    cJSON_AddItemToObject(root, "_cg147", cJSON_CreateBool(model._cg147));
    // Send _cg148
    cJSON_AddItemToObject(root, "_cg148", cJSON_CreateBool(model._cg148));
    // Send _cg15
    cJSON_AddItemToObject(root, "_cg15", cJSON_CreateBool(model._cg15));
    // Send _cg152
    cJSON_AddItemToObject(root, "_cg152", cJSON_CreateBool(model._cg152));
    // Send _cg156
    cJSON_AddItemToObject(root, "_cg156", cJSON_CreateBool(model._cg156));
    // Send _cg159
    cJSON_AddItemToObject(root, "_cg159", cJSON_CreateBool(model._cg159));
    // Send _cg161
    cJSON_AddItemToObject(root, "_cg161", cJSON_CreateBool(model._cg161));
    // Send _cg164
    cJSON_AddItemToObject(root, "_cg164", cJSON_CreateBool(model._cg164));
    // Send _cg166
    cJSON_AddItemToObject(root, "_cg166", cJSON_CreateBool(model._cg166));
    // Send _cg17
    cJSON_AddItemToObject(root, "_cg17", cJSON_CreateBool(model._cg17));
    // Send _cg170
    cJSON_AddItemToObject(root, "_cg170", cJSON_CreateBool(model._cg170));
    // Send _cg173
    cJSON_AddItemToObject(root, "_cg173", cJSON_CreateBool(model._cg173));
    // Send _cg174
    cJSON_AddItemToObject(root, "_cg174", cJSON_CreateBool(model._cg174));
    // Send _cg18
    cJSON_AddItemToObject(root, "_cg18", cJSON_CreateBool(model._cg18));
    // Send _cg21
    cJSON_AddItemToObject(root, "_cg21", cJSON_CreateBool(model._cg21));
    // Send _cg23
    cJSON_AddItemToObject(root, "_cg23", cJSON_CreateBool(model._cg23));
    // Send _cg25
    cJSON_AddItemToObject(root, "_cg25", cJSON_CreateBool(model._cg25));
    // Send _cg27
    cJSON_AddItemToObject(root, "_cg27", cJSON_CreateBool(model._cg27));
    // Send _cg29
    cJSON_AddItemToObject(root, "_cg29", cJSON_CreateBool(model._cg29));
    // Send _cg30
    cJSON_AddItemToObject(root, "_cg30", cJSON_CreateBool(model._cg30));
    // Send _cg33
    cJSON_AddItemToObject(root, "_cg33", cJSON_CreateBool(model._cg33));
    // Send _cg34
    cJSON_AddItemToObject(root, "_cg34", cJSON_CreateBool(model._cg34));
    // Send _cg37
    cJSON_AddItemToObject(root, "_cg37", cJSON_CreateBool(model._cg37));
    // Send _cg38
    cJSON_AddItemToObject(root, "_cg38", cJSON_CreateBool(model._cg38));
    // Send _cg4
    cJSON_AddItemToObject(root, "_cg4", cJSON_CreateBool(model._cg4));
    // Send _cg40
    cJSON_AddItemToObject(root, "_cg40", cJSON_CreateBool(model._cg40));
    // Send _cg43
    cJSON_AddItemToObject(root, "_cg43", cJSON_CreateBool(model._cg43));
    // Send _cg46
    cJSON_AddItemToObject(root, "_cg46", cJSON_CreateBool(model._cg46));
    // Send _cg50
    cJSON_AddItemToObject(root, "_cg50", cJSON_CreateBool(model._cg50));
    // Send _cg51
    cJSON_AddItemToObject(root, "_cg51", cJSON_CreateBool(model._cg51));
    // Send _cg53
    cJSON_AddItemToObject(root, "_cg53", cJSON_CreateBool(model._cg53));
    // Send _cg55
    cJSON_AddItemToObject(root, "_cg55", cJSON_CreateBool(model._cg55));
    // Send _cg56
    cJSON_AddItemToObject(root, "_cg56", cJSON_CreateBool(model._cg56));
    // Send _cg57
    cJSON_AddItemToObject(root, "_cg57", cJSON_CreateBool(model._cg57));
    // Send _cg59
    cJSON_AddItemToObject(root, "_cg59", cJSON_CreateBool(model._cg59));
    // Send _cg60
    cJSON_AddItemToObject(root, "_cg60", cJSON_CreateBool(model._cg60));
    // Send _cg63
    cJSON_AddItemToObject(root, "_cg63", cJSON_CreateBool(model._cg63));
    // Send _cg65
    cJSON_AddItemToObject(root, "_cg65", cJSON_CreateBool(model._cg65));
    // Send _cg67
    cJSON_AddItemToObject(root, "_cg67", cJSON_CreateBool(model._cg67));
    // Send _cg68
    cJSON_AddItemToObject(root, "_cg68", cJSON_CreateBool(model._cg68));
    // Send _cg73
    cJSON_AddItemToObject(root, "_cg73", cJSON_CreateBool(model._cg73));
    // Send _cg75
    cJSON_AddItemToObject(root, "_cg75", cJSON_CreateBool(model._cg75));
    // Send _cg78
    cJSON_AddItemToObject(root, "_cg78", cJSON_CreateBool(model._cg78));
    // Send _cg8
    cJSON_AddItemToObject(root, "_cg8", cJSON_CreateBool(model._cg8));
    // Send _cg83
    cJSON_AddItemToObject(root, "_cg83", cJSON_CreateBool(model._cg83));
    // Send _cg87
    cJSON_AddItemToObject(root, "_cg87", cJSON_CreateBool(model._cg87));
    // Send _cg9
    cJSON_AddItemToObject(root, "_cg9", cJSON_CreateBool(model._cg9));
    // Send _cg92
    cJSON_AddItemToObject(root, "_cg92", cJSON_CreateBool(model._cg92));
    // Send _cg93
    cJSON_AddItemToObject(root, "_cg93", cJSON_CreateBool(model._cg93));
    // Send _cg97
    cJSON_AddItemToObject(root, "_cg97", cJSON_CreateBool(model._cg97));
    // Send _g102
    cJSON_AddItemToObject(root, "_g102", cJSON_CreateBool(model._g102));
    // Send _g103
    cJSON_AddItemToObject(root, "_g103", cJSON_CreateBool(model._g103));
    // Send _g103_e3
    cJSON_AddItemToObject(root, "_g103_e3", cJSON_CreateBool(model._g103_e3));
    // Send _g104
    cJSON_AddItemToObject(root, "_g104", cJSON_CreateBool(model._g104));
    // Send _g104_e1
    cJSON_AddItemToObject(root, "_g104_e1", cJSON_CreateBool(model._g104_e1));
    // Send _g106
    cJSON_AddItemToObject(root, "_g106", cJSON_CreateBool(model._g106));
    // Send _g107
    cJSON_AddItemToObject(root, "_g107", cJSON_CreateBool(model._g107));
    // Send _g107_e2
    cJSON_AddItemToObject(root, "_g107_e2", cJSON_CreateBool(model._g107_e2));
    // Send _g109
    cJSON_AddItemToObject(root, "_g109", cJSON_CreateBool(model._g109));
    // Send _g11
    cJSON_AddItemToObject(root, "_g11", cJSON_CreateBool(model._g11));
    // Send _g110
    cJSON_AddItemToObject(root, "_g110", cJSON_CreateBool(model._g110));
    // Send _g114
    cJSON_AddItemToObject(root, "_g114", cJSON_CreateBool(model._g114));
    // Send _g115
    cJSON_AddItemToObject(root, "_g115", cJSON_CreateBool(model._g115));
    // Send _g12
    cJSON_AddItemToObject(root, "_g12", cJSON_CreateBool(model._g12));
    // Send _g120
    cJSON_AddItemToObject(root, "_g120", cJSON_CreateBool(model._g120));
    // Send _g121
    cJSON_AddItemToObject(root, "_g121", cJSON_CreateBool(model._g121));
    // Send _g121_e1
    cJSON_AddItemToObject(root, "_g121_e1", cJSON_CreateBool(model._g121_e1));
    // Send _g125
    cJSON_AddItemToObject(root, "_g125", cJSON_CreateBool(model._g125));
    // Send _g126
    cJSON_AddItemToObject(root, "_g126", cJSON_CreateBool(model._g126));
    // Send _g128
    cJSON_AddItemToObject(root, "_g128", cJSON_CreateBool(model._g128));
    // Send _g128_e2
    cJSON_AddItemToObject(root, "_g128_e2", cJSON_CreateBool(model._g128_e2));
    // Send _g12_e1
    cJSON_AddItemToObject(root, "_g12_e1", cJSON_CreateBool(model._g12_e1));
    // Send _g13
    cJSON_AddItemToObject(root, "_g13", cJSON_CreateBool(model._g13));
    // Send _g131
    cJSON_AddItemToObject(root, "_g131", cJSON_CreateBool(model._g131));
    // Send _g135
    cJSON_AddItemToObject(root, "_g135", cJSON_CreateBool(model._g135));
    // Send _g136
    cJSON_AddItemToObject(root, "_g136", cJSON_CreateBool(model._g136));
    // Send _g137
    cJSON_AddItemToObject(root, "_g137", cJSON_CreateBool(model._g137));
    // Send _g137_e3
    cJSON_AddItemToObject(root, "_g137_e3", cJSON_CreateBool(model._g137_e3));
    // Send _g139
    cJSON_AddItemToObject(root, "_g139", cJSON_CreateBool(model._g139));
    // Send _g14
    cJSON_AddItemToObject(root, "_g14", cJSON_CreateBool(model._g14));
    // Send _g140
    cJSON_AddItemToObject(root, "_g140", cJSON_CreateBool(model._g140));
    // Send _g142
    cJSON_AddItemToObject(root, "_g142", cJSON_CreateBool(model._g142));
    // Send _g143
    cJSON_AddItemToObject(root, "_g143", cJSON_CreateBool(model._g143));
    // Send _g143_e1
    cJSON_AddItemToObject(root, "_g143_e1", cJSON_CreateBool(model._g143_e1));
    // Send _g145
    cJSON_AddItemToObject(root, "_g145", cJSON_CreateBool(model._g145));
    // Send _g147
    cJSON_AddItemToObject(root, "_g147", cJSON_CreateBool(model._g147));
    // Send _g148
    cJSON_AddItemToObject(root, "_g148", cJSON_CreateBool(model._g148));
    // Send _g149
    cJSON_AddItemToObject(root, "_g149", cJSON_CreateBool(model._g149));
    // Send _g149_e2
    cJSON_AddItemToObject(root, "_g149_e2", cJSON_CreateBool(model._g149_e2));
    // Send _g15
    cJSON_AddItemToObject(root, "_g15", cJSON_CreateBool(model._g15));
    // Send _g151
    cJSON_AddItemToObject(root, "_g151", cJSON_CreateBool(model._g151));
    // Send _g152
    cJSON_AddItemToObject(root, "_g152", cJSON_CreateBool(model._g152));
    // Send _g154
    cJSON_AddItemToObject(root, "_g154", cJSON_CreateBool(model._g154));
    // Send _g156
    cJSON_AddItemToObject(root, "_g156", cJSON_CreateBool(model._g156));
    // Send _g157
    cJSON_AddItemToObject(root, "_g157", cJSON_CreateBool(model._g157));
    // Send _g157_e3
    cJSON_AddItemToObject(root, "_g157_e3", cJSON_CreateBool(model._g157_e3));
    // Send _g159
    cJSON_AddItemToObject(root, "_g159", cJSON_CreateBool(model._g159));
    // Send _g160
    cJSON_AddItemToObject(root, "_g160", cJSON_CreateBool(model._g160));
    // Send _g161
    cJSON_AddItemToObject(root, "_g161", cJSON_CreateBool(model._g161));
    // Send _g162
    cJSON_AddItemToObject(root, "_g162", cJSON_CreateBool(model._g162));
    // Send _g163
    cJSON_AddItemToObject(root, "_g163", cJSON_CreateBool(model._g163));
    // Send _g163_e1
    cJSON_AddItemToObject(root, "_g163_e1", cJSON_CreateBool(model._g163_e1));
    // Send _g167
    cJSON_AddItemToObject(root, "_g167", cJSON_CreateBool(model._g167));
    // Send _g167_e2
    cJSON_AddItemToObject(root, "_g167_e2", cJSON_CreateBool(model._g167_e2));
    // Send _g17
    cJSON_AddItemToObject(root, "_g17", cJSON_CreateBool(model._g17));
    // Send _g170
    cJSON_AddItemToObject(root, "_g170", cJSON_CreateBool(model._g170));
    // Send _g171
    cJSON_AddItemToObject(root, "_g171", cJSON_CreateBool(model._g171));
    // Send _g172
    cJSON_AddItemToObject(root, "_g172", cJSON_CreateBool(model._g172));
    // Send _g172_e3
    cJSON_AddItemToObject(root, "_g172_e3", cJSON_CreateBool(model._g172_e3));
    // Send _g174
    cJSON_AddItemToObject(root, "_g174", cJSON_CreateBool(model._g174));
    // Send _g175
    cJSON_AddItemToObject(root, "_g175", cJSON_CreateBool(model._g175));
    // Send _g176
    cJSON_AddItemToObject(root, "_g176", cJSON_CreateBool(model._g176));
    // Send _g18
    cJSON_AddItemToObject(root, "_g18", cJSON_CreateBool(model._g18));
    // Send _g184
    cJSON_AddItemToObject(root, "_g184", cJSON_CreateBool(model._g184));
    // Send _g192
    cJSON_AddItemToObject(root, "_g192", cJSON_CreateBool(model._g192));
    // Send _g21
    cJSON_AddItemToObject(root, "_g21", cJSON_CreateBool(model._g21));
    // Send _g22
    cJSON_AddItemToObject(root, "_g22", cJSON_CreateBool(model._g22));
    // Send _g22_e2
    cJSON_AddItemToObject(root, "_g22_e2", cJSON_CreateBool(model._g22_e2));
    // Send _g23
    cJSON_AddItemToObject(root, "_g23", cJSON_CreateBool(model._g23));
    // Send _g24
    cJSON_AddItemToObject(root, "_g24", cJSON_CreateBool(model._g24));
    // Send _g25
    cJSON_AddItemToObject(root, "_g25", cJSON_CreateBool(model._g25));
    // Send _g26
    cJSON_AddItemToObject(root, "_g26", cJSON_CreateBool(model._g26));
    // Send _g27
    cJSON_AddItemToObject(root, "_g27", cJSON_CreateBool(model._g27));
    // Send _g28
    cJSON_AddItemToObject(root, "_g28", cJSON_CreateBool(model._g28));
    // Send _g29
    cJSON_AddItemToObject(root, "_g29", cJSON_CreateBool(model._g29));
    // Send _g3
    cJSON_AddItemToObject(root, "_g3", cJSON_CreateBool(model._g3));
    // Send _g30
    cJSON_AddItemToObject(root, "_g30", cJSON_CreateBool(model._g30));
    // Send _g31
    cJSON_AddItemToObject(root, "_g31", cJSON_CreateBool(model._g31));
    // Send _g32
    cJSON_AddItemToObject(root, "_g32", cJSON_CreateBool(model._g32));
    // Send _g34
    cJSON_AddItemToObject(root, "_g34", cJSON_CreateBool(model._g34));
    // Send _g36
    cJSON_AddItemToObject(root, "_g36", cJSON_CreateBool(model._g36));
    // Send _g37
    cJSON_AddItemToObject(root, "_g37", cJSON_CreateBool(model._g37));
    // Send _g38
    cJSON_AddItemToObject(root, "_g38", cJSON_CreateBool(model._g38));
    // Send _g39
    cJSON_AddItemToObject(root, "_g39", cJSON_CreateBool(model._g39));
    // Send _g39_e1
    cJSON_AddItemToObject(root, "_g39_e1", cJSON_CreateBool(model._g39_e1));
    // Send _g4
    cJSON_AddItemToObject(root, "_g4", cJSON_CreateBool(model._g4));
    // Send _g40
    cJSON_AddItemToObject(root, "_g40", cJSON_CreateBool(model._g40));
    // Send _g42
    cJSON_AddItemToObject(root, "_g42", cJSON_CreateBool(model._g42));
    // Send _g43
    cJSON_AddItemToObject(root, "_g43", cJSON_CreateBool(model._g43));
    // Send _g46
    cJSON_AddItemToObject(root, "_g46", cJSON_CreateBool(model._g46));
    // Send _g47
    cJSON_AddItemToObject(root, "_g47", cJSON_CreateBool(model._g47));
    // Send _g47_e2
    cJSON_AddItemToObject(root, "_g47_e2", cJSON_CreateBool(model._g47_e2));
    // Send _g48
    cJSON_AddItemToObject(root, "_g48", cJSON_CreateBool(model._g48));
    // Send _g49
    cJSON_AddItemToObject(root, "_g49", cJSON_CreateBool(model._g49));
    // Send _g5
    cJSON_AddItemToObject(root, "_g5", cJSON_CreateBool(model._g5));
    // Send _g51
    cJSON_AddItemToObject(root, "_g51", cJSON_CreateBool(model._g51));
    // Send _g53
    cJSON_AddItemToObject(root, "_g53", cJSON_CreateBool(model._g53));
    // Send _g54
    cJSON_AddItemToObject(root, "_g54", cJSON_CreateBool(model._g54));
    // Send _g54_e1
    cJSON_AddItemToObject(root, "_g54_e1", cJSON_CreateBool(model._g54_e1));
    // Send _g55
    cJSON_AddItemToObject(root, "_g55", cJSON_CreateBool(model._g55));
    // Send _g56
    cJSON_AddItemToObject(root, "_g56", cJSON_CreateBool(model._g56));
    // Send _g57
    cJSON_AddItemToObject(root, "_g57", cJSON_CreateBool(model._g57));
    // Send _g59
    cJSON_AddItemToObject(root, "_g59", cJSON_CreateBool(model._g59));
    // Send _g6
    cJSON_AddItemToObject(root, "_g6", cJSON_CreateBool(model._g6));
    // Send _g60
    cJSON_AddItemToObject(root, "_g60", cJSON_CreateBool(model._g60));
    // Send _g63
    cJSON_AddItemToObject(root, "_g63", cJSON_CreateBool(model._g63));
    // Send _g64
    cJSON_AddItemToObject(root, "_g64", cJSON_CreateBool(model._g64));
    // Send _g64_e2
    cJSON_AddItemToObject(root, "_g64_e2", cJSON_CreateBool(model._g64_e2));
    // Send _g65
    cJSON_AddItemToObject(root, "_g65", cJSON_CreateBool(model._g65));
    // Send _g66
    cJSON_AddItemToObject(root, "_g66", cJSON_CreateBool(model._g66));
    // Send _g67
    cJSON_AddItemToObject(root, "_g67", cJSON_CreateBool(model._g67));
    // Send _g68
    cJSON_AddItemToObject(root, "_g68", cJSON_CreateBool(model._g68));
    // Send _g69
    cJSON_AddItemToObject(root, "_g69", cJSON_CreateBool(model._g69));
    // Send _g7
    cJSON_AddItemToObject(root, "_g7", cJSON_CreateBool(model._g7));
    // Send _g70
    cJSON_AddItemToObject(root, "_g70", cJSON_CreateBool(model._g70));
    // Send _g71
    cJSON_AddItemToObject(root, "_g71", cJSON_CreateBool(model._g71));
    // Send _g72
    cJSON_AddItemToObject(root, "_g72", cJSON_CreateBool(model._g72));
    // Send _g73
    cJSON_AddItemToObject(root, "_g73", cJSON_CreateBool(model._g73));
    // Send _g74
    cJSON_AddItemToObject(root, "_g74", cJSON_CreateBool(model._g74));
    // Send _g75
    cJSON_AddItemToObject(root, "_g75", cJSON_CreateBool(model._g75));
    // Send _g76
    cJSON_AddItemToObject(root, "_g76", cJSON_CreateBool(model._g76));
    // Send _g77
    cJSON_AddItemToObject(root, "_g77", cJSON_CreateBool(model._g77));
    // Send _g78
    cJSON_AddItemToObject(root, "_g78", cJSON_CreateBool(model._g78));
    // Send _g79
    cJSON_AddItemToObject(root, "_g79", cJSON_CreateBool(model._g79));
    // Send _g83
    cJSON_AddItemToObject(root, "_g83", cJSON_CreateBool(model._g83));
    // Send _g84
    cJSON_AddItemToObject(root, "_g84", cJSON_CreateBool(model._g84));
    // Send _g87
    cJSON_AddItemToObject(root, "_g87", cJSON_CreateBool(model._g87));
    // Send _g88
    cJSON_AddItemToObject(root, "_g88", cJSON_CreateBool(model._g88));
    // Send _g88_e1
    cJSON_AddItemToObject(root, "_g88_e1", cJSON_CreateBool(model._g88_e1));
    // Send _g9
    cJSON_AddItemToObject(root, "_g9", cJSON_CreateBool(model._g9));
    // Send _g90
    cJSON_AddItemToObject(root, "_g90", cJSON_CreateBool(model._g90));
    // Send _g92
    cJSON_AddItemToObject(root, "_g92", cJSON_CreateBool(model._g92));
    // Send _g93
    cJSON_AddItemToObject(root, "_g93", cJSON_CreateBool(model._g93));
    // Send _g94
    cJSON_AddItemToObject(root, "_g94", cJSON_CreateBool(model._g94));
    // Send _g94_e2
    cJSON_AddItemToObject(root, "_g94_e2", cJSON_CreateBool(model._g94_e2));
    // Send _g95
    cJSON_AddItemToObject(root, "_g95", cJSON_CreateBool(model._g95));
    // Send _g96
    cJSON_AddItemToObject(root, "_g96", cJSON_CreateBool(model._g96));
    // Send _g97
    cJSON_AddItemToObject(root, "_g97", cJSON_CreateBool(model._g97));
    // Send _g98
    cJSON_AddItemToObject(root, "_g98", cJSON_CreateBool(model._g98));
    // Send _g99
    cJSON_AddItemToObject(root, "_g99", cJSON_CreateBool(model._g99));
    // Send _pacemaker_local__Atrig
    cJSON_AddItemToObject(root, "_pacemaker_local__Atrig", cJSON_CreateBool(model._pacemaker_local__Atrig));
    // Send _pacemaker_local__Atrig1
    cJSON_AddItemToObject(root, "_pacemaker_local__Atrig1", cJSON_CreateBool(model._pacemaker_local__Atrig1));
    // Send _pacemaker_local__Atrig2
    cJSON_AddItemToObject(root, "_pacemaker_local__Atrig2", cJSON_CreateBool(model._pacemaker_local__Atrig2));
    // Send _pacemaker_local__Atrig3
    cJSON_AddItemToObject(root, "_pacemaker_local__Atrig3", cJSON_CreateBool(model._pacemaker_local__Atrig3));
    // Send _pacemaker_local__Atrig4
    cJSON_AddItemToObject(root, "_pacemaker_local__Atrig4", cJSON_CreateBool(model._pacemaker_local__Atrig4));
    // Send _pacemaker_local__Atrig5
    cJSON_AddItemToObject(root, "_pacemaker_local__Atrig5", cJSON_CreateBool(model._pacemaker_local__Atrig5));
    // Send _pacemaker_local__Atrig6
    cJSON_AddItemToObject(root, "_pacemaker_local__Atrig6", cJSON_CreateBool(model._pacemaker_local__Atrig6));
    // Send _pacemaker_local__Atrig7
    cJSON_AddItemToObject(root, "_pacemaker_local__Atrig7", cJSON_CreateBool(model._pacemaker_local__Atrig7));
    // Send _pacemaker_local__Atrig8
    cJSON_AddItemToObject(root, "_pacemaker_local__Atrig8", cJSON_CreateBool(model._pacemaker_local__Atrig8));
    // Send _pacemaker_local__CFSterm
    cJSON_AddItemToObject(root, "_pacemaker_local__CFSterm", cJSON_CreateBool(model._pacemaker_local__CFSterm));
    // Send _pacemaker_local__CFSterm1
    cJSON_AddItemToObject(root, "_pacemaker_local__CFSterm1", cJSON_CreateBool(model._pacemaker_local__CFSterm1));
    // Send _pacemaker_local_x
    cJSON_AddItemToObject(root, "_pacemaker_local_x", cJSON_CreateNumber(model._pacemaker_local_x));
    // Send _pacemaker_local_x1
    cJSON_AddItemToObject(root, "_pacemaker_local_x1", cJSON_CreateNumber(model._pacemaker_local_x1));
    // Send _pg102
    cJSON_AddItemToObject(root, "_pg102", cJSON_CreateBool(model._pg102));
    // Send _pg109
    cJSON_AddItemToObject(root, "_pg109", cJSON_CreateBool(model._pg109));
    // Send _pg114
    cJSON_AddItemToObject(root, "_pg114", cJSON_CreateBool(model._pg114));
    // Send _pg115
    cJSON_AddItemToObject(root, "_pg115", cJSON_CreateBool(model._pg115));
    // Send _pg120
    cJSON_AddItemToObject(root, "_pg120", cJSON_CreateBool(model._pg120));
    // Send _pg128
    cJSON_AddItemToObject(root, "_pg128", cJSON_CreateBool(model._pg128));
    // Send _pg12_e1
    cJSON_AddItemToObject(root, "_pg12_e1", cJSON_CreateBool(model._pg12_e1));
    // Send _pg147
    cJSON_AddItemToObject(root, "_pg147", cJSON_CreateBool(model._pg147));
    // Send _pg154
    cJSON_AddItemToObject(root, "_pg154", cJSON_CreateBool(model._pg154));
    // Send _pg159
    cJSON_AddItemToObject(root, "_pg159", cJSON_CreateBool(model._pg159));
    // Send _pg163_e1
    cJSON_AddItemToObject(root, "_pg163_e1", cJSON_CreateBool(model._pg163_e1));
    // Send _pg171
    cJSON_AddItemToObject(root, "_pg171", cJSON_CreateBool(model._pg171));
    // Send _pg172_e3
    cJSON_AddItemToObject(root, "_pg172_e3", cJSON_CreateBool(model._pg172_e3));
    // Send _pg174
    cJSON_AddItemToObject(root, "_pg174", cJSON_CreateBool(model._pg174));
    // Send _pg175
    cJSON_AddItemToObject(root, "_pg175", cJSON_CreateBool(model._pg175));
    // Send _pg3
    cJSON_AddItemToObject(root, "_pg3", cJSON_CreateBool(model._pg3));
    // Send _pg34
    cJSON_AddItemToObject(root, "_pg34", cJSON_CreateBool(model._pg34));
    // Send _pg40
    cJSON_AddItemToObject(root, "_pg40", cJSON_CreateBool(model._pg40));
    // Send _pg43
    cJSON_AddItemToObject(root, "_pg43", cJSON_CreateBool(model._pg43));
    // Send _pg47_e2
    cJSON_AddItemToObject(root, "_pg47_e2", cJSON_CreateBool(model._pg47_e2));
    // Send _pg48
    cJSON_AddItemToObject(root, "_pg48", cJSON_CreateBool(model._pg48));
    // Send _pg57
    cJSON_AddItemToObject(root, "_pg57", cJSON_CreateBool(model._pg57));
    // Send _pg6
    cJSON_AddItemToObject(root, "_pg6", cJSON_CreateBool(model._pg6));
    // Send _pg67
    cJSON_AddItemToObject(root, "_pg67", cJSON_CreateBool(model._pg67));
    // Send _pg74
    cJSON_AddItemToObject(root, "_pg74", cJSON_CreateBool(model._pg74));
    // Send _pg78
    cJSON_AddItemToObject(root, "_pg78", cJSON_CreateBool(model._pg78));
    // Send _pg88
    cJSON_AddItemToObject(root, "_pg88", cJSON_CreateBool(model._pg88));
    // Send _pg95
    cJSON_AddItemToObject(root, "_pg95", cJSON_CreateBool(model._pg95));
    // Send _pg98
    cJSON_AddItemToObject(root, "_pg98", cJSON_CreateBool(model._pg98));
    // Send _region0_null_x
    cJSON_AddItemToObject(root, "_region0_null_x", cJSON_CreateNumber(model._region0_null_x));
    // Send _taken_transitions
    array = cJSON_CreateArray();
    for (int i0 = 0; i0 < 20; i0++) {
        cJSON *item0 = cJSON_CreateNumber(model._taken_transitions[i0]);
        cJSON_AddItemToArray(array, item0);
    }
    cJSON_AddItemToObject(root, "_taken_transitions", array);
    
    if (send_interface) {
        cJSON *interface = cJSON_CreateObject();
        cJSON *info, *properties;
        
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("input"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "AS", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("input"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "VS", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("input"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("dynamic-ticks"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "deltaT", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("output"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "AP", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("output"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "VP", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("output"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("dynamic-ticks"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "sleepT", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("ticktime"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "#ticktime", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "LRI_ACTIVE", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "PVARP_ACTIVE", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "URI_ACTIVE", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "VRP_ACTIVE", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("goGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_GO", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("term"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TERM", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg102", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg106", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg11", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg114", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg118", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg120", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg122", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg123", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg126", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg127", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg129", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg13", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg132", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg133", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg135", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg138", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg139", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg14", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg142", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg147", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg148", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg15", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg152", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg156", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg159", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg161", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg164", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg166", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg17", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg170", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg173", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg174", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg18", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg21", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg23", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg25", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg27", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg29", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg30", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg33", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg34", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg37", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg38", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg4", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg40", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg43", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg46", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg50", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg51", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg53", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg55", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg56", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg57", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg59", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg60", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg63", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg65", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg67", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg68", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg73", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg75", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg78", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg8", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg83", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg87", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg9", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg92", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg93", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg97", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g102", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g103", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g103_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g104", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g104_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g106", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g107", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g107_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g109", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g11", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g110", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g114", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g115", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g12", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g120", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g121", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g121_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g125", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g126", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g128", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g128_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g12_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g13", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g131", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g135", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g136", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g137", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g137_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g139", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g14", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g140", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g142", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g143", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g143_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g145", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g147", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g148", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g149", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g149_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g15", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g151", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g152", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g154", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g156", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g157", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g157_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g159", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g160", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g161", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g162", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g163", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g163_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g167", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g167_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g17", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g170", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g171", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g172", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g172_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g174", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g175", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g176", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g18", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g184", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g192", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g21", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g22", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g22_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g23", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g24", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g25", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g26", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g27", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g28", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g29", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g30", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g31", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g32", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g34", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g36", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g37", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g38", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g39", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g39_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g4", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g40", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g42", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g43", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g46", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g47", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g47_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g48", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g49", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g5", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g51", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g53", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g54", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g54_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g55", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g56", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g57", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g59", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g6", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g60", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g63", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g64", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g64_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g65", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g66", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g67", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g68", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g69", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g7", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g70", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g71", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g72", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g73", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g74", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g75", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g76", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g77", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g78", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g79", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g83", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g84", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g87", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g88", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g88_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g9", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g90", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g92", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g93", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g94", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g94_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g95", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g96", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g97", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g98", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g99", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local__Atrig", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local__Atrig1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local__Atrig2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local__Atrig3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local__Atrig4", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local__Atrig5", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local__Atrig6", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local__Atrig7", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local__Atrig8", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local__CFSterm", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local__CFSterm1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local_x", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local_x1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg102", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg109", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg114", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg115", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg120", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg128", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg12_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg147", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg154", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg159", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg163_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg171", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg172_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg174", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg175", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg34", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg40", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg43", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg47_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg48", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg57", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg6", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg67", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg74", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg78", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg88", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg95", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg98", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_region0_null_x", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("simulation"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("int"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_taken_transitions", info);
        
        cJSON_AddItemToObject(root, "#interface", interface);
    }

    // Get JSON object as string
    char* outString = cJSON_Print(root);
    cJSON_Minify(outString);
    // Flush to stdout
    printf("%s\n", outString);
    fflush(stdout);

    cJSON_Delete(root);
    free(outString);
}

int main(int argc, const char* argv[]) {
    

    // Initialize 
    reset(&model);
    
    sendVariables(1);

    
    // Tick loop
    while (1) {
        
    
        // Read inputs
        receiveVariables();

        
        resetticktime();

  
        // Reaction of model
        tick(&model);
        
        _ticktime = getticktime();

         
        // Send outputs
        sendVariables(0);

        
        
    }
    
}
