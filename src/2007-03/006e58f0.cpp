// roc 2007-03 006e58f0  unit: seg_006e0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e58f0
//
// 006e58f0  8b442404             mov eax, dword ptr [esp + 4]
// 006e58f4  85c0                 test eax, eax
// 006e58f6  7410                 je 0x6e5908
// 006e58f8  50                   push eax
// 006e58f9  8b01                 mov eax, dword ptr [ecx]
// 006e58fb  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006e58fe  51                   push ecx
// 006e58ff  ffd2                 call edx
// 006e5901  8bc8                 mov ecx, eax
// 006e5903  e8582e0000           call 0x6e8760
// 006e5908  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?EnsureVisible@CXTPTabManager@@QAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
