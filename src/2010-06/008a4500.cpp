// roc 2010-06 008a4500  unit: CXTPRibbonQuickAccessControls  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a4500
//
// 008a4500  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008a4503  83ba7402000000       cmp dword ptr [edx + 0x274], 0
// 008a450a  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 008a450d  7501                 jne 0x8a4510
// 008a450f  48                   dec eax
// 008a4510  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 008a4516  56                   push esi
// 008a4517  8b742408             mov esi, dword ptr [esp + 8]
// 008a451b  50                   push eax
// 008a451c  56                   push esi
// 008a451d  e8de6df5ff           call 0x7fb300
// 008a4522  83c604               add esi, 4
// 008a4525  56                   push esi
// 008a4526  ff1580a39e00         call dword ptr [0x9ea380]
// 008a452c  5e                   pop esi
// 008a452d  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?OnControlAdded@CXTPRibbonQuickAccessControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
