// from server: 74% by colin
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
typedef unsigned char BYTE;
struct S {
    bool f();
};

bool S::f() {
    if (*(BYTE*)((BYTE*)this + 4) != 0) {
        return true;
    }
    *(BYTE*)((BYTE*)this + 4) = 0;
    return false;
}
