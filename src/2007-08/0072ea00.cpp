// from server: 95% by colin
// roc 2007-08 0072ea00  unit: seg_00720000  size: 644 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072ea00

struct Adler32 {
    unsigned int Update(unsigned int adler, const unsigned char* data, unsigned int len);
};

unsigned int Adler32::Update(unsigned int adler, const unsigned char* data, unsigned int len)
{
    unsigned int s1 = adler & 0xffff;
    unsigned int s2 = (adler >> 16) & 0xffff;

    if (len == 1)
    {
        s1 += data[0];
        if (s1 >= 0xfff1)
            s1 -= 0xfff1;
        s2 += s1;
        if (s2 >= 0xfff1)
            s2 -= 0xfff1;
        return (s2 << 16) | s1;
    }

    if (data == 0)
        return 1;

    if (len < 16)
    {
        while (len != 0)
        {
            s1 += *data++;
            s2 += s1;
            len--;
        }
        if (s1 >= 0xfff1)
            s1 -= 0xfff1;
        {
            unsigned int q = s2 / 0xfff1;
            s2 -= q * 0xfff1;
        }
        return (s2 << 16) | s1;
    }

    if (len >= 0x15b0)
    {
        unsigned int n = len / 0x15b0;
        do
        {
            len -= 0x15b0;
            unsigned int k = 0x15b;
            do
            {
                s1 += data[0];  s2 += s1;
                s1 += data[1];  s2 += s1;
                s1 += data[2];  s2 += s1;
                s1 += data[3];  s2 += s1;
                s1 += data[4];  s2 += s1;
                s1 += data[5];  s2 += s1;
                s1 += data[6];  s2 += s1;
                s1 += data[7];  s2 += s1;
                s1 += data[8];  s2 += s1;
                s1 += data[9];  s2 += s1;
                s1 += data[10]; s2 += s1;
                s1 += data[11]; s2 += s1;
                s1 += data[12]; s2 += s1;
                s1 += data[13]; s2 += s1;
                s1 += data[14]; s2 += s1;
                s1 += data[15]; s2 += s1;
                data += 16;
                k--;
            } while (k != 0);
            {
                unsigned int q = s1 / 0xfff1;
                s1 -= q * 0xfff1;
            }
            {
                unsigned int q = s2 / 0xfff1;
                s2 -= q * 0xfff1;
            }
            n--;
        } while (n != 0);
    }

    if (len != 0)
    {
        if (len >= 16)
        {
            unsigned int n = len >> 4;
            do
            {
                s1 += data[0];  s2 += s1;
                s1 += data[1];  s2 += s1;
                s1 += data[2];  s2 += s1;
                s1 += data[3];  s2 += s1;
                s1 += data[4];  s2 += s1;
                s1 += data[5];  s2 += s1;
                s1 += data[6];  s2 += s1;
                s1 += data[7];  s2 += s1;
                s1 += data[8];  s2 += s1;
                s1 += data[9];  s2 += s1;
                s1 += data[10]; s2 += s1;
                s1 += data[11]; s2 += s1;
                s1 += data[12]; s2 += s1;
                s1 += data[13]; s2 += s1;
                s1 += data[14]; s2 += s1;
                s1 += data[15]; s2 += s1;
                len -= 16;
                data += 16;
                n--;
            } while (n != 0);
        }
        while (len != 0)
        {
            s1 += *data++;
            s2 += s1;
            len--;
        }
        {
            unsigned int q = s1 / 0xfff1;
            s1 -= q * 0xfff1;
        }
        {
            unsigned int q = s2 / 0xfff1;
            s2 -= q * 0xfff1;
        }
    }

    return (s2 << 16) | s1;
}
