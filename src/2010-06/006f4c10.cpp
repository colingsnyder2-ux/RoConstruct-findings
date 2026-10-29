// roc 2010-06 006f4c10  unit: RBX::VInstance::?$NonFactoryProduct  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f4c10
//
// 006f4c10  83ec10               sub esp, 0x10
// 006f4c13  55                   push ebp
// 006f4c14  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006f4c18  56                   push esi
// 006f4c19  8bf1                 mov esi, ecx
// 006f4c1b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006f4c1e  8b4104               mov eax, dword ptr [ecx + 4]
// 006f4c21  80780e00             cmp byte ptr [eax + 0xe], 0
// 006f4c25  57                   push edi
// 006f4c26  8bf9                 mov edi, ecx
// 006f4c28  751a                 jne 0x6f4c44
// 006f4c2a  8a4d00               mov cl, byte ptr [ebp]
// 006f4c2d  8d4900               lea ecx, [ecx]
// 006f4c30  38480c               cmp byte ptr [eax + 0xc], cl
// 006f4c33  7d05                 jge 0x6f4c3a
// 006f4c35  8b4008               mov eax, dword ptr [eax + 8]
// 006f4c38  eb04                 jmp 0x6f4c3e
// 006f4c3a  8bf8                 mov edi, eax
// 006f4c3c  8b00                 mov eax, dword ptr [eax]
// 006f4c3e  80780e00             cmp byte ptr [eax + 0xe], 0
// 006f4c42  74ec                 je 0x6f4c30
// 006f4c44  8b06                 mov eax, dword ptr [esi]
// 006f4c46  53                   push ebx
// 006f4c47  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 006f4c4a  897c2414             mov dword ptr [esp + 0x14], edi
// 006f4c4e  89442410             mov dword ptr [esp + 0x10], eax
// 006f4c52  85c0                 test eax, eax
// 006f4c54  7404                 je 0x6f4c5a
// 006f4c56  3bc0                 cmp eax, eax
// 006f4c58  7406                 je 0x6f4c60
// 006f4c5a  ff150ca99e00         call dword ptr [0x9ea90c]
// 006f4c60  3bfb                 cmp edi, ebx
// 006f4c62  5b                   pop ebx
// 006f4c63  740e                 je 0x6f4c73
// 006f4c65  8a4500               mov al, byte ptr [ebp]
// 006f4c68  3a470c               cmp al, byte ptr [edi + 0xc]
// 006f4c6b  7c06                 jl 0x6f4c73
// 006f4c6d  8d4c240c             lea ecx, [esp + 0xc]
// 006f4c71  eb11                 jmp 0x6f4c84
// 006f4c73  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006f4c76  8b16                 mov edx, dword ptr [esi]
// 006f4c78  894c2418             mov dword ptr [esp + 0x18], ecx
// 006f4c7c  89542414             mov dword ptr [esp + 0x14], edx
// 006f4c80  8d4c2414             lea ecx, [esp + 0x14]
// 006f4c84  8b11                 mov edx, dword ptr [ecx]
// 006f4c86  8b442420             mov eax, dword ptr [esp + 0x20]
// 006f4c8a  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f4c8d  5f                   pop edi
// 006f4c8e  5e                   pop esi
// 006f4c8f  8910                 mov dword ptr [eax], edx
// 006f4c91  894804               mov dword ptr [eax + 4], ecx
// 006f4c94  5d                   pop ebp
// 006f4c95  83c410               add esp, 0x10
// 006f4c98  c20800               ret 8
// copied from an identical function in another client (function ?f@S@@QAE?AUIterator@@ABC@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Node
{
    Node* left;
    Node* parent;
    Node* right;
    signed char key;
    unsigned char color;
    unsigned char nil;
};

struct Iterator
{
    void* owner;
    Node* node;

    Iterator(void* o, Node* n);
    bool operator==(const Iterator& other) const;
};

struct S
{
    void* owner;
    unsigned char padding[20];
    Node* head;

    Iterator end() const;
    Iterator f(const signed char& key);
};

inline Iterator::Iterator(void* o, Node* n)
{
    node = n;
    owner = o;
}

inline bool Iterator::operator==(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return node == other.node;
}

inline Iterator S::end() const
{
    return Iterator(owner, head);
}

Iterator S::f(const signed char& key)
{
    Node* current = head->parent;
    Node* candidate = head;

    if (!current->nil)
    {
        do
        {
            if (current->key < key)
                current = current->right;
            else
            {
                candidate = current;
                current = current->left;
            }
        } while (!current->nil);
    }

    Iterator position(owner, candidate);
    return position == end() || key < position.node->key
        ? end()
        : position;
}