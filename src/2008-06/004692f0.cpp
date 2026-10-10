// from server: 90% by atomic.potato
extern "C" float* __cdecl getShaderValue();

struct DxUserInput
{
    float x;
    float y;
    void __cdecl f(float* a, float* b);
};

void __cdecl DxUserInput::f(float* a, float* b)
{
    float* value = getShaderValue();
    a[0] = value[0];
    a[1] = value[1];
    b[0] += a[0];
    b[1] += a[1];
}
