// from server: 69% by tester
struct Prop {
    char pad[0x18];
    void* getset;

    void method(void* arg1, void* arg2);
};

extern "C" double __fastcall sub_5641E0(void* self, void* arg);

struct Vtbl {
    char pad[0xc];
    void (__stdcall* fn)(void*, double*);
};

void Prop::method(void* arg1, void* arg2)
{
    double d = sub_5641E0(arg1, arg2);
    void* g = getset;
    Vtbl* vt = *(Vtbl**)g;
    vt->fn(g, &d);
}
