// from server: 36% by tester
struct RBX_AdornRbxGfx_IndexBox {
    float x;
    float y;
};

struct RBX_AdornRbxGfx {
    void f(float a, float b, float c, float d, float e, RBX_AdornRbxGfx_IndexBox* out);
};

extern "C" void __stdcall sub_684640(float* out, float a, float b, float c, float d, float e);

void RBX_AdornRbxGfx::f(float a, float b, float c, float d, float e, RBX_AdornRbxGfx_IndexBox* out)
{
    float tmp[2];
    sub_684640(tmp, a, b, c, d, e);
    out->x = tmp[0];
    out->y = tmp[1];
}
