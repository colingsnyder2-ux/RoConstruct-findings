// from server: 69% by colin
// roc 2007-08 004cfe90  unit: RBX::TextureProxyBase  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cfe90
//
// 004cfe90  51                   push ecx
// 004cfe91  56                   push esi
// 004cfe92  57                   push edi
// 004cfe93  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cfe97  8db1ec000000         lea esi, [ecx + 0xec]
// 004cfe9d  56                   push esi
// 004cfe9e  8bcf                 mov ecx, edi
// 004cfea0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004cfea8  ff159ce67700         call dword ptr [0x77e69c]
// 004cfeae  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004cfeb1  89471c               mov dword ptr [edi + 0x1c], eax
// 004cfeb4  8bc7                 mov eax, edi
// 004cfeb6  5f                   pop edi
// 004cfeb7  5e                   pop esi
// 004cfeb8  59                   pop ecx
// 004cfeb9  c20400               ret 4

struct TextureProxyBase {
    char pad[0xec];
    char field_ec;
    char pad2[0x1c - 1];
    int field_108;
    TextureProxyBase* ctor(TextureProxyBase* other);
};

extern "C" void __stdcall sub_77e69c(char* dst, char* src);

TextureProxyBase* TextureProxyBase::ctor(TextureProxyBase* other)
{
    char* src = (char*)this + 0xec;
    char* tmp = 0;
    sub_77e69c((char*)&tmp, src);
    *(int*)((char*)other + 0x1c) = *(int*)(src + 0x1c);
    return other;
}
