// roc 2009-12 006831b0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006831b0
//
// 006831b0  83ec10               sub esp, 0x10
// 006831b3  55                   push ebp
// 006831b4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006831b8  56                   push esi
// 006831b9  8bf1                 mov esi, ecx
// 006831bb  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006831be  8b4104               mov eax, dword ptr [ecx + 4]
// 006831c1  80784900             cmp byte ptr [eax + 0x49], 0
// 006831c5  57                   push edi
// 006831c6  8bf9                 mov edi, ecx
// 006831c8  751a                 jne 0x6831e4
// 006831ca  8b4d00               mov ecx, dword ptr [ebp]
// 006831cd  8d4900               lea ecx, [ecx]
// 006831d0  39480c               cmp dword ptr [eax + 0xc], ecx
// 006831d3  7305                 jae 0x6831da
// 006831d5  8b4008               mov eax, dword ptr [eax + 8]
// 006831d8  eb04                 jmp 0x6831de
// 006831da  8bf8                 mov edi, eax
// 006831dc  8b00                 mov eax, dword ptr [eax]
// 006831de  80784900             cmp byte ptr [eax + 0x49], 0
// 006831e2  74ec                 je 0x6831d0
// 006831e4  8b06                 mov eax, dword ptr [esi]
// 006831e6  53                   push ebx
// 006831e7  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 006831ea  897c2414             mov dword ptr [esp + 0x14], edi
// 006831ee  89442410             mov dword ptr [esp + 0x10], eax
// 006831f2  85c0                 test eax, eax
// 006831f4  7404                 je 0x6831fa
// 006831f6  3bc0                 cmp eax, eax
// 006831f8  7406                 je 0x683200
// 006831fa  ff1560b79800         call dword ptr [0x98b760]
// 00683200  3bfb                 cmp edi, ebx
// 00683202  5b                   pop ebx
// 00683203  740e                 je 0x683213
// 00683205  8b4500               mov eax, dword ptr [ebp]
// 00683208  3b470c               cmp eax, dword ptr [edi + 0xc]
// 0068320b  7206                 jb 0x683213
// 0068320d  8d4c240c             lea ecx, [esp + 0xc]
// 00683211  eb11                 jmp 0x683224
// 00683213  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00683216  8b16                 mov edx, dword ptr [esi]
// 00683218  894c2418             mov dword ptr [esp + 0x18], ecx
// 0068321c  89542414             mov dword ptr [esp + 0x14], edx
// 00683220  8d4c2414             lea ecx, [esp + 0x14]
// 00683224  8b11                 mov edx, dword ptr [ecx]
// 00683226  8b442420             mov eax, dword ptr [esp + 0x20]
// 0068322a  8b4904               mov ecx, dword ptr [ecx + 4]
// 0068322d  5f                   pop edi
// 0068322e  5e                   pop esi
// 0068322f  8910                 mov dword ptr [eax], edx
// 00683231  894804               mov dword ptr [eax + 4], ecx
// 00683234  5d                   pop ebp
// 00683235  83c410               add esp, 0x10
// 00683238  c20800               ret 8
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