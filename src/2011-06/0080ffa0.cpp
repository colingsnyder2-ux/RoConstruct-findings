// roc 2011-06 0080ffa0  unit: CXTPPaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080ffa0
//
// 0080ffa0  8b442404             mov eax, dword ptr [esp + 4]
// 0080ffa4  83b8f800000000       cmp dword ptr [eax + 0xf8], 0
// 0080ffab  7506                 jne 0x80ffb3
// 0080ffad  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 0080ffb0  c20400               ret 4
// 0080ffb3  8b4178               mov eax, dword ptr [ecx + 0x78]
// 0080ffb6  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?IsFlatToolBar@CXTPPaintManager@@IAEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
