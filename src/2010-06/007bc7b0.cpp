// roc 2010-06 007bc7b0  unit: CXTPCommandBar  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bc7b0
//
// 007bc7b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007bc7b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007bc7b8  8b542404             mov edx, dword ptr [esp + 4]
// 007bc7bc  50                   push eax
// 007bc7bd  51                   push ecx
// 007bc7be  50                   push eax
// 007bc7bf  52                   push edx
// 007bc7c0  ff15c4a89e00         call dword ptr [0x9ea8c4]
// 007bc7c6  83c410               add esp, 0x10
// 007bc7c9  c3                   ret 
// copied from an identical function in another client (function ?sub_00647a90@ns_ROCX000012@@YAXHHH@Z)

namespace ns_ROCX000012 {
extern "C" int (__cdecl *memcpy_s)(void *dest, unsigned int destSize, const void *src, unsigned int count);

void sub_00647a90(int dest, int destSize, int src)
{
    memcpy_s((void *)dest, (unsigned int)src, (const void *)destSize, (unsigned int)src);
}
}
