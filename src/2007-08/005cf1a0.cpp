// from server: 64% by colin
struct Kernel;

struct IStage {
    char pad0[0x0c];
    void* field_0c;
    float field_10;
    float field_14;
    float field_18;
    float field_1c;
    float field_20;
    float field_24;
    float field_28;
    float field_2c;
    float field_30;
    void update();
};

extern float g_unk_8bd12c;
extern float g_unk_8bd130;
extern float g_unk_8bd134;
extern unsigned int g_unk_8bd138;

extern "C" void sub_530100(void* self);

void IStage::update()
{
    void* p = field_0c;
    sub_530100(p);

    float* pf = (float*)p;
    float a = pf[0x8c/4] * field_18 + pf[0x88/4] * field_14 + field_10 * pf[0x84/4] + pf[0xa8/4];
    float b = pf[0x98/4] * field_18 + pf[0x90/4] * field_10 + pf[0x94/4] * field_14 + pf[0xac/4];
    float c = pf[0xa4/4] * field_18 + pf[0x9c/4] * field_10 + pf[0xa0/4] * field_14 + pf[0xb0/4];

    field_1c = a;
    field_20 = b;
    field_24 = c;

    if ((g_unk_8bd138 & 1) == 0) {
        g_unk_8bd138 |= 1;
        g_unk_8bd12c = 0.0f;
        g_unk_8bd130 = 0.0f;
        g_unk_8bd134 = 0.0f;
    }

    field_28 = g_unk_8bd12c;
    field_2c = g_unk_8bd130;
    field_30 = g_unk_8bd134;
}
