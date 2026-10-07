// roc 2008-06 006aea60  unit: CXTPPaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aea60
//
// 006aea60  8b442404             mov eax, dword ptr [esp + 4]
// 006aea64  83b8f800000000       cmp dword ptr [eax + 0xf8], 0
// 006aea6b  7506                 jne 0x6aea73
// 006aea6d  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 006aea70  c20400               ret 4
// 006aea73  8b4178               mov eax, dword ptr [ecx + 0x78]
// 006aea76  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?IsFlatToolBar@CXTPPaintManager@@IAEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
