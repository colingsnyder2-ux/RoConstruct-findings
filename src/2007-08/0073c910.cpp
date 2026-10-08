// from server: 72% by colin
// roc 2007-08 0073c910  unit: CSpinButtonCtrl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073c910
//
// 0073c910  fe8b4dd0ff25         dec byte ptr [ebx + 0x25ffd04d]
// 0073c916  ac                   lodsb al, byte ptr [esi]
// 0073c917  e677                 out 0x77, al
// 0073c919  00c3                 add bl, al

struct CSpinButtonCtrl {
    unsigned char f();
};

unsigned char CSpinButtonCtrl::f() {
    unsigned char* p = (unsigned char*)0x25ffd04d;
    --*p;
    unsigned char a = *(unsigned char*)0x0077e6ac;
    return a;
}
