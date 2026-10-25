// from server: 100% by king_originala
// roc 2008-06 004aeac0  unit: RBX::Network::Replicator::MarkerItem  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aeac0
//
// 004aeac0  83ec08               sub esp, 8
// 004aeac3  53                   push ebx
// 004aeac4  8b99a82c0000         mov ebx, dword ptr [ecx + 0x2ca8]
// 004aeaca  56                   push esi
// 004aeacb  57                   push edi
// 004aeacc  8bb9902c0000         mov edi, dword ptr [ecx + 0x2c90]
// 004aead2  8d442418             lea eax, [esp + 0x18]
// 004aead6  81c1902c0000         add ecx, 0x2c90
// 004aeadc  50                   push eax
// 004aeadd  8d542410             lea edx, [esp + 0x10]
// 004aeae1  52                   push edx
// 004aeae2  e879f5ffff           call 0x4ae060
// 004aeae7  8bf0                 mov esi, eax
// 004aeae9  8b06                 mov eax, dword ptr [esi]
// 004aeaeb  85c0                 test eax, eax
// 004aeaed  7404                 je 0x4aeaf3
// 004aeaef  3bc7                 cmp eax, edi
// 004aeaf1  7406                 je 0x4aeaf9
// 004aeaf3  ff1590288000         call dword ptr [0x802890]
// 004aeaf9  33c0                 xor eax, eax
// 004aeafb  395e04               cmp dword ptr [esi + 4], ebx
// 004aeafe  5f                   pop edi
// 004aeaff  5e                   pop esi
// 004aeb00  0f95c0               setne al
// 004aeb03  5b                   pop ebx
// 004aeb04  83c408               add esp, 8
// 004aeb07  c20400               ret 4

extern "C" {
    extern void (__cdecl* _invalid_parameter_noinfo)();
}

struct Iterator {
    void* owner;
    void* node;

    bool operator!=(const Iterator& other) const;
};

__forceinline bool Iterator::operator!=(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return node != other.node;
}

struct Container {
    void* owner;
    char padding[20];
    void* end;

    Iterator find(const unsigned int* key);
};

struct S {
    char padding[0x2c90];
    Container container;

    bool f(unsigned int key);
};

bool S::f(unsigned int key)
{
    Container& container = this->container;
    Iterator last;
    last.node = container.end;
    last.owner = container.owner;
    return container.find(&key) != last;
}
