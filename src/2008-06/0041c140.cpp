// from server: 37% by colin
// roc 2008-06 0041c140  unit: VDHTMLWindow::?$BoundFuncDesc  size: 159 bytes

struct DescribedBase {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
};

struct DHTMLWindow {
    char pad[0x40];
    DescribedBase* field40;
    DescribedBase* field44;
};

struct Arg {
    void* a;
    void* b;
};

struct SomeObj {
    virtual void v0();
    virtual void v1(Arg* arg, int n);
};

extern "C" void* __cdecl sub_6a17c6(void* a, void* b, void* c, void* d, void* e);
extern "C" void __cdecl sub_6a158c(void* a, void* b);
extern "C" void __cdecl sub_5947f0(void* a);

extern void* __stdcall func_802864(void* a);

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
        arg.b = (void*)((int(__thiscall*)(DescribedBase*))((*(void***)self->field44)[2]))(self->field44);
    } else {
        arg.b = 0;
    }
    obj->v1(&arg, 1);
    void* r = sub_6a17c6(0, &g_9291fc, &g_92c210, 0, arg.b);
    if (!r) {
        func_802864(&g_80ba34);
        sub_6a158c(&g_8d362c, &g_80ba34);
    }
    sub_5947f0(&arg);
}
