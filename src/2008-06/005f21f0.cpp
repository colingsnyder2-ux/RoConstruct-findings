// from server: 30% by atomic.potato
struct S {
    char pad0[8];
    char pad1[0x54];
    void f();
};

extern "C" void __stdcall sub_5f2160(void*);
extern "C" void __stdcall sub_802468(void*);

void S::f()
{
    char buf[0x40];
    sub_5f2160(buf);
    sub_802468(buf + 0x1c);
    sub_802468(buf);
}
