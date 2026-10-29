// roc 2009-12 00668fc0  unit: RBX::VInstance::?$NonFactoryProduct  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00668fc0
//
// 00668fc0  83ec10               sub esp, 0x10
// 00668fc3  55                   push ebp
// 00668fc4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00668fc8  56                   push esi
// 00668fc9  8bf1                 mov esi, ecx
// 00668fcb  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00668fce  8b4104               mov eax, dword ptr [ecx + 4]
// 00668fd1  80781900             cmp byte ptr [eax + 0x19], 0
// 00668fd5  57                   push edi
// 00668fd6  8bf9                 mov edi, ecx
// 00668fd8  751a                 jne 0x668ff4
// 00668fda  8b4d00               mov ecx, dword ptr [ebp]
// 00668fdd  8d4900               lea ecx, [ecx]
// 00668fe0  39480c               cmp dword ptr [eax + 0xc], ecx
// 00668fe3  7d05                 jge 0x668fea
// 00668fe5  8b4008               mov eax, dword ptr [eax + 8]
// 00668fe8  eb04                 jmp 0x668fee
// 00668fea  8bf8                 mov edi, eax
// 00668fec  8b00                 mov eax, dword ptr [eax]
// 00668fee  80781900             cmp byte ptr [eax + 0x19], 0
// 00668ff2  74ec                 je 0x668fe0
// 00668ff4  8b06                 mov eax, dword ptr [esi]
// 00668ff6  53                   push ebx
// 00668ff7  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00668ffa  897c2414             mov dword ptr [esp + 0x14], edi
// 00668ffe  89442410             mov dword ptr [esp + 0x10], eax
// 00669002  85c0                 test eax, eax
// 00669004  7404                 je 0x66900a
// 00669006  3bc0                 cmp eax, eax
// 00669008  7406                 je 0x669010
// 0066900a  ff1560b79800         call dword ptr [0x98b760]
// 00669010  3bfb                 cmp edi, ebx
// 00669012  5b                   pop ebx
// 00669013  740e                 je 0x669023
// 00669015  8b4500               mov eax, dword ptr [ebp]
// 00669018  3b470c               cmp eax, dword ptr [edi + 0xc]
// 0066901b  7c06                 jl 0x669023
// 0066901d  8d4c240c             lea ecx, [esp + 0xc]
// 00669021  eb11                 jmp 0x669034
// 00669023  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00669026  8b16                 mov edx, dword ptr [esi]
// 00669028  894c2418             mov dword ptr [esp + 0x18], ecx
// 0066902c  89542414             mov dword ptr [esp + 0x14], edx
// 00669030  8d4c2414             lea ecx, [esp + 0x14]
// 00669034  8b11                 mov edx, dword ptr [ecx]
// 00669036  8b442420             mov eax, dword ptr [esp + 0x20]
// 0066903a  8b4904               mov ecx, dword ptr [ecx + 4]
// 0066903d  5f                   pop edi
// 0066903e  5e                   pop esi
// 0066903f  8910                 mov dword ptr [eax], edx
// 00669041  894804               mov dword ptr [eax + 4], ecx
// 00669044  5d                   pop ebp
// 00669045  83c410               add esp, 0x10
// 00669048  c20800               ret 8
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