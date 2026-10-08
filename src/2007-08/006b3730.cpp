// from server: 100% by colin
// roc 2007-08 006b3730  unit: CXTPControlGallery  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3730
//
// 006b3730  56                   push esi
// 006b3731  8bf1                 mov esi, ecx
// 006b3733  e858feffff           call 0x6b3590
// 006b3738  85c0                 test eax, eax
// 006b373a  7404                 je 0x6b3740
// 006b373c  33c0                 xor eax, eax
// 006b373e  5e                   pop esi
// 006b373f  c3                   ret 
// 006b3740  8b06                 mov eax, dword ptr [esi]
// 006b3742  8b506c               mov edx, dword ptr [eax + 0x6c]
// 006b3745  8bce                 mov ecx, esi
// 006b3747  5e                   pop esi
// 006b3748  ffe2                 jmp edx

struct CXTPControlGallery
{
    int sub_006b3590();
    int func_006b3730();
};

int CXTPControlGallery::func_006b3730()
{
    if (sub_006b3590() != 0)
        return 0;
    return (*(int (__thiscall **)(CXTPControlGallery *))(*(int *)this + 0x6c))(this);
}
