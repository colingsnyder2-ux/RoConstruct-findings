// roc 2009-12 005cd140  unit: RBX::VRbxTextureProxy::?$sp_counted_impl_p  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cd140
//
// 005cd140  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005cd143  8b4804               mov ecx, dword ptr [eax + 4]
// 005cd146  80792100             cmp byte ptr [ecx + 0x21], 0
// 005cd14a  7531                 jne 0x5cd17d
// 005cd14c  53                   push ebx
// 005cd14d  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005cd151  56                   push esi
// 005cd152  57                   push edi
// 005cd153  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 005cd156  8b7118               mov esi, dword ptr [ecx + 0x18]
// 005cd159  3bf7                 cmp esi, edi
// 005cd15b  8d510c               lea edx, [ecx + 0xc]
// 005cd15e  7c0b                 jl 0x5cd16b
// 005cd160  7f0e                 jg 0x5cd170
// 005cd162  3bd3                 cmp edx, ebx
// 005cd164  0f92c2               setb dl
// 005cd167  84d2                 test dl, dl
// 005cd169  7405                 je 0x5cd170
// 005cd16b  8b4908               mov ecx, dword ptr [ecx + 8]
// 005cd16e  eb04                 jmp 0x5cd174
// 005cd170  8bc1                 mov eax, ecx
// 005cd172  8b09                 mov ecx, dword ptr [ecx]
// 005cd174  80792100             cmp byte ptr [ecx + 0x21], 0
// 005cd178  74dc                 je 0x5cd156
// 005cd17a  5f                   pop edi
// 005cd17b  5e                   pop esi
// 005cd17c  5b                   pop ebx
// 005cd17d  c20400               ret 4
// copied from an identical function in another client (function ?find@S@@QAEPAUNode@@PBUKey@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Key {
    char padding[12];
    int value;
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    Key key;
    char padding[4];
    unsigned char color;
    unsigned char nil;
};

struct S {
    char padding[24];
    Node* head;
    Node* find(const Key* key);
};

Node* S::find(const Key* key)
{
    Node* result = head;
    Node* current = result->parent;
    while (!current->nil) {
        const Key* candidate = &current->key;
        bool less;
        if (candidate->value < key->value)
            less = true;
        else if (candidate->value > key->value)
            less = false;
        else
            less = candidate < key;
        if (less) {
            current = current->right;
        } else {
            result = current;
            current = current->left;
        }
    }
    return result;
}