// from server: 65% by colin
// roc 2007-08 004d03a0  unit: RBX::TextureProxyBase  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d03a0
//
// 004d03a0  51                   push ecx
// 004d03a1  56                   push esi
// 004d03a2  57                   push edi
// 004d03a3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d03a7  8db118010000         lea esi, [ecx + 0x118]
// 004d03ad  56                   push esi
// 004d03ae  8bcf                 mov ecx, edi
// 004d03b0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004d03b8  ff159ce67700         call dword ptr [0x77e69c]
// 004d03be  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004d03c1  89471c               mov dword ptr [edi + 0x1c], eax
// 004d03c4  8bc7                 mov eax, edi
// 004d03c6  5f                   pop edi
// 004d03c7  5e                   pop esi
// 004d03c8  59                   pop ecx
// 004d03c9  c20400               ret 4

struct TextureProxyBase {
    char pad[0x118];
    char field_118[0x20];
    void* construct(void* other);
};

extern "C" void __stdcall string_copy_ctor(void*, void*);

void* TextureProxyBase::construct(void* other)
{
    char* src = (char*)this + 0x118;
    string_copy_ctor(other, src);
    *(int*)((char*)other + 0x1c) = *(int*)(src + 0x1c);
    return other;
}
