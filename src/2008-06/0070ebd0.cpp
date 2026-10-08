// roc 2008-06 0070ebd0  unit: CXTPStatusBar  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070ebd0
//
// 0070ebd0  8b442404             mov eax, dword ptr [esp + 4]
// 0070ebd4  85c0                 test eax, eax
// 0070ebd6  7c14                 jl 0x70ebec
// 0070ebd8  3b81a0000000         cmp eax, dword ptr [ecx + 0xa0]
// 0070ebde  7d0c                 jge 0x70ebec
// 0070ebe0  8b899c000000         mov ecx, dword ptr [ecx + 0x9c]
// 0070ebe6  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0070ebe9  c20400               ret 4
// 0070ebec  33c0                 xor eax, eax
// 0070ebee  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPStatusBar.cpp (function ?GetPane@CXTPStatusBar@@QBEPAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPStatusBar.cpp
