// roc 2009-12 008452c0  unit: CXTPControls  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008452c0
//
// 008452c0  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 008452c4  8b442404             mov eax, dword ptr [esp + 4]
// 008452c8  894120               mov dword ptr [ecx + 0x20], eax
// 008452cb  7e07                 jle 0x8452d4
// 008452cd  8b11                 mov edx, dword ptr [ecx]
// 008452cf  8b4274               mov eax, dword ptr [edx + 0x74]
// 008452d2  ffd0                 call eax
// 008452d4  c20400               ret 4
// copied from an identical function in another client (function ?SetParent@CXTPControls@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp