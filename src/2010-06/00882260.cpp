// roc 2010-06 00882260  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00882260
//
// 00882260  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00882263  8b01                 mov eax, dword ptr [ecx]
// 00882265  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00882268  ffd2                 call edx
// 0088226a  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 00882270  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00882274  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 0088227a  894104               mov dword ptr [ecx + 4], eax
// 0088227d  8911                 mov dword ptr [ecx], edx
// 0088227f  8bc1                 mov eax, ecx
// 00882281  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetSize@CXTPTabManagerNavigateButton@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
