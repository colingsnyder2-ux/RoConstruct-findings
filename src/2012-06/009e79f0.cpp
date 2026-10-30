// from server: 100% by auto
// roc 2012-06 009e79f0  unit: CXTPStatusBar  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e79f0
//
// 009e79f0  8b442404             mov eax, dword ptr [esp + 4]
// 009e79f4  85c0                 test eax, eax
// 009e79f6  7c14                 jl 0x9e7a0c
// 009e79f8  3b81a0000000         cmp eax, dword ptr [ecx + 0xa0]
// 009e79fe  7d0c                 jge 0x9e7a0c
// 009e7a00  8b899c000000         mov ecx, dword ptr [ecx + 0x9c]
// 009e7a06  8b0481               mov eax, dword ptr [ecx + eax*4]
// 009e7a09  c20400               ret 4
// 009e7a0c  33c0                 xor eax, eax
// 009e7a0e  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPStatusBar.cpp (function ?GetPane@CXTPStatusBar@@QBEPAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPStatusBar.cpp
