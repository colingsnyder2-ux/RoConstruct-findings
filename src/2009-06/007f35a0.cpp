// roc 2009-06 007f35a0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f35a0
//
// 007f35a0  837c240400           cmp dword ptr [esp + 4], 0
// 007f35a5  7510                 jne 0x7f35b7
// 007f35a7  8b410c               mov eax, dword ptr [ecx + 0xc]
// 007f35aa  8b10                 mov edx, dword ptr [eax]
// 007f35ac  894c2404             mov dword ptr [esp + 4], ecx
// 007f35b0  8bc8                 mov ecx, eax
// 007f35b2  8b4270               mov eax, dword ptr [edx + 0x70]
// 007f35b5  ffe0                 jmp eax
// 007f35b7  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?OnExecute@CXTPTabManagerNavigateButton@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
