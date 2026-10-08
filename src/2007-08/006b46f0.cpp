// from server: 73% by colin
// roc 2007-08 006b46f0  unit: CXTPControlGallery  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b46f0
//
// 006b46f0  8b542404             mov edx, dword ptr [esp + 4]
// 006b46f4  85d2                 test edx, edx
// 006b46f6  7508                 jne 0x6b4700
// 006b46f8  b857000780           mov eax, 0x80070057
// 006b46fd  c20400               ret 4
// 006b4700  83c1e0               add ecx, -0x20
// 006b4703  e848f6ffff           call 0x6b3d50
// 006b4708  8902                 mov dword ptr [edx], eax
// 006b470a  33c0                 xor eax, eax
// 006b470c  c20400               ret 4

struct CXTPControlGallery
{
    long m_GetGallery(long* p);
};

long CXTPControlGallery::m_GetGallery(long* p)
{
    if (p == 0)
        return 0x80070057;
    *p = *(long*)((char*)this - 0x20);
    return 0;
}
