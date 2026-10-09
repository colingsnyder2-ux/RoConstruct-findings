// from server: 67% by colin
// roc 2007-08 005e91d0  unit: seg_005e0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e91d0

extern float g_78fef0;
extern char g_8c6f54;

struct Explosion {
    char pad[0x10c];
    float field_10c;
    void setBlastRadius(float value);
};

void Explosion::setBlastRadius(float value)
{
    float v = value;
    if (v < 0.0f)
        v = 0.0f;
    if (v > g_78fef0)
        v = g_78fef0;
    if (v != field_10c)
    {
        field_10c = v;
        g_8c6f54 = 0;
        ((void (__stdcall *)(void *))0x444710)(&g_8c6f54);
    }
}
