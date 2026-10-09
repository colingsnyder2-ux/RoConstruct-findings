// from server: 66% by colin
// roc 2007-08 004d0700  unit: RBX::View::PartChunk  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d0700
//
// 004d0700  8b4104               mov eax, dword ptr [ecx + 4]
// 004d0703  8b5004               mov edx, dword ptr [eax + 4]
// 004d0706  807a2900             cmp byte ptr [edx + 0x29], 0
// 004d070a  753f                 jne 0x4d074b
// 004d070c  53                   push ebx
// 004d070d  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004d0711  55                   push ebp
// 004d0712  56                   push esi
// 004d0713  57                   push edi
// 004d0714  8d6b10               lea ebp, [ebx + 0x10]
// 004d0717  8d4a0c               lea ecx, [edx + 0xc]
// 004d071a  8d7110               lea esi, [ecx + 0x10]
// 004d071d  3bf5                 cmp esi, ebp
// 004d071f  7217                 jb 0x4d0738
// 004d0721  771a                 ja 0x4d073d
// 004d0723  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004d0726  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 004d0729  3bf7                 cmp esi, edi
// 004d072b  7c0b                 jl 0x4d0738
// 004d072d  7f0e                 jg 0x4d073d
// 004d072f  3bcb                 cmp ecx, ebx
// 004d0731  0f92c1               setb cl
// 004d0734  84c9                 test cl, cl
// 004d0736  7405                 je 0x4d073d
// 004d0738  8b5208               mov edx, dword ptr [edx + 8]
// 004d073b  eb04                 jmp 0x4d0741
// 004d073d  8bc2                 mov eax, edx
// 004d073f  8b12                 mov edx, dword ptr [edx]
// 004d0741  807a2900             cmp byte ptr [edx + 0x29], 0
// 004d0745  74d0                 je 0x4d0717
// 004d0747  5f                   pop edi
// 004d0748  5e                   pop esi
// 004d0749  5d                   pop ebp
// 004d074a  5b                   pop ebx
// 004d074b  c20400               ret 4

struct PartChunk {
    char pad0[4];
    PartChunk* parent;
    char pad8[4];
    int fieldC;
    int field10;
    char pad14[0x15];
    bool flag29;
    PartChunk* left;
    PartChunk* right;
    PartChunk* find(PartChunk* key);
};

PartChunk* PartChunk::find(PartChunk* key)
{
    PartChunk* node = parent->parent;
    if (node->flag29)
        return node;

    PartChunk* keyEnd = (PartChunk*)((char*)key + 0x10);
    PartChunk* nodeEnd = (PartChunk*)((char*)node + 0x1c);

    while (!node->flag29) {
        bool goLeft;
        if (nodeEnd < keyEnd) {
            goLeft = true;
        } else if (nodeEnd > keyEnd) {
            goLeft = false;
        } else if (node->fieldC < key->fieldC) {
            goLeft = true;
        } else if (node->fieldC > key->fieldC) {
            goLeft = false;
        } else {
            goLeft = node < key;
        }

        if (goLeft) {
            node = node->right;
        } else {
            node = node->left;
        }
        nodeEnd = (PartChunk*)((char*)node + 0x1c);
    }
    return node;
}
