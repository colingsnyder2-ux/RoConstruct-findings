// from server: 100% by tester
// roc 2008-06 006b8f20  unit: CXTPCommandBar  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b8f20
//
// 006b8f20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b8f24  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b8f28  8b542404             mov edx, dword ptr [esp + 4]
// 006b8f2c  50                   push eax
// 006b8f2d  51                   push ecx
// 006b8f2e  50                   push eax
// 006b8f2f  52                   push edx
// 006b8f30  ff15ac288000         call dword ptr [0x8028ac]
// 006b8f36  83c410               add esp, 0x10
// 006b8f39  c3                   ret 

extern "C" int (__cdecl *memcpy_s)(void *dest, unsigned int destSize, const void *src, unsigned int count);

void sub_00647a90(int dest, int destSize, int src)
{
    memcpy_s((void *)dest, (unsigned int)src, (const void *)destSize, (unsigned int)src);
}
