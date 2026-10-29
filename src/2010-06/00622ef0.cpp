// roc 2010-06 00622ef0  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00622ef0
//
// 00622ef0  83ec10               sub esp, 0x10
// 00622ef3  55                   push ebp
// 00622ef4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00622ef8  56                   push esi
// 00622ef9  8bf1                 mov esi, ecx
// 00622efb  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00622efe  8b4104               mov eax, dword ptr [ecx + 4]
// 00622f01  80781900             cmp byte ptr [eax + 0x19], 0
// 00622f05  57                   push edi
// 00622f06  8bf9                 mov edi, ecx
// 00622f08  751a                 jne 0x622f24
// 00622f0a  8b4d00               mov ecx, dword ptr [ebp]
// 00622f0d  8d4900               lea ecx, [ecx]
// 00622f10  39480c               cmp dword ptr [eax + 0xc], ecx
// 00622f13  7d05                 jge 0x622f1a
// 00622f15  8b4008               mov eax, dword ptr [eax + 8]
// 00622f18  eb04                 jmp 0x622f1e
// 00622f1a  8bf8                 mov edi, eax
// 00622f1c  8b00                 mov eax, dword ptr [eax]
// 00622f1e  80781900             cmp byte ptr [eax + 0x19], 0
// 00622f22  74ec                 je 0x622f10
// 00622f24  8b06                 mov eax, dword ptr [esi]
// 00622f26  53                   push ebx
// 00622f27  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00622f2a  897c2414             mov dword ptr [esp + 0x14], edi
// 00622f2e  89442410             mov dword ptr [esp + 0x10], eax
// 00622f32  85c0                 test eax, eax
// 00622f34  7404                 je 0x622f3a
// 00622f36  3bc0                 cmp eax, eax
// 00622f38  7406                 je 0x622f40
// 00622f3a  ff150ca99e00         call dword ptr [0x9ea90c]
// 00622f40  3bfb                 cmp edi, ebx
// 00622f42  5b                   pop ebx
// 00622f43  740e                 je 0x622f53
// 00622f45  8b4500               mov eax, dword ptr [ebp]
// 00622f48  3b470c               cmp eax, dword ptr [edi + 0xc]
// 00622f4b  7c06                 jl 0x622f53
// 00622f4d  8d4c240c             lea ecx, [esp + 0xc]
// 00622f51  eb11                 jmp 0x622f64
// 00622f53  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00622f56  8b16                 mov edx, dword ptr [esi]
// 00622f58  894c2418             mov dword ptr [esp + 0x18], ecx
// 00622f5c  89542414             mov dword ptr [esp + 0x14], edx
// 00622f60  8d4c2414             lea ecx, [esp + 0x14]
// 00622f64  8b11                 mov edx, dword ptr [ecx]
// 00622f66  8b442420             mov eax, dword ptr [esp + 0x20]
// 00622f6a  8b4904               mov ecx, dword ptr [ecx + 4]
// 00622f6d  5f                   pop edi
// 00622f6e  5e                   pop esi
// 00622f6f  8910                 mov dword ptr [eax], edx
// 00622f71  894804               mov dword ptr [eax + 4], ecx
// 00622f74  5d                   pop ebp
// 00622f75  83c410               add esp, 0x10
// 00622f78  c20800               ret 8
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