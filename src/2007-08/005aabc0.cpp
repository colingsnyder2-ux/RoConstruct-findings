// from server: 80% by colin
// roc 2007-08 005aabc0  unit: RBX::World  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aabc0

extern float g_5aabf8;
extern float g_7b58f0;
extern float g_8c5a18;
extern unsigned int g_8c5a1c;

struct World {
};

float __cdecl f(int a)
{
    unsigned char b = (unsigned char)a;
    int v = (int)b;
    float r = (float)v;
    if (!(g_8c5a1c & 1)) {
        g_8c5a18 = g_7b58f0;
        g_8c5a1c |= 1;
    }
    return r * g_8c5a18 - g_5aabf8;
}
