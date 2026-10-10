// roc 2008-06 00797bc0  unit: CXTPRibbonGroupOption  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797bc0
//
// 00797bc0  83ec08               sub esp, 8
// 00797bc3  56                   push esi
// 00797bc4  8bf1                 mov esi, ecx
// 00797bc6  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 00797bcc  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00797bcf  e8eca4f8ff           call 0x7220c0
// 00797bd4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00797bd8  8b10                 mov edx, dword ptr [eax]
// 00797bda  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 00797be0  6a01                 push 1
// 00797be2  56                   push esi
// 00797be3  51                   push ecx
// 00797be4  8d4c2410             lea ecx, [esp + 0x10]
// 00797be8  51                   push ecx
// 00797be9  8bc8                 mov ecx, eax
// 00797beb  ffd2                 call edx
// 00797bed  5e                   pop esi
// 00797bee  83c408               add esp, 8
// 00797bf1  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroup.cpp (function ?Draw@CXTPRibbonGroupOption@@EAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp
