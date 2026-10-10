// from server: 60% by colin
// roc 2007-08 00723030  unit: CXTIconHandle  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00723030

extern unsigned int crc_table_0[256];
extern unsigned int crc_table_1[256];
extern unsigned int crc_table_2[256];
extern unsigned int crc_table_3[256];

struct CXTIconHandle {
    unsigned int hash(const unsigned char *data, unsigned int len, unsigned int seed) const;
};

unsigned int CXTIconHandle::hash(const unsigned char *data, unsigned int len, unsigned int seed) const {
    unsigned int crc = ~seed;
    while (len != 0 && ((unsigned int)data & 3) != 0) {
        crc = crc_table_0[(crc ^ *data) & 0xff] ^ (crc >> 8);
        data++;
        len--;
    }
    if (len >= 32) {
        unsigned int blocks = len >> 5;
        do {
            crc ^= *(const unsigned int *)(data);
            data += 4;
            crc = crc_table_3[crc & 0xff] ^ crc_table_2[(crc >> 8) & 0xff] ^
                  crc_table_1[(crc >> 16) & 0xff] ^ crc_table_0[(crc >> 24) & 0xff] ^
                  *(const unsigned int *)(data);
            data += 4;
            crc = crc_table_3[crc & 0xff] ^ crc_table_2[(crc >> 8) & 0xff] ^
                  crc_table_1[(crc >> 16) & 0xff] ^ crc_table_0[(crc >> 24) & 0xff] ^
                  *(const unsigned int *)(data);
            data += 4;
            crc = crc_table_3[crc & 0xff] ^ crc_table_2[(crc >> 8) & 0xff] ^
                  crc_table_1[(crc >> 16) & 0xff] ^ crc_table_0[(crc >> 24) & 0xff] ^
                  *(const unsigned int *)(data);
            data += 4;
            crc = crc_table_3[crc & 0xff] ^ crc_table_2[(crc >> 8) & 0xff] ^
                  crc_table_1[(crc >> 16) & 0xff] ^ crc_table_0[(crc >> 24) & 0xff] ^
                  *(const unsigned int *)(data);
            data += 4;
            crc = crc_table_3[crc & 0xff] ^ crc_table_2[(crc >> 8) & 0xff] ^
                  crc_table_1[(crc >> 16) & 0xff] ^ crc_table_0[(crc >> 24) & 0xff] ^
                  *(const unsigned int *)(data);
            data += 4;
            crc = crc_table_3[crc & 0xff] ^ crc_table_2[(crc >> 8) & 0xff] ^
                  crc_table_1[(crc >> 16) & 0xff] ^ crc_table_0[(crc >> 24) & 0xff] ^
                  *(const unsigned int *)(data);
            data += 4;
            crc = crc_table_3[crc & 0xff] ^ crc_table_2[(crc >> 8) & 0xff] ^
                  crc_table_1[(crc >> 16) & 0xff] ^ crc_table_0[(crc >> 24) & 0xff] ^
                  *(const unsigned int *)(data);
            data += 4;
            crc = crc_table_3[crc & 0xff] ^ crc_table_2[(crc >> 8) & 0xff] ^
                  crc_table_1[(crc >> 16) & 0xff] ^ crc_table_0[(crc >> 24) & 0xff] ^
                  *(const unsigned int *)(data);
            data += 4;
            len -= 32;
            blocks--;
        } while (blocks != 0);
    }
    if (len >= 4) {
        unsigned int words = len >> 2;
        do {
            crc ^= *(const unsigned int *)(data);
            data += 4;
            crc = crc_table_3[crc & 0xff] ^ crc_table_2[(crc >> 8) & 0xff] ^
                  crc_table_1[(crc >> 16) & 0xff] ^ crc_table_0[(crc >> 24) & 0xff];
            len -= 4;
            words--;
        } while (words != 0);
    }
    while (len != 0) {
        crc = crc_table_0[(crc ^ *data) & 0xff] ^ (crc >> 8);
        data++;
        len--;
    }
    return ~crc;
}
