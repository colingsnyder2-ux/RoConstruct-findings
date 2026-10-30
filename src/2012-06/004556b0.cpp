// from server: 100% by auto
// roc 2012-06 004556b0  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004556b0
//
// 004556b0  53                   push ebx
// 004556b1  56                   push esi
// 004556b2  8bf1                 mov esi, ecx
// 004556b4  57                   push edi
// 004556b5  8b7e04               mov edi, dword ptr [esi + 4]
// 004556b8  33db                 xor ebx, ebx
// 004556ba  3bfb                 cmp edi, ebx
// 004556bc  7421                 je 0x4556df
// 004556be  395e08               cmp dword ptr [esi + 8], ebx
// 004556c1  761c                 jbe 0x4556df
// 004556c3  8b5608               mov edx, dword ptr [esi + 8]
// 004556c6  8bcf                 mov ecx, edi
// 004556c8  8b01                 mov eax, dword ptr [ecx]
// 004556ca  3bc3                 cmp eax, ebx
// 004556cc  7409                 je 0x4556d7
// 004556ce  8bff                 mov edi, edi
// 004556d0  8b4008               mov eax, dword ptr [eax + 8]
// 004556d3  3bc3                 cmp eax, ebx
// 004556d5  75f9                 jne 0x4556d0
// 004556d7  83c104               add ecx, 4
// 004556da  83ea01               sub edx, 1
// 004556dd  75e9                 jne 0x4556c8
// 004556df  57                   push edi
// 004556e0  e8d5cc5200           call 0x9823ba
// 004556e5  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004556e8  83c404               add esp, 4
// 004556eb  895e04               mov dword ptr [esi + 4], ebx
// 004556ee  895e0c               mov dword ptr [esi + 0xc], ebx
// 004556f1  895e10               mov dword ptr [esi + 0x10], ebx
// 004556f4  e855d55200           call 0x982c4e
// 004556f9  5f                   pop edi
// 004556fa  895e14               mov dword ptr [esi + 0x14], ebx
// 004556fd  5e                   pop esi
// 004556fe  5b                   pop ebx
// 004556ff  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ?RemoveAll@?$CMap@JJII@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
