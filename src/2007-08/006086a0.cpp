// from server: 63% by colin
// roc 2007-08 006086a0  unit: RBX::ClumpStage  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006086a0

extern float g_795c00;
extern float g_7c2cac;
extern float g_7c2ca8;
extern float g_7c2ca4;
extern float g_7bcf18;
extern float g_7c2ca0;
extern float g_7c2c9c;
extern float g_7c2b6c;

struct RBX_ClumpStage
{
    float classify(float value) const;
};

float RBX_ClumpStage::classify(float value) const
{
    if (value == g_795c00)
        return g_7c2cac;
    if (value >= g_7c2ca8)
        return g_7c2ca4;
    if (value >= g_7bcf18)
        return g_7c2ca0;
    if (value == g_7c2c9c)
        return g_7c2b6c;
    return 1.0f;
}
