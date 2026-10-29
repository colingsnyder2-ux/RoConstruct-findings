// roc 2009-06 005176c0  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005176c0
//
// 005176c0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005176c3  8b4804               mov ecx, dword ptr [eax + 4]
// 005176c6  80792100             cmp byte ptr [ecx + 0x21], 0
// 005176ca  7531                 jne 0x5176fd
// 005176cc  53                   push ebx
// 005176cd  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005176d1  56                   push esi
// 005176d2  57                   push edi
// 005176d3  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 005176d6  8b7118               mov esi, dword ptr [ecx + 0x18]
// 005176d9  3bf7                 cmp esi, edi
// 005176db  8d510c               lea edx, [ecx + 0xc]
// 005176de  7c0b                 jl 0x5176eb
// 005176e0  7f0e                 jg 0x5176f0
// 005176e2  3bd3                 cmp edx, ebx
// 005176e4  0f92c2               setb dl
// 005176e7  84d2                 test dl, dl
// 005176e9  7405                 je 0x5176f0
// 005176eb  8b4908               mov ecx, dword ptr [ecx + 8]
// 005176ee  eb04                 jmp 0x5176f4
// 005176f0  8bc1                 mov eax, ecx
// 005176f2  8b09                 mov ecx, dword ptr [ecx]
// 005176f4  80792100             cmp byte ptr [ecx + 0x21], 0
// 005176f8  74dc                 je 0x5176d6
// 005176fa  5f                   pop edi
// 005176fb  5e                   pop esi
// 005176fc  5b                   pop ebx
// 005176fd  c20400               ret 4
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