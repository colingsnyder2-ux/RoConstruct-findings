// from server: 100% by auto
// roc 2012-06 009a2e50  unit: CXTPCommandBarKeyboardTip  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2e50
//
// 009a2e50  8b442404             mov eax, dword ptr [esp + 4]
// 009a2e54  85c0                 test eax, eax
// 009a2e56  7c14                 jl 0x9a2e6c
// 009a2e58  3b8184000000         cmp eax, dword ptr [ecx + 0x84]
// 009a2e5e  7d0c                 jge 0x9a2e6c
// 009a2e60  8b8980000000         mov ecx, dword ptr [ecx + 0x80]
// 009a2e66  8b0481               mov eax, dword ptr [ecx + eax*4]
// 009a2e69  c20400               ret 4
// 009a2e6c  33c0                 xor eax, eax
// 009a2e6e  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?GetAt@CXTPCommandBars@@QBEPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
