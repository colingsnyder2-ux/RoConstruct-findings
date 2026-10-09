// roc 2009-12 008ce150  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce150
//
// 008ce150  837c240400           cmp dword ptr [esp + 4], 0
// 008ce155  7510                 jne 0x8ce167
// 008ce157  8b410c               mov eax, dword ptr [ecx + 0xc]
// 008ce15a  8b10                 mov edx, dword ptr [eax]
// 008ce15c  894c2404             mov dword ptr [esp + 4], ecx
// 008ce160  8bc8                 mov ecx, eax
// 008ce162  8b4270               mov eax, dword ptr [edx + 0x70]
// 008ce165  ffe0                 jmp eax
// 008ce167  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CXTPTabManagerNavigateButton@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
