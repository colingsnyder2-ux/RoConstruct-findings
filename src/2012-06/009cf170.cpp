// roc 2012-06 009cf170  unit: CXTPControls  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cf170
//
// 009cf170  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 009cf174  8b442404             mov eax, dword ptr [esp + 4]
// 009cf178  894120               mov dword ptr [ecx + 0x20], eax
// 009cf17b  7e07                 jle 0x9cf184
// 009cf17d  8b11                 mov edx, dword ptr [ecx]
// 009cf17f  8b4274               mov eax, dword ptr [edx + 0x74]
// 009cf182  ffd0                 call eax
// 009cf184  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?SetParent@CXTPControls@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPControls.cpp
