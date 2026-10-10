// from server: 78% by colin
// roc 2007-08 0072cec0  unit: seg_00720000  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072cec0

extern unsigned int crc_table[256];

unsigned int __fastcall crc32_update(unsigned int crc, const unsigned char* buf, unsigned int len)
{
    unsigned int c = ~crc;
    unsigned int n;

    while (len != 0 && ((unsigned int)buf & 3) != 0)
    {
        c = crc_table[(c ^ *buf) & 0xff] ^ (c >> 8);
        buf++;
        len--;
    }

    if (len >= 0x20)
    {
        n = len >> 5;
        do
        {
            c ^= *(unsigned int*)(buf);
            buf += 4;
            c = crc_table[(c >> 16) & 0xff] ^ crc_table[(c >> 8) & 0xff] ^ crc_table[(c >> 24) & 0xff] ^ crc_table[c & 0xff] ^ *(unsigned int*)(buf);
            buf += 4;
            c = crc_table[(c >> 16) & 0xff] ^ crc_table[(c >> 8) & 0xff] ^ crc_table[(c >> 24) & 0xff] ^ crc_table[c & 0xff] ^ *(unsigned int*)(buf);
            buf += 4;
            c = crc_table[(c >> 16) & 0xff] ^ crc_table[(c >> 8) & 0xff] ^ crc_table[(c >> 24) & 0xff] ^ crc_table[c & 0xff] ^ *(unsigned int*)(buf);
            buf += 4;
            c = crc_table[(c >> 16) & 0xff] ^ crc_table[(c >> 8) & 0xff] ^ crc_table[(c >> 24) & 0xff] ^ crc_table[c & 0xff] ^ *(unsigned int*)(buf);
            buf += 4;
            c = crc_table[(c >> 16) & 0xff] ^ crc_table[(c >> 8) & 0xff] ^ crc_table[(c >> 24) & 0xff] ^ crc_table[c & 0xff] ^ *(unsigned int*)(buf);
            buf += 4;
            c = crc_table[(c >> 16) & 0xff] ^ crc_table[(c >> 8) & 0xff] ^ crc_table[(c >> 24) & 0xff] ^ crc_table[c & 0xff] ^ *(unsigned int*)(buf);
            buf += 4;
            c = crc_table[(c >> 16) & 0xff] ^ crc_table[(c >> 8) & 0xff] ^ crc_table[(c >> 24) & 0xff] ^ crc_table[c & 0xff] ^ *(unsigned int*)(buf);
            buf += 4;
            c = crc_table[(c >> 16) & 0xff] ^ crc_table[(c >> 8) & 0xff] ^ crc_table[(c >> 24) & 0xff] ^ crc_table[c & 0xff] ^ *(unsigned int*)(buf);
            buf += 4;
            len -= 32;
            n--;
        } while (n != 0);
    }

    if (len >= 4)
    {
        n = len >> 2;
        do
        {
            c ^= *(unsigned int*)(buf);
            buf += 4;
            c = crc_table[(c >> 16) & 0xff] ^ crc_table[(c >> 8) & 0xff] ^ crc_table[(c >> 24) & 0xff] ^ crc_table[c & 0xff];
            len -= 4;
            n--;
        } while (n != 0);
    }

    while (len != 0)
    {
        c = crc_table[(c ^ *buf) & 0xff] ^ (c >> 8);
        buf++;
        len--;
    }

    return ~c;
}
