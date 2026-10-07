// roc 2011-06 0082a880  unit: CXTPCommandBarKeyboardTip  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082a880
//
// 0082a880  8b442404             mov eax, dword ptr [esp + 4]
// 0082a884  85c0                 test eax, eax
// 0082a886  7c14                 jl 0x82a89c
// 0082a888  3b8184000000         cmp eax, dword ptr [ecx + 0x84]
// 0082a88e  7d0c                 jge 0x82a89c
// 0082a890  8b8980000000         mov ecx, dword ptr [ecx + 0x80]
// 0082a896  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0082a899  c20400               ret 4
// 0082a89c  33c0                 xor eax, eax
// 0082a89e  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?GetAt@CXTPCommandBars@@QBEPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
