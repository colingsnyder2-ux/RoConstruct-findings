// from server: 38% by colin
// roc 2007-08 00553eb0  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00553eb0

extern "C" {
    int __cdecl sub_553840(int, int);
    void __stdcall sub_77e56c(void*, int, int);
}

struct S {
    void f(int, int);
};

void S::f(int a, int b)
{
    char buf[0x90];
    sub_77e56c(buf, 1, 1);
    sub_553840(a, b);
}
