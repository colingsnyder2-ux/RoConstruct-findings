// from server: 59% by colin
// roc 2007-08 004389a0  unit: CPropertyGridItemBrickColor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004389a0
//
// 004389a0  8b442404             mov eax, dword ptr [esp + 4]
// 004389a4  56                   push esi
// 004389a5  51                   push ecx
// 004389a6  8bf1                 mov esi, ecx
// 004389a8  8bcc                 mov ecx, esp
// 004389aa  8964240c             mov dword ptr [esp + 0xc], esp
// 004389ae  50                   push eax
// 004389af  51                   push ecx
// 004389b0  898600010000         mov dword ptr [esi + 0x100], eax
// 004389b6  e865ffffff           call 0x438920
// 004389bb  83c408               add esp, 8
// 004389be  8bce                 mov ecx, esi
// 004389c0  e86bfc2500           call 0x698630
// 004389c5  5e                   pop esi
// 004389c6  c20400               ret 4

struct CPropertyGridItemBrickColor {
    char pad[0x100];
    int field_100;
    void sub_438920(int* p);
    void sub_698630();
    void func(int arg);
};

void CPropertyGridItemBrickColor::func(int arg) {
    int local;
    field_100 = arg;
    sub_438920(&local);
    sub_698630();
}
