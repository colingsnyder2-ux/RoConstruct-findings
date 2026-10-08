// from server: 71% by colin
// roc 2007-08 00444f70  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00444f70
//
// 00444f70  51                   push ecx
// 00444f71  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00444f75  85c0                 test eax, eax
// 00444f77  c7042400000000       mov dword ptr [esp], 0
// 00444f7e  7405                 je 0x444f85
// 00444f80  83c0fc               add eax, -4
// 00444f83  eb02                 jmp 0x444f87
// 00444f85  33c0                 xor eax, eax
// 00444f87  8b4908               mov ecx, dword ptr [ecx + 8]
// 00444f8a  56                   push esi
// 00444f8b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00444f8f  03c8                 add ecx, eax
// 00444f91  51                   push ecx
// 00444f92  8bce                 mov ecx, esi
// 00444f94  ff159ce67700         call dword ptr [0x77e69c]
// 00444f9a  8bc6                 mov eax, esi
// 00444f9c  5e                   pop esi
// 00444f9d  59                   pop ecx
// 00444f9e  c20800               ret 8

struct S {
    char pad[8];
    int offset;
    void* ctor(const void* src, void* dst);
};

extern "C" void __stdcall string_copy_ctor(void* dst, const void* src);

void* S::ctor(const void* src, void* dst)
{
    const char* p = (const char*)src;
    if (p)
        p = p - 4;
    else
        p = 0;
    int off = this->offset;
    void* d = dst;
    string_copy_ctor(d, p + off);
    return d;
}
