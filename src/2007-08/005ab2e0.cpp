// from server: 71% by colin
// roc 2007-08 005ab2e0  unit: seg_005a0000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ab2e0

extern float g_797b2c;
extern float g_79646c;
extern float g_797b28;

float __stdcall sub_631352(float);

struct World {
    char pad[4];
    float field_4;
    float getValue();
};

float World::getValue()
{
    if (1.0f == field_4)
        return g_797b2c;
    if (g_79646c <= field_4)
        return g_797b28;
    return sub_631352(field_4);
}
