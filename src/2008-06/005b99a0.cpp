// from server: 100% by king_originala
// roc 2008-06 005b99a0  unit: RBX::Soundscape::SoundChannel  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b99a0
//
// 005b99a0  83ec10               sub esp, 0x10
// 005b99a3  55                   push ebp
// 005b99a4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005b99a8  56                   push esi
// 005b99a9  8bf1                 mov esi, ecx
// 005b99ab  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005b99ae  8b4104               mov eax, dword ptr [ecx + 4]
// 005b99b1  80781900             cmp byte ptr [eax + 0x19], 0
// 005b99b5  57                   push edi
// 005b99b6  8bf9                 mov edi, ecx
// 005b99b8  751a                 jne 0x5b99d4
// 005b99ba  8b4d00               mov ecx, dword ptr [ebp]
// 005b99bd  8d4900               lea ecx, [ecx]
// 005b99c0  39480c               cmp dword ptr [eax + 0xc], ecx
// 005b99c3  7d05                 jge 0x5b99ca
// 005b99c5  8b4008               mov eax, dword ptr [eax + 8]
// 005b99c8  eb04                 jmp 0x5b99ce
// 005b99ca  8bf8                 mov edi, eax
// 005b99cc  8b00                 mov eax, dword ptr [eax]
// 005b99ce  80781900             cmp byte ptr [eax + 0x19], 0
// 005b99d2  74ec                 je 0x5b99c0
// 005b99d4  8b06                 mov eax, dword ptr [esi]
// 005b99d6  53                   push ebx
// 005b99d7  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 005b99da  897c2414             mov dword ptr [esp + 0x14], edi
// 005b99de  89442410             mov dword ptr [esp + 0x10], eax
// 005b99e2  85c0                 test eax, eax
// 005b99e4  7404                 je 0x5b99ea
// 005b99e6  3bc0                 cmp eax, eax
// 005b99e8  7406                 je 0x5b99f0
// 005b99ea  ff1590288000         call dword ptr [0x802890]
// 005b99f0  3bfb                 cmp edi, ebx
// 005b99f2  5b                   pop ebx
// 005b99f3  740e                 je 0x5b9a03
// 005b99f5  8b4500               mov eax, dword ptr [ebp]
// 005b99f8  3b470c               cmp eax, dword ptr [edi + 0xc]
// 005b99fb  7c06                 jl 0x5b9a03
// 005b99fd  8d4c240c             lea ecx, [esp + 0xc]
// 005b9a01  eb11                 jmp 0x5b9a14
// 005b9a03  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005b9a06  8b16                 mov edx, dword ptr [esi]
// 005b9a08  894c2418             mov dword ptr [esp + 0x18], ecx
// 005b9a0c  89542414             mov dword ptr [esp + 0x14], edx
// 005b9a10  8d4c2414             lea ecx, [esp + 0x14]
// 005b9a14  8b11                 mov edx, dword ptr [ecx]
// 005b9a16  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b9a1a  8b4904               mov ecx, dword ptr [ecx + 4]
// 005b9a1d  5f                   pop edi
// 005b9a1e  5e                   pop esi
// 005b9a1f  8910                 mov dword ptr [eax], edx
// 005b9a21  894804               mov dword ptr [eax + 4], ecx
// 005b9a24  5d                   pop ebp
// 005b9a25  83c410               add esp, 0x10
// 005b9a28  c20800               ret 8

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    int key;
    char reserved[8];
    unsigned char color;
    unsigned char nil;
};

struct Iterator {
    void* owner;
    Node* node;

    bool operator==(const Iterator& other) const;
};

inline bool Iterator::operator==(const Iterator& other) const
{
    if (owner == 0 || owner != other.owner)
        _invalid_parameter_noinfo();
    return node == other.node;
}

struct SoundChannel {
    void* owner;
    char reserved[20];
    Node* head;

    Iterator end();
    Iterator find(const int& key);
};

inline Iterator SoundChannel::end()
{
    Iterator result;
    result.node = head;
    result.owner = owner;
    return result;
}

Iterator SoundChannel::find(const int& key)
{
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

    Iterator found;
    found.node = candidate;
    found.owner = owner;

    return (!(found == end()) && !(key < candidate->key))
        ? found : end();
}
