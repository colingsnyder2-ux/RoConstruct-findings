// from server: 11% by 41k
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
typedef unsigned long DWORD;
struct VPVInstance {
    int eax;
    int f();
};

int VPVInstance::f() {
    DWORD edx;
    if (this->eax == 0) {
        edx = 0x7c2fe8;
    } else {
        edx = this->eax << 4;
        edx += this->eax - 0x10;
        if (edx > this->eax + 8) {
            edx = 0x7c2fe8;
        }
    }
    return edx;
}
