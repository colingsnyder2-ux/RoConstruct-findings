// roc 2009-06 00723170  unit: CXTPPaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00723170
//
// 00723170  8b442404             mov eax, dword ptr [esp + 4]
// 00723174  83b8f800000000       cmp dword ptr [eax + 0xf8], 0
// 0072317b  7506                 jne 0x723183
// 0072317d  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 00723180  c20400               ret 4
// 00723183  8b4178               mov eax, dword ptr [ecx + 0x78]
// 00723186  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?IsFlatToolBar@CXTPPaintManager@@IAEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
