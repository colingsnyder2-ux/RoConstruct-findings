// from server: 78% by atomic.potato
extern "C" void __cdecl sub_00649a50(const char*, double, void*);

struct S_func_00649b00
{
    void f(float*);
};

void S_func_00649b00::f(float* value)
{
    double x = *value;
    sub_00649a50("%.3g", x, this);
}
