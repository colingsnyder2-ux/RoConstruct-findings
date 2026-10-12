// from server: 43% by colin
struct Vec2 {
    float x;
    float y;
};

struct DxUserInput {
    void update(Vec2* pos, Vec2* delta, int dt);
};

extern "C" void __cdecl func_005cf000(float* out, float x, float y);
extern "C" void __cdecl func_00469fa0(float* out, float* a, float* b, float* c);

extern float g_scale;

void DxUserInput::update(Vec2* pos, Vec2* delta, int dt)
{
    float scaledX = g_scale * delta->x;
    float scaledY = g_scale * delta->y;

    float fdt = (float)dt;

    float a0 = -fdt + scaledX;
    float a1 = -scaledY + fdt;
    float a2 = scaledX + fdt;
    float a3 = scaledY + fdt;

    float out0, out1, out2, out3;
    func_005cf000(&out0, pos->x, pos->y);
    out1 = pos->y;
    out2 = pos->x;
    out3 = pos->y;

    float r0, r1, r2, r3;
    func_00469fa0(&r0, &a0, &a1, &a2);

    float dx = r0 - out0;
    float dy = r1 - out1;

    pos->x = pos->x + dx * fdt;
    pos->y = pos->y + dy * fdt;

    delta->x = delta->x + dx;
    delta->y = delta->y + dy;
}
