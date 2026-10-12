// from server: 68% by king_originala
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

    if (readOffset + 1 <= bitCount)
    {
        negativeW = (data[readOffset >> 3] &
                     (0x80 >> (readOffset & 7))) != 0;
        ++readOffset;
    }

    if (readOffset + 1 <= bitCount)
    {
        negativeX = (data[readOffset >> 3] &
                     (0x80 >> (readOffset & 7))) != 0;
        ++readOffset;
    }

    if (readOffset + 1 <= bitCount)
    {
        negativeY = (data[readOffset >> 3] &
                     (0x80 >> (readOffset & 7))) != 0;
        ++readOffset;
    }

    if (readOffset + 1 <= bitCount)
    {
        negativeZ = (data[readOffset >> 3] &
                     (0x80 >> (readOffset & 7))) != 0;
        ++readOffset;
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
    w = (float)(remainder <= 0.0
                    ? 0.0
                    : (negativeW ? -sqrt(remainder) : sqrt(remainder)));
    return true;
}
