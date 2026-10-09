// from DeepSeek/server: 100% by colin
// roc 2007-08 0043e550  unit: G3D::VColor3::?$XItem  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043e550
//
// 0043e550  8b442408             mov eax, dword ptr [esp + 8]
// 0043e554  56                   push esi
// 0043e555  8bf1                 mov esi, ecx
// 0043e557  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043e55b  50                   push eax
// 0043e55c  51                   push ecx
// 0043e55d  8bce                 mov ecx, esi
// 0043e55f  e88ce9ffff           call 0x43cef0
// 0043e564  33c0                 xor eax, eax
// 0043e566  898624010000         mov dword ptr [esi + 0x124], eax
// 0043e56c  898620010000         mov dword ptr [esi + 0x120], eax
// 0043e572  89861c010000         mov dword ptr [esi + 0x11c], eax
// 0043e578  c70684e77800         mov dword ptr [esi], 0x78e784
// 0043e57e  c7462024e77800       mov dword ptr [esi + 0x20], 0x78e724
// 0043e585  c786000100001ce77800 mov dword ptr [esi + 0x100], 0x78e71c
// 0043e58f  8bc6                 mov eax, esi
// 0043e591  5e                   pop esi
// 0043e592  c20800               ret 8

struct Descriptor {
    Descriptor(const char*, unsigned int);
};

struct VColor3Item : Descriptor {
    char pad[0x124 - 8];
    int field_0x11c;
    int field_0x120;
    int field_0x124;
    VColor3Item(const char*, unsigned int);
};

VColor3Item::VColor3Item(const char* name, unsigned int attrs)
    : Descriptor(name, attrs)
{
    field_0x124 = 0;
    field_0x120 = 0;
    field_0x11c = 0;
    *(int*)this = 0x78e784;
    *(int*)((char*)this + 0x20) = 0x78e724;
    *(int*)((char*)this + 0x100) = 0x78e71c;
}
