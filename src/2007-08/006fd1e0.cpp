// from server: 100% by auto
// roc 2007-08 006fd1e0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd1e0
//
// 006fd1e0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006fd1e3  8b01                 mov eax, dword ptr [ecx]
// 006fd1e5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006fd1e8  ffd2                 call edx
// 006fd1ea  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 006fd1f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd1f4  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 006fd1fa  894104               mov dword ptr [ecx + 4], eax
// 006fd1fd  8911                 mov dword ptr [ecx], edx
// 006fd1ff  8bc1                 mov eax, ecx
// 006fd201  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?GetSize@CXTPTabManagerNavigateButton@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
