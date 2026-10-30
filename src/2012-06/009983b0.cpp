// from server: 100% by auto
// roc 2012-06 009983b0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009983b0
//
// 009983b0  56                   push esi
// 009983b1  8bf1                 mov esi, ecx
// 009983b3  8b4604               mov eax, dword ptr [esi + 4]
// 009983b6  57                   push edi
// 009983b7  85c0                 test eax, eax
// 009983b9  7410                 je 0x9983cb
// 009983bb  50                   push eax
// 009983bc  e8f99ffeff           call 0x9823ba
// 009983c1  83c404               add esp, 4
// 009983c4  c7460400000000       mov dword ptr [esi + 4], 0
// 009983cb  837c241000           cmp dword ptr [esp + 0x10], 0
// 009983d0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009983d4  743a                 je 0x998410
// 009983d6  33c9                 xor ecx, ecx
// 009983d8  8bc7                 mov eax, edi
// 009983da  ba04000000           mov edx, 4
// 009983df  f7e2                 mul edx
// 009983e1  0f90c1               seto cl
// 009983e4  f7d9                 neg ecx
// 009983e6  0bc8                 or ecx, eax
// 009983e8  51                   push ecx
// 009983e9  e802a0feff           call 0x9823f0
// 009983ee  83c404               add esp, 4
// 009983f1  894604               mov dword ptr [esi + 4], eax
// 009983f4  85c0                 test eax, eax
// 009983f6  7505                 jne 0x9983fd
// 009983f8  e8c39ffeff           call 0x9823c0
// 009983fd  8d0cbd00000000       lea ecx, [edi*4]
// 00998404  51                   push ecx
// 00998405  6a00                 push 0
// 00998407  50                   push eax
// 00998408  e867affeff           call 0x983374
// 0099840d  83c40c               add esp, 0xc
// 00998410  897e08               mov dword ptr [esi + 8], edi
// 00998413  5f                   pop edi
// 00998414  5e                   pop esi
// 00998415  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ?InitHashTable@?$CMap@JJUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@AAU123@@@QAEXIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
