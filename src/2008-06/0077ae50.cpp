// roc 2008-06 0077ae50  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077ae50
//
// 0077ae50  837c240400           cmp dword ptr [esp + 4], 0
// 0077ae55  7510                 jne 0x77ae67
// 0077ae57  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0077ae5a  8b10                 mov edx, dword ptr [eax]
// 0077ae5c  894c2404             mov dword ptr [esp + 4], ecx
// 0077ae60  8bc8                 mov ecx, eax
// 0077ae62  8b4270               mov eax, dword ptr [edx + 0x70]
// 0077ae65  ffe0                 jmp eax
// 0077ae67  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CXTPTabManagerNavigateButton@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
