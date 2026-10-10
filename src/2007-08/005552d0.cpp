// from server: 30% by colin
struct DescribedBase {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
};

struct ServiceProvider {
    char pad[0x30];
    DescribedBase* ptr30;
    DescribedBase* ptr34;
    virtual void v0();
    virtual void v1(void*, int);
};

struct BoundFuncDesc {
    char pad[0x30];
    DescribedBase* ptr30;
    DescribedBase* ptr34;
    void invoke(ServiceProvider* provider, int arg);
};

extern "C" int __stdcall func_00630d36(int, void*, void*, int, int);
extern "C" void __stdcall func_00630b9e(void*, void*);
extern "C" void __stdcall func_0077e710(void*);
extern void func_00555210();

void BoundFuncDesc::invoke(ServiceProvider* provider, int arg)
{
    DescribedBase* a = this->ptr30;
    DescribedBase* b = this->ptr34;
    if (b)
    {
        b->f2();
    }
    else
    {
        a = 0;
    }
    provider->v1(&a, 1);
    int r = func_00630d36(0, (void*)0x88209c, (void*)0x884e04, 0, 0);
    if (r == 0)
    {
        func_0077e710((void*)0x786e04);
        func_00630b9e((void*)0x841e0c, (void*)0x786e04);
    }
    func_00555210();
}
