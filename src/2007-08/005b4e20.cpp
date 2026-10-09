// from server: 100% by colin
// roc 2007-08 005b4e20  unit: RBX::Geometry  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4e20
//
// 005b4e20  8b542404             mov edx, dword ptr [esp + 4]
// 005b4e24  8b4214               mov eax, dword ptr [edx + 0x14]
// 005b4e27  56                   push esi
// 005b4e28  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b4e2c  3b4614               cmp eax, dword ptr [esi + 0x14]
// 005b4e2f  57                   push edi
// 005b4e30  8bfa                 mov edi, edx
// 005b4e32  7c02                 jl 0x5b4e36
// 005b4e34  8bfe                 mov edi, esi
// 005b4e36  8b4710               mov eax, dword ptr [edi + 0x10]
// 005b4e39  85c0                 test eax, eax
// 005b4e3b  7428                 je 0x5b4e65
// 005b4e3d  8d4900               lea ecx, [ecx]
// 005b4e40  8b4808               mov ecx, dword ptr [eax + 8]
// 005b4e43  3bd1                 cmp edx, ecx
// 005b4e45  7505                 jne 0x5b4e4c
// 005b4e47  3b700c               cmp esi, dword ptr [eax + 0xc]
// 005b4e4a  741b                 je 0x5b4e67
// 005b4e4c  3b500c               cmp edx, dword ptr [eax + 0xc]
// 005b4e4f  7504                 jne 0x5b4e55
// 005b4e51  3bf1                 cmp esi, ecx
// 005b4e53  7412                 je 0x5b4e67
// 005b4e55  3bf9                 cmp edi, ecx
// 005b4e57  7505                 jne 0x5b4e5e
// 005b4e59  8b4010               mov eax, dword ptr [eax + 0x10]
// 005b4e5c  eb03                 jmp 0x5b4e61
// 005b4e5e  8b4014               mov eax, dword ptr [eax + 0x14]
// 005b4e61  85c0                 test eax, eax
// 005b4e63  75db                 jne 0x5b4e40
// 005b4e65  33c0                 xor eax, eax
// 005b4e67  5f                   pop edi
// 005b4e68  5e                   pop esi
// 005b4e69  c3                   ret 

struct Node {
    char pad0[8];
    void* key1;
    void* key2;
    Node* left;
    Node* right;
};

struct Geometry {
    char pad0[0x10];
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
