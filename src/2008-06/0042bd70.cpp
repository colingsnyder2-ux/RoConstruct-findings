// from server: 46% by colin
struct Holder {
    void* field0;
    char pad[4];
    void* field8;
    void invoke(void* arg);
};

struct Obj5A7570 {
    void* method5A7570();
};

struct Obj5A76B0 {
    void method5A76B0(void* p);
};

struct Obj5A6FF0 {
    void method5A6FF0(void* p);
};

extern "C" void __cdecl sub_42BC10(void* p, int n);
extern "C" void* __cdecl sub_42BBB0();

void Holder::invoke(void* arg)
{
    void* local = 0;
    sub_42BC10(&local, 2);

    void* p0 = field0;
    if (p0 == 0)
        p0 = (char*)p0 + 0x14;
    else
        p0 = 0;

    void* p8 = field8;
    void** vt = *(void***)p8;
    void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vt[7];
    fn(p8, arg, p0);

    Obj5A7570* obj = (Obj5A7570*)sub_42BBB0();
    void* r = obj->method5A7570();
    if (r != local) {
        ((Obj5A76B0*)obj)->method5A76B0(local);
        if (r != 0)
            ((Obj5A6FF0*)obj)->method5A6FF0(r);
    }
}
