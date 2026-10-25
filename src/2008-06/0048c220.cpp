// from server: 100% by king_originala
// roc 2008-06 0048c220  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048c220
//
// 0048c220  83ec10               sub esp, 0x10
// 0048c223  55                   push ebp
// 0048c224  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0048c228  56                   push esi
// 0048c229  8bf1                 mov esi, ecx
// 0048c22b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0048c22e  8b4104               mov eax, dword ptr [ecx + 4]
// 0048c231  80780e00             cmp byte ptr [eax + 0xe], 0
// 0048c235  57                   push edi
// 0048c236  8bf9                 mov edi, ecx
// 0048c238  751a                 jne 0x48c254
// 0048c23a  8a4d00               mov cl, byte ptr [ebp]
// 0048c23d  8d4900               lea ecx, [ecx]
// 0048c240  38480c               cmp byte ptr [eax + 0xc], cl
// 0048c243  7d05                 jge 0x48c24a
// 0048c245  8b4008               mov eax, dword ptr [eax + 8]
// 0048c248  eb04                 jmp 0x48c24e
// 0048c24a  8bf8                 mov edi, eax
// 0048c24c  8b00                 mov eax, dword ptr [eax]
// 0048c24e  80780e00             cmp byte ptr [eax + 0xe], 0
// 0048c252  74ec                 je 0x48c240
// 0048c254  8b06                 mov eax, dword ptr [esi]
// 0048c256  53                   push ebx
// 0048c257  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0048c25a  897c2414             mov dword ptr [esp + 0x14], edi
// 0048c25e  89442410             mov dword ptr [esp + 0x10], eax
// 0048c262  85c0                 test eax, eax
// 0048c264  7404                 je 0x48c26a
// 0048c266  3bc0                 cmp eax, eax
// 0048c268  7406                 je 0x48c270
// 0048c26a  ff1590288000         call dword ptr [0x802890]
// 0048c270  3bfb                 cmp edi, ebx
// 0048c272  5b                   pop ebx
// 0048c273  740e                 je 0x48c283
// 0048c275  8a4500               mov al, byte ptr [ebp]
// 0048c278  3a470c               cmp al, byte ptr [edi + 0xc]
// 0048c27b  7c06                 jl 0x48c283
// 0048c27d  8d4c240c             lea ecx, [esp + 0xc]
// 0048c281  eb11                 jmp 0x48c294
// 0048c283  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0048c286  8b16                 mov edx, dword ptr [esi]
// 0048c288  894c2418             mov dword ptr [esp + 0x18], ecx
// 0048c28c  89542414             mov dword ptr [esp + 0x14], edx
// 0048c290  8d4c2414             lea ecx, [esp + 0x14]
// 0048c294  8b11                 mov edx, dword ptr [ecx]
// 0048c296  8b442420             mov eax, dword ptr [esp + 0x20]
// 0048c29a  8b4904               mov ecx, dword ptr [ecx + 4]
// 0048c29d  5f                   pop edi
// 0048c29e  5e                   pop esi
// 0048c29f  8910                 mov dword ptr [eax], edx
// 0048c2a1  894804               mov dword ptr [eax + 4], ecx
// 0048c2a4  5d                   pop ebp
// 0048c2a5  83c410               add esp, 0x10
// 0048c2a8  c20800               ret 8

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
