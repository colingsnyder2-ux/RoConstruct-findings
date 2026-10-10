// from server: 74% by colin
struct CXTPStatusBarCStatusCmdUI {
    char pad0[8];
    int field8;
    char padC[8];
    int field14;
    void f(int);
};

extern "C" int __fastcall sub_692e20(void*, int);
extern "C" void __fastcall sub_6935a0(void*, int, int);

void CXTPStatusBarCStatusCmdUI::f(int arg) {
    int* self = (int*)this;
    int a = self[2];
    int b = self[5];
    int v = sub_692e20((void*)b, a);
    v &= 0xfffffdff;
    if (arg != 0) {
        v |= 0x200;
    }
    sub_6935a0((void*)b, self[2], v);
}
