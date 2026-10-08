// roc 2011-06 008fd0c0  unit: CXTPRibbonQuickAccessControls  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fd0c0
//
// 008fd0c0  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008fd0c3  83ba7402000000       cmp dword ptr [edx + 0x274], 0
// 008fd0ca  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 008fd0cd  7501                 jne 0x8fd0d0
// 008fd0cf  48                   dec eax
// 008fd0d0  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 008fd0d6  56                   push esi
// 008fd0d7  8b742408             mov esi, dword ptr [esp + 8]
// 008fd0db  50                   push eax
// 008fd0dc  56                   push esi
// 008fd0dd  e80ebcf5ff           call 0x858cf0
// 008fd0e2  83c604               add esi, 4
// 008fd0e5  56                   push esi
// 008fd0e6  ff154c03a400         call dword ptr [0xa4034c]
// 008fd0ec  5e                   pop esi
// 008fd0ed  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?OnControlAdded@CXTPRibbonQuickAccessControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
