// from server: 100% by colin
// roc 2007-08 00432420  unit: CDataModelPropGrid  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00432420
//
// 00432420  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00432424  56                   push esi
// 00432425  57                   push edi
// 00432426  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0043242a  8bf1                 mov esi, ecx
// 0043242c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00432430  50                   push eax
// 00432431  51                   push ecx
// 00432432  57                   push edi
// 00432433  8bce                 mov ecx, esi
// 00432435  e87ce11f00           call 0x6305b6
// 0043243a  80bee000000000       cmp byte ptr [esi + 0xe0], 0
// 00432441  741d                 je 0x432460
// 00432443  80bee100000000       cmp byte ptr [esi + 0xe1], 0
// 0043244a  7514                 jne 0x432460
// 0043244c  85ff                 test edi, edi
// 0043244e  7410                 je 0x432460
// 00432450  8bce                 mov ecx, esi
// 00432452  e889fcffff           call 0x4320e0
// 00432457  6a09                 push 9
// 00432459  8bce                 mov ecx, esi
// 0043245b  e8eada1f00           call 0x62ff4a
// 00432460  5f                   pop edi
// 00432461  5e                   pop esi
// 00432462  c20c00               ret 0xc

struct CDataModelPropGrid {
    char pad[0xe0];
    unsigned char flag0;
    unsigned char flag1;
    void sub_4320E0();
    void sub_62FF4A(int);
    void sub_6305B6(void*, void*, void*);
    void target(void*, void*, void*);
};

void CDataModelPropGrid::target(void* a, void* b, void* c) {
    sub_6305B6(a, b, c);
    if (flag0 != 0 && flag1 == 0 && a != 0) {
        sub_4320E0();
        sub_62FF4A(9);
    }
}
