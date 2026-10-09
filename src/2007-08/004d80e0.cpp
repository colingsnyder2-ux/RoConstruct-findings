// from server: 42% by colin
// roc 2007-08 004d80e0  unit: RBX::View::Texture  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d80e0
//
// 004d80e0  8b4104               mov eax, dword ptr [ecx + 4]
// 004d80e3  8b4804               mov ecx, dword ptr [eax + 4]
// 004d80e6  80792100             cmp byte ptr [ecx + 0x21], 0
// 004d80ea  57                   push edi
// 004d80eb  8bf8                 mov edi, eax
// 004d80ed  754f                 jne 0x4d813e
// 004d80ef  8b542408             mov edx, dword ptr [esp + 8]
// 004d80f3  56                   push esi
// 004d80f4  8b32                 mov esi, dword ptr [edx]
// 004d80f6  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004d80f9  3bc6                 cmp eax, esi
// 004d80fb  7c2f                 jl 0x4d812c
// 004d80fd  7f32                 jg 0x4d8131
// 004d80ff  d94110               fld dword ptr [ecx + 0x10]
// 004d8102  d94204               fld dword ptr [edx + 4]
// 004d8105  ded9                 fcompp 
// 004d8107  dfe0                 fnstsw ax
// 004d8109  f6c441               test ah, 0x41
// 004d810c  741e                 je 0x4d812c
// 004d810e  d94110               fld dword ptr [ecx + 0x10]
// 004d8111  d94204               fld dword ptr [edx + 4]
// 004d8114  ded9                 fcompp 
// 004d8116  dfe0                 fnstsw ax
// 004d8118  f6c405               test ah, 5
// 004d811b  7b14                 jnp 0x4d8131
// 004d811d  d94114               fld dword ptr [ecx + 0x14]
// 004d8120  d94208               fld dword ptr [edx + 8]
// 004d8123  ded9                 fcompp 
// 004d8125  dfe0                 fnstsw ax
// 004d8127  f6c441               test ah, 0x41
// 004d812a  7505                 jne 0x4d8131
// 004d812c  8b4908               mov ecx, dword ptr [ecx + 8]
// 004d812f  eb04                 jmp 0x4d8135
// 004d8131  8bf9                 mov edi, ecx
// 004d8133  8b09                 mov ecx, dword ptr [ecx]
// 004d8135  80792100             cmp byte ptr [ecx + 0x21], 0
// 004d8139  74bb                 je 0x4d80f6
// 004d813b  8bc7                 mov eax, edi
// 004d813d  5e                   pop esi
// 004d813e  5f                   pop edi
// 004d813f  c20400               ret 4

struct Node {
    Node* left;
    Node* right;
    int key;
    float x;
    float y;
    char flag;
};

struct Tree {
    Node* root;
    Node* find(int key, float x, float y);
};

Node* Tree::find(int key, float x, float y) {
    Node* n = root;
    Node* c = n->right;
    Node* result = n;
    while (c->flag == 0) {
        if (c->key < key) {
            c = c->right;
        } else if (c->key > key) {
            result = c;
            c = c->left;
        } else {
            if (c->x == x && c->y == y) {
                c = c->right;
            } else {
                result = c;
                c = c->left;
            }
        }
    }
    return result;
}
