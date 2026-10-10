// from server: 83% by colin
struct CXTPStatusBar {
    void sub_0063002E(int, int, int, int, int, int);
    int sub_006301C0(int);
    int sub_00738412();
    int f(int, int);
};

extern "C" int __stdcall GetParent(int);

int CXTPStatusBar::f(int a, int b)
{
    int eax = sub_00738412();
    int ecx = *(int*)((char*)this + 0x7c);
    int edx = 0;
    eax &= 0x10000000;
    if (ecx & 1) {
        if (eax != 0) {
            edx = 0x80;
        }
    } else if (ecx & 2) {
        if (eax == 0) {
            edx = 0x40;
        }
    }
    ecx &= 0xfffffffc;
    *(int*)((char*)this + 0x7c) = ecx;
    if (edx != 0) {
        edx |= 0x17;
        sub_0063002E(0, 0, 0, 0, 0, edx);
    }
    eax = sub_00738412();
    if ((eax & 0x10000000) == 0) {
        return 0;
    }
    ecx = *(int*)((char*)this + 0x8c);
    if (ecx != 0) {
        eax = sub_00738412();
        if ((eax & 0x10000000) == 0) {
            return 0;
        }
    }
    eax = *(int*)((char*)this + 0x38);
    if (eax == 0) {
        eax = *(int*)((char*)this + 0x20);
        eax = GetParent(eax);
    }
    eax = sub_006301C0(eax);
    if (eax == 0) {
        int p = *(int*)((char*)this + 0x20);
        p = GetParent(p);
        eax = sub_006301C0(p);
        if (eax == 0) {
            return 0;
        }
    }
    int arg = a;
    int* vt = *(int**)this;
    int fn = *(int*)((char*)vt + 0x144);
    ((void (__thiscall*)(CXTPStatusBar*, int, int))fn)(this, eax, arg);
    return 0;
}
