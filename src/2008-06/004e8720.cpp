// from server: 100% by king_originala
// roc 2008-06 004e8720  unit: RBX::Network::Players::Plugin  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e8720
//
// 004e8720  83ec10               sub esp, 0x10
// 004e8723  53                   push ebx
// 004e8724  56                   push esi
// 004e8725  57                   push edi
// 004e8726  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004e872a  57                   push edi
// 004e872b  8bf1                 mov esi, ecx
// 004e872d  e8eedaffff           call 0x4e6220
// 004e8732  8bd8                 mov ebx, eax
// 004e8734  895c2410             mov dword ptr [esp + 0x10], ebx
// 004e8738  85f6                 test esi, esi
// 004e873a  7506                 jne 0x4e8742
// 004e873c  ff1590288000         call dword ptr [0x802890]
// 004e8742  8b06                 mov eax, dword ptr [esi]
// 004e8744  55                   push ebp
// 004e8745  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 004e8748  89442410             mov dword ptr [esp + 0x10], eax
// 004e874c  85c0                 test eax, eax
// 004e874e  7404                 je 0x4e8754
// 004e8750  3bc0                 cmp eax, eax
// 004e8752  7406                 je 0x4e875a
// 004e8754  ff1590288000         call dword ptr [0x802890]
// 004e875a  3bdd                 cmp ebx, ebp
// 004e875c  5d                   pop ebp
// 004e875d  742a                 je 0x4e8789
// 004e875f  8d430c               lea eax, [ebx + 0xc]
// 004e8762  8d4810               lea ecx, [eax + 0x10]
// 004e8765  8d5710               lea edx, [edi + 0x10]
// 004e8768  3bd1                 cmp edx, ecx
// 004e876a  721d                 jb 0x4e8789
// 004e876c  7715                 ja 0x4e8783
// 004e876e  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004e8771  8b500c               mov edx, dword ptr [eax + 0xc]
// 004e8774  3bca                 cmp ecx, edx
// 004e8776  7c11                 jl 0x4e8789
// 004e8778  7f09                 jg 0x4e8783
// 004e877a  3bf8                 cmp edi, eax
// 004e877c  0f92c0               setb al
// 004e877f  84c0                 test al, al
// 004e8781  7506                 jne 0x4e8789
// 004e8783  8d4c240c             lea ecx, [esp + 0xc]
// 004e8787  eb11                 jmp 0x4e879a
// 004e8789  8b0e                 mov ecx, dword ptr [esi]
// 004e878b  8b4618               mov eax, dword ptr [esi + 0x18]
// 004e878e  894c2414             mov dword ptr [esp + 0x14], ecx
// 004e8792  89442418             mov dword ptr [esp + 0x18], eax
// 004e8796  8d4c2414             lea ecx, [esp + 0x14]
// 004e879a  8b11                 mov edx, dword ptr [ecx]
// 004e879c  8b442420             mov eax, dword ptr [esp + 0x20]
// 004e87a0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e87a3  5f                   pop edi
// 004e87a4  5e                   pop esi
// 004e87a5  8910                 mov dword ptr [eax], edx
// 004e87a7  894804               mov dword ptr [eax + 4], ecx
// 004e87aa  5b                   pop ebx
// 004e87ab  83c410               add esp, 0x10
// 004e87ae  c20800               ret 8

extern "C" void (__cdecl* const invalid_parameter_noinfo)();

struct Key
{
    int padding[3];
    int value;
    bool operator<(const Key& other) const;
};

inline bool Key::operator<(const Key& other) const
{
    if (this + 1 < &other + 1)
        return true;
    if (this + 1 > &other + 1)
        return false;
    if (value < other.value)
        return true;
    if (value > other.value)
        return false;
    return this < &other;
}

struct Node
{
    int padding[3];
    Key key;
};

struct S;

struct Iterator
{
    void* owner;
    Node* node;
    Iterator(Node* n, const S* container);
    bool operator!=(const Iterator& other) const;
};

struct S
{
    void* owner;
    int padding[5];
    Node* head;

    Node* find(const Key& key);
    Iterator end() const;
    Iterator func_004e8720(const Key& key);
};

inline Iterator::Iterator(Node* n, const S* container)
{
    node = n;
    if (!container)
        invalid_parameter_noinfo();
    owner = container->owner;
}

inline bool Iterator::operator!=(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        invalid_parameter_noinfo();
    return node != other.node;
}

inline Iterator S::end() const
{
    return Iterator(head, this);
}

Iterator S::func_004e8720(const Key& key)
{
    Iterator result(find(key), this);
    return result != end() && !(key < result.node->key) ? result : end();
}
