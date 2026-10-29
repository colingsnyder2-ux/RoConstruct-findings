// roc 2010-06 005ea390  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ea390
//
// 005ea390  83ec10               sub esp, 0x10
// 005ea393  55                   push ebp
// 005ea394  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005ea398  56                   push esi
// 005ea399  8bf1                 mov esi, ecx
// 005ea39b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005ea39e  8b4104               mov eax, dword ptr [ecx + 4]
// 005ea3a1  80784900             cmp byte ptr [eax + 0x49], 0
// 005ea3a5  57                   push edi
// 005ea3a6  8bf9                 mov edi, ecx
// 005ea3a8  751a                 jne 0x5ea3c4
// 005ea3aa  8b4d00               mov ecx, dword ptr [ebp]
// 005ea3ad  8d4900               lea ecx, [ecx]
// 005ea3b0  39480c               cmp dword ptr [eax + 0xc], ecx
// 005ea3b3  7305                 jae 0x5ea3ba
// 005ea3b5  8b4008               mov eax, dword ptr [eax + 8]
// 005ea3b8  eb04                 jmp 0x5ea3be
// 005ea3ba  8bf8                 mov edi, eax
// 005ea3bc  8b00                 mov eax, dword ptr [eax]
// 005ea3be  80784900             cmp byte ptr [eax + 0x49], 0
// 005ea3c2  74ec                 je 0x5ea3b0
// 005ea3c4  8b06                 mov eax, dword ptr [esi]
// 005ea3c6  53                   push ebx
// 005ea3c7  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 005ea3ca  897c2414             mov dword ptr [esp + 0x14], edi
// 005ea3ce  89442410             mov dword ptr [esp + 0x10], eax
// 005ea3d2  85c0                 test eax, eax
// 005ea3d4  7404                 je 0x5ea3da
// 005ea3d6  3bc0                 cmp eax, eax
// 005ea3d8  7406                 je 0x5ea3e0
// 005ea3da  ff150ca99e00         call dword ptr [0x9ea90c]
// 005ea3e0  3bfb                 cmp edi, ebx
// 005ea3e2  5b                   pop ebx
// 005ea3e3  740e                 je 0x5ea3f3
// 005ea3e5  8b4500               mov eax, dword ptr [ebp]
// 005ea3e8  3b470c               cmp eax, dword ptr [edi + 0xc]
// 005ea3eb  7206                 jb 0x5ea3f3
// 005ea3ed  8d4c240c             lea ecx, [esp + 0xc]
// 005ea3f1  eb11                 jmp 0x5ea404
// 005ea3f3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005ea3f6  8b16                 mov edx, dword ptr [esi]
// 005ea3f8  894c2418             mov dword ptr [esp + 0x18], ecx
// 005ea3fc  89542414             mov dword ptr [esp + 0x14], edx
// 005ea400  8d4c2414             lea ecx, [esp + 0x14]
// 005ea404  8b11                 mov edx, dword ptr [ecx]
// 005ea406  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ea40a  8b4904               mov ecx, dword ptr [ecx + 4]
// 005ea40d  5f                   pop edi
// 005ea40e  5e                   pop esi
// 005ea40f  8910                 mov dword ptr [eax], edx
// 005ea411  894804               mov dword ptr [eax + 4], ecx
// 005ea414  5d                   pop ebp
// 005ea415  83c410               add esp, 0x10
// 005ea418  c20800               ret 8
// copied from an identical function in another client (function ?f@S@@QAE?AUIterator@@PBI@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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