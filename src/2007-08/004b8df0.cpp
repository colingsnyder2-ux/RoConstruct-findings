// from server: 95% by colin
// roc 2007-08 004b8df0  unit: RakPeer  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8df0
//
// 004b8df0  8b442404             mov eax, dword ptr [esp + 4]
// 004b8df4  56                   push esi
// 004b8df5  57                   push edi
// 004b8df6  8bf1                 mov esi, ecx
// 004b8df8  33ff                 xor edi, edi
// 004b8dfa  66397e08             cmp word ptr [esi + 8], di
// 004b8dfe  8986c8080000         mov dword ptr [esi + 0x8c8], eax
// 004b8e04  7632                 jbe 0x4b8e38
// 004b8e06  eb08                 jmp 0x4b8e10
// 004b8e08  8da42400000000       lea esp, [esp]
// 004b8e0f  90                   nop 
// 004b8e10  8b8ec8080000         mov ecx, dword ptr [esi + 0x8c8]
// 004b8e16  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 004b8e1c  0fb7d7               movzx edx, di
// 004b8e1f  69d240080000         imul edx, edx, 0x840
// 004b8e25  51                   push ecx
// 004b8e26  8d4c0218             lea ecx, [edx + eax + 0x18]
// 004b8e2a  e8f1231500           call 0x60b220
// 004b8e2f  83c701               add edi, 1
// 004b8e32  663b7e08             cmp di, word ptr [esi + 8]
// 004b8e36  72d8                 jb 0x4b8e10
// 004b8e38  5f                   pop edi
// 004b8e39  5e                   pop esi
// 004b8e3a  c20400               ret 4

struct RakPeer {
    char pad0[8];
    unsigned short count;
    char pad1[0x22c - 0xa];
    char* array;
    char pad2[0x8c8 - 0x230];
    int limit;
    void setLimit(int);
};

void RakPeer::setLimit(int value) {
    limit = value;
    unsigned short i = 0;
    if (count > 0) {
        do {
            char* base = array;
            int offset = i * 0x840;
            char* p = base + offset + 0x18;
            int v = limit;
            extern void __stdcall sub_60b220(char*, int);
            sub_60b220(p, v);
            i++;
        } while (i < count);
    }
}
