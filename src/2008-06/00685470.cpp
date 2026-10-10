// from server: 42% by Intel
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
typedef unsigned long DWORD;
struct S {
    int f();
};

int S::f() {
    DWORD* thisPtr = reinterpret_cast<DWORD*>(this);
    DWORD* subEntityPtr = reinterpret_cast<DWORD*>(*thisPtr + 0x6c);
    DWORD* shadowRenderablePtr = reinterpret_cast<DWORD*>(*subEntityPtr + 0x18);
    return *shadowRenderablePtr;
}
