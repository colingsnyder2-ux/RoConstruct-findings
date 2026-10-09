// from server: 100% by colin
// roc 2007-08 005b4e70  unit: RBX::Geometry  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4e70
//
// 005b4e70  8b542404             mov edx, dword ptr [esp + 4]
// 005b4e74  8b420c               mov eax, dword ptr [edx + 0xc]
// 005b4e77  56                   push esi
// 005b4e78  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b4e7c  3b460c               cmp eax, dword ptr [esi + 0xc]
// 005b4e7f  57                   push edi
// 005b4e80  8bfa                 mov edi, edx
// 005b4e82  7c02                 jl 0x5b4e86
// 005b4e84  8bfe                 mov edi, esi
// 005b4e86  8b4708               mov eax, dword ptr [edi + 8]
// 005b4e89  85c0                 test eax, eax
// 005b4e8b  7428                 je 0x5b4eb5
// 005b4e8d  8d4900               lea ecx, [ecx]
// 005b4e90  8b4808               mov ecx, dword ptr [eax + 8]
// 005b4e93  3bd1                 cmp edx, ecx
// 005b4e95  7505                 jne 0x5b4e9c
// 005b4e97  3b700c               cmp esi, dword ptr [eax + 0xc]
// 005b4e9a  741b                 je 0x5b4eb7
// 005b4e9c  3b500c               cmp edx, dword ptr [eax + 0xc]
// 005b4e9f  7504                 jne 0x5b4ea5
// 005b4ea1  3bf1                 cmp esi, ecx
// 005b4ea3  7412                 je 0x5b4eb7
// 005b4ea5  3bf9                 cmp edi, ecx
// 005b4ea7  7505                 jne 0x5b4eae
// 005b4ea9  8b4010               mov eax, dword ptr [eax + 0x10]
// 005b4eac  eb03                 jmp 0x5b4eb1
// 005b4eae  8b4014               mov eax, dword ptr [eax + 0x14]
// 005b4eb1  85c0                 test eax, eax
// 005b4eb3  75db                 jne 0x5b4e90
// 005b4eb5  33c0                 xor eax, eax
// 005b4eb7  5f                   pop edi
// 005b4eb8  5e                   pop esi
// 005b4eb9  c3                   ret 

struct Node {
    char pad0[8];
    void* key1;
    void* key2;
    Node* left;
    Node* right;
};

struct Geometry {
    char pad0[8];
    Node* root;
    int key;
};

Node* find(Geometry* a, Geometry* b) {
    Geometry* smaller;
    if (a->key < b->key)
        smaller = a;
    else
        smaller = b;
    Node* n = smaller->root;
    while (n) {
        if (a == n->key1 && b == n->key2)
            return n;
        if (a == n->key2 && b == n->key1)
            return n;
        if (smaller == n->key1)
            n = n->left;
        else
            n = n->right;
    }
    return 0;
}
