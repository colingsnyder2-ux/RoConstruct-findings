// roc 2007-03 00445410  unit: seg_00440000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00445410
//
// 00445410  83ec08               sub esp, 8
// 00445413  53                   push ebx
// 00445414  55                   push ebp
// 00445415  56                   push esi
// 00445416  8bf1                 mov esi, ecx
// 00445418  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044541b  85c9                 test ecx, ecx
// 0044541d  57                   push edi
// 0044541e  7504                 jne 0x445424
// 00445420  33c0                 xor eax, eax
// 00445422  eb08                 jmp 0x44542c
// 00445424  8b4608               mov eax, dword ptr [esi + 8]
// 00445427  2bc1                 sub eax, ecx
// 00445429  c1f802               sar eax, 2
// 0044542c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00445430  3bc3                 cmp eax, ebx
// 00445432  7338                 jae 0x44546c
// 00445434  85c9                 test ecx, ecx
// 00445436  7504                 jne 0x44543c
// 00445438  33ff                 xor edi, edi
// 0044543a  eb08                 jmp 0x445444
// 0044543c  8b7e08               mov edi, dword ptr [esi + 8]
// 0044543f  2bf9                 sub edi, ecx
// 00445441  c1ff02               sar edi, 2
// 00445444  8b6e08               mov ebp, dword ptr [esi + 8]
// 00445447  3bcd                 cmp ecx, ebp
// 00445449  7606                 jbe 0x445451
// 0044544b  ff1544e97700         call dword ptr [0x77e944]
// 00445451  8d442420             lea eax, [esp + 0x20]
// 00445455  50                   push eax
// 00445456  2bdf                 sub ebx, edi
// 00445458  53                   push ebx
// 00445459  55                   push ebp
// 0044545a  56                   push esi
// 0044545b  8bce                 mov ecx, esi
// 0044545d  e82e530500           call 0x49a790
// 00445462  5f                   pop edi
// 00445463  5e                   pop esi
// 00445464  5d                   pop ebp
// 00445465  5b                   pop ebx
// 00445466  83c408               add esp, 8
// 00445469  c20800               ret 8
// 0044546c  85c9                 test ecx, ecx
// 0044546e  744d                 je 0x4454bd
// 00445470  8b6e08               mov ebp, dword ptr [esi + 8]
// 00445473  8bc5                 mov eax, ebp
// 00445475  2bc1                 sub eax, ecx
// 00445477  c1f802               sar eax, 2
// 0044547a  3bd8                 cmp ebx, eax
// 0044547c  733f                 jae 0x4454bd
// 0044547e  3bcd                 cmp ecx, ebp
// 00445480  7606                 jbe 0x445488
// 00445482  ff1544e97700         call dword ptr [0x77e944]
// 00445488  8b7e04               mov edi, dword ptr [esi + 4]
// 0044548b  3b7e08               cmp edi, dword ptr [esi + 8]
// 0044548e  7606                 jbe 0x445496
// 00445490  ff1544e97700         call dword ptr [0x77e944]
// 00445496  897c2414             mov dword ptr [esp + 0x14], edi
// 0044549a  8d3c9f               lea edi, [edi + ebx*4]
// 0044549d  3b7e08               cmp edi, dword ptr [esi + 8]
// 004454a0  7705                 ja 0x4454a7
// 004454a2  3b7e04               cmp edi, dword ptr [esi + 4]
// 004454a5  7306                 jae 0x4454ad
// 004454a7  ff1544e97700         call dword ptr [0x77e944]
// 004454ad  55                   push ebp
// 004454ae  56                   push esi
// 004454af  57                   push edi
// 004454b0  56                   push esi
// 004454b1  8d4c2420             lea ecx, [esp + 0x20]
// 004454b5  51                   push ecx
// 004454b6  8bce                 mov ecx, esi
// 004454b8  e803f7ffff           call 0x444bc0
// 004454bd  5f                   pop edi
// 004454be  5e                   pop esi
// 004454bf  5d                   pop ebp
// 004454c0  5b                   pop ebx
// 004454c1  83c408               add esp, 8
// 004454c4  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?resize@?$vector@PBVName@RBX@@V?$allocator@PBVName@RBX@@@std@@@std@@QAEXIPBVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
