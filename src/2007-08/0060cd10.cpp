// from server: 66% by colin
// roc 2007-08 0060cd10  unit: RBX::Block  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060cd10
//
// 0060cd10  8b4104               mov eax, dword ptr [ecx + 4]
// 0060cd13  8b4804               mov ecx, dword ptr [eax + 4]
// 0060cd16  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 0060cd1a  56                   push esi
// 0060cd1b  8bf0                 mov esi, eax
// 0060cd1d  7554                 jne 0x60cd73
// 0060cd1f  8b542408             mov edx, dword ptr [esp + 8]
// 0060cd23  d902                 fld dword ptr [edx]
// 0060cd25  d8590c               fcomp dword ptr [ecx + 0xc]
// 0060cd28  dfe0                 fnstsw ax
// 0060cd2a  f6c441               test ah, 0x41
// 0060cd2d  7433                 je 0x60cd62
// 0060cd2f  d902                 fld dword ptr [edx]
// 0060cd31  d8590c               fcomp dword ptr [ecx + 0xc]
// 0060cd34  dfe0                 fnstsw ax
// 0060cd36  f6c405               test ah, 5
// 0060cd39  7b2c                 jnp 0x60cd67
// 0060cd3b  d94204               fld dword ptr [edx + 4]
// 0060cd3e  d85910               fcomp dword ptr [ecx + 0x10]
// 0060cd41  dfe0                 fnstsw ax
// 0060cd43  f6c441               test ah, 0x41
// 0060cd46  741a                 je 0x60cd62
// 0060cd48  d94204               fld dword ptr [edx + 4]
// 0060cd4b  d85910               fcomp dword ptr [ecx + 0x10]
// 0060cd4e  dfe0                 fnstsw ax
// 0060cd50  f6c405               test ah, 5
// 0060cd53  7b12                 jnp 0x60cd67
// 0060cd55  d94208               fld dword ptr [edx + 8]
// 0060cd58  d85914               fcomp dword ptr [ecx + 0x14]
// 0060cd5b  dfe0                 fnstsw ax
// 0060cd5d  f6c441               test ah, 0x41
// 0060cd60  7505                 jne 0x60cd67
// 0060cd62  8b4908               mov ecx, dword ptr [ecx + 8]
// 0060cd65  eb04                 jmp 0x60cd6b
// 0060cd67  8bf1                 mov esi, ecx
// 0060cd69  8b09                 mov ecx, dword ptr [ecx]
// 0060cd6b  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 0060cd6f  74b2                 je 0x60cd23
// 0060cd71  8bc6                 mov eax, esi
// 0060cd73  5e                   pop esi
// 0060cd74  c20400               ret 4

struct Block {
    char pad0[4];
    struct Node {
        char pad0[4];
        float x;
        float y;
        float z;
        char pad14[0x1d - 0x14];
        unsigned char flag;
        char pad1e[4];
        Node* left;
        Node* right;
    };
    Node* root;
    Node* find(const float* p);
};

Block::Node* Block::find(const float* p) {
    Node* n = root;
    Node* c = n->left;
    Node* result = n;
    while (c->flag == 0) {
        if (p[0] < c->x) {
            c = c->left;
        } else if (p[0] > c->x) {
            result = c;
            c = c->left;
        } else if (p[1] < c->y) {
            c = c->left;
        } else if (p[1] > c->y) {
            result = c;
            c = c->left;
        } else if (p[2] < c->z) {
            c = c->left;
        } else {
            result = c;
            c = c->left;
        }
    }
    return result;
}
