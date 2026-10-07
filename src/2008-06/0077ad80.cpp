// roc 2008-06 0077ad80  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077ad80
//
// 0077ad80  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0077ad83  8b01                 mov eax, dword ptr [ecx]
// 0077ad85  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0077ad88  ffd2                 call edx
// 0077ad8a  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 0077ad90  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0077ad94  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 0077ad9a  894104               mov dword ptr [ecx + 4], eax
// 0077ad9d  8911                 mov dword ptr [ecx], edx
// 0077ad9f  8bc1                 mov eax, ecx
// 0077ada1  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetSize@CXTPTabManagerNavigateButton@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
