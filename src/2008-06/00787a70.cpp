// from server: 100% by atomic.potato
// roc 2008-06 00787a70  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00787a70
//
// 00787a70  53                   push ebx
// 00787a71  55                   push ebp
// 00787a72  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00787a76  56                   push esi
// 00787a77  8bd9                 mov ebx, ecx
// 00787a79  8b7378               mov esi, dword ptr [ebx + 0x78]
// 00787a7c  57                   push edi
// 00787a7d  83cfff               or edi, 0xffffffff
// 00787a80  896b70               mov dword ptr [ebx + 0x70], ebp
// 00787a83  85f6                 test esi, esi
// 00787a85  741b                 je 0x787aa2
// 00787a87  8b4608               mov eax, dword ptr [esi + 8]
// 00787a8a  85c0                 test eax, eax
// 00787a8c  740d                 je 0x787a9b
// 00787a8e  3b6818               cmp ebp, dword ptr [eax + 0x18]
// 00787a91  7508                 jne 0x787a9b
// 00787a93  57                   push edi
// 00787a94  8bcb                 mov ecx, ebx
// 00787a96  e895ffffff           call 0x787a30
// 00787a9b  8b36                 mov esi, dword ptr [esi]
// 00787a9d  47                   inc edi
// 00787a9e  85f6                 test esi, esi
// 00787aa0  75e5                 jne 0x787a87
// 00787aa2  5f                   pop edi
// 00787aa3  5e                   pop esi
// 00787aa4  5d                   pop ebp
// 00787aa5  5b                   pop ebx
// 00787aa6  c20400               ret 4

struct CXTColorHex_PAUHEXCOLOR_CELL_CList {
    char pad[0x70];
    int field_70;
    char pad2[0x4];
    int field_78;
    void sub_787A30(int);
    void sub_787A70(int);
};

void CXTColorHex_PAUHEXCOLOR_CELL_CList::sub_787A70(int a) {
    field_70 = a;
    int* node = (int*)field_78;
    int idx = -1;
    while (node != 0) {
        int* inner = (int*)node[2];
        if (inner != 0 && a == inner[6]) {
            sub_787A30(idx);
        }
        node = (int*)node[0];
        idx++;
    }
}
