// from server: 90% by colin
struct AssemblyStage {
    char pad[0x1c];
    int list;
    void onEngineChanged(int);
};

struct Primitive {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int v3();
};

extern "C" int __stdcall sub_00605b30(int, int);
extern "C" void __stdcall sub_006271c0(int, int);

void AssemblyStage::onEngineChanged(int p)
{
    Primitive* prim = (Primitive*)p;
    if (prim->v3() == 0) {
        int tmp = (int)prim;
        sub_00605b30((int)&list, (int)&tmp);
    }
    sub_006271c0((int)this, (int)prim);
}
