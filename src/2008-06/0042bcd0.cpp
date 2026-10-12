// from server: 31% by colin
struct Holder {
    void* p0;
    void* p1;
    void* p2;
};

struct Inner {
    void* vtable;
};

struct Outer {
    Holder* holder;
    char pad[4];
    Inner* inner;
    void invoke(void* arg);
};

extern "C" void __cdecl sub_42BC10(void*);
extern "C" void* __cdecl sub_42BBB0();
extern "C" void* __cdecl sub_5A7570(void*);
extern "C" void __cdecl sub_5A76B0(void*, void*);
extern "C" void __cdecl sub_5A6FF0(void*, void*);

void Outer::invoke(void* arg)
{
    void* local;
    sub_42BC10(&local);

    void* target;
    if (holder) {
        target = (char*)holder + 0x14;
    } else {
        target = 0;
    }

    Inner* in = inner;
    void** vtbl = *(void***)in;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[8];
    fn(in, arg);

    void* r = sub_42BBB0();
    void* a = sub_5A7570(r);
    if (a != local) {
        sub_5A76B0(r, local);
        if (a) {
            sub_5A6FF0(r, a);
        }
    }
}
