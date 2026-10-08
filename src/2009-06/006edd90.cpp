// from server: 100% by auto
// roc 2009-06 006edd90  unit: seg_006e0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006edd90
//
// 006edd90  57                   push edi
// 006edd91  8b7e14               mov edi, dword ptr [esi + 0x14]
// 006edd94  8b07                 mov eax, dword ptr [edi]
// 006edd96  894614               mov dword ptr [esi + 0x14], eax
// 006edd99  0fb65708             movzx edx, byte ptr [edi + 8]
// 006edd9d  8b460c               mov eax, dword ptr [esi + 0xc]
// 006edda0  e8bbfcffff           call 0x6eda60
// 006edda5  807f0900             cmp byte ptr [edi + 9], 0
// 006edda9  7414                 je 0x6eddbf
// 006eddab  0fb64f08             movzx ecx, byte ptr [edi + 8]
// 006eddaf  6a00                 push 0
// 006eddb1  6a00                 push 0
// 006eddb3  51                   push ecx
// 006eddb4  6a23                 push 0x23
// 006eddb6  56                   push esi
// 006eddb7  e814c40000           call 0x6fa1d0
// 006eddbc  83c414               add esp, 0x14
// 006eddbf  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 006eddc3  895624               mov dword ptr [esi + 0x24], edx
// 006eddc6  8b4704               mov eax, dword ptr [edi + 4]
// 006eddc9  50                   push eax
// 006eddca  56                   push esi
// 006eddcb  e860c60000           call 0x6fa430
// 006eddd0  83c408               add esp, 8
// 006eddd3  5f                   pop edi
// 006eddd4  c3                   ret 
// library lua-5.1.4/lparser.c (function _leaveblock)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
