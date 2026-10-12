// from server: 94% by king_originala
extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

struct S {
    void Write0();
    void Write1();
    void WriteBits(const unsigned char*, int, bool);
    void WriteNormQuat(float w, float x, float y, float z);
};

void S::WriteNormQuat(float w, float x, float y, float z)
{
    if (w < 0.0f)
        Write1();
    else
        Write0();

    if (x < 0.0f)
        Write1();
    else
        Write0();

    if (y < 0.0f)
        Write1();
    else
        Write0();

    if (z < 0.0f)
        Write1();
    else
        Write0();

    unsigned short value = (unsigned short)(fabs(x) * 65535.0);
    WriteBits((const unsigned char*)&value, 16, true);

    value = (unsigned short)(fabs(y) * 65535.0);
    WriteBits((const unsigned char*)&value, 16, true);

    value = (unsigned short)(fabs(z) * 65535.0);
    WriteBits((const unsigned char*)&value, 16, true);
}
