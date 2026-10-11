// from server: 39% by atomic.potato
struct CRobloxControlMaterialSelector
{
    char padding[8];
    int field0;
    int field1;
    char padding2[4];
    void f();
};

extern "C" void __stdcall G1_func_00a42564(void *);

void CRobloxControlMaterialSelector::f()
{
    CRobloxControlMaterialSelector *dst = this;
    CRobloxControlMaterialSelector *end = *(CRobloxControlMaterialSelector **)((char *)this + 4);
    if (dst != end)
    {
        CRobloxControlMaterialSelector *src = *(CRobloxControlMaterialSelector **)((char *)this + 8);
        do
        {
            dst->field0 = src->field0;
            dst->field1 = src->field1;
            G1_func_00a42564((char *)dst + 8);
            dst = (CRobloxControlMaterialSelector *)((char *)dst + 12);
        } while (dst != end);
    }
}
