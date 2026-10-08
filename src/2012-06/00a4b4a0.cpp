// roc 2012-06 00a4b4a0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b4a0
//
// 00a4b4a0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00a4b4a3  8b01                 mov eax, dword ptr [ecx]
// 00a4b4a5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a4b4a8  ffd2                 call edx
// 00a4b4aa  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 00a4b4b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a4b4b4  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 00a4b4ba  894104               mov dword ptr [ecx + 4], eax
// 00a4b4bd  8911                 mov dword ptr [ecx], edx
// 00a4b4bf  8bc1                 mov eax, ecx
// 00a4b4c1  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetSize@CXTPTabManagerNavigateButton@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
