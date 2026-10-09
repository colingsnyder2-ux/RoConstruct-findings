// from server: 34% by colin
// roc 2007-08 00713bf0  unit: CXTCaptionButtonThemeOfficeXP  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713bf0
//
// 00713bf0  6aff                 push -1
// 00713bf2  68fad87300           push 0x73d8fa
// 00713bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00713bfd  50                   push eax
// 00713bfe  51                   push ecx
// 00713bff  56                   push esi
// 00713c00  a188518b00           mov eax, dword ptr [0x8b5188]
// 00713c05  33c4                 xor eax, esp
// 00713c07  50                   push eax
// 00713c08  8d44240c             lea eax, [esp + 0xc]
// 00713c0c  64a300000000         mov dword ptr fs:[0], eax
// 00713c12  6a14                 push 0x14
// 00713c14  e8ddc2f1ff           call 0x62fef6
// 00713c19  8bf0                 mov esi, eax
// 00713c1b  83c404               add esp, 4
// 00713c1e  89742408             mov dword ptr [esp + 8], esi
// 00713c22  33c0                 xor eax, eax
// 00713c24  3bf0                 cmp esi, eax
// 00713c26  89442414             mov dword ptr [esp + 0x14], eax
// 00713c2a  740f                 je 0x713c3b
// 00713c2c  8bce                 mov ecx, esi
// 00713c2e  e88de3f7ff           call 0x691fc0
// 00713c33  c7067cea7d00         mov dword ptr [esi], 0x7dea7c
// 00713c39  8bc6                 mov eax, esi
// 00713c3b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00713c3f  64890d00000000       mov dword ptr fs:[0], ecx
// 00713c46  59                   pop ecx
// 00713c47  5e                   pop esi
// 00713c48  83c410               add esp, 0x10
// 00713c4b  c3                   ret 

struct CXTCaptionButtonThemeOfficeXP {
    void* vfptr;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    CXTCaptionButtonThemeOfficeXP();
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl CXTCaptionButtonThemeOfficeXP_ctor_helper(CXTCaptionButtonThemeOfficeXP* p);

CXTCaptionButtonThemeOfficeXP* __cdecl CreateCaptionButtonTheme()
{
    CXTCaptionButtonThemeOfficeXP* p = (CXTCaptionButtonThemeOfficeXP*)operator_new(0x14);
    if (p != 0)
    {
        CXTCaptionButtonThemeOfficeXP_ctor_helper(p);
        *(void**)p = (void*)0x7dea7c;
    }
    return p;
}
