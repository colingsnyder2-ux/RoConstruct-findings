// roc 2009-06 008147d0  unit: CXTPRibbonQuickAccessControls  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008147d0
//
// 008147d0  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008147d3  83ba7402000000       cmp dword ptr [edx + 0x274], 0
// 008147da  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 008147dd  7501                 jne 0x8147e0
// 008147df  48                   dec eax
// 008147e0  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 008147e6  56                   push esi
// 008147e7  8b742408             mov esi, dword ptr [esp + 8]
// 008147eb  50                   push eax
// 008147ec  56                   push esi
// 008147ed  e88e7cf5ff           call 0x76c480
// 008147f2  83c604               add esi, 4
// 008147f5  56                   push esi
// 008147f6  ff15d0e18900         call dword ptr [0x89e1d0]
// 008147fc  5e                   pop esi
// 008147fd  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?OnControlAdded@CXTPRibbonQuickAccessControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
