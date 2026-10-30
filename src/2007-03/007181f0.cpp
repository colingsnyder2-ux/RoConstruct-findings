// roc 2007-03 007181f0  unit: seg_00710000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007181f0
//
// 007181f0  83ec10               sub esp, 0x10
// 007181f3  53                   push ebx
// 007181f4  56                   push esi
// 007181f5  57                   push edi
// 007181f6  8bf1                 mov esi, ecx
// 007181f8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007181fb  8d44240c             lea eax, [esp + 0xc]
// 007181ff  50                   push eax
// 00718200  51                   push ecx
// 00718201  ff153ced7700         call dword ptr [0x77ed3c]
// 00718207  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0071820b  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0071820f  57                   push edi
// 00718210  53                   push ebx
// 00718211  8d542414             lea edx, [esp + 0x14]
// 00718215  52                   push edx
// 00718216  ff1598ed7700         call dword ptr [0x77ed98]
// 0071821c  85c0                 test eax, eax
// 0071821e  7445                 je 0x718265
// 00718220  8bce                 mov ecx, esi
// 00718222  e89d290200           call 0x73abc4
// 00718227  a840                 test al, 0x40
// 00718229  742b                 je 0x718256
// 0071822b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0071822f  99                   cdq 
// 00718230  2bc2                 sub eax, edx
// 00718232  d1f8                 sar eax, 1
// 00718234  3bd8                 cmp ebx, eax
// 00718236  7d0e                 jge 0x718246
// 00718238  5f                   pop edi
// 00718239  5e                   pop esi
// 0071823a  b801000000           mov eax, 1
// 0071823f  5b                   pop ebx
// 00718240  83c410               add esp, 0x10
// 00718243  c20800               ret 8
// 00718246  7e1d                 jle 0x718265
// 00718248  5f                   pop edi
// 00718249  5e                   pop esi
// 0071824a  b802000000           mov eax, 2
// 0071824f  5b                   pop ebx
// 00718250  83c410               add esp, 0x10
// 00718253  c20800               ret 8
// 00718256  8b442418             mov eax, dword ptr [esp + 0x18]
// 0071825a  99                   cdq 
// 0071825b  2bc2                 sub eax, edx
// 0071825d  d1f8                 sar eax, 1
// 0071825f  3bf8                 cmp edi, eax
// 00718261  7fd5                 jg 0x718238
// 00718263  7ce3                 jl 0x718248
// 00718265  5f                   pop edi
// 00718266  5e                   pop esi
// 00718267  33c0                 xor eax, eax
// 00718269  5b                   pop ebx
// 0071826a  83c410               add esp, 0x10
// 0071826d  c20800               ret 8
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObjectSpin.cpp (function ?HitTest@CXTPSkinObjectSpin@@IAEIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObjectSpin.cpp
