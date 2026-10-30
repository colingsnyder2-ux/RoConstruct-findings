// from server: 100% by auto
// roc 2007-08 00714580  unit: CXTCaptionButtonThemeOffice2003  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714580
//
// 00714580  83ec44               sub esp, 0x44
// 00714583  53                   push ebx
// 00714584  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00714588  85db                 test ebx, ebx
// 0071458a  894c2404             mov dword ptr [esp + 4], ecx
// 0071458e  7504                 jne 0x714594
// 00714590  33c0                 xor eax, eax
// 00714592  eb03                 jmp 0x714597
// 00714594  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00714597  50                   push eax
// 00714598  ff15bced7700         call dword ptr [0x77edbc]
// 0071459e  85c0                 test eax, eax
// 007145a0  7507                 jne 0x7145a9
// 007145a2  5b                   pop ebx
// 007145a3  83c444               add esp, 0x44
// 007145a6  c20800               ret 8
// 007145a9  55                   push ebp
// 007145aa  56                   push esi
// 007145ab  8b742454             mov esi, dword ptr [esp + 0x54]
// 007145af  8b4618               mov eax, dword ptr [esi + 0x18]
// 007145b2  57                   push edi
// 007145b3  50                   push eax
// 007145b4  e8053e0200           call 0x7383be
// 007145b9  8d4e1c               lea ecx, [esi + 0x1c]
// 007145bc  51                   push ecx
// 007145bd  8d542418             lea edx, [esp + 0x18]
// 007145c1  52                   push edx
// 007145c2  8bf8                 mov edi, eax
// 007145c4  ff15e0ed7700         call dword ptr [0x77ede0]
// 007145ca  8babac000000         mov ebp, dword ptr [ebx + 0xac]
// 007145d0  85ed                 test ebp, ebp
// 007145d2  8b4610               mov eax, dword ptr [esi + 0x10]
// 007145d5  8944245c             mov dword ptr [esp + 0x5c], eax
// 007145d9  7504                 jne 0x7145df
// 007145db  33c0                 xor eax, eax
// 007145dd  eb03                 jmp 0x7145e2
// 007145df  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007145e2  50                   push eax
// 007145e3  ff15bced7700         call dword ptr [0x77edbc]
// 007145e9  85c0                 test eax, eax
// 007145eb  0f84e5000000         je 0x7146d6
// 007145f1  83bba000000000       cmp dword ptr [ebx + 0xa0], 0
// 007145f8  750f                 jne 0x714609
// 007145fa  ff1544ec7700         call dword ptr [0x77ec44]
// 00714600  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 00714603  7404                 je 0x714609
// 00714605  33c9                 xor ecx, ecx
// 00714607  eb05                 jmp 0x71460e
// 00714609  b901000000           mov ecx, 1
// 0071460e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00714612  83e001               and eax, 1
// 00714615  7557                 jne 0x71466e
// 00714617  85c9                 test ecx, ecx
// 00714619  755f                 jne 0x71467a
// 0071461b  53                   push ebx
// 0071461c  8d4c2428             lea ecx, [esp + 0x28]
// 00714620  e87bb9f6ff           call 0x67ffa0
// 00714625  8d4c2434             lea ecx, [esp + 0x34]
// 00714629  e8923ef5ff           call 0x6684c0
// 0071462e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00714632  8b11                 mov edx, dword ptr [ecx]
// 00714634  8b527c               mov edx, dword ptr [edx + 0x7c]
// 00714637  8d442434             lea eax, [esp + 0x34]
// 0071463b  50                   push eax
// 0071463c  55                   push ebp
// 0071463d  8d44242c             lea eax, [esp + 0x2c]
// 00714641  50                   push eax
// 00714642  ffd2                 call edx
// 00714644  6a00                 push 0
// 00714646  6a00                 push 0
// 00714648  8d44243c             lea eax, [esp + 0x3c]
// 0071464c  50                   push eax
// 0071464d  8d4c2420             lea ecx, [esp + 0x20]
// 00714651  51                   push ecx
// 00714652  57                   push edi
// 00714653  e8e8dbf6ff           call 0x682240
// 00714658  8bc8                 mov ecx, eax
// 0071465a  e801dff6ff           call 0x682560
// 0071465f  5f                   pop edi
// 00714660  5e                   pop esi
// 00714661  5d                   pop ebp
// 00714662  b801000000           mov eax, 1
// 00714667  5b                   pop ebx
// 00714668  83c444               add esp, 0x44
// 0071466b  c20800               ret 8
// 0071466e  e8fd48f5ff           call 0x668f70
// 00714673  0520010000           add eax, 0x120
// 00714678  eb0a                 jmp 0x714684
// 0071467a  e8f148f5ff           call 0x668f70
// 0071467f  0540010000           add eax, 0x140
// 00714684  6a00                 push 0
// 00714686  6a00                 push 0
// 00714688  50                   push eax
// 00714689  8d542420             lea edx, [esp + 0x20]
// 0071468d  52                   push edx
// 0071468e  57                   push edi
// 0071468f  e8acdbf6ff           call 0x682240
// 00714694  8bc8                 mov ecx, eax
// 00714696  e8c5def6ff           call 0x682560
// 0071469b  e8d048f5ff           call 0x668f70
// 007146a0  6a20                 push 0x20
// 007146a2  8bc8                 mov ecx, eax
// 007146a4  e8f742f5ff           call 0x6689a0
// 007146a9  8bf0                 mov esi, eax
// 007146ab  e8c048f5ff           call 0x668f70
// 007146b0  56                   push esi
// 007146b1  6a20                 push 0x20
// 007146b3  8bc8                 mov ecx, eax
// 007146b5  e8e642f5ff           call 0x6689a0
// 007146ba  50                   push eax
// 007146bb  8d44241c             lea eax, [esp + 0x1c]
// 007146bf  50                   push eax
// 007146c0  8bcf                 mov ecx, edi
// 007146c2  e8e3c1f1ff           call 0x6308aa
// 007146c7  5f                   pop edi
// 007146c8  5e                   pop esi
// 007146c9  5d                   pop ebp
// 007146ca  b801000000           mov eax, 1
// 007146cf  5b                   pop ebx
// 007146d0  83c444               add esp, 0x44
// 007146d3  c20800               ret 8
// 007146d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007146da  53                   push ebx
// 007146db  56                   push esi
// 007146dc  e8cfda0000           call 0x7221b0
// 007146e1  5f                   pop edi
// 007146e2  5e                   pop esi
// 007146e3  5d                   pop ebp
// 007146e4  5b                   pop ebx
// 007146e5  83c444               add esp, 0x44
// 007146e8  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionTheme.cpp (function ?DrawButtonThemeBackground@CXTCaptionButtonThemeOffice2003@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionTheme.cpp
