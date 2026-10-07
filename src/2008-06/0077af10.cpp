// roc 2008-06 0077af10  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077af10
//
// 0077af10  837c240400           cmp dword ptr [esp + 4], 0
// 0077af15  7412                 je 0x77af29
// 0077af17  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0077af1a  8b01                 mov eax, dword ptr [ecx]
// 0077af1c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0077af1f  c744240401000000     mov dword ptr [esp + 4], 1
// 0077af27  ffe2                 jmp edx
// 0077af29  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CNavigateButtonArrowRight@CXTPTabManager@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
