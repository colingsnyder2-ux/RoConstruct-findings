// roc 2009-12 008ce080  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce080
//
// 008ce080  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008ce083  8b01                 mov eax, dword ptr [ecx]
// 008ce085  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008ce088  ffd2                 call edx
// 008ce08a  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 008ce090  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008ce094  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 008ce09a  894104               mov dword ptr [ecx + 4], eax
// 008ce09d  8911                 mov dword ptr [ecx], edx
// 008ce09f  8bc1                 mov eax, ecx
// 008ce0a1  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetSize@CXTPTabManagerNavigateButton@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
