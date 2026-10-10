// from server: 30% by colin
extern "C" void *__cdecl sub_62fef6(unsigned int size);
extern "C" void *__cdecl sub_413ad0(void *self, void *arg);

struct S {
    void *f();
};

void *S::f()
{
    void *p = sub_62fef6(0x20);
    if (p == 0)
        return 0;
    return sub_413ad0(p, (char *)this + 4);
}
