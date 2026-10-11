// from server: 69% by colin
struct S {
    void f();
};

extern "C" void __cdecl sub_005f2bc0(void*);
extern "C" void __cdecl sub_006a158c(void*, void*);

void S::f()
{
    char buf[0x28];
    sub_005f2bc0(buf);
    sub_006a158c(buf, (void*)0x8f5fa0);
}
