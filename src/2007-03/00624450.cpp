// roc 2007-03 00624450  unit: seg_00620000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00624450
//
// 00624450  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00624454  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00624458  8b542404             mov edx, dword ptr [esp + 4]
// 0062445c  50                   push eax
// 0062445d  51                   push ecx
// 0062445e  50                   push eax
// 0062445f  52                   push edx
// 00624460  ff1540e97700         call dword ptr [0x77e940]
// 00624466  83c410               add esp, 0x10
// 00624469  c3                   ret 
// copied from an identical function in another client (function ?sub_00647a90@ns_ROCX000001@@YAXHHH@Z)

namespace ns_ROCX000001 {
extern "C" int (__cdecl *memcpy_s)(void *dest, unsigned int destSize, const void *src, unsigned int count);

void sub_00647a90(int dest, int destSize, int src)
{
    memcpy_s((void *)dest, (unsigned int)src, (const void *)destSize, (unsigned int)src);
}
}
