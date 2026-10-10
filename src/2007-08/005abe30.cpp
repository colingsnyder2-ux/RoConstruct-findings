// from server: 64% by colin
// roc 2007-08 005abe30  unit: RBX::World  size: 115 bytes
// library rbxgs/util\Math.cpp (function ?rotationToByte@Math@RBX@@SAEM@Z)

extern float g_math_rotScale;
extern float g_math_rotOffset;
extern float g_math_rotDiv;
extern unsigned int g_math_rotInit;

unsigned char __stdcall rotationToByte(float angle)
{
    if (!(g_math_rotInit & 1))
    {
        g_math_rotDiv = g_math_rotScale;
        g_math_rotInit |= 1;
    }

    float v = (angle + g_math_rotOffset) / g_math_rotDiv;
    int i = (int)v;
    if (i <= 0)
        i = 0;
    if (i >= 0xff)
        i = 0xff;
    return (unsigned char)i;
}
