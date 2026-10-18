// from server: 43% by colin
struct DescribedBase {
    virtual void v0();
    virtual void v1();
    virtual void* v2();
};

struct SomeObj {
    virtual void v0();
    virtual void v1(void* arg, int n);
};

struct Arg {
    void* a;
    void* b;
};

struct DHTMLWindow {
    char pad[0x38];
    void* field38;
    void* field3c;
    DescribedBase* field40;
    DescribedBase* field44;
};

extern "C" void* __cdecl sub_6a17c6(void* a, void* b, void* c, void* d, void* e);
extern "C" void __cdecl sub_6a158c(void* a, void* b);
extern "C" void* __cdecl sub_5947f0(void* a);
extern "C" void __cdecl sub_5944e0(void* a, void* b);

extern "C" void* __stdcall func_802864(void* a);

extern char g_80ba34;
extern char g_8d362c;
extern char g_9291fc;
extern char g_92c210;

struct VDHTMLWindow_BoundFuncDesc {
    void method(SomeObj* obj);
};

void VDHTMLWindow_BoundFuncDesc::method(SomeObj* obj) {
    DHTMLWindow* self = (DHTMLWindow*)this;
    Arg arg;
    arg.a = self->field40;
    if (self->field44) {
        arg.b = self->field44->v2();
    } else {
        arg.b = 0;
    }
    obj->v1(&arg, 1);
    void* r = sub_6a17c6(0, &g_9291fc, &g_92c210, 0, arg.b);
    if (!r) {
        func_802864(&g_80ba34);
        sub_6a158c(&g_8d362c, &g_80ba34);
    }
    void* tmp = sub_5947f0(&arg);
    sub_5944e0(tmp, 0);
    ((void (__thiscall*)(DHTMLWindow*, int))self->field38)(self, (int)r);
}
