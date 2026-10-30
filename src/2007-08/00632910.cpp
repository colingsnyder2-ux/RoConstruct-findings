// from server: 100% by auto
// roc 2007-08 00632910  unit: CXTPCommandBarKeyboardTip  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632910
//
// 00632910  8b442404             mov eax, dword ptr [esp + 4]
// 00632914  85c0                 test eax, eax
// 00632916  7c14                 jl 0x63292c
// 00632918  3b8184000000         cmp eax, dword ptr [ecx + 0x84]
// 0063291e  7d0c                 jge 0x63292c
// 00632920  8b8980000000         mov ecx, dword ptr [ecx + 0x80]
// 00632926  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00632929  c20400               ret 4
// 0063292c  33c0                 xor eax, eax
// 0063292e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?GetAt@CXTPCommandBars@@QBEPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
