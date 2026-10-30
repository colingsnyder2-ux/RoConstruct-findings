// roc 2009-12 007fe030  unit: CXTPPaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fe030
//
// 007fe030  8b442404             mov eax, dword ptr [esp + 4]
// 007fe034  83b8f800000000       cmp dword ptr [eax + 0xf8], 0
// 007fe03b  7506                 jne 0x7fe043
// 007fe03d  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 007fe040  c20400               ret 4
// 007fe043  8b4178               mov eax, dword ptr [ecx + 0x78]
// 007fe046  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?IsFlatToolBar@CXTPPaintManager@@IAEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
