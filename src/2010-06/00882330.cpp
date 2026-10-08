// roc 2010-06 00882330  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00882330
//
// 00882330  837c240400           cmp dword ptr [esp + 4], 0
// 00882335  7510                 jne 0x882347
// 00882337  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0088233a  8b10                 mov edx, dword ptr [eax]
// 0088233c  894c2404             mov dword ptr [esp + 4], ecx
// 00882340  8bc8                 mov ecx, eax
// 00882342  8b4270               mov eax, dword ptr [edx + 0x70]
// 00882345  ffe0                 jmp eax
// 00882347  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CXTPTabManagerNavigateButton@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
