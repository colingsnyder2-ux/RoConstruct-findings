// roc 2009-06 00644d50  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00644d50
//
// 00644d50  83ec10               sub esp, 0x10
// 00644d53  55                   push ebp
// 00644d54  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00644d58  56                   push esi
// 00644d59  8bf1                 mov esi, ecx
// 00644d5b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00644d5e  8b4104               mov eax, dword ptr [ecx + 4]
// 00644d61  80781900             cmp byte ptr [eax + 0x19], 0
// 00644d65  57                   push edi
// 00644d66  8bf9                 mov edi, ecx
// 00644d68  751a                 jne 0x644d84
// 00644d6a  8b4d00               mov ecx, dword ptr [ebp]
// 00644d6d  8d4900               lea ecx, [ecx]
// 00644d70  39480c               cmp dword ptr [eax + 0xc], ecx
// 00644d73  7d05                 jge 0x644d7a
// 00644d75  8b4008               mov eax, dword ptr [eax + 8]
// 00644d78  eb04                 jmp 0x644d7e
// 00644d7a  8bf8                 mov edi, eax
// 00644d7c  8b00                 mov eax, dword ptr [eax]
// 00644d7e  80781900             cmp byte ptr [eax + 0x19], 0
// 00644d82  74ec                 je 0x644d70
// 00644d84  8b06                 mov eax, dword ptr [esi]
// 00644d86  53                   push ebx
// 00644d87  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00644d8a  897c2414             mov dword ptr [esp + 0x14], edi
// 00644d8e  89442410             mov dword ptr [esp + 0x10], eax
// 00644d92  85c0                 test eax, eax
// 00644d94  7404                 je 0x644d9a
// 00644d96  3bc0                 cmp eax, eax
// 00644d98  7406                 je 0x644da0
// 00644d9a  ff15ace98900         call dword ptr [0x89e9ac]
// 00644da0  3bfb                 cmp edi, ebx
// 00644da2  5b                   pop ebx
// 00644da3  740e                 je 0x644db3
// 00644da5  8b4500               mov eax, dword ptr [ebp]
// 00644da8  3b470c               cmp eax, dword ptr [edi + 0xc]
// 00644dab  7c06                 jl 0x644db3
// 00644dad  8d4c240c             lea ecx, [esp + 0xc]
// 00644db1  eb11                 jmp 0x644dc4
// 00644db3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00644db6  8b16                 mov edx, dword ptr [esi]
// 00644db8  894c2418             mov dword ptr [esp + 0x18], ecx
// 00644dbc  89542414             mov dword ptr [esp + 0x14], edx
// 00644dc0  8d4c2414             lea ecx, [esp + 0x14]
// 00644dc4  8b11                 mov edx, dword ptr [ecx]
// 00644dc6  8b442420             mov eax, dword ptr [esp + 0x20]
// 00644dca  8b4904               mov ecx, dword ptr [ecx + 4]
// 00644dcd  5f                   pop edi
// 00644dce  5e                   pop esi
// 00644dcf  8910                 mov dword ptr [eax], edx
// 00644dd1  894804               mov dword ptr [eax + 4], ecx
// 00644dd4  5d                   pop ebp
// 00644dd5  83c410               add esp, 0x10
// 00644dd8  c20800               ret 8
// copied from an identical function in another client (function ?find@SoundChannel@@QAE?AUIterator@@ABH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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