// from server: 84% by atomic.potato
extern "C" void func_00A42DE4(void*);

struct CRobloxControlMaterialSelector
{
    int a;
    int b;
    char c[1];

    CRobloxControlMaterialSelector* f(void*);
};

CRobloxControlMaterialSelector* CRobloxControlMaterialSelector::f(void* p)
{
    a = *(int*)p;
    b = *((int*)p + 1);
    func_00A42DE4((char*)this + 8);
    return this;
}
