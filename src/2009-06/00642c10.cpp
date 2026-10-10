// from server: 89% by atomic.potato
struct S
{
    void f(float* result);
};

extern "C" void __cdecl sub_642ba0(float* value);

void S::f(float* result)
{
    float value[3];
    sub_642ba0(value);
    result[0] = value[0];
    result[1] = value[1];
    result[2] = value[2];
}
