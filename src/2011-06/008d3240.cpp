// roc 2011-06 008d3240  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3240
//
// 008d3240  837c240400           cmp dword ptr [esp + 4], 0
// 008d3245  7510                 jne 0x8d3257
// 008d3247  8b410c               mov eax, dword ptr [ecx + 0xc]
// 008d324a  8b10                 mov edx, dword ptr [eax]
// 008d324c  894c2404             mov dword ptr [esp + 4], ecx
// 008d3250  8bc8                 mov ecx, eax
// 008d3252  8b4270               mov eax, dword ptr [edx + 0x70]
// 008d3255  ffe0                 jmp eax
// 008d3257  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CXTPTabManagerNavigateButton@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
