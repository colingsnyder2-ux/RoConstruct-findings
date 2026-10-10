// from server: 57% by atomic.potato
extern "C" void __stdcall sub_00959860(float *value, void *arg);

struct AdvRunDragger
{
    void f(void *arg);
};

void AdvRunDragger::f(void *arg)
{
    float value = 0.0f;
    sub_00959860(&value, arg);
}
