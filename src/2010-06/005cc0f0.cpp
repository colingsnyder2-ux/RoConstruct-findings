// from server: 69% by atomic.potato
struct S_func_005cc0f0 {
    float f();
};

extern "C" float sub_0070aaa0(S_func_005cc0f0 *);
extern "C" float sub_0070b370(S_func_005cc0f0 *);

float S_func_005cc0f0::f()
{
    float a = sub_0070aaa0(this);
    return a + sub_0070b370(this);
}
