// roc 2009-06 007f34d0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f34d0
//
// 007f34d0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007f34d3  8b01                 mov eax, dword ptr [ecx]
// 007f34d5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007f34d8  ffd2                 call edx
// 007f34da  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 007f34e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007f34e4  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 007f34ea  894104               mov dword ptr [ecx + 4], eax
// 007f34ed  8911                 mov dword ptr [ecx], edx
// 007f34ef  8bc1                 mov eax, ecx
// 007f34f1  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetSize@CXTPTabManagerNavigateButton@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
