

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
        // Receive _cg101
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg101");
        if(item != NULL) {
            model._cg101 = item->valueint;
        }
        // Receive _cg109
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg109");
        if(item != NULL) {
            model._cg109 = item->valueint;
        }
        // Receive _cg11
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg11");
        if(item != NULL) {
            model._cg11 = item->valueint;
        }
        // Receive _cg113
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg113");
        if(item != NULL) {
            model._cg113 = item->valueint;
        }
        // Receive _cg115
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg115");
        if(item != NULL) {
            model._cg115 = item->valueint;
        }
        // Receive _cg117
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg117");
        if(item != NULL) {
            model._cg117 = item->valueint;
        }
        // Receive _cg118
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg118");
        if(item != NULL) {
            model._cg118 = item->valueint;
        }
        // Receive _cg119
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg119");
        if(item != NULL) {
            model._cg119 = item->valueint;
        }
        // Receive _cg12
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg12");
        if(item != NULL) {
            model._cg12 = item->valueint;
        }
        // Receive _cg121
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg121");
        if(item != NULL) {
            model._cg121 = item->valueint;
        }
        // Receive _cg123
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg123");
        if(item != NULL) {
            model._cg123 = item->valueint;
        }
        // Receive _cg124
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg124");
        if(item != NULL) {
            model._cg124 = item->valueint;
        }
        // Receive _cg125
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg125");
        if(item != NULL) {
            model._cg125 = item->valueint;
        }
        // Receive _cg127
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg127");
        if(item != NULL) {
            model._cg127 = item->valueint;
        }
        // Receive _cg128
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg128");
        if(item != NULL) {
            model._cg128 = item->valueint;
        }
        // Receive _cg13
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg13");
        if(item != NULL) {
            model._cg13 = item->valueint;
        }
        // Receive _cg131
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg131");
        if(item != NULL) {
            model._cg131 = item->valueint;
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
        // Receive _cg140
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg140");
        if(item != NULL) {
            model._cg140 = item->valueint;
        }
        // Receive _cg142
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg142");
        if(item != NULL) {
            model._cg142 = item->valueint;
        }
        // Receive _cg145
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg145");
        if(item != NULL) {
            model._cg145 = item->valueint;
        }
        // Receive _cg148
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg148");
        if(item != NULL) {
            model._cg148 = item->valueint;
        }
        // Receive _cg149
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg149");
        if(item != NULL) {
            model._cg149 = item->valueint;
        }
        // Receive _cg15
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg15");
        if(item != NULL) {
            model._cg15 = item->valueint;
        }
        // Receive _cg155
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg155");
        if(item != NULL) {
            model._cg155 = item->valueint;
        }
        // Receive _cg159
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg159");
        if(item != NULL) {
            model._cg159 = item->valueint;
        }
        // Receive _cg16
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg16");
        if(item != NULL) {
            model._cg16 = item->valueint;
        }
        // Receive _cg161
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg161");
        if(item != NULL) {
            model._cg161 = item->valueint;
        }
        // Receive _cg163
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg163");
        if(item != NULL) {
            model._cg163 = item->valueint;
        }
        // Receive _cg164
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg164");
        if(item != NULL) {
            model._cg164 = item->valueint;
        }
        // Receive _cg165
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg165");
        if(item != NULL) {
            model._cg165 = item->valueint;
        }
        // Receive _cg167
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg167");
        if(item != NULL) {
            model._cg167 = item->valueint;
        }
        // Receive _cg169
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg169");
        if(item != NULL) {
            model._cg169 = item->valueint;
        }
        // Receive _cg170
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg170");
        if(item != NULL) {
            model._cg170 = item->valueint;
        }
        // Receive _cg171
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg171");
        if(item != NULL) {
            model._cg171 = item->valueint;
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
        // Receive _cg177
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg177");
        if(item != NULL) {
            model._cg177 = item->valueint;
        }
        // Receive _cg179
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg179");
        if(item != NULL) {
            model._cg179 = item->valueint;
        }
        // Receive _cg181
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg181");
        if(item != NULL) {
            model._cg181 = item->valueint;
        }
        // Receive _cg184
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg184");
        if(item != NULL) {
            model._cg184 = item->valueint;
        }
        // Receive _cg186
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg186");
        if(item != NULL) {
            model._cg186 = item->valueint;
        }
        // Receive _cg188
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg188");
        if(item != NULL) {
            model._cg188 = item->valueint;
        }
        // Receive _cg19
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg19");
        if(item != NULL) {
            model._cg19 = item->valueint;
        }
        // Receive _cg191
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg191");
        if(item != NULL) {
            model._cg191 = item->valueint;
        }
        // Receive _cg194
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg194");
        if(item != NULL) {
            model._cg194 = item->valueint;
        }
        // Receive _cg195
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg195");
        if(item != NULL) {
            model._cg195 = item->valueint;
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
        // Receive _cg29
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg29");
        if(item != NULL) {
            model._cg29 = item->valueint;
        }
        // Receive _cg32
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg32");
        if(item != NULL) {
            model._cg32 = item->valueint;
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
        // Receive _cg42
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg42");
        if(item != NULL) {
            model._cg42 = item->valueint;
        }
        // Receive _cg47
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg47");
        if(item != NULL) {
            model._cg47 = item->valueint;
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
        // Receive _cg58
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg58");
        if(item != NULL) {
            model._cg58 = item->valueint;
        }
        // Receive _cg6
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg6");
        if(item != NULL) {
            model._cg6 = item->valueint;
        }
        // Receive _cg60
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg60");
        if(item != NULL) {
            model._cg60 = item->valueint;
        }
        // Receive _cg61
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg61");
        if(item != NULL) {
            model._cg61 = item->valueint;
        }
        // Receive _cg62
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg62");
        if(item != NULL) {
            model._cg62 = item->valueint;
        }
        // Receive _cg64
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg64");
        if(item != NULL) {
            model._cg64 = item->valueint;
        }
        // Receive _cg65
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg65");
        if(item != NULL) {
            model._cg65 = item->valueint;
        }
        // Receive _cg68
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg68");
        if(item != NULL) {
            model._cg68 = item->valueint;
        }
        // Receive _cg7
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg7");
        if(item != NULL) {
            model._cg7 = item->valueint;
        }
        // Receive _cg70
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg70");
        if(item != NULL) {
            model._cg70 = item->valueint;
        }
        // Receive _cg72
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg72");
        if(item != NULL) {
            model._cg72 = item->valueint;
        }
        // Receive _cg78
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg78");
        if(item != NULL) {
            model._cg78 = item->valueint;
        }
        // Receive _cg82
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg82");
        if(item != NULL) {
            model._cg82 = item->valueint;
        }
        // Receive _cg87
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg87");
        if(item != NULL) {
            model._cg87 = item->valueint;
        }
        // Receive _cg88
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg88");
        if(item != NULL) {
            model._cg88 = item->valueint;
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
        // Receive _cg97
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg97");
        if(item != NULL) {
            model._cg97 = item->valueint;
        }
        // Receive _g10
        item = cJSON_GetObjectItemCaseSensitive(root, "_g10");
        if(item != NULL) {
            model._g10 = item->valueint;
        }
        // Receive _g101
        item = cJSON_GetObjectItemCaseSensitive(root, "_g101");
        if(item != NULL) {
            model._g101 = item->valueint;
        }
        // Receive _g102
        item = cJSON_GetObjectItemCaseSensitive(root, "_g102");
        if(item != NULL) {
            model._g102 = item->valueint;
        }
        // Receive _g102_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g102_e2");
        if(item != NULL) {
            model._g102_e2 = item->valueint;
        }
        // Receive _g104
        item = cJSON_GetObjectItemCaseSensitive(root, "_g104");
        if(item != NULL) {
            model._g104 = item->valueint;
        }
        // Receive _g105
        item = cJSON_GetObjectItemCaseSensitive(root, "_g105");
        if(item != NULL) {
            model._g105 = item->valueint;
        }
        // Receive _g109
        item = cJSON_GetObjectItemCaseSensitive(root, "_g109");
        if(item != NULL) {
            model._g109 = item->valueint;
        }
        // Receive _g10_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g10_e1");
        if(item != NULL) {
            model._g10_e1 = item->valueint;
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
        // Receive _g111
        item = cJSON_GetObjectItemCaseSensitive(root, "_g111");
        if(item != NULL) {
            model._g111 = item->valueint;
        }
        // Receive _g115
        item = cJSON_GetObjectItemCaseSensitive(root, "_g115");
        if(item != NULL) {
            model._g115 = item->valueint;
        }
        // Receive _g116
        item = cJSON_GetObjectItemCaseSensitive(root, "_g116");
        if(item != NULL) {
            model._g116 = item->valueint;
        }
        // Receive _g116_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g116_e1");
        if(item != NULL) {
            model._g116_e1 = item->valueint;
        }
        // Receive _g117
        item = cJSON_GetObjectItemCaseSensitive(root, "_g117");
        if(item != NULL) {
            model._g117 = item->valueint;
        }
        // Receive _g119
        item = cJSON_GetObjectItemCaseSensitive(root, "_g119");
        if(item != NULL) {
            model._g119 = item->valueint;
        }
        // Receive _g12
        item = cJSON_GetObjectItemCaseSensitive(root, "_g12");
        if(item != NULL) {
            model._g12 = item->valueint;
        }
        // Receive _g121
        item = cJSON_GetObjectItemCaseSensitive(root, "_g121");
        if(item != NULL) {
            model._g121 = item->valueint;
        }
        // Receive _g122
        item = cJSON_GetObjectItemCaseSensitive(root, "_g122");
        if(item != NULL) {
            model._g122 = item->valueint;
        }
        // Receive _g122_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g122_e2");
        if(item != NULL) {
            model._g122_e2 = item->valueint;
        }
        // Receive _g123
        item = cJSON_GetObjectItemCaseSensitive(root, "_g123");
        if(item != NULL) {
            model._g123 = item->valueint;
        }
        // Receive _g124
        item = cJSON_GetObjectItemCaseSensitive(root, "_g124");
        if(item != NULL) {
            model._g124 = item->valueint;
        }
        // Receive _g125
        item = cJSON_GetObjectItemCaseSensitive(root, "_g125");
        if(item != NULL) {
            model._g125 = item->valueint;
        }
        // Receive _g127
        item = cJSON_GetObjectItemCaseSensitive(root, "_g127");
        if(item != NULL) {
            model._g127 = item->valueint;
        }
        // Receive _g128
        item = cJSON_GetObjectItemCaseSensitive(root, "_g128");
        if(item != NULL) {
            model._g128 = item->valueint;
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
        // Receive _g132
        item = cJSON_GetObjectItemCaseSensitive(root, "_g132");
        if(item != NULL) {
            model._g132 = item->valueint;
        }
        // Receive _g132_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g132_e3");
        if(item != NULL) {
            model._g132_e3 = item->valueint;
        }
        // Receive _g133
        item = cJSON_GetObjectItemCaseSensitive(root, "_g133");
        if(item != NULL) {
            model._g133 = item->valueint;
        }
        // Receive _g134
        item = cJSON_GetObjectItemCaseSensitive(root, "_g134");
        if(item != NULL) {
            model._g134 = item->valueint;
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
        // Receive _g136_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g136_e1");
        if(item != NULL) {
            model._g136_e1 = item->valueint;
        }
        // Receive _g137
        item = cJSON_GetObjectItemCaseSensitive(root, "_g137");
        if(item != NULL) {
            model._g137 = item->valueint;
        }
        // Receive _g140
        item = cJSON_GetObjectItemCaseSensitive(root, "_g140");
        if(item != NULL) {
            model._g140 = item->valueint;
        }
        // Receive _g141
        item = cJSON_GetObjectItemCaseSensitive(root, "_g141");
        if(item != NULL) {
            model._g141 = item->valueint;
        }
        // Receive _g141_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g141_e2");
        if(item != NULL) {
            model._g141_e2 = item->valueint;
        }
        // Receive _g142
        item = cJSON_GetObjectItemCaseSensitive(root, "_g142");
        if(item != NULL) {
            model._g142 = item->valueint;
        }
        // Receive _g145
        item = cJSON_GetObjectItemCaseSensitive(root, "_g145");
        if(item != NULL) {
            model._g145 = item->valueint;
        }
        // Receive _g146
        item = cJSON_GetObjectItemCaseSensitive(root, "_g146");
        if(item != NULL) {
            model._g146 = item->valueint;
        }
        // Receive _g147
        item = cJSON_GetObjectItemCaseSensitive(root, "_g147");
        if(item != NULL) {
            model._g147 = item->valueint;
        }
        // Receive _g147_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g147_e3");
        if(item != NULL) {
            model._g147_e3 = item->valueint;
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
        // Receive _g15
        item = cJSON_GetObjectItemCaseSensitive(root, "_g15");
        if(item != NULL) {
            model._g15 = item->valueint;
        }
        // Receive _g150
        item = cJSON_GetObjectItemCaseSensitive(root, "_g150");
        if(item != NULL) {
            model._g150 = item->valueint;
        }
        // Receive _g151
        item = cJSON_GetObjectItemCaseSensitive(root, "_g151");
        if(item != NULL) {
            model._g151 = item->valueint;
        }
        // Receive _g155
        item = cJSON_GetObjectItemCaseSensitive(root, "_g155");
        if(item != NULL) {
            model._g155 = item->valueint;
        }
        // Receive _g156
        item = cJSON_GetObjectItemCaseSensitive(root, "_g156");
        if(item != NULL) {
            model._g156 = item->valueint;
        }
        // Receive _g16
        item = cJSON_GetObjectItemCaseSensitive(root, "_g16");
        if(item != NULL) {
            model._g16 = item->valueint;
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
        // Receive _g162_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g162_e1");
        if(item != NULL) {
            model._g162_e1 = item->valueint;
        }
        // Receive _g163
        item = cJSON_GetObjectItemCaseSensitive(root, "_g163");
        if(item != NULL) {
            model._g163 = item->valueint;
        }
        // Receive _g167
        item = cJSON_GetObjectItemCaseSensitive(root, "_g167");
        if(item != NULL) {
            model._g167 = item->valueint;
        }
        // Receive _g168
        item = cJSON_GetObjectItemCaseSensitive(root, "_g168");
        if(item != NULL) {
            model._g168 = item->valueint;
        }
        // Receive _g168_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g168_e2");
        if(item != NULL) {
            model._g168_e2 = item->valueint;
        }
        // Receive _g169
        item = cJSON_GetObjectItemCaseSensitive(root, "_g169");
        if(item != NULL) {
            model._g169 = item->valueint;
        }
        // Receive _g170
        item = cJSON_GetObjectItemCaseSensitive(root, "_g170");
        if(item != NULL) {
            model._g170 = item->valueint;
        }
        // Receive _g173
        item = cJSON_GetObjectItemCaseSensitive(root, "_g173");
        if(item != NULL) {
            model._g173 = item->valueint;
        }
        // Receive _g177
        item = cJSON_GetObjectItemCaseSensitive(root, "_g177");
        if(item != NULL) {
            model._g177 = item->valueint;
        }
        // Receive _g178
        item = cJSON_GetObjectItemCaseSensitive(root, "_g178");
        if(item != NULL) {
            model._g178 = item->valueint;
        }
        // Receive _g178_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g178_e3");
        if(item != NULL) {
            model._g178_e3 = item->valueint;
        }
        // Receive _g179
        item = cJSON_GetObjectItemCaseSensitive(root, "_g179");
        if(item != NULL) {
            model._g179 = item->valueint;
        }
        // Receive _g180
        item = cJSON_GetObjectItemCaseSensitive(root, "_g180");
        if(item != NULL) {
            model._g180 = item->valueint;
        }
        // Receive _g181
        item = cJSON_GetObjectItemCaseSensitive(root, "_g181");
        if(item != NULL) {
            model._g181 = item->valueint;
        }
        // Receive _g182
        item = cJSON_GetObjectItemCaseSensitive(root, "_g182");
        if(item != NULL) {
            model._g182 = item->valueint;
        }
        // Receive _g182_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g182_e1");
        if(item != NULL) {
            model._g182_e1 = item->valueint;
        }
        // Receive _g183
        item = cJSON_GetObjectItemCaseSensitive(root, "_g183");
        if(item != NULL) {
            model._g183 = item->valueint;
        }
        // Receive _g186
        item = cJSON_GetObjectItemCaseSensitive(root, "_g186");
        if(item != NULL) {
            model._g186 = item->valueint;
        }
        // Receive _g187
        item = cJSON_GetObjectItemCaseSensitive(root, "_g187");
        if(item != NULL) {
            model._g187 = item->valueint;
        }
        // Receive _g187_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g187_e2");
        if(item != NULL) {
            model._g187_e2 = item->valueint;
        }
        // Receive _g188
        item = cJSON_GetObjectItemCaseSensitive(root, "_g188");
        if(item != NULL) {
            model._g188 = item->valueint;
        }
        // Receive _g19
        item = cJSON_GetObjectItemCaseSensitive(root, "_g19");
        if(item != NULL) {
            model._g19 = item->valueint;
        }
        // Receive _g191
        item = cJSON_GetObjectItemCaseSensitive(root, "_g191");
        if(item != NULL) {
            model._g191 = item->valueint;
        }
        // Receive _g192
        item = cJSON_GetObjectItemCaseSensitive(root, "_g192");
        if(item != NULL) {
            model._g192 = item->valueint;
        }
        // Receive _g193
        item = cJSON_GetObjectItemCaseSensitive(root, "_g193");
        if(item != NULL) {
            model._g193 = item->valueint;
        }
        // Receive _g193_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g193_e3");
        if(item != NULL) {
            model._g193_e3 = item->valueint;
        }
        // Receive _g195
        item = cJSON_GetObjectItemCaseSensitive(root, "_g195");
        if(item != NULL) {
            model._g195 = item->valueint;
        }
        // Receive _g196
        item = cJSON_GetObjectItemCaseSensitive(root, "_g196");
        if(item != NULL) {
            model._g196 = item->valueint;
        }
        // Receive _g197
        item = cJSON_GetObjectItemCaseSensitive(root, "_g197");
        if(item != NULL) {
            model._g197 = item->valueint;
        }
        // Receive _g20
        item = cJSON_GetObjectItemCaseSensitive(root, "_g20");
        if(item != NULL) {
            model._g20 = item->valueint;
        }
        // Receive _g205
        item = cJSON_GetObjectItemCaseSensitive(root, "_g205");
        if(item != NULL) {
            model._g205 = item->valueint;
        }
        // Receive _g20_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g20_e2");
        if(item != NULL) {
            model._g20_e2 = item->valueint;
        }
        // Receive _g21
        item = cJSON_GetObjectItemCaseSensitive(root, "_g21");
        if(item != NULL) {
            model._g21 = item->valueint;
        }
        // Receive _g213
        item = cJSON_GetObjectItemCaseSensitive(root, "_g213");
        if(item != NULL) {
            model._g213 = item->valueint;
        }
        // Receive _g22
        item = cJSON_GetObjectItemCaseSensitive(root, "_g22");
        if(item != NULL) {
            model._g22 = item->valueint;
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
        // Receive _g29
        item = cJSON_GetObjectItemCaseSensitive(root, "_g29");
        if(item != NULL) {
            model._g29 = item->valueint;
        }
        // Receive _g30
        item = cJSON_GetObjectItemCaseSensitive(root, "_g30");
        if(item != NULL) {
            model._g30 = item->valueint;
        }
        // Receive _g32
        item = cJSON_GetObjectItemCaseSensitive(root, "_g32");
        if(item != NULL) {
            model._g32 = item->valueint;
        }
        // Receive _g33
        item = cJSON_GetObjectItemCaseSensitive(root, "_g33");
        if(item != NULL) {
            model._g33 = item->valueint;
        }
        // Receive _g33_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g33_e1");
        if(item != NULL) {
            model._g33_e1 = item->valueint;
        }
        // Receive _g35
        item = cJSON_GetObjectItemCaseSensitive(root, "_g35");
        if(item != NULL) {
            model._g35 = item->valueint;
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
        // Receive _g39_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g39_e2");
        if(item != NULL) {
            model._g39_e2 = item->valueint;
        }
        // Receive _g4
        item = cJSON_GetObjectItemCaseSensitive(root, "_g4");
        if(item != NULL) {
            model._g4 = item->valueint;
        }
        // Receive _g41
        item = cJSON_GetObjectItemCaseSensitive(root, "_g41");
        if(item != NULL) {
            model._g41 = item->valueint;
        }
        // Receive _g42
        item = cJSON_GetObjectItemCaseSensitive(root, "_g42");
        if(item != NULL) {
            model._g42 = item->valueint;
        }
        // Receive _g44
        item = cJSON_GetObjectItemCaseSensitive(root, "_g44");
        if(item != NULL) {
            model._g44 = item->valueint;
        }
        // Receive _g47
        item = cJSON_GetObjectItemCaseSensitive(root, "_g47");
        if(item != NULL) {
            model._g47 = item->valueint;
        }
        // Receive _g48
        item = cJSON_GetObjectItemCaseSensitive(root, "_g48");
        if(item != NULL) {
            model._g48 = item->valueint;
        }
        // Receive _g48_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g48_e3");
        if(item != NULL) {
            model._g48_e3 = item->valueint;
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
        // Receive _g56
        item = cJSON_GetObjectItemCaseSensitive(root, "_g56");
        if(item != NULL) {
            model._g56 = item->valueint;
        }
        // Receive _g58
        item = cJSON_GetObjectItemCaseSensitive(root, "_g58");
        if(item != NULL) {
            model._g58 = item->valueint;
        }
        // Receive _g59
        item = cJSON_GetObjectItemCaseSensitive(root, "_g59");
        if(item != NULL) {
            model._g59 = item->valueint;
        }
        // Receive _g59_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g59_e1");
        if(item != NULL) {
            model._g59_e1 = item->valueint;
        }
        // Receive _g60
        item = cJSON_GetObjectItemCaseSensitive(root, "_g60");
        if(item != NULL) {
            model._g60 = item->valueint;
        }
        // Receive _g61
        item = cJSON_GetObjectItemCaseSensitive(root, "_g61");
        if(item != NULL) {
            model._g61 = item->valueint;
        }
        // Receive _g62
        item = cJSON_GetObjectItemCaseSensitive(root, "_g62");
        if(item != NULL) {
            model._g62 = item->valueint;
        }
        // Receive _g64
        item = cJSON_GetObjectItemCaseSensitive(root, "_g64");
        if(item != NULL) {
            model._g64 = item->valueint;
        }
        // Receive _g65
        item = cJSON_GetObjectItemCaseSensitive(root, "_g65");
        if(item != NULL) {
            model._g65 = item->valueint;
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
        // Receive _g69_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g69_e2");
        if(item != NULL) {
            model._g69_e2 = item->valueint;
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
        // Receive _g82
        item = cJSON_GetObjectItemCaseSensitive(root, "_g82");
        if(item != NULL) {
            model._g82 = item->valueint;
        }
        // Receive _g83
        item = cJSON_GetObjectItemCaseSensitive(root, "_g83");
        if(item != NULL) {
            model._g83 = item->valueint;
        }
        // Receive _g83_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g83_e1");
        if(item != NULL) {
            model._g83_e1 = item->valueint;
        }
        // Receive _g85
        item = cJSON_GetObjectItemCaseSensitive(root, "_g85");
        if(item != NULL) {
            model._g85 = item->valueint;
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
        // Receive _g89
        item = cJSON_GetObjectItemCaseSensitive(root, "_g89");
        if(item != NULL) {
            model._g89 = item->valueint;
        }
        // Receive _g89_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g89_e2");
        if(item != NULL) {
            model._g89_e2 = item->valueint;
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
        // Receive _g91
        item = cJSON_GetObjectItemCaseSensitive(root, "_g91");
        if(item != NULL) {
            model._g91 = item->valueint;
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
        // Receive _g98_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g98_e3");
        if(item != NULL) {
            model._g98_e3 = item->valueint;
        }
        // Receive _g99
        item = cJSON_GetObjectItemCaseSensitive(root, "_g99");
        if(item != NULL) {
            model._g99 = item->valueint;
        }
        // Receive _g99_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g99_e1");
        if(item != NULL) {
            model._g99_e1 = item->valueint;
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
        // Receive _pacemaker_local__CFSterm2
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local__CFSterm2");
        if(item != NULL) {
            model._pacemaker_local__CFSterm2 = item->valueint;
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
        // Receive _pacemaker_local_x2
        item = cJSON_GetObjectItemCaseSensitive(root, "_pacemaker_local_x2");
        if(item != NULL) {
            model._pacemaker_local_x2 = item->valuedouble;
        }
        // Receive _pg109
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg109");
        if(item != NULL) {
            model._pg109 = item->valueint;
        }
        // Receive _pg110
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg110");
        if(item != NULL) {
            model._pg110 = item->valueint;
        }
        // Receive _pg111
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg111");
        if(item != NULL) {
            model._pg111 = item->valueint;
        }
        // Receive _pg12
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg12");
        if(item != NULL) {
            model._pg12 = item->valueint;
        }
        // Receive _pg124
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg124");
        if(item != NULL) {
            model._pg124 = item->valueint;
        }
        // Receive _pg133
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg133");
        if(item != NULL) {
            model._pg133 = item->valueint;
        }
        // Receive _pg136
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg136");
        if(item != NULL) {
            model._pg136 = item->valueint;
        }
        // Receive _pg146
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg146");
        if(item != NULL) {
            model._pg146 = item->valueint;
        }
        // Receive _pg147_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg147_e3");
        if(item != NULL) {
            model._pg147_e3 = item->valueint;
        }
        // Receive _pg149
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg149");
        if(item != NULL) {
            model._pg149 = item->valueint;
        }
        // Receive _pg150
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg150");
        if(item != NULL) {
            model._pg150 = item->valueint;
        }
        // Receive _pg155
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg155");
        if(item != NULL) {
            model._pg155 = item->valueint;
        }
        // Receive _pg156
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg156");
        if(item != NULL) {
            model._pg156 = item->valueint;
        }
        // Receive _pg163
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg163");
        if(item != NULL) {
            model._pg163 = item->valueint;
        }
        // Receive _pg170
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg170");
        if(item != NULL) {
            model._pg170 = item->valueint;
        }
        // Receive _pg193
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg193");
        if(item != NULL) {
            model._pg193 = item->valueint;
        }
        // Receive _pg195
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg195");
        if(item != NULL) {
            model._pg195 = item->valueint;
        }
        // Receive _pg196
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg196");
        if(item != NULL) {
            model._pg196 = item->valueint;
        }
        // Receive _pg197
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg197");
        if(item != NULL) {
            model._pg197 = item->valueint;
        }
        // Receive _pg25
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg25");
        if(item != NULL) {
            model._pg25 = item->valueint;
        }
        // Receive _pg37
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg37");
        if(item != NULL) {
            model._pg37 = item->valueint;
        }
        // Receive _pg42
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg42");
        if(item != NULL) {
            model._pg42 = item->valueint;
        }
        // Receive _pg44
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg44");
        if(item != NULL) {
            model._pg44 = item->valueint;
        }
        // Receive _pg48
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg48");
        if(item != NULL) {
            model._pg48 = item->valueint;
        }
        // Receive _pg48_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg48_e3");
        if(item != NULL) {
            model._pg48_e3 = item->valueint;
        }
        // Receive _pg49
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg49");
        if(item != NULL) {
            model._pg49 = item->valueint;
        }
        // Receive _pg54
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg54");
        if(item != NULL) {
            model._pg54 = item->valueint;
        }
        // Receive _pg62
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg62");
        if(item != NULL) {
            model._pg62 = item->valueint;
        }
        // Receive _pg69_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg69_e2");
        if(item != NULL) {
            model._pg69_e2 = item->valueint;
        }
        // Receive _pg7
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg7");
        if(item != NULL) {
            model._pg7 = item->valueint;
        }
        // Receive _pg72
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg72");
        if(item != NULL) {
            model._pg72 = item->valueint;
        }
        // Receive _pg73
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg73");
        if(item != NULL) {
            model._pg73 = item->valueint;
        }
        // Receive _pg79
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg79");
        if(item != NULL) {
            model._pg79 = item->valueint;
        }
        // Receive _pg90
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg90");
        if(item != NULL) {
            model._pg90 = item->valueint;
        }
        // Receive _pg93
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg93");
        if(item != NULL) {
            model._pg93 = item->valueint;
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
        // Receive _region1_null_x
        item = cJSON_GetObjectItemCaseSensitive(root, "_region1_null_x");
        if(item != NULL) {
            model._region1_null_x = item->valuedouble;
        }
        // Receive _region2_null_x
        item = cJSON_GetObjectItemCaseSensitive(root, "_region2_null_x");
        if(item != NULL) {
            model._region2_null_x = item->valuedouble;
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
    // Send _cg101
    cJSON_AddItemToObject(root, "_cg101", cJSON_CreateBool(model._cg101));
    // Send _cg109
    cJSON_AddItemToObject(root, "_cg109", cJSON_CreateBool(model._cg109));
    // Send _cg11
    cJSON_AddItemToObject(root, "_cg11", cJSON_CreateBool(model._cg11));
    // Send _cg113
    cJSON_AddItemToObject(root, "_cg113", cJSON_CreateBool(model._cg113));
    // Send _cg115
    cJSON_AddItemToObject(root, "_cg115", cJSON_CreateBool(model._cg115));
    // Send _cg117
    cJSON_AddItemToObject(root, "_cg117", cJSON_CreateBool(model._cg117));
    // Send _cg118
    cJSON_AddItemToObject(root, "_cg118", cJSON_CreateBool(model._cg118));
    // Send _cg119
    cJSON_AddItemToObject(root, "_cg119", cJSON_CreateBool(model._cg119));
    // Send _cg12
    cJSON_AddItemToObject(root, "_cg12", cJSON_CreateBool(model._cg12));
    // Send _cg121
    cJSON_AddItemToObject(root, "_cg121", cJSON_CreateBool(model._cg121));
    // Send _cg123
    cJSON_AddItemToObject(root, "_cg123", cJSON_CreateBool(model._cg123));
    // Send _cg124
    cJSON_AddItemToObject(root, "_cg124", cJSON_CreateBool(model._cg124));
    // Send _cg125
    cJSON_AddItemToObject(root, "_cg125", cJSON_CreateBool(model._cg125));
    // Send _cg127
    cJSON_AddItemToObject(root, "_cg127", cJSON_CreateBool(model._cg127));
    // Send _cg128
    cJSON_AddItemToObject(root, "_cg128", cJSON_CreateBool(model._cg128));
    // Send _cg13
    cJSON_AddItemToObject(root, "_cg13", cJSON_CreateBool(model._cg13));
    // Send _cg131
    cJSON_AddItemToObject(root, "_cg131", cJSON_CreateBool(model._cg131));
    // Send _cg133
    cJSON_AddItemToObject(root, "_cg133", cJSON_CreateBool(model._cg133));
    // Send _cg135
    cJSON_AddItemToObject(root, "_cg135", cJSON_CreateBool(model._cg135));
    // Send _cg138
    cJSON_AddItemToObject(root, "_cg138", cJSON_CreateBool(model._cg138));
    // Send _cg140
    cJSON_AddItemToObject(root, "_cg140", cJSON_CreateBool(model._cg140));
    // Send _cg142
    cJSON_AddItemToObject(root, "_cg142", cJSON_CreateBool(model._cg142));
    // Send _cg145
    cJSON_AddItemToObject(root, "_cg145", cJSON_CreateBool(model._cg145));
    // Send _cg148
    cJSON_AddItemToObject(root, "_cg148", cJSON_CreateBool(model._cg148));
    // Send _cg149
    cJSON_AddItemToObject(root, "_cg149", cJSON_CreateBool(model._cg149));
    // Send _cg15
    cJSON_AddItemToObject(root, "_cg15", cJSON_CreateBool(model._cg15));
    // Send _cg155
    cJSON_AddItemToObject(root, "_cg155", cJSON_CreateBool(model._cg155));
    // Send _cg159
    cJSON_AddItemToObject(root, "_cg159", cJSON_CreateBool(model._cg159));
    // Send _cg16
    cJSON_AddItemToObject(root, "_cg16", cJSON_CreateBool(model._cg16));
    // Send _cg161
    cJSON_AddItemToObject(root, "_cg161", cJSON_CreateBool(model._cg161));
    // Send _cg163
    cJSON_AddItemToObject(root, "_cg163", cJSON_CreateBool(model._cg163));
    // Send _cg164
    cJSON_AddItemToObject(root, "_cg164", cJSON_CreateBool(model._cg164));
    // Send _cg165
    cJSON_AddItemToObject(root, "_cg165", cJSON_CreateBool(model._cg165));
    // Send _cg167
    cJSON_AddItemToObject(root, "_cg167", cJSON_CreateBool(model._cg167));
    // Send _cg169
    cJSON_AddItemToObject(root, "_cg169", cJSON_CreateBool(model._cg169));
    // Send _cg170
    cJSON_AddItemToObject(root, "_cg170", cJSON_CreateBool(model._cg170));
    // Send _cg171
    cJSON_AddItemToObject(root, "_cg171", cJSON_CreateBool(model._cg171));
    // Send _cg173
    cJSON_AddItemToObject(root, "_cg173", cJSON_CreateBool(model._cg173));
    // Send _cg174
    cJSON_AddItemToObject(root, "_cg174", cJSON_CreateBool(model._cg174));
    // Send _cg177
    cJSON_AddItemToObject(root, "_cg177", cJSON_CreateBool(model._cg177));
    // Send _cg179
    cJSON_AddItemToObject(root, "_cg179", cJSON_CreateBool(model._cg179));
    // Send _cg181
    cJSON_AddItemToObject(root, "_cg181", cJSON_CreateBool(model._cg181));
    // Send _cg184
    cJSON_AddItemToObject(root, "_cg184", cJSON_CreateBool(model._cg184));
    // Send _cg186
    cJSON_AddItemToObject(root, "_cg186", cJSON_CreateBool(model._cg186));
    // Send _cg188
    cJSON_AddItemToObject(root, "_cg188", cJSON_CreateBool(model._cg188));
    // Send _cg19
    cJSON_AddItemToObject(root, "_cg19", cJSON_CreateBool(model._cg19));
    // Send _cg191
    cJSON_AddItemToObject(root, "_cg191", cJSON_CreateBool(model._cg191));
    // Send _cg194
    cJSON_AddItemToObject(root, "_cg194", cJSON_CreateBool(model._cg194));
    // Send _cg195
    cJSON_AddItemToObject(root, "_cg195", cJSON_CreateBool(model._cg195));
    // Send _cg21
    cJSON_AddItemToObject(root, "_cg21", cJSON_CreateBool(model._cg21));
    // Send _cg23
    cJSON_AddItemToObject(root, "_cg23", cJSON_CreateBool(model._cg23));
    // Send _cg29
    cJSON_AddItemToObject(root, "_cg29", cJSON_CreateBool(model._cg29));
    // Send _cg32
    cJSON_AddItemToObject(root, "_cg32", cJSON_CreateBool(model._cg32));
    // Send _cg37
    cJSON_AddItemToObject(root, "_cg37", cJSON_CreateBool(model._cg37));
    // Send _cg38
    cJSON_AddItemToObject(root, "_cg38", cJSON_CreateBool(model._cg38));
    // Send _cg4
    cJSON_AddItemToObject(root, "_cg4", cJSON_CreateBool(model._cg4));
    // Send _cg42
    cJSON_AddItemToObject(root, "_cg42", cJSON_CreateBool(model._cg42));
    // Send _cg47
    cJSON_AddItemToObject(root, "_cg47", cJSON_CreateBool(model._cg47));
    // Send _cg53
    cJSON_AddItemToObject(root, "_cg53", cJSON_CreateBool(model._cg53));
    // Send _cg55
    cJSON_AddItemToObject(root, "_cg55", cJSON_CreateBool(model._cg55));
    // Send _cg56
    cJSON_AddItemToObject(root, "_cg56", cJSON_CreateBool(model._cg56));
    // Send _cg58
    cJSON_AddItemToObject(root, "_cg58", cJSON_CreateBool(model._cg58));
    // Send _cg6
    cJSON_AddItemToObject(root, "_cg6", cJSON_CreateBool(model._cg6));
    // Send _cg60
    cJSON_AddItemToObject(root, "_cg60", cJSON_CreateBool(model._cg60));
    // Send _cg61
    cJSON_AddItemToObject(root, "_cg61", cJSON_CreateBool(model._cg61));
    // Send _cg62
    cJSON_AddItemToObject(root, "_cg62", cJSON_CreateBool(model._cg62));
    // Send _cg64
    cJSON_AddItemToObject(root, "_cg64", cJSON_CreateBool(model._cg64));
    // Send _cg65
    cJSON_AddItemToObject(root, "_cg65", cJSON_CreateBool(model._cg65));
    // Send _cg68
    cJSON_AddItemToObject(root, "_cg68", cJSON_CreateBool(model._cg68));
    // Send _cg7
    cJSON_AddItemToObject(root, "_cg7", cJSON_CreateBool(model._cg7));
    // Send _cg70
    cJSON_AddItemToObject(root, "_cg70", cJSON_CreateBool(model._cg70));
    // Send _cg72
    cJSON_AddItemToObject(root, "_cg72", cJSON_CreateBool(model._cg72));
    // Send _cg78
    cJSON_AddItemToObject(root, "_cg78", cJSON_CreateBool(model._cg78));
    // Send _cg82
    cJSON_AddItemToObject(root, "_cg82", cJSON_CreateBool(model._cg82));
    // Send _cg87
    cJSON_AddItemToObject(root, "_cg87", cJSON_CreateBool(model._cg87));
    // Send _cg88
    cJSON_AddItemToObject(root, "_cg88", cJSON_CreateBool(model._cg88));
    // Send _cg9
    cJSON_AddItemToObject(root, "_cg9", cJSON_CreateBool(model._cg9));
    // Send _cg92
    cJSON_AddItemToObject(root, "_cg92", cJSON_CreateBool(model._cg92));
    // Send _cg97
    cJSON_AddItemToObject(root, "_cg97", cJSON_CreateBool(model._cg97));
    // Send _g10
    cJSON_AddItemToObject(root, "_g10", cJSON_CreateBool(model._g10));
    // Send _g101
    cJSON_AddItemToObject(root, "_g101", cJSON_CreateBool(model._g101));
    // Send _g102
    cJSON_AddItemToObject(root, "_g102", cJSON_CreateBool(model._g102));
    // Send _g102_e2
    cJSON_AddItemToObject(root, "_g102_e2", cJSON_CreateBool(model._g102_e2));
    // Send _g104
    cJSON_AddItemToObject(root, "_g104", cJSON_CreateBool(model._g104));
    // Send _g105
    cJSON_AddItemToObject(root, "_g105", cJSON_CreateBool(model._g105));
    // Send _g109
    cJSON_AddItemToObject(root, "_g109", cJSON_CreateBool(model._g109));
    // Send _g10_e1
    cJSON_AddItemToObject(root, "_g10_e1", cJSON_CreateBool(model._g10_e1));
    // Send _g11
    cJSON_AddItemToObject(root, "_g11", cJSON_CreateBool(model._g11));
    // Send _g110
    cJSON_AddItemToObject(root, "_g110", cJSON_CreateBool(model._g110));
    // Send _g111
    cJSON_AddItemToObject(root, "_g111", cJSON_CreateBool(model._g111));
    // Send _g115
    cJSON_AddItemToObject(root, "_g115", cJSON_CreateBool(model._g115));
    // Send _g116
    cJSON_AddItemToObject(root, "_g116", cJSON_CreateBool(model._g116));
    // Send _g116_e1
    cJSON_AddItemToObject(root, "_g116_e1", cJSON_CreateBool(model._g116_e1));
    // Send _g117
    cJSON_AddItemToObject(root, "_g117", cJSON_CreateBool(model._g117));
    // Send _g119
    cJSON_AddItemToObject(root, "_g119", cJSON_CreateBool(model._g119));
    // Send _g12
    cJSON_AddItemToObject(root, "_g12", cJSON_CreateBool(model._g12));
    // Send _g121
    cJSON_AddItemToObject(root, "_g121", cJSON_CreateBool(model._g121));
    // Send _g122
    cJSON_AddItemToObject(root, "_g122", cJSON_CreateBool(model._g122));
    // Send _g122_e2
    cJSON_AddItemToObject(root, "_g122_e2", cJSON_CreateBool(model._g122_e2));
    // Send _g123
    cJSON_AddItemToObject(root, "_g123", cJSON_CreateBool(model._g123));
    // Send _g124
    cJSON_AddItemToObject(root, "_g124", cJSON_CreateBool(model._g124));
    // Send _g125
    cJSON_AddItemToObject(root, "_g125", cJSON_CreateBool(model._g125));
    // Send _g127
    cJSON_AddItemToObject(root, "_g127", cJSON_CreateBool(model._g127));
    // Send _g128
    cJSON_AddItemToObject(root, "_g128", cJSON_CreateBool(model._g128));
    // Send _g13
    cJSON_AddItemToObject(root, "_g13", cJSON_CreateBool(model._g13));
    // Send _g131
    cJSON_AddItemToObject(root, "_g131", cJSON_CreateBool(model._g131));
    // Send _g132
    cJSON_AddItemToObject(root, "_g132", cJSON_CreateBool(model._g132));
    // Send _g132_e3
    cJSON_AddItemToObject(root, "_g132_e3", cJSON_CreateBool(model._g132_e3));
    // Send _g133
    cJSON_AddItemToObject(root, "_g133", cJSON_CreateBool(model._g133));
    // Send _g134
    cJSON_AddItemToObject(root, "_g134", cJSON_CreateBool(model._g134));
    // Send _g135
    cJSON_AddItemToObject(root, "_g135", cJSON_CreateBool(model._g135));
    // Send _g136
    cJSON_AddItemToObject(root, "_g136", cJSON_CreateBool(model._g136));
    // Send _g136_e1
    cJSON_AddItemToObject(root, "_g136_e1", cJSON_CreateBool(model._g136_e1));
    // Send _g137
    cJSON_AddItemToObject(root, "_g137", cJSON_CreateBool(model._g137));
    // Send _g140
    cJSON_AddItemToObject(root, "_g140", cJSON_CreateBool(model._g140));
    // Send _g141
    cJSON_AddItemToObject(root, "_g141", cJSON_CreateBool(model._g141));
    // Send _g141_e2
    cJSON_AddItemToObject(root, "_g141_e2", cJSON_CreateBool(model._g141_e2));
    // Send _g142
    cJSON_AddItemToObject(root, "_g142", cJSON_CreateBool(model._g142));
    // Send _g145
    cJSON_AddItemToObject(root, "_g145", cJSON_CreateBool(model._g145));
    // Send _g146
    cJSON_AddItemToObject(root, "_g146", cJSON_CreateBool(model._g146));
    // Send _g147
    cJSON_AddItemToObject(root, "_g147", cJSON_CreateBool(model._g147));
    // Send _g147_e3
    cJSON_AddItemToObject(root, "_g147_e3", cJSON_CreateBool(model._g147_e3));
    // Send _g148
    cJSON_AddItemToObject(root, "_g148", cJSON_CreateBool(model._g148));
    // Send _g149
    cJSON_AddItemToObject(root, "_g149", cJSON_CreateBool(model._g149));
    // Send _g15
    cJSON_AddItemToObject(root, "_g15", cJSON_CreateBool(model._g15));
    // Send _g150
    cJSON_AddItemToObject(root, "_g150", cJSON_CreateBool(model._g150));
    // Send _g151
    cJSON_AddItemToObject(root, "_g151", cJSON_CreateBool(model._g151));
    // Send _g155
    cJSON_AddItemToObject(root, "_g155", cJSON_CreateBool(model._g155));
    // Send _g156
    cJSON_AddItemToObject(root, "_g156", cJSON_CreateBool(model._g156));
    // Send _g16
    cJSON_AddItemToObject(root, "_g16", cJSON_CreateBool(model._g16));
    // Send _g161
    cJSON_AddItemToObject(root, "_g161", cJSON_CreateBool(model._g161));
    // Send _g162
    cJSON_AddItemToObject(root, "_g162", cJSON_CreateBool(model._g162));
    // Send _g162_e1
    cJSON_AddItemToObject(root, "_g162_e1", cJSON_CreateBool(model._g162_e1));
    // Send _g163
    cJSON_AddItemToObject(root, "_g163", cJSON_CreateBool(model._g163));
    // Send _g167
    cJSON_AddItemToObject(root, "_g167", cJSON_CreateBool(model._g167));
    // Send _g168
    cJSON_AddItemToObject(root, "_g168", cJSON_CreateBool(model._g168));
    // Send _g168_e2
    cJSON_AddItemToObject(root, "_g168_e2", cJSON_CreateBool(model._g168_e2));
    // Send _g169
    cJSON_AddItemToObject(root, "_g169", cJSON_CreateBool(model._g169));
    // Send _g170
    cJSON_AddItemToObject(root, "_g170", cJSON_CreateBool(model._g170));
    // Send _g173
    cJSON_AddItemToObject(root, "_g173", cJSON_CreateBool(model._g173));
    // Send _g177
    cJSON_AddItemToObject(root, "_g177", cJSON_CreateBool(model._g177));
    // Send _g178
    cJSON_AddItemToObject(root, "_g178", cJSON_CreateBool(model._g178));
    // Send _g178_e3
    cJSON_AddItemToObject(root, "_g178_e3", cJSON_CreateBool(model._g178_e3));
    // Send _g179
    cJSON_AddItemToObject(root, "_g179", cJSON_CreateBool(model._g179));
    // Send _g180
    cJSON_AddItemToObject(root, "_g180", cJSON_CreateBool(model._g180));
    // Send _g181
    cJSON_AddItemToObject(root, "_g181", cJSON_CreateBool(model._g181));
    // Send _g182
    cJSON_AddItemToObject(root, "_g182", cJSON_CreateBool(model._g182));
    // Send _g182_e1
    cJSON_AddItemToObject(root, "_g182_e1", cJSON_CreateBool(model._g182_e1));
    // Send _g183
    cJSON_AddItemToObject(root, "_g183", cJSON_CreateBool(model._g183));
    // Send _g186
    cJSON_AddItemToObject(root, "_g186", cJSON_CreateBool(model._g186));
    // Send _g187
    cJSON_AddItemToObject(root, "_g187", cJSON_CreateBool(model._g187));
    // Send _g187_e2
    cJSON_AddItemToObject(root, "_g187_e2", cJSON_CreateBool(model._g187_e2));
    // Send _g188
    cJSON_AddItemToObject(root, "_g188", cJSON_CreateBool(model._g188));
    // Send _g19
    cJSON_AddItemToObject(root, "_g19", cJSON_CreateBool(model._g19));
    // Send _g191
    cJSON_AddItemToObject(root, "_g191", cJSON_CreateBool(model._g191));
    // Send _g192
    cJSON_AddItemToObject(root, "_g192", cJSON_CreateBool(model._g192));
    // Send _g193
    cJSON_AddItemToObject(root, "_g193", cJSON_CreateBool(model._g193));
    // Send _g193_e3
    cJSON_AddItemToObject(root, "_g193_e3", cJSON_CreateBool(model._g193_e3));
    // Send _g195
    cJSON_AddItemToObject(root, "_g195", cJSON_CreateBool(model._g195));
    // Send _g196
    cJSON_AddItemToObject(root, "_g196", cJSON_CreateBool(model._g196));
    // Send _g197
    cJSON_AddItemToObject(root, "_g197", cJSON_CreateBool(model._g197));
    // Send _g20
    cJSON_AddItemToObject(root, "_g20", cJSON_CreateBool(model._g20));
    // Send _g205
    cJSON_AddItemToObject(root, "_g205", cJSON_CreateBool(model._g205));
    // Send _g20_e2
    cJSON_AddItemToObject(root, "_g20_e2", cJSON_CreateBool(model._g20_e2));
    // Send _g21
    cJSON_AddItemToObject(root, "_g21", cJSON_CreateBool(model._g21));
    // Send _g213
    cJSON_AddItemToObject(root, "_g213", cJSON_CreateBool(model._g213));
    // Send _g22
    cJSON_AddItemToObject(root, "_g22", cJSON_CreateBool(model._g22));
    // Send _g23
    cJSON_AddItemToObject(root, "_g23", cJSON_CreateBool(model._g23));
    // Send _g24
    cJSON_AddItemToObject(root, "_g24", cJSON_CreateBool(model._g24));
    // Send _g25
    cJSON_AddItemToObject(root, "_g25", cJSON_CreateBool(model._g25));
    // Send _g29
    cJSON_AddItemToObject(root, "_g29", cJSON_CreateBool(model._g29));
    // Send _g30
    cJSON_AddItemToObject(root, "_g30", cJSON_CreateBool(model._g30));
    // Send _g32
    cJSON_AddItemToObject(root, "_g32", cJSON_CreateBool(model._g32));
    // Send _g33
    cJSON_AddItemToObject(root, "_g33", cJSON_CreateBool(model._g33));
    // Send _g33_e1
    cJSON_AddItemToObject(root, "_g33_e1", cJSON_CreateBool(model._g33_e1));
    // Send _g35
    cJSON_AddItemToObject(root, "_g35", cJSON_CreateBool(model._g35));
    // Send _g37
    cJSON_AddItemToObject(root, "_g37", cJSON_CreateBool(model._g37));
    // Send _g38
    cJSON_AddItemToObject(root, "_g38", cJSON_CreateBool(model._g38));
    // Send _g39
    cJSON_AddItemToObject(root, "_g39", cJSON_CreateBool(model._g39));
    // Send _g39_e2
    cJSON_AddItemToObject(root, "_g39_e2", cJSON_CreateBool(model._g39_e2));
    // Send _g4
    cJSON_AddItemToObject(root, "_g4", cJSON_CreateBool(model._g4));
    // Send _g41
    cJSON_AddItemToObject(root, "_g41", cJSON_CreateBool(model._g41));
    // Send _g42
    cJSON_AddItemToObject(root, "_g42", cJSON_CreateBool(model._g42));
    // Send _g44
    cJSON_AddItemToObject(root, "_g44", cJSON_CreateBool(model._g44));
    // Send _g47
    cJSON_AddItemToObject(root, "_g47", cJSON_CreateBool(model._g47));
    // Send _g48
    cJSON_AddItemToObject(root, "_g48", cJSON_CreateBool(model._g48));
    // Send _g48_e3
    cJSON_AddItemToObject(root, "_g48_e3", cJSON_CreateBool(model._g48_e3));
    // Send _g49
    cJSON_AddItemToObject(root, "_g49", cJSON_CreateBool(model._g49));
    // Send _g5
    cJSON_AddItemToObject(root, "_g5", cJSON_CreateBool(model._g5));
    // Send _g53
    cJSON_AddItemToObject(root, "_g53", cJSON_CreateBool(model._g53));
    // Send _g54
    cJSON_AddItemToObject(root, "_g54", cJSON_CreateBool(model._g54));
    // Send _g56
    cJSON_AddItemToObject(root, "_g56", cJSON_CreateBool(model._g56));
    // Send _g58
    cJSON_AddItemToObject(root, "_g58", cJSON_CreateBool(model._g58));
    // Send _g59
    cJSON_AddItemToObject(root, "_g59", cJSON_CreateBool(model._g59));
    // Send _g59_e1
    cJSON_AddItemToObject(root, "_g59_e1", cJSON_CreateBool(model._g59_e1));
    // Send _g60
    cJSON_AddItemToObject(root, "_g60", cJSON_CreateBool(model._g60));
    // Send _g61
    cJSON_AddItemToObject(root, "_g61", cJSON_CreateBool(model._g61));
    // Send _g62
    cJSON_AddItemToObject(root, "_g62", cJSON_CreateBool(model._g62));
    // Send _g64
    cJSON_AddItemToObject(root, "_g64", cJSON_CreateBool(model._g64));
    // Send _g65
    cJSON_AddItemToObject(root, "_g65", cJSON_CreateBool(model._g65));
    // Send _g68
    cJSON_AddItemToObject(root, "_g68", cJSON_CreateBool(model._g68));
    // Send _g69
    cJSON_AddItemToObject(root, "_g69", cJSON_CreateBool(model._g69));
    // Send _g69_e2
    cJSON_AddItemToObject(root, "_g69_e2", cJSON_CreateBool(model._g69_e2));
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
    // Send _g78
    cJSON_AddItemToObject(root, "_g78", cJSON_CreateBool(model._g78));
    // Send _g79
    cJSON_AddItemToObject(root, "_g79", cJSON_CreateBool(model._g79));
    // Send _g82
    cJSON_AddItemToObject(root, "_g82", cJSON_CreateBool(model._g82));
    // Send _g83
    cJSON_AddItemToObject(root, "_g83", cJSON_CreateBool(model._g83));
    // Send _g83_e1
    cJSON_AddItemToObject(root, "_g83_e1", cJSON_CreateBool(model._g83_e1));
    // Send _g85
    cJSON_AddItemToObject(root, "_g85", cJSON_CreateBool(model._g85));
    // Send _g87
    cJSON_AddItemToObject(root, "_g87", cJSON_CreateBool(model._g87));
    // Send _g88
    cJSON_AddItemToObject(root, "_g88", cJSON_CreateBool(model._g88));
    // Send _g89
    cJSON_AddItemToObject(root, "_g89", cJSON_CreateBool(model._g89));
    // Send _g89_e2
    cJSON_AddItemToObject(root, "_g89_e2", cJSON_CreateBool(model._g89_e2));
    // Send _g9
    cJSON_AddItemToObject(root, "_g9", cJSON_CreateBool(model._g9));
    // Send _g90
    cJSON_AddItemToObject(root, "_g90", cJSON_CreateBool(model._g90));
    // Send _g91
    cJSON_AddItemToObject(root, "_g91", cJSON_CreateBool(model._g91));
    // Send _g92
    cJSON_AddItemToObject(root, "_g92", cJSON_CreateBool(model._g92));
    // Send _g93
    cJSON_AddItemToObject(root, "_g93", cJSON_CreateBool(model._g93));
    // Send _g94
    cJSON_AddItemToObject(root, "_g94", cJSON_CreateBool(model._g94));
    // Send _g97
    cJSON_AddItemToObject(root, "_g97", cJSON_CreateBool(model._g97));
    // Send _g98
    cJSON_AddItemToObject(root, "_g98", cJSON_CreateBool(model._g98));
    // Send _g98_e3
    cJSON_AddItemToObject(root, "_g98_e3", cJSON_CreateBool(model._g98_e3));
    // Send _g99
    cJSON_AddItemToObject(root, "_g99", cJSON_CreateBool(model._g99));
    // Send _g99_e1
    cJSON_AddItemToObject(root, "_g99_e1", cJSON_CreateBool(model._g99_e1));
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
    // Send _pacemaker_local__CFSterm
    cJSON_AddItemToObject(root, "_pacemaker_local__CFSterm", cJSON_CreateBool(model._pacemaker_local__CFSterm));
    // Send _pacemaker_local__CFSterm1
    cJSON_AddItemToObject(root, "_pacemaker_local__CFSterm1", cJSON_CreateBool(model._pacemaker_local__CFSterm1));
    // Send _pacemaker_local__CFSterm2
    cJSON_AddItemToObject(root, "_pacemaker_local__CFSterm2", cJSON_CreateBool(model._pacemaker_local__CFSterm2));
    // Send _pacemaker_local_x
    cJSON_AddItemToObject(root, "_pacemaker_local_x", cJSON_CreateNumber(model._pacemaker_local_x));
    // Send _pacemaker_local_x1
    cJSON_AddItemToObject(root, "_pacemaker_local_x1", cJSON_CreateNumber(model._pacemaker_local_x1));
    // Send _pacemaker_local_x2
    cJSON_AddItemToObject(root, "_pacemaker_local_x2", cJSON_CreateNumber(model._pacemaker_local_x2));
    // Send _pg109
    cJSON_AddItemToObject(root, "_pg109", cJSON_CreateBool(model._pg109));
    // Send _pg110
    cJSON_AddItemToObject(root, "_pg110", cJSON_CreateBool(model._pg110));
    // Send _pg111
    cJSON_AddItemToObject(root, "_pg111", cJSON_CreateBool(model._pg111));
    // Send _pg12
    cJSON_AddItemToObject(root, "_pg12", cJSON_CreateBool(model._pg12));
    // Send _pg124
    cJSON_AddItemToObject(root, "_pg124", cJSON_CreateBool(model._pg124));
    // Send _pg133
    cJSON_AddItemToObject(root, "_pg133", cJSON_CreateBool(model._pg133));
    // Send _pg136
    cJSON_AddItemToObject(root, "_pg136", cJSON_CreateBool(model._pg136));
    // Send _pg146
    cJSON_AddItemToObject(root, "_pg146", cJSON_CreateBool(model._pg146));
    // Send _pg147_e3
    cJSON_AddItemToObject(root, "_pg147_e3", cJSON_CreateBool(model._pg147_e3));
    // Send _pg149
    cJSON_AddItemToObject(root, "_pg149", cJSON_CreateBool(model._pg149));
    // Send _pg150
    cJSON_AddItemToObject(root, "_pg150", cJSON_CreateBool(model._pg150));
    // Send _pg155
    cJSON_AddItemToObject(root, "_pg155", cJSON_CreateBool(model._pg155));
    // Send _pg156
    cJSON_AddItemToObject(root, "_pg156", cJSON_CreateBool(model._pg156));
    // Send _pg163
    cJSON_AddItemToObject(root, "_pg163", cJSON_CreateBool(model._pg163));
    // Send _pg170
    cJSON_AddItemToObject(root, "_pg170", cJSON_CreateBool(model._pg170));
    // Send _pg193
    cJSON_AddItemToObject(root, "_pg193", cJSON_CreateBool(model._pg193));
    // Send _pg195
    cJSON_AddItemToObject(root, "_pg195", cJSON_CreateBool(model._pg195));
    // Send _pg196
    cJSON_AddItemToObject(root, "_pg196", cJSON_CreateBool(model._pg196));
    // Send _pg197
    cJSON_AddItemToObject(root, "_pg197", cJSON_CreateBool(model._pg197));
    // Send _pg25
    cJSON_AddItemToObject(root, "_pg25", cJSON_CreateBool(model._pg25));
    // Send _pg37
    cJSON_AddItemToObject(root, "_pg37", cJSON_CreateBool(model._pg37));
    // Send _pg42
    cJSON_AddItemToObject(root, "_pg42", cJSON_CreateBool(model._pg42));
    // Send _pg44
    cJSON_AddItemToObject(root, "_pg44", cJSON_CreateBool(model._pg44));
    // Send _pg48
    cJSON_AddItemToObject(root, "_pg48", cJSON_CreateBool(model._pg48));
    // Send _pg48_e3
    cJSON_AddItemToObject(root, "_pg48_e3", cJSON_CreateBool(model._pg48_e3));
    // Send _pg49
    cJSON_AddItemToObject(root, "_pg49", cJSON_CreateBool(model._pg49));
    // Send _pg54
    cJSON_AddItemToObject(root, "_pg54", cJSON_CreateBool(model._pg54));
    // Send _pg62
    cJSON_AddItemToObject(root, "_pg62", cJSON_CreateBool(model._pg62));
    // Send _pg69_e2
    cJSON_AddItemToObject(root, "_pg69_e2", cJSON_CreateBool(model._pg69_e2));
    // Send _pg7
    cJSON_AddItemToObject(root, "_pg7", cJSON_CreateBool(model._pg7));
    // Send _pg72
    cJSON_AddItemToObject(root, "_pg72", cJSON_CreateBool(model._pg72));
    // Send _pg73
    cJSON_AddItemToObject(root, "_pg73", cJSON_CreateBool(model._pg73));
    // Send _pg79
    cJSON_AddItemToObject(root, "_pg79", cJSON_CreateBool(model._pg79));
    // Send _pg90
    cJSON_AddItemToObject(root, "_pg90", cJSON_CreateBool(model._pg90));
    // Send _pg93
    cJSON_AddItemToObject(root, "_pg93", cJSON_CreateBool(model._pg93));
    // Send _pg98
    cJSON_AddItemToObject(root, "_pg98", cJSON_CreateBool(model._pg98));
    // Send _region0_null_x
    cJSON_AddItemToObject(root, "_region0_null_x", cJSON_CreateNumber(model._region0_null_x));
    // Send _region1_null_x
    cJSON_AddItemToObject(root, "_region1_null_x", cJSON_CreateNumber(model._region1_null_x));
    // Send _region2_null_x
    cJSON_AddItemToObject(root, "_region2_null_x", cJSON_CreateNumber(model._region2_null_x));
    // Send _taken_transitions
    array = cJSON_CreateArray();
    for (int i0 = 0; i0 < 19; i0++) {
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
        cJSON_AddItemToObject(interface, "_cg101", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg109", info);
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
        cJSON_AddItemToObject(interface, "_cg113", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg115", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg117", info);
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
        cJSON_AddItemToObject(interface, "_cg119", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg12", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg121", info);
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
        cJSON_AddItemToObject(interface, "_cg124", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg125", info);
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
        cJSON_AddItemToObject(interface, "_cg128", info);
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
        cJSON_AddItemToObject(interface, "_cg131", info);
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
        cJSON_AddItemToObject(interface, "_cg140", info);
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
        cJSON_AddItemToObject(interface, "_cg145", info);
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
        cJSON_AddItemToObject(interface, "_cg149", info);
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
        cJSON_AddItemToObject(interface, "_cg155", info);
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
        cJSON_AddItemToObject(interface, "_cg16", info);
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
        cJSON_AddItemToObject(interface, "_cg163", info);
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
        cJSON_AddItemToObject(interface, "_cg165", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg167", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg169", info);
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
        cJSON_AddItemToObject(interface, "_cg171", info);
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
        cJSON_AddItemToObject(interface, "_cg177", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg179", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg181", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg184", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg186", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg188", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg19", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg191", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg194", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg195", info);
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
        cJSON_AddItemToObject(interface, "_cg29", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg32", info);
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
        cJSON_AddItemToObject(interface, "_cg42", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg47", info);
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
        cJSON_AddItemToObject(interface, "_cg58", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg6", info);
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
        cJSON_AddItemToObject(interface, "_cg61", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg62", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg64", info);
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
        cJSON_AddItemToObject(interface, "_cg68", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg7", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg70", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg72", info);
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
        cJSON_AddItemToObject(interface, "_cg82", info);
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
        cJSON_AddItemToObject(interface, "_cg88", info);
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
        cJSON_AddItemToObject(interface, "_cg97", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g10", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g101", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g102", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g102_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g104", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g105", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g109", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g10_e1", info);
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
        cJSON_AddItemToObject(interface, "_g111", info);
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
        cJSON_AddItemToObject(interface, "_g116", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g116_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g117", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g119", info);
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
        cJSON_AddItemToObject(interface, "_g121", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g122", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g122_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g123", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g124", info);
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
        cJSON_AddItemToObject(interface, "_g127", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g128", info);
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
        cJSON_AddItemToObject(interface, "_g132", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g132_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g133", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g134", info);
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
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g136_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g137", info);
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
        cJSON_AddItemToObject(interface, "_g141", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g141_e2", info);
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
        cJSON_AddItemToObject(interface, "_g145", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g146", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g147", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g147_e3", info);
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
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g15", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g150", info);
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
        cJSON_AddItemToObject(interface, "_g155", info);
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
        cJSON_AddItemToObject(interface, "_g16", info);
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
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g162_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g163", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g167", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g168", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g168_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g169", info);
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
        cJSON_AddItemToObject(interface, "_g173", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g177", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g178", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g178_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g179", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g180", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g181", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g182", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g182_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g183", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g186", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g187", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g187_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g188", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g19", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g191", info);
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
        cJSON_AddItemToObject(interface, "_g193", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g193_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g195", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g196", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g197", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g20", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g205", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g20_e2", info);
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
        cJSON_AddItemToObject(interface, "_g213", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g22", info);
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
        cJSON_AddItemToObject(interface, "_g29", info);
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
        cJSON_AddItemToObject(interface, "_g32", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g33", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g33_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g35", info);
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
        cJSON_AddItemToObject(interface, "_g39_e2", info);
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
        cJSON_AddItemToObject(interface, "_g41", info);
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
        cJSON_AddItemToObject(interface, "_g44", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g47", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g48", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g48_e3", info);
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
        cJSON_AddItemToObject(interface, "_g53", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g54", info);
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
        cJSON_AddItemToObject(interface, "_g58", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g59", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g59_e1", info);
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
        cJSON_AddItemToObject(interface, "_g61", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g62", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g64", info);
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
        cJSON_AddItemToObject(interface, "_g68", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g69", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g69_e2", info);
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
        cJSON_AddItemToObject(interface, "_g82", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g83", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g83_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g85", info);
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
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g89", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g89_e2", info);
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
        cJSON_AddItemToObject(interface, "_g91", info);
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
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g98_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g99", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g99_e1", info);
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
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local__CFSterm2", info);
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
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pacemaker_local_x2", info);
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
        cJSON_AddItemToObject(interface, "_pg110", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg111", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg12", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg124", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg133", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg136", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg146", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg147_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg149", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg150", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg155", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg156", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg163", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg170", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg193", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg195", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg196", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg197", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg25", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg37", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg42", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg44", info);
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
        cJSON_AddItemToObject(interface, "_pg48_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg49", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg54", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg62", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg69_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg7", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg72", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg73", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg79", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg90", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg93", info);
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
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_region1_null_x", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_region2_null_x", info);
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
