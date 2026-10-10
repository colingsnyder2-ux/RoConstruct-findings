// from server: 57% by tester
struct RBXName;

struct ICreator {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
};

struct CreatorBase {
    char pad[0x10];
    ICreator* creator;
};

struct FactoryProduct {
    char pad[0x14];
    int field14;
    char pad2[0x130 - 0x18];
    int field130;
};

extern "C" void* __stdcall sub_56B620(void* arg0, void* arg1);
extern "C" void __stdcall sub_6390A0(void* arg0, void* arg1);

void FactoryProduct_Creator_ctor(FactoryProduct* self, int arg)
{
    void* p;
    if (self) {
        p = (char*)self + 0x14;
    } else {
        p = 0;
    }
    int v = self->field130;
    void* r = sub_56B620((void*)0x97d45c, p);
    if (r) {
        sub_6390A0((char*)r + 0x10, &v);
    }
}
