// from server: 100% by king_originala
// roc 2008-06 004adfd0  unit: RBX::Network::VClient::?$FactoryProduct  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004adfd0
//
// 004adfd0  83ec10               sub esp, 0x10
// 004adfd3  55                   push ebp
// 004adfd4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004adfd8  56                   push esi
// 004adfd9  8bf1                 mov esi, ecx
// 004adfdb  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004adfde  8b4104               mov eax, dword ptr [ecx + 4]
// 004adfe1  80783d00             cmp byte ptr [eax + 0x3d], 0
// 004adfe5  57                   push edi
// 004adfe6  8bf9                 mov edi, ecx
// 004adfe8  751a                 jne 0x4ae004
// 004adfea  8b4d00               mov ecx, dword ptr [ebp]
// 004adfed  8d4900               lea ecx, [ecx]
// 004adff0  39480c               cmp dword ptr [eax + 0xc], ecx
// 004adff3  7305                 jae 0x4adffa
// 004adff5  8b4008               mov eax, dword ptr [eax + 8]
// 004adff8  eb04                 jmp 0x4adffe
// 004adffa  8bf8                 mov edi, eax
// 004adffc  8b00                 mov eax, dword ptr [eax]
// 004adffe  80783d00             cmp byte ptr [eax + 0x3d], 0
// 004ae002  74ec                 je 0x4adff0
// 004ae004  8b06                 mov eax, dword ptr [esi]
// 004ae006  53                   push ebx
// 004ae007  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 004ae00a  897c2414             mov dword ptr [esp + 0x14], edi
// 004ae00e  89442410             mov dword ptr [esp + 0x10], eax
// 004ae012  85c0                 test eax, eax
// 004ae014  7404                 je 0x4ae01a
// 004ae016  3bc0                 cmp eax, eax
// 004ae018  7406                 je 0x4ae020
// 004ae01a  ff1590288000         call dword ptr [0x802890]
// 004ae020  3bfb                 cmp edi, ebx
// 004ae022  5b                   pop ebx
// 004ae023  740e                 je 0x4ae033
// 004ae025  8b4500               mov eax, dword ptr [ebp]
// 004ae028  3b470c               cmp eax, dword ptr [edi + 0xc]
// 004ae02b  7206                 jb 0x4ae033
// 004ae02d  8d4c240c             lea ecx, [esp + 0xc]
// 004ae031  eb11                 jmp 0x4ae044
// 004ae033  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004ae036  8b16                 mov edx, dword ptr [esi]
// 004ae038  894c2418             mov dword ptr [esp + 0x18], ecx
// 004ae03c  89542414             mov dword ptr [esp + 0x14], edx
// 004ae040  8d4c2414             lea ecx, [esp + 0x14]
// 004ae044  8b11                 mov edx, dword ptr [ecx]
// 004ae046  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ae04a  8b4904               mov ecx, dword ptr [ecx + 4]
// 004ae04d  5f                   pop edi
// 004ae04e  5e                   pop esi
// 004ae04f  8910                 mov dword ptr [eax], edx
// 004ae051  894804               mov dword ptr [eax + 4], ecx
// 004ae054  5d                   pop ebp
// 004ae055  83c410               add esp, 0x10
// 004ae058  c20800               ret 8

extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned int key;
    unsigned char padding[45];
    unsigned char nil;
};

struct Iterator {
    void* owner;
    Node* node;

    Iterator(Node*, void*);
    bool operator==(const Iterator&) const;
};

inline Iterator::Iterator(Node* n, void* p) {
    node = n;
    owner = p;
}

inline bool Iterator::operator==(const Iterator& other) const {
    if (!owner || owner != other.owner)
        invalid_parameter_noinfo();
    return node == other.node;
}

struct S {
    void* owner;
    unsigned char padding[20];
    Node* head;

    Iterator end() const;
    Iterator find(const unsigned int&);
};

inline Iterator S::end() const {
    return Iterator(head, owner);
}

Iterator S::find(const unsigned int& key) {
    Node* current = head->parent;
    Node* candidate = head;
    while (!current->nil) {
        if (current->key < key) {
            current = current->right;
        } else {
            candidate = current;
            current = current->left;
        }
    }

    Iterator where(candidate, owner);
    return where == end() || key < candidate->key ? end() : where;
}
