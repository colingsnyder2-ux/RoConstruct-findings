// roc 2008-06 00797c90  unit: CXTPRibbonGroupControlPopup  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797c90
//
// 00797c90  56                   push esi
// 00797c91  8bf1                 mov esi, ecx
// 00797c93  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00797c99  e832d2f1ff           call 0x6b4ed0
// 00797c9e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00797ca2  8b10                 mov edx, dword ptr [eax]
// 00797ca4  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 00797caa  6a00                 push 0
// 00797cac  56                   push esi
// 00797cad  8b742410             mov esi, dword ptr [esp + 0x10]
// 00797cb1  51                   push ecx
// 00797cb2  56                   push esi
// 00797cb3  8bc8                 mov ecx, eax
// 00797cb5  ffd2                 call edx
// 00797cb7  8bc6                 mov eax, esi
// 00797cb9  5e                   pop esi
// 00797cba  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroup.cpp (function ?GetSize@CXTPRibbonGroupControlPopup@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp
