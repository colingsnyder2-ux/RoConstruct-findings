// roc 2008-06 006f1ba0  unit: CXTPControls  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1ba0
//
// 006f1ba0  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 006f1ba4  8b442404             mov eax, dword ptr [esp + 4]
// 006f1ba8  894120               mov dword ptr [ecx + 0x20], eax
// 006f1bab  7e07                 jle 0x6f1bb4
// 006f1bad  8b11                 mov edx, dword ptr [ecx]
// 006f1baf  8b4274               mov eax, dword ptr [edx + 0x74]
// 006f1bb2  ffd0                 call eax
// 006f1bb4  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?SetParent@CXTPControls@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
