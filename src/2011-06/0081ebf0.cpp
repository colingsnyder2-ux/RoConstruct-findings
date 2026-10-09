// roc 2011-06 0081ebf0  unit: CXTPCommandBar  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081ebf0
//
// 0081ebf0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081ebf4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0081ebf8  8b542404             mov edx, dword ptr [esp + 4]
// 0081ebfc  50                   push eax
// 0081ebfd  51                   push ecx
// 0081ebfe  50                   push eax
// 0081ebff  52                   push edx
// 0081ec00  ff153c0aa400         call dword ptr [0xa40a3c]
// 0081ec06  83c410               add esp, 0x10
// 0081ec09  c3                   ret 
// copied from an identical function in another client (function ?sub_00647a90@ns_ROCX000015@@YAXHHH@Z)

namespace ns_ROCX000015 {
extern "C" int (__cdecl *memcpy_s)(void *dest, unsigned int destSize, const void *src, unsigned int count);

void sub_00647a90(int dest, int destSize, int src)
{
    memcpy_s((void *)dest, (unsigned int)src, (const void *)destSize, (unsigned int)src);
}
}
