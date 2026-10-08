// roc 2007-03 005a81b0  unit: seg_005a0000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a81b0
//
// 005a81b0  83ec08               sub esp, 8
// 005a81b3  53                   push ebx
// 005a81b4  55                   push ebp
// 005a81b5  56                   push esi
// 005a81b6  8bf1                 mov esi, ecx
// 005a81b8  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a81bb  85c9                 test ecx, ecx
// 005a81bd  57                   push edi
// 005a81be  7504                 jne 0x5a81c4
// 005a81c0  33c0                 xor eax, eax
// 005a81c2  eb08                 jmp 0x5a81cc
// 005a81c4  8b4608               mov eax, dword ptr [esi + 8]
// 005a81c7  2bc1                 sub eax, ecx
// 005a81c9  c1f802               sar eax, 2
// 005a81cc  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a81d0  3bc3                 cmp eax, ebx
// 005a81d2  7338                 jae 0x5a820c
// 005a81d4  85c9                 test ecx, ecx
// 005a81d6  7504                 jne 0x5a81dc
// 005a81d8  33ff                 xor edi, edi
// 005a81da  eb08                 jmp 0x5a81e4
// 005a81dc  8b7e08               mov edi, dword ptr [esi + 8]
// 005a81df  2bf9                 sub edi, ecx
// 005a81e1  c1ff02               sar edi, 2
// 005a81e4  8b6e08               mov ebp, dword ptr [esi + 8]
// 005a81e7  3bcd                 cmp ecx, ebp
// 005a81e9  7606                 jbe 0x5a81f1
// 005a81eb  ff1544e97700         call dword ptr [0x77e944]
// 005a81f1  8d442420             lea eax, [esp + 0x20]
// 005a81f5  50                   push eax
// 005a81f6  2bdf                 sub ebx, edi
// 005a81f8  53                   push ebx
// 005a81f9  55                   push ebp
// 005a81fa  56                   push esi
// 005a81fb  8bce                 mov ecx, esi
// 005a81fd  e8ae85fcff           call 0x5707b0
// 005a8202  5f                   pop edi
// 005a8203  5e                   pop esi
// 005a8204  5d                   pop ebp
// 005a8205  5b                   pop ebx
// 005a8206  83c408               add esp, 8
// 005a8209  c20800               ret 8
// 005a820c  85c9                 test ecx, ecx
// 005a820e  744d                 je 0x5a825d
// 005a8210  8b6e08               mov ebp, dword ptr [esi + 8]
// 005a8213  8bc5                 mov eax, ebp
// 005a8215  2bc1                 sub eax, ecx
// 005a8217  c1f802               sar eax, 2
// 005a821a  3bd8                 cmp ebx, eax
// 005a821c  733f                 jae 0x5a825d
// 005a821e  3bcd                 cmp ecx, ebp
// 005a8220  7606                 jbe 0x5a8228
// 005a8222  ff1544e97700         call dword ptr [0x77e944]
// 005a8228  8b7e04               mov edi, dword ptr [esi + 4]
// 005a822b  3b7e08               cmp edi, dword ptr [esi + 8]
// 005a822e  7606                 jbe 0x5a8236
// 005a8230  ff1544e97700         call dword ptr [0x77e944]
// 005a8236  897c2414             mov dword ptr [esp + 0x14], edi
// 005a823a  8d3c9f               lea edi, [edi + ebx*4]
// 005a823d  3b7e08               cmp edi, dword ptr [esi + 8]
// 005a8240  7705                 ja 0x5a8247
// 005a8242  3b7e04               cmp edi, dword ptr [esi + 4]
// 005a8245  7306                 jae 0x5a824d
// 005a8247  ff1544e97700         call dword ptr [0x77e944]
// 005a824d  55                   push ebp
// 005a824e  56                   push esi
// 005a824f  57                   push edi
// 005a8250  56                   push esi
// 005a8251  8d4c2420             lea ecx, [esp + 0x20]
// 005a8255  51                   push ecx
// 005a8256  8bce                 mov ecx, esi
// 005a8258  e863c9e9ff           call 0x444bc0
// 005a825d  5f                   pop edi
// 005a825e  5e                   pop esi
// 005a825f  5d                   pop ebp
// 005a8260  5b                   pop ebx
// 005a8261  83c408               add esp, 8
// 005a8264  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?resize@?$vector@PBVName@RBX@@V?$allocator@PBVName@RBX@@@std@@@std@@QAEXIPBVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
