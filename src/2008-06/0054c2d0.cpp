// from server: 100% by king_originala
// roc 2008-06 0054c2d0  unit: RBX::RenderBase::Mesh  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c2d0
//
// 0054c2d0  55                   push ebp
// 0054c2d1  8bec                 mov ebp, esp
// 0054c2d3  83ec30               sub esp, 0x30
// 0054c2d6  894dd0               mov dword ptr [ebp - 0x30], ecx
// 0054c2d9  8b4508               mov eax, dword ptr [ebp + 8]
// 0054c2dc  50                   push eax
// 0054c2dd  8d4df8               lea ecx, [ebp - 8]
// 0054c2e0  51                   push ecx
// 0054c2e1  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 0054c2e4  e8271f0000           call 0x54e210
// 0054c2e9  8d55f0               lea edx, [ebp - 0x10]
// 0054c2ec  52                   push edx
// 0054c2ed  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 0054c2f0  e8bb46ffff           call 0x5409b0
// 0054c2f5  50                   push eax
// 0054c2f6  8d4df8               lea ecx, [ebp - 8]
// 0054c2f9  e8d24bffff           call 0x540ed0
// 0054c2fe  0fb6c0               movzx eax, al
// 0054c301  85c0                 test eax, eax
// 0054c303  7528                 jne 0x54c32d
// 0054c305  8d4df8               lea ecx, [ebp - 8]
// 0054c308  e863fcffff           call 0x54bf70
// 0054c30d  50                   push eax
// 0054c30e  e8fd020000           call 0x54c610
// 0054c313  83c404               add esp, 4
// 0054c316  50                   push eax
// 0054c317  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054c31a  51                   push ecx
// 0054c31b  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 0054c31e  83c108               add ecx, 8
// 0054c321  e88a2ff0ff           call 0x44f2b0
// 0054c326  0fb6d0               movzx edx, al
// 0054c329  85d2                 test edx, edx
// 0054c32b  7443                 je 0x54c370
// 0054c32d  c745e400000000       mov dword ptr [ebp - 0x1c], 0
// 0054c334  8b45f8               mov eax, dword ptr [ebp - 8]
// 0054c337  8945dc               mov dword ptr [ebp - 0x24], eax
// 0054c33a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c33d  894de0               mov dword ptr [ebp - 0x20], ecx
// 0054c340  8d55e4               lea edx, [ebp - 0x1c]
// 0054c343  52                   push edx
// 0054c344  8b4508               mov eax, dword ptr [ebp + 8]
// 0054c347  50                   push eax
// 0054c348  8d4de8               lea ecx, [ebp - 0x18]
// 0054c34b  e820200000           call 0x54e370
// 0054c350  50                   push eax
// 0054c351  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0054c354  51                   push ecx
// 0054c355  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 0054c358  52                   push edx
// 0054c359  8d45d4               lea eax, [ebp - 0x2c]
// 0054c35c  50                   push eax
// 0054c35d  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 0054c360  e88b180000           call 0x54dbf0
// 0054c365  8b08                 mov ecx, dword ptr [eax]
// 0054c367  8b5004               mov edx, dword ptr [eax + 4]
// 0054c36a  894df8               mov dword ptr [ebp - 8], ecx
// 0054c36d  8955fc               mov dword ptr [ebp - 4], edx
// 0054c370  8d4df8               lea ecx, [ebp - 8]
// 0054c373  e8c862ffff           call 0x542640
// 0054c378  83c004               add eax, 4
// 0054c37b  8be5                 mov esp, ebp
// 0054c37d  5d                   pop ebp
// 0054c37e  c20400               ret 4

typedef unsigned int Key;

struct Pair {
    Key first;
    int second;

    Pair(const Key&, const int&);
};

struct Iterator {
    void* node;
    void* owner;

    bool operator==(const Iterator&) const;
    void* getNode() const;
    Pair* dereference() const;
};

struct Compare {
    bool operator()(const Key&, const Key&) const;
};

extern const Key& __cdecl getKey(void*);

struct Mesh {
    unsigned char reserved[8];
    Compare compare;

    Iterator find(const Key&);
    Iterator end();
    Iterator insert(Iterator, const Pair&);
    int* f(const Key&);
};

#pragma optimize("", off)
int* Mesh::f(const Key& key)
{
    Iterator it = find(key);
    if (it == end() || compare(key, getKey(it.getNode())))
        it = insert(Iterator(it), Pair(key, 0));
    return &it.dereference()->second;
}
#pragma optimize("", on)
