// roc 2010-06 007adb00  unit: CXTPPaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007adb00
//
// 007adb00  8b442404             mov eax, dword ptr [esp + 4]
// 007adb04  83b8f800000000       cmp dword ptr [eax + 0xf8], 0
// 007adb0b  7506                 jne 0x7adb13
// 007adb0d  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 007adb10  c20400               ret 4
// 007adb13  8b4178               mov eax, dword ptr [ecx + 0x78]
// 007adb16  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?IsFlatToolBar@CXTPPaintManager@@IAEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
