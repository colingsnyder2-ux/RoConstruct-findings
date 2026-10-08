// from server: 100% by colin
// roc 2007-08 00447c00  unit: CRenderSettings  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00447c00
//
// 00447c00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00447c04  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00447c08  8b542404             mov edx, dword ptr [esp + 4]
// 00447c0c  50                   push eax
// 00447c0d  51                   push ecx
// 00447c0e  52                   push edx
// 00447c0f  ff1560e97700         call dword ptr [0x77e960]
// 00447c15  50                   push eax
// 00447c16  e8c59afbff           call 0x4016e0
// 00447c1b  83c410               add esp, 0x10
// 00447c1e  c3                   ret 

extern "C" int (__cdecl *strcat_s_ptr)(char*, unsigned int, const char*);
extern "C" int __cdecl sub_4016E0(int);

int sub_00447C00(int a, int b, int c)
{
    return sub_4016E0(strcat_s_ptr((char*)a, (unsigned int)b, (const char*)c));
}
