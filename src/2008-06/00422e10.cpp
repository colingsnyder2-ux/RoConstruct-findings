// from server: 100% by colin
// roc 2008-06 00422e10  unit: CRobloxTreeCtrl  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422e10
//
// 00422e10  8b442404             mov eax, dword ptr [esp + 4]
// 00422e14  56                   push esi
// 00422e15  8bf1                 mov esi, ecx
// 00422e17  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00422e1a  83e1ef               and ecx, 0xffffffef
// 00422e1d  83c92d               or ecx, 0x2d
// 00422e20  894820               mov dword ptr [eax + 0x20], ecx
// 00422e23  50                   push eax
// 00422e24  8bce                 mov ecx, esi
// 00422e26  e8dfd82700           call 0x6a070a
// 00422e2b  85c0                 test eax, eax
// 00422e2d  7504                 jne 0x422e33
// 00422e2f  5e                   pop esi
// 00422e30  c20400               ret 4
// 00422e33  c6869000000000       mov byte ptr [esi + 0x90], 0
// 00422e3a  b801000000           mov eax, 1
// 00422e3f  5e                   pop esi
// 00422e40  c20400               ret 4

struct CRobloxTreeCtrl {
    char pad[0x90];
    char field_90;
    int sub_6a070a(void*);
    int func(void*);
};

int CRobloxTreeCtrl::func(void* arg) {
    int* p = (int*)arg;
    p[8] = (p[8] & 0xffffffef) | 0x2d;
    if (sub_6a070a(arg) == 0)
        return 0;
    field_90 = 0;
    return 1;
}
