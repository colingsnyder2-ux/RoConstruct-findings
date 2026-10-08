// from server: 100% by colin
// roc 2007-08 00647a90  unit: CXTPCommandBar  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00647a90
//
// 00647a90  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00647a94  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647a98  8b542404             mov edx, dword ptr [esp + 4]
// 00647a9c  50                   push eax
// 00647a9d  51                   push ecx
// 00647a9e  50                   push eax
// 00647a9f  52                   push edx
// 00647aa0  ff15d4e67700         call dword ptr [0x77e6d4]
// 00647aa6  83c410               add esp, 0x10
// 00647aa9  c3                   ret 

extern "C" int (__cdecl *memcpy_s)(void *dest, unsigned int destSize, const void *src, unsigned int count);

void sub_00647a90(int dest, int destSize, int src)
{
    memcpy_s((void *)dest, (unsigned int)src, (const void *)destSize, (unsigned int)src);
}
