// roc 2010-06 00882410  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00882410
//
// 00882410  837c240400           cmp dword ptr [esp + 4], 0
// 00882415  7412                 je 0x882429
// 00882417  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0088241a  8b01                 mov eax, dword ptr [ecx]
// 0088241c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0088241f  c744240400000000     mov dword ptr [esp + 4], 0
// 00882427  ffe2                 jmp edx
// 00882429  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
