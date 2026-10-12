// from server: 61% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct S
{
    int bitCount;
    int capacity;
    int readOffset;
    unsigned char* data;

    bool readBits(unsigned char* output, int count, bool rightAligned);
    bool readQuaternion(float& w, float& x, float& y, float& z);
};

bool S::readQuaternion(float& w, float& x, float& y, float& z)
{
    bool negativeW, negativeX, negativeY, negativeZ;
    unsigned short encodedX, encodedY, encodedZ;
    int offset, next;

    offset = readOffset;
    next = offset + 1;
    if (next <= bitCount)
    {
        bool value = ((0x80 >> (offset & 7)) & data[offset >> 3]) != 0;
        readOffset = next;
        negativeW = value;
    }

    offset = readOffset;
    next = offset + 1;
    if (next <= bitCount)
    {
        bool value = ((0x80 >> (offset & 7)) & data[offset >> 3]) != 0;
        readOffset = next;
        negativeX = value;
    }

    offset = readOffset;
    next = offset + 1;
    if (next <= bitCount)
    {
        bool value = ((0x80 >> (offset & 7)) & data[offset >> 3]) != 0;
        readOffset = next;
        negativeY = value;
    }

    offset = readOffset;
    next = offset + 1;
    if (next <= bitCount)
    {
        bool value = ((0x80 >> (offset & 7)) & data[offset >> 3]) != 0;
        readOffset = next;
        negativeZ = value;
    }

    readBits((unsigned char*)&encodedX, 16, true);
    readBits((unsigned char*)&encodedY, 16, true);
    if (!readBits((unsigned char*)&encodedZ, 16, true))
        return false;

    x = negativeX ? -(encodedX * (1.0 / 65535.0))
                  : encodedX * (1.0 / 65535.0);
    y = negativeY ? -(encodedY * (1.0 / 65535.0))
                  : encodedY * (1.0 / 65535.0);
    z = negativeZ ? -(encodedZ * (1.0 / 65535.0))
                  : encodedZ * (1.0 / 65535.0);

    double remainder = 1.0 - x * x - y * y - z * z;
    double result = 0.0;
    if (remainder <= result)
        w = (float)result;
    else
    {
        result = sqrt(remainder);
        if (negativeW)
            result = -result;
        w = (float)result;
    }
    return true;
}
