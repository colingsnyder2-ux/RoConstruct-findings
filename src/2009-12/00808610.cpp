// roc 2009-12 00808610  unit: CXTPCommandBar  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00808610
//
// 00808610  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00808614  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00808618  8b542404             mov edx, dword ptr [esp + 4]
// 0080861c  50                   push eax
// 0080861d  51                   push ecx
// 0080861e  50                   push eax
// 0080861f  52                   push edx
// 00808620  ff157cb79800         call dword ptr [0x98b77c]
// 00808626  83c410               add esp, 0x10
// 00808629  c3                   ret 
// copied from an identical function in another client (function ?sub_00647a90@ns_ROCX000016@@YAXHHH@Z)

namespace ns_ROCX000016 {
extern "C" int (__cdecl *memcpy_s)(void *dest, unsigned int destSize, const void *src, unsigned int count);

void sub_00647a90(int dest, int destSize, int src)
{
    memcpy_s((void *)dest, (unsigned int)src, (const void *)destSize, (unsigned int)src);
}
}
