// from server: 71% by colin
extern "C" void __cdecl exit(int);
extern "C" void __cdecl sub_5138F0(void*);

struct S {
    void f(void* p);
};

void S::f(void* p) {
    (*(void (__thiscall**)(void*))(*(void**)p))(p);
    sub_5138F0(p);
    exit(1);
}
