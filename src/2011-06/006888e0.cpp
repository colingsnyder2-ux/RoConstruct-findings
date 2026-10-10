// from server: 97% by atomic.potato
struct S_func_006888e0 {
    int f(void *);
};

extern "C" int __cdecl sub_0080b2ea(void *, const char *, const char *, int, int);

int S_func_006888e0::f(void *arg)
{
    return sub_0080b2ea(arg, ".?AVPose@RBX@@", ".?AVInstance@RBX@@", 0, 0) != 0;
}
