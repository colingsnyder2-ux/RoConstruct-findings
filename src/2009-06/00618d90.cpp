// roc 2009-06 00618d90  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00618d90
//
// 00618d90  83ec10               sub esp, 0x10
// 00618d93  55                   push ebp
// 00618d94  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00618d98  56                   push esi
// 00618d99  8bf1                 mov esi, ecx
// 00618d9b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00618d9e  8b4104               mov eax, dword ptr [ecx + 4]
// 00618da1  80784900             cmp byte ptr [eax + 0x49], 0
// 00618da5  57                   push edi
// 00618da6  8bf9                 mov edi, ecx
// 00618da8  751a                 jne 0x618dc4
// 00618daa  8b4d00               mov ecx, dword ptr [ebp]
// 00618dad  8d4900               lea ecx, [ecx]
// 00618db0  39480c               cmp dword ptr [eax + 0xc], ecx
// 00618db3  7305                 jae 0x618dba
// 00618db5  8b4008               mov eax, dword ptr [eax + 8]
// 00618db8  eb04                 jmp 0x618dbe
// 00618dba  8bf8                 mov edi, eax
// 00618dbc  8b00                 mov eax, dword ptr [eax]
// 00618dbe  80784900             cmp byte ptr [eax + 0x49], 0
// 00618dc2  74ec                 je 0x618db0
// 00618dc4  8b06                 mov eax, dword ptr [esi]
// 00618dc6  53                   push ebx
// 00618dc7  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00618dca  897c2414             mov dword ptr [esp + 0x14], edi
// 00618dce  89442410             mov dword ptr [esp + 0x10], eax
// 00618dd2  85c0                 test eax, eax
// 00618dd4  7404                 je 0x618dda
// 00618dd6  3bc0                 cmp eax, eax
// 00618dd8  7406                 je 0x618de0
// 00618dda  ff15ace98900         call dword ptr [0x89e9ac]
// 00618de0  3bfb                 cmp edi, ebx
// 00618de2  5b                   pop ebx
// 00618de3  740e                 je 0x618df3
// 00618de5  8b4500               mov eax, dword ptr [ebp]
// 00618de8  3b470c               cmp eax, dword ptr [edi + 0xc]
// 00618deb  7206                 jb 0x618df3
// 00618ded  8d4c240c             lea ecx, [esp + 0xc]
// 00618df1  eb11                 jmp 0x618e04
// 00618df3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00618df6  8b16                 mov edx, dword ptr [esi]
// 00618df8  894c2418             mov dword ptr [esp + 0x18], ecx
// 00618dfc  89542414             mov dword ptr [esp + 0x14], edx
// 00618e00  8d4c2414             lea ecx, [esp + 0x14]
// 00618e04  8b11                 mov edx, dword ptr [ecx]
// 00618e06  8b442420             mov eax, dword ptr [esp + 0x20]
// 00618e0a  8b4904               mov ecx, dword ptr [ecx + 4]
// 00618e0d  5f                   pop edi
// 00618e0e  5e                   pop esi
// 00618e0f  8910                 mov dword ptr [eax], edx
// 00618e11  894804               mov dword ptr [eax + 4], ecx
// 00618e14  5d                   pop ebp
// 00618e15  83c410               add esp, 0x10
// 00618e18  c20800               ret 8
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