// from server: 99% by king_originala
#pragma float_control(precise, off)

struct BlockBlockContact {
    char pad[4];
    int field4;
};

extern volatile float g_96f044, g_96f048, g_96f04c;
extern unsigned int g_96f050;

void __cdecl sub_60fef0(BlockBlockContact* self, float* out);
bool __cdecl sub_610130(BlockBlockContact* self, float* v);
void __cdecl sub_610440(BlockBlockContact* self, float* out, float* v);

void __cdecl sub_610930(float* out, BlockBlockContact* self, float* v, float* context) {
    float local[3];
    local[0] = 0.0f;
    local[1] = 0.0f;
    local[2] = 0.0f;

    if (self->field4 == 0) {
        if ((g_96f050 & 1) == 0) {
            g_96f050 |= 1;
            g_96f044 = 0.0f;
            g_96f048 = 0.0f;
            g_96f04c = 0.0f;
        }
        out[0] = g_96f044;
        out[1] = g_96f048;
        out[2] = g_96f04c;
        return;
    }

    if ((g_96f050 & 1) == 0) {
        g_96f050 |= 1;
        g_96f044 = 0.0f;
        g_96f048 = 0.0f;
        g_96f04c = 0.0f;
    }

    if (g_96f044 != v[0] || g_96f048 != v[1] || g_96f04c != v[2]) {
        sub_60fef0(self, v);
        local[0] = v[0] + local[0];
        local[1] = v[1] + local[1];
        local[2] = v[2] + local[2];
    }

    if (sub_610130(self, context)) {
        sub_610440(self, local, context);
    }

    out[0] = local[0];
    out[1] = local[1];
    out[2] = local[2];
}
