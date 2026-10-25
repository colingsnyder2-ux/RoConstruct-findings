// from server: 100% by atomic.potato
// roc 2008-06 00787a30  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00787a30
//
// 00787a30  8b442404             mov eax, dword ptr [esp + 4]
// 00787a34  56                   push esi
// 00787a35  8bf1                 mov esi, ecx
// 00787a37  83f8ff               cmp eax, -1
// 00787a3a  7421                 je 0x787a5d
// 00787a3c  50                   push eax
// 00787a3d  8d4e74               lea ecx, [esi + 0x74]
// 00787a40  e82bd8f5ff           call 0x6e5270
// 00787a45  8b4008               mov eax, dword ptr [eax + 8]
// 00787a48  85c0                 test eax, eax
// 00787a4a  7411                 je 0x787a5d
// 00787a4c  8b4014               mov eax, dword ptr [eax + 0x14]
// 00787a4f  8b4804               mov ecx, dword ptr [eax + 4]
// 00787a52  8b10                 mov edx, dword ptr [eax]
// 00787a54  51                   push ecx
// 00787a55  52                   push edx
// 00787a56  8bce                 mov ecx, esi
// 00787a58  e8c3fdffff           call 0x787820
// 00787a5d  5e                   pop esi
// 00787a5e  c20400               ret 4

struct CXTColorHex_PAUHEXCOLOR_CELL_CList {
    char pad[0x74];
    int field_74;
    void sub_787820(int, int);
    void sub_787A30(int);
};

struct Sub6E5270 {
    int sub_6E5270(int);
};

void CXTColorHex_PAUHEXCOLOR_CELL_CList::sub_787A30(int a) {
    if (a != -1) {
        int r = ((Sub6E5270*)&field_74)->sub_6E5270(a);
        int* p = *(int**)(r + 8);
        if (p != 0) {
            int* q = *(int**)((char*)p + 0x14);
            int v0 = q[0];
            int v1 = q[1];
            sub_787820(v0, v1);
        }
    }
}
