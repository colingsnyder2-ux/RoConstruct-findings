// from server: 37% by colin
// roc 2007-08 00420f30  unit: CSelectionTreeCtrl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00420f30
//
// 00420f30  51                   push ecx
// 00420f31  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00420f35  33c0                 xor eax, eax
// 00420f37  890424               mov dword ptr [esp], eax
// 00420f3a  56                   push esi
// 00420f3b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00420f3f  88442404             mov byte ptr [esp + 4], al
// 00420f43  8b442404             mov eax, dword ptr [esp + 4]
// 00420f47  50                   push eax
// 00420f48  51                   push ecx
// 00420f49  8bce                 mov ecx, esi
// 00420f4b  e870f6ffff           call 0x4205c0
// 00420f50  8bc6                 mov eax, esi
// 00420f52  5e                   pop esi
// 00420f53  59                   pop ecx
// 00420f54  c3                   ret 

struct CSelectionTreeCtrl {
    void* sub_4205C0(void*, unsigned char);
    CSelectionTreeCtrl* sub_420F30(void*, unsigned char);
};

CSelectionTreeCtrl* CSelectionTreeCtrl::sub_420F30(void* a, unsigned char b) {
    unsigned char local = 0;
    sub_4205C0(a, local);
    return this;
}
