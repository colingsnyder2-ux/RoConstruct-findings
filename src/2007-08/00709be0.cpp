// from server: 100% by colin
// roc 2007-08 00709be0  unit: CXTColorHex  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00709be0
//
// 00709be0  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 00709be6  53                   push ebx
// 00709be7  32db                 xor bl, bl
// 00709be9  85d2                 test edx, edx
// 00709beb  56                   push esi
// 00709bec  742d                 je 0x709c1b
// 00709bee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00709bf2  8b4208               mov eax, dword ptr [edx + 8]
// 00709bf5  85c0                 test eax, eax
// 00709bf7  741c                 je 0x709c15
// 00709bf9  3b7018               cmp esi, dword ptr [eax + 0x18]
// 00709bfc  7517                 jne 0x709c15
// 00709bfe  81feffffff00         cmp esi, 0xffffff
// 00709c04  7517                 jne 0x709c1d
// 00709c06  84db                 test bl, bl
// 00709c08  7513                 jne 0x709c1d
// 00709c0a  817974b0000000       cmp dword ptr [ecx + 0x74], 0xb0
// 00709c11  7c0a                 jl 0x709c1d
// 00709c13  b301                 mov bl, 1
// 00709c15  8b12                 mov edx, dword ptr [edx]
// 00709c17  85d2                 test edx, edx
// 00709c19  75d7                 jne 0x709bf2
// 00709c1b  33c0                 xor eax, eax
// 00709c1d  5e                   pop esi
// 00709c1e  5b                   pop ebx
// 00709c1f  c20400               ret 4

struct CXTColorHex {
    char pad[0x74];
    int field_74;
    char pad2[0x80 - 0x74 - 4];
    struct Node* field_80;
    int func(int arg);
};

struct Node {
    Node* next;
    char pad[4];
    Node* field_8;
    char pad2[0x18 - 8 - 4];
    int field_18;
};

int CXTColorHex::func(int arg) {
    Node* node = field_80;
    bool found = false;
    if (node != 0) {
        do {
            Node* inner = node->field_8;
            if (inner != 0) {
                if (arg == inner->field_18) {
                    if (arg != 0xffffff || found || field_74 < 0xb0) {
                        return (int)inner;
                    }
                    found = true;
                }
            }
            node = node->next;
        } while (node != 0);
    }
    return 0;
}
