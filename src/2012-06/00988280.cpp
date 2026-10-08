// roc 2012-06 00988280  unit: CXTPPaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00988280
//
// 00988280  8b442404             mov eax, dword ptr [esp + 4]
// 00988284  83b8f800000000       cmp dword ptr [eax + 0xf8], 0
// 0098828b  7506                 jne 0x988293
// 0098828d  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 00988290  c20400               ret 4
// 00988293  8b4178               mov eax, dword ptr [ecx + 0x78]
// 00988296  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?IsFlatToolBar@CXTPPaintManager@@IAEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
