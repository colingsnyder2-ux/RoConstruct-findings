// from server: 81% by colin
// roc 2007-08 00401840  unit: CAboutRobloxDialog  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401840
//
// 00401840  56                   push esi
// 00401841  8b742410             mov esi, dword ptr [esp + 0x10]
// 00401845  56                   push esi
// 00401846  ff1510d37700         call dword ptr [0x77d310]
// 0040184c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00401850  8d440002             lea eax, [eax + eax + 2]
// 00401854  50                   push eax
// 00401855  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00401859  56                   push esi
// 0040185a  8d1409               lea edx, [ecx + ecx]
// 0040185d  52                   push edx
// 0040185e  50                   push eax
// 0040185f  ff15d4e67700         call dword ptr [0x77e6d4]
// 00401865  83c410               add esp, 0x10
// 00401868  f7d8                 neg eax
// 0040186a  1bc0                 sbb eax, eax
// 0040186c  83c001               add eax, 1
// 0040186f  5e                   pop esi
// 00401870  c3                   ret 

extern "C" int __stdcall lstrlenW(const wchar_t*);
extern "C" int __cdecl memcpy_s(void*, unsigned int, const void*, unsigned int);

int __cdecl sub_401840(int a, int b, const wchar_t* src)
{
    int len = lstrlenW(src);
    int n = len + len + 2;
    int r = memcpy_s((void*)a, (unsigned int)(b + b), src, (unsigned int)n);
    return (r != 0) ? 0 : 1;
}
