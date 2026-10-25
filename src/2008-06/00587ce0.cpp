// from server: 100% by king_originala
// roc 2008-06 00587ce0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00587ce0
//
// 00587ce0  83ec10               sub esp, 0x10
// 00587ce3  55                   push ebp
// 00587ce4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00587ce8  56                   push esi
// 00587ce9  8bf1                 mov esi, ecx
// 00587ceb  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00587cee  8b4104               mov eax, dword ptr [ecx + 4]
// 00587cf1  80784900             cmp byte ptr [eax + 0x49], 0
// 00587cf5  57                   push edi
// 00587cf6  8bf9                 mov edi, ecx
// 00587cf8  751a                 jne 0x587d14
// 00587cfa  8b4d00               mov ecx, dword ptr [ebp]
// 00587cfd  8d4900               lea ecx, [ecx]
// 00587d00  39480c               cmp dword ptr [eax + 0xc], ecx
// 00587d03  7305                 jae 0x587d0a
// 00587d05  8b4008               mov eax, dword ptr [eax + 8]
// 00587d08  eb04                 jmp 0x587d0e
// 00587d0a  8bf8                 mov edi, eax
// 00587d0c  8b00                 mov eax, dword ptr [eax]
// 00587d0e  80784900             cmp byte ptr [eax + 0x49], 0
// 00587d12  74ec                 je 0x587d00
// 00587d14  8b06                 mov eax, dword ptr [esi]
// 00587d16  53                   push ebx
// 00587d17  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00587d1a  897c2414             mov dword ptr [esp + 0x14], edi
// 00587d1e  89442410             mov dword ptr [esp + 0x10], eax
// 00587d22  85c0                 test eax, eax
// 00587d24  7404                 je 0x587d2a
// 00587d26  3bc0                 cmp eax, eax
// 00587d28  7406                 je 0x587d30
// 00587d2a  ff1590288000         call dword ptr [0x802890]
// 00587d30  3bfb                 cmp edi, ebx
// 00587d32  5b                   pop ebx
// 00587d33  740e                 je 0x587d43
// 00587d35  8b4500               mov eax, dword ptr [ebp]
// 00587d38  3b470c               cmp eax, dword ptr [edi + 0xc]
// 00587d3b  7206                 jb 0x587d43
// 00587d3d  8d4c240c             lea ecx, [esp + 0xc]
// 00587d41  eb11                 jmp 0x587d54
// 00587d43  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00587d46  8b16                 mov edx, dword ptr [esi]
// 00587d48  894c2418             mov dword ptr [esp + 0x18], ecx
// 00587d4c  89542414             mov dword ptr [esp + 0x14], edx
// 00587d50  8d4c2414             lea ecx, [esp + 0x14]
// 00587d54  8b11                 mov edx, dword ptr [ecx]
// 00587d56  8b442420             mov eax, dword ptr [esp + 0x20]
// 00587d5a  8b4904               mov ecx, dword ptr [ecx + 4]
// 00587d5d  5f                   pop edi
// 00587d5e  5e                   pop esi
// 00587d5f  8910                 mov dword ptr [eax], edx
// 00587d61  894804               mov dword ptr [eax + 4], ecx
// 00587d64  5d                   pop ebp
// 00587d65  83c410               add esp, 0x10
// 00587d68  c20800               ret 8

extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    unsigned int key;
    unsigned char reserved[57];
    unsigned char nil;
};

struct Iterator {
    void *owner;
    Node *node;

    Iterator();
    Iterator(void *, Node *);
    bool operator==(const Iterator &) const;
};

inline Iterator::Iterator()
{
}

inline Iterator::Iterator(void *o, Node *n)
{
    node = n;
    owner = o;
}

inline bool Iterator::operator==(const Iterator &other) const
{
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return node == other.node;
}

struct S {
    void *owner;
    unsigned char reserved[20];
    Node *head;

    Iterator f(const unsigned int *key);
};

Iterator S::f(const unsigned int *key)
{
    Node *node = head->parent;
    Node *where = head;

    while (!node->nil) {
        if (node->key < *key)
            node = node->right;
        else {
            where = node;
            node = node->left;
        }
    }

    Iterator result(owner, where);
    Iterator finish;
    Iterator *selected;

    if (!(result == Iterator(owner, head)) && *key >= where->key)
        selected = &result;
    else {
        finish.node = head;
        finish.owner = owner;
        selected = &finish;
    }

    return *selected;
}
