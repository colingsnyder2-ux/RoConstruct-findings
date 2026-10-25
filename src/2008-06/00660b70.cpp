// from server: 100% by king_originala
// roc 2008-06 00660b70  unit: RBX::FilterStairs  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660b70
//
// 00660b70  57                   push edi
// 00660b71  8b7c2408             mov edi, dword ptr [esp + 8]
// 00660b75  85ff                 test edi, edi
// 00660b77  751f                 jne 0x660b98
// 00660b79  8b442410             mov eax, dword ptr [esp + 0x10]
// 00660b7d  83caff               or edx, 0xffffffff
// 00660b80  895010               mov dword ptr [eax + 0x10], edx
// 00660b83  895014               mov dword ptr [eax + 0x14], edx
// 00660b86  c70008000000         mov dword ptr [eax], 8
// 00660b8c  c74008ff000000       mov dword ptr [eax + 8], 0xff
// 00660b93  8d4708               lea eax, [edi + 8]
// 00660b96  5f                   pop edi
// 00660b97  c3                   ret 
// 00660b98  0fb64732             movzx eax, byte ptr [edi + 0x32]
// 00660b9c  83e801               sub eax, 1
// 00660b9f  53                   push ebx
// 00660ba0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00660ba4  56                   push esi
// 00660ba5  781f                 js 0x660bc6
// 00660ba7  8b0f                 mov ecx, dword ptr [edi]
// 00660ba9  8b7118               mov esi, dword ptr [ecx + 0x18]
// 00660bac  8d9447ac000000       lea edx, [edi + eax*2 + 0xac]
// 00660bb3  0fb70a               movzx ecx, word ptr [edx]
// 00660bb6  8d0c49               lea ecx, [ecx + ecx*2]
// 00660bb9  3b1c8e               cmp ebx, dword ptr [esi + ecx*4]
// 00660bbc  7425                 je 0x660be3
// 00660bbe  48                   dec eax
// 00660bbf  83ea02               sub edx, 2
// 00660bc2  85c0                 test eax, eax
// 00660bc4  7ded                 jge 0x660bb3
// 00660bc6  8b742418             mov esi, dword ptr [esp + 0x18]
// 00660bca  8b4708               mov eax, dword ptr [edi + 8]
// 00660bcd  6a00                 push 0
// 00660bcf  56                   push esi
// 00660bd0  53                   push ebx
// 00660bd1  50                   push eax
// 00660bd2  e899ffffff           call 0x660b70
// 00660bd7  83c410               add esp, 0x10
// 00660bda  83f808               cmp eax, 8
// 00660bdd  7553                 jne 0x660c32
// 00660bdf  5e                   pop esi
// 00660be0  5b                   pop ebx
// 00660be1  5f                   pop edi
// 00660be2  c3                   ret 
// 00660be3  85c0                 test eax, eax
// 00660be5  7cdf                 jl 0x660bc6
// 00660be7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00660beb  83caff               or edx, 0xffffffff
// 00660bee  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00660bf3  895110               mov dword ptr [ecx + 0x10], edx
// 00660bf6  895114               mov dword ptr [ecx + 0x14], edx
// 00660bf9  c70106000000         mov dword ptr [ecx], 6
// 00660bff  894108               mov dword ptr [ecx + 8], eax
// 00660c02  7525                 jne 0x660c29
// 00660c04  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00660c07  85c9                 test ecx, ecx
// 00660c09  741e                 je 0x660c29
// 00660c0b  eb03                 jmp 0x660c10
// 00660c0d  8d4900               lea ecx, [ecx]
// 00660c10  0fb65108             movzx edx, byte ptr [ecx + 8]
// 00660c14  3bd0                 cmp edx, eax
// 00660c16  7e0d                 jle 0x660c25
// 00660c18  8b09                 mov ecx, dword ptr [ecx]
// 00660c1a  85c9                 test ecx, ecx
// 00660c1c  75f2                 jne 0x660c10
// 00660c1e  5e                   pop esi
// 00660c1f  5b                   pop ebx
// 00660c20  8d4106               lea eax, [ecx + 6]
// 00660c23  5f                   pop edi
// 00660c24  c3                   ret 
// 00660c25  c6410901             mov byte ptr [ecx + 9], 1
// 00660c29  5e                   pop esi
// 00660c2a  5b                   pop ebx
// 00660c2b  b806000000           mov eax, 6
// 00660c30  5f                   pop edi
// 00660c31  c3                   ret 
// 00660c32  56                   push esi
// 00660c33  53                   push ebx
// 00660c34  e8f7fdffff           call 0x660a30
// 00660c39  83c408               add esp, 8
// 00660c3c  894608               mov dword ptr [esi + 8], eax
// 00660c3f  c70607000000         mov dword ptr [esi], 7
// 00660c45  5e                   pop esi
// 00660c46  5b                   pop ebx
// 00660c47  b807000000           mov eax, 7
// 00660c4c  5f                   pop edi
// 00660c4d  c3                   ret 

struct Entry {
    int key;
    int unused[2];
};

struct Table {
    unsigned char unused[24];
    Entry* entries;
};

struct Link {
    Link* next;
    int unused;
    unsigned char index;
    unsigned char marked;
};

struct Node {
    Table* table;
    int unused04;
    Node* parent;
    int unused0C[2];
    Link* links;
    unsigned char unused18[26];
    unsigned char count;
    unsigned char unused33[121];
    unsigned short indices[1];
};

struct Result {
    int type;
    int unused04;
    int index;
    int unused0C;
    int first;
    int second;
};

extern int __cdecl resolve(int key, Result* result);

int __cdecl search(Node* node, int key, Result* result, int flag)
{
    if (!node) {
        result->first = -1;
        result->second = -1;
        result->type = 8;
        result->index = 255;
        return 8;
    }

    int i;
    for (i = node->count - 1; i >= 0; --i) {
        if (key == node->table->entries[node->indices[i]].key)
            break;
    }

    if (i >= 0) {
        result->first = -1;
        result->second = -1;
        result->type = 6;
        result->index = i;

        if (!flag) {
            Link* link = node->links;
            while (link) {
                if (link->index <= i) {
                    link->marked = 1;
                    break;
                }
                link = link->next;
            }
        }
        return 6;
    } else {
        int type = search(node->parent, key, result, 0);
        if (type == 8)
            return type;
    }

    result->index = resolve(key, result);
    result->type = 7;
    return 7;
}
