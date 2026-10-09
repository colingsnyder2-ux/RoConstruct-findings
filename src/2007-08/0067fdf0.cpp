// from server: 66% by colin
// roc 2007-08 0067fdf0  unit: CXTPReportViewPrintOptions  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067fdf0
//
// 0067fdf0  83ec0c               sub esp, 0xc
// 0067fdf3  a188518b00           mov eax, dword ptr [0x8b5188]
// 0067fdf8  33c4                 xor eax, esp
// 0067fdfa  89442408             mov dword ptr [esp + 8], eax
// 0067fdfe  8b11                 mov edx, dword ptr [ecx]
// 0067fe00  6a04                 push 4
// 0067fe02  8d442404             lea eax, [esp + 4]
// 0067fe06  50                   push eax
// 0067fe07  8b4264               mov eax, dword ptr [edx + 0x64]
// 0067fe0a  6a0d                 push 0xd
// 0067fe0c  ffd0                 call eax
// 0067fe0e  50                   push eax
// 0067fe0f  ff1554d27700         call dword ptr [0x77d254]
// 0067fe15  8d0c24               lea ecx, [esp]
// 0067fe18  51                   push ecx
// 0067fe19  ff1580e97700         call dword ptr [0x77e980]
// 0067fe1f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067fe23  83c404               add esp, 4
// 0067fe26  f7d8                 neg eax
// 0067fe28  1bc0                 sbb eax, eax
// 0067fe2a  33cc                 xor ecx, esp
// 0067fe2c  f7d8                 neg eax
// 0067fe2e  e8eb0bfbff           call 0x630a1e
// 0067fe33  83c40c               add esp, 0xc
// 0067fe36  c3                   ret 

struct CXTPReportViewPrintOptions {
    int GetLocaleInfoWrapper();
};

extern "C" int __stdcall GetLocaleInfoA(unsigned long Locale, unsigned long LCType, char* lpLCData, int cchData);
extern "C" int __cdecl atoi(const char* str);

int CXTPReportViewPrintOptions::GetLocaleInfoWrapper()
{
    char buf[8];
    int result;
    int (__stdcall *fn)(int, char*, int);
    fn = *(int (__stdcall **)(int, char*, int))(*(int*)this + 0x64);
    result = fn(0xd, buf, 4);
    GetLocaleInfoA(0, 0, buf, 0);
    result = atoi(buf);
    return result != 0;
}
