// from server: 95% by colin
// roc 2007-08 004b8e40  unit: RakPeer  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8e40
//
// 004b8e40  8b442404             mov eax, dword ptr [esp + 4]
// 004b8e44  56                   push esi
// 004b8e45  57                   push edi
// 004b8e46  8bf1                 mov esi, ecx
// 004b8e48  33ff                 xor edi, edi
// 004b8e4a  66397e08             cmp word ptr [esi + 8], di
// 004b8e4e  8986cc080000         mov dword ptr [esi + 0x8cc], eax
// 004b8e54  7632                 jbe 0x4b8e88
// 004b8e56  eb08                 jmp 0x4b8e60
// 004b8e58  8da42400000000       lea esp, [esp]
// 004b8e5f  90                   nop 
// 004b8e60  8b8ecc080000         mov ecx, dword ptr [esi + 0x8cc]
// 004b8e66  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 004b8e6c  0fb7d7               movzx edx, di
// 004b8e6f  69d240080000         imul edx, edx, 0x840
// 004b8e75  51                   push ecx
// 004b8e76  8d4c0218             lea ecx, [edx + eax + 0x18]
// 004b8e7a  e821bd0000           call 0x4c4ba0
// 004b8e7f  83c701               add edi, 1
// 004b8e82  663b7e08             cmp di, word ptr [esi + 8]
// 004b8e86  72d8                 jb 0x4b8e60
// 004b8e88  5f                   pop edi
// 004b8e89  5e                   pop esi
// 004b8e8a  c20400               ret 4

struct RakPeer {
    char pad_0[8];
    unsigned short field_8;
    char pad_1[0x22c - 0xa];
    void* field_22c;
    char pad_2[0x8cc - 0x230];
    unsigned int field_8cc;
    void setOutgoingKBPSLimit(unsigned int limit);
};

extern "C" void __stdcall sub_4c4ba0(void* p, unsigned int limit);

void RakPeer::setOutgoingKBPSLimit(unsigned int limit) {
    field_8cc = limit;
    unsigned short i = 0;
    while (i < field_8) {
        char* base = (char*)field_22c;
        void* p = base + i * 0x840 + 0x18;
        sub_4c4ba0(p, field_8cc);
        i++;
    }
}
