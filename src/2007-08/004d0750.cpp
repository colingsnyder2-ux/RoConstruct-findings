// from server: 53% by colin
// roc 2007-08 004d0750  unit: RBX::View::PartChunk  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d0750
//
// 004d0750  8b4104               mov eax, dword ptr [ecx + 4]
// 004d0753  8b4804               mov ecx, dword ptr [eax + 4]
// 004d0756  80792100             cmp byte ptr [ecx + 0x21], 0
// 004d075a  7531                 jne 0x4d078d
// 004d075c  53                   push ebx
// 004d075d  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004d0761  56                   push esi
// 004d0762  57                   push edi
// 004d0763  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 004d0766  8b7118               mov esi, dword ptr [ecx + 0x18]
// 004d0769  3bf7                 cmp esi, edi
// 004d076b  8d510c               lea edx, [ecx + 0xc]
// 004d076e  7c0b                 jl 0x4d077b
// 004d0770  7f0e                 jg 0x4d0780
// 004d0772  3bd3                 cmp edx, ebx
// 004d0774  0f92c2               setb dl
// 004d0777  84d2                 test dl, dl
// 004d0779  7405                 je 0x4d0780
// 004d077b  8b4908               mov ecx, dword ptr [ecx + 8]
// 004d077e  eb04                 jmp 0x4d0784
// 004d0780  8bc1                 mov eax, ecx
// 004d0782  8b09                 mov ecx, dword ptr [ecx]
// 004d0784  80792100             cmp byte ptr [ecx + 0x21], 0
// 004d0788  74dc                 je 0x4d0766
// 004d078a  5f                   pop edi
// 004d078b  5e                   pop esi
// 004d078c  5b                   pop ebx
// 004d078d  c20400               ret 4

struct PartChunk {
    struct Node {
        Node* left;
        Node* right;
        Node* parent;
        int key;
        char color;
        char pad[3];
    };

    struct Tree {
        Node* header;
        Node* root;
        Node* leftmost;
        Node* rightmost;
        int count;
    };

    Tree* tree;

    Node* find(Node* arg);
};

PartChunk::Node* PartChunk::find(Node* arg) {
    Node* x = tree->header->parent;
    Node* y = tree->header;
    while (x->color == 0) {
        if (x->key < arg->key) {
            x = x->right;
        } else if (x->key > arg->key) {
            y = x;
            x = x->left;
        } else {
            if (x < arg) {
                x = x->right;
            } else {
                y = x;
                x = x->left;
            }
        }
    }
    return y;
}
