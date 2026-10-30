// roc 2011-06 008d3170  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3170
//
// 008d3170  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008d3173  8b01                 mov eax, dword ptr [ecx]
// 008d3175  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d3178  ffd2                 call edx
// 008d317a  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 008d3180  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008d3184  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 008d318a  894104               mov dword ptr [ecx + 4], eax
// 008d318d  8911                 mov dword ptr [ecx], edx
// 008d318f  8bc1                 mov eax, ecx
// 008d3191  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetSize@CXTPTabManagerNavigateButton@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
