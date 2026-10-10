// from server: 84% by atomic.potato
extern "C" void *sub_005b6270(void *, void *);

struct NullController_00598bf0
{
    char pad0[484];
    void *f(void *);
};

void *NullController_00598bf0::f(void *arg)
{
    sub_005b6270((char *)this + 484, arg);
    return arg;
}
