// roc 2010-06 008499a0  unit: CXTPRibbonBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008499a0
//
// 008499a0  83ec08               sub esp, 8
// 008499a3  56                   push esi
// 008499a4  8bf1                 mov esi, ecx
// 008499a6  e825ecf6ff           call 0x7b85d0
// 008499ab  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 008499b2  8d8e0c010000         lea ecx, [esi + 0x10c]
// 008499b8  7527                 jne 0x8499e1
// 008499ba  83790400             cmp dword ptr [ecx + 4], 0
// 008499be  7521                 jne 0x8499e1
// 008499c0  8b4074               mov eax, dword ptr [eax + 0x74]
// 008499c3  83c064               add eax, 0x64
// 008499c6  833800               cmp dword ptr [eax], 0
// 008499c9  7514                 jne 0x8499df
// 008499cb  83780400             cmp dword ptr [eax + 4], 0
// 008499cf  750e                 jne 0x8499df
// 008499d1  6a00                 push 0
// 008499d3  8d442408             lea eax, [esp + 8]
// 008499d7  50                   push eax
// 008499d8  8bce                 mov ecx, esi
// 008499da  e841bdf7ff           call 0x7c5720
// 008499df  8bc8                 mov ecx, eax
// 008499e1  8b11                 mov edx, dword ptr [ecx]
// 008499e3  8b442410             mov eax, dword ptr [esp + 0x10]
// 008499e7  8b4904               mov ecx, dword ptr [ecx + 4]
// 008499ea  8910                 mov dword ptr [eax], edx
// 008499ec  894804               mov dword ptr [eax + 4], ecx
// 008499ef  5e                   pop esi
// 008499f0  83c408               add esp, 8
// 008499f3  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetIconSize@CXTPRibbonBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
