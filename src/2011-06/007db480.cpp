// roc 2011-06 007db480  unit: seg_007d0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007db480
//
// 007db480  57                   push edi
// 007db481  8b7e14               mov edi, dword ptr [esi + 0x14]
// 007db484  8b07                 mov eax, dword ptr [edi]
// 007db486  894614               mov dword ptr [esi + 0x14], eax
// 007db489  0fb65708             movzx edx, byte ptr [edi + 8]
// 007db48d  8b460c               mov eax, dword ptr [esi + 0xc]
// 007db490  e8abfcffff           call 0x7db140
// 007db495  807f0900             cmp byte ptr [edi + 9], 0
// 007db499  7414                 je 0x7db4af
// 007db49b  0fb64f08             movzx ecx, byte ptr [edi + 8]
// 007db49f  6a00                 push 0
// 007db4a1  6a00                 push 0
// 007db4a3  51                   push ecx
// 007db4a4  6a23                 push 0x23
// 007db4a6  56                   push esi
// 007db4a7  e804730100           call 0x7f27b0
// 007db4ac  83c414               add esp, 0x14
// 007db4af  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 007db4b3  895624               mov dword ptr [esi + 0x24], edx
// 007db4b6  8b4704               mov eax, dword ptr [edi + 4]
// 007db4b9  50                   push eax
// 007db4ba  56                   push esi
// 007db4bb  e850750100           call 0x7f2a10
// 007db4c0  83c408               add esp, 8
// 007db4c3  5f                   pop edi
// 007db4c4  c3                   ret 
// library lua-5.1.4/lparser.c (function _leaveblock)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
