// from server: 31% by colin
// roc 2007-08 0070eb70  unit: CXTSplitterWndThemeOffice2003  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070eb70
//
// 0070eb70  6aff                 push -1
// 0070eb72  68fad87300           push 0x73d8fa
// 0070eb77  64a100000000         mov eax, dword ptr fs:[0]
// 0070eb7d  50                   push eax
// 0070eb7e  51                   push ecx
// 0070eb7f  56                   push esi
// 0070eb80  a188518b00           mov eax, dword ptr [0x8b5188]
// 0070eb85  33c4                 xor eax, esp
// 0070eb87  50                   push eax
// 0070eb88  8d44240c             lea eax, [esp + 0xc]
// 0070eb8c  64a300000000         mov dword ptr fs:[0], eax
// 0070eb92  6a14                 push 0x14
// 0070eb94  e85d13f2ff           call 0x62fef6
// 0070eb99  8bf0                 mov esi, eax
// 0070eb9b  83c404               add esp, 4
// 0070eb9e  89742408             mov dword ptr [esp + 8], esi
// 0070eba2  33c0                 xor eax, eax
// 0070eba4  3bf0                 cmp esi, eax
// 0070eba6  89442414             mov dword ptr [esp + 0x14], eax
// 0070ebaa  740f                 je 0x70ebbb
// 0070ebac  8bce                 mov ecx, esi
// 0070ebae  e80d34f8ff           call 0x691fc0
// 0070ebb3  c706dce27d00         mov dword ptr [esi], 0x7de2dc
// 0070ebb9  8bc6                 mov eax, esi
// 0070ebbb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070ebbf  64890d00000000       mov dword ptr fs:[0], ecx
// 0070ebc6  59                   pop ecx
// 0070ebc7  5e                   pop esi
// 0070ebc8  83c410               add esp, 0x10
// 0070ebcb  c3                   ret 

struct CXTSplitterWndThemeOffice2003 {
    void* construct();
};

extern "C" void* __cdecl func_0062fef6(unsigned int size);
extern "C" void __fastcall func_00691fc0(void* self);

void* CXTSplitterWndThemeOffice2003::construct()
{
    void* p = func_0062fef6(0x14);
    if (p != 0) {
        func_00691fc0(p);
        *(int*)p = 0x7de2dc;
    }
    return p;
}
