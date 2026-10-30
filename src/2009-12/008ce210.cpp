// roc 2009-12 008ce210  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce210
//
// 008ce210  837c240400           cmp dword ptr [esp + 4], 0
// 008ce215  7412                 je 0x8ce229
// 008ce217  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008ce21a  8b01                 mov eax, dword ptr [ecx]
// 008ce21c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008ce21f  c744240401000000     mov dword ptr [esp + 4], 1
// 008ce227  ffe2                 jmp edx
// 008ce229  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CNavigateButtonArrowRight@CXTPTabManager@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
