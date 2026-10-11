// from server: 70% by atomic.potato
struct Inner {
    char pad[0x40];
};

struct Outer {
    char pad0[0x3c];
    Inner inner;
    void f();
};

extern "C" void __cdecl sub_411E60(void*, void*);
extern "C" void __cdecl sub_719A4A(void*, void*);

void Outer::f()
{
    char buf[0x40];
    sub_411E60(&inner, buf);
    *(void**)(buf + 0x00) = (void*)0x8af564;
    *(void**)(buf + 0x28) = (void*)0x8af55c;
    *(void**)(buf + 0x3c) = (void*)0x8af54c;
    sub_719A4A((void*)0x97b230, buf);
}
