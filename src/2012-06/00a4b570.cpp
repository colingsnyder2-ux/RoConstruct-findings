// roc 2012-06 00a4b570  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b570
//
// 00a4b570  837c240400           cmp dword ptr [esp + 4], 0
// 00a4b575  7510                 jne 0xa4b587
// 00a4b577  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00a4b57a  8b10                 mov edx, dword ptr [eax]
// 00a4b57c  894c2404             mov dword ptr [esp + 4], ecx
// 00a4b580  8bc8                 mov ecx, eax
// 00a4b582  8b4270               mov eax, dword ptr [edx + 0x70]
// 00a4b585  ffe0                 jmp eax
// 00a4b587  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CXTPTabManagerNavigateButton@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
