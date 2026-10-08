// from server: 84% by colin
// roc 2007-08 006d5e90  unit: CXTPReportTip  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d5e90
//
// 006d5e90  56                   push esi
// 006d5e91  8bf1                 mov esi, ecx
// 006d5e93  e8a8e5ffff           call 0x6d4440
// 006d5e98  8d4e70               lea ecx, [esi + 0x70]
// 006d5e9b  c7069c867d00         mov dword ptr [esi], 0x7d869c
// 006d5ea1  ff15acdd7700         call dword ptr [0x77ddac]
// 006d5ea7  c7466401000000       mov dword ptr [esi + 0x64], 1
// 006d5eae  8bc6                 mov eax, esi
// 006d5eb0  5e                   pop esi
// 006d5eb1  c3                   ret 

struct CXTPReportTip {
    int f();
    char pad[0x60];
    int field64;
    char pad2[8];
    int field70;
};

extern "C" int __stdcall sub_6D4440();
extern "C" int __stdcall sub_77DDAC();

int CXTPReportTip::f()
{
    sub_6D4440();
    *(int*)this = 0x7d869c;
    sub_77DDAC();
    field64 = 1;
    return (int)this;
}
