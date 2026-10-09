// roc 2007-03 006ecd80  unit: seg_006e0000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ecd80
//
// 006ecd80  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 006ecd86  53                   push ebx
// 006ecd87  32db                 xor bl, bl
// 006ecd89  85d2                 test edx, edx
// 006ecd8b  56                   push esi
// 006ecd8c  742d                 je 0x6ecdbb
// 006ecd8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ecd92  8b4208               mov eax, dword ptr [edx + 8]
// 006ecd95  85c0                 test eax, eax
// 006ecd97  741c                 je 0x6ecdb5
// 006ecd99  3b7018               cmp esi, dword ptr [eax + 0x18]
// 006ecd9c  7517                 jne 0x6ecdb5
// 006ecd9e  81feffffff00         cmp esi, 0xffffff
// 006ecda4  7517                 jne 0x6ecdbd
// 006ecda6  84db                 test bl, bl
// 006ecda8  7513                 jne 0x6ecdbd
// 006ecdaa  817974b0000000       cmp dword ptr [ecx + 0x74], 0xb0
// 006ecdb1  7c0a                 jl 0x6ecdbd
// 006ecdb3  b301                 mov bl, 1
// 006ecdb5  8b12                 mov edx, dword ptr [edx]
// 006ecdb7  85d2                 test edx, edx
// 006ecdb9  75d7                 jne 0x6ecd92
// 006ecdbb  33c0                 xor eax, eax
// 006ecdbd  5e                   pop esi
// 006ecdbe  5b                   pop ebx
// 006ecdbf  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTColorHex@ns_ROCX0000b3@@QAEHH@Z)

namespace ns_ROCX0000b3 {
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
}
