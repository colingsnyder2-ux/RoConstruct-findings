// roc 2008-06 006a3730  unit: CXTPCommandBarKeyboardTip  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a3730
//
// 006a3730  8b442404             mov eax, dword ptr [esp + 4]
// 006a3734  85c0                 test eax, eax
// 006a3736  7c14                 jl 0x6a374c
// 006a3738  3b8184000000         cmp eax, dword ptr [ecx + 0x84]
// 006a373e  7d0c                 jge 0x6a374c
// 006a3740  8b8980000000         mov ecx, dword ptr [ecx + 0x80]
// 006a3746  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006a3749  c20400               ret 4
// 006a374c  33c0                 xor eax, eax
// 006a374e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetAt@CXTPCommandBars@@QBEPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
