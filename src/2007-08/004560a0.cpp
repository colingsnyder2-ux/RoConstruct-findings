// from server: 88% by colin
// roc 2007-08 004560a0  unit: ToggleFullscreenVerb  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004560a0
//
// 004560a0  e85d9e1d00           call 0x62ff02
// 004560a5  8b4004               mov eax, dword ptr [eax + 4]
// 004560a8  8b4020               mov eax, dword ptr [eax + 0x20]
// 004560ab  8a80e0000000         mov al, byte ptr [eax + 0xe0]
// 004560b1  c3                   ret 

struct Inner {
    char pad[0xe0];
    char flag;
};

struct Mid {
    char pad[0x20];
    Inner* inner;
};

struct Outer {
    char pad[4];
    Mid* mid;
};

extern Outer* GetOuter();

struct S {
    char f();
};

char S::f() {
    return GetOuter()->mid->inner->flag;
}
