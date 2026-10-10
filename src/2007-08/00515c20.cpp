// from server: 77% by tester
extern "C" __declspec(noreturn) void __cdecl exit(int);

void __cdecl sub_5138F0(void *);

struct S {
    void f();
};

void S::f() {
    void *p = *(void **)this;
    void (*fn)(void *) = *(void (**)(void *))((char *)p + 8);
    fn(this);
    sub_5138F0(this);
    exit(1);
}
