// from server: 100% by auto
// roc 2007-08 00515380  unit: G3D::_internal::DialogTemplate  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00515380
//
// 00515380  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00515384  85c9                 test ecx, ecx
// 00515386  7506                 jne 0x51538e
// 00515388  394c2408             cmp dword ptr [esp + 8], ecx
// 0051538c  7409                 je 0x515397
// 0051538e  83b92002000000       cmp dword ptr [ecx + 0x220], 0
// 00515395  7f03                 jg 0x51539a
// 00515397  33c0                 xor eax, eax
// 00515399  c3                   ret 
// 0051539a  8b8120020000         mov eax, dword ptr [ecx + 0x220]
// 005153a0  8b8924020000         mov ecx, dword ptr [ecx + 0x224]
// 005153a6  53                   push ebx
// 005153a7  55                   push ebp
// 005153a8  56                   push esi
// 005153a9  8bd8                 mov ebx, eax
// 005153ab  85db                 test ebx, ebx
// 005153ad  8d1480               lea edx, [eax + eax*4]
// 005153b0  57                   push edi
// 005153b1  8d7c0afb             lea edi, [edx + ecx - 5]
// 005153b5  0f849e000000         je 0x515459
// 005153bb  eb03                 jmp 0x5153c0
// 005153bd  8d4900               lea ecx, [ecx]
// 005153c0  8b542418             mov edx, dword ptr [esp + 0x18]
// 005153c4  b804000000           mov eax, 4
// 005153c9  8bcf                 mov ecx, edi
// 005153cb  eb03                 jmp 0x5153d0
// 005153cd  8d4900               lea ecx, [ecx]
// 005153d0  8b32                 mov esi, dword ptr [edx]
// 005153d2  3b31                 cmp esi, dword ptr [ecx]
// 005153d4  7512                 jne 0x5153e8
// 005153d6  83e804               sub eax, 4
// 005153d9  83c104               add ecx, 4
// 005153dc  83c204               add edx, 4
// 005153df  83f804               cmp eax, 4
// 005153e2  73ec                 jae 0x5153d0
// 005153e4  85c0                 test eax, eax
// 005153e6  745d                 je 0x515445
// 005153e8  0fb632               movzx esi, byte ptr [edx]
// 005153eb  0fb629               movzx ebp, byte ptr [ecx]
// 005153ee  2bf5                 sub esi, ebp
// 005153f0  7545                 jne 0x515437
// 005153f2  83e801               sub eax, 1
// 005153f5  83c101               add ecx, 1
// 005153f8  83c201               add edx, 1
// 005153fb  85c0                 test eax, eax
// 005153fd  7446                 je 0x515445
// 005153ff  0fb632               movzx esi, byte ptr [edx]
// 00515402  0fb629               movzx ebp, byte ptr [ecx]
// 00515405  2bf5                 sub esi, ebp
// 00515407  752e                 jne 0x515437
// 00515409  83e801               sub eax, 1
// 0051540c  83c101               add ecx, 1
// 0051540f  83c201               add edx, 1
// 00515412  85c0                 test eax, eax
// 00515414  742f                 je 0x515445
// 00515416  0fb632               movzx esi, byte ptr [edx]
// 00515419  0fb629               movzx ebp, byte ptr [ecx]
// 0051541c  2bf5                 sub esi, ebp
// 0051541e  7517                 jne 0x515437
// 00515420  83e801               sub eax, 1
// 00515423  83c101               add ecx, 1
// 00515426  83c201               add edx, 1
// 00515429  85c0                 test eax, eax
// 0051542b  7418                 je 0x515445
// 0051542d  0fb632               movzx esi, byte ptr [edx]
// 00515430  0fb611               movzx edx, byte ptr [ecx]
// 00515433  2bf2                 sub esi, edx
// 00515435  740e                 je 0x515445
// 00515437  85f6                 test esi, esi
// 00515439  b801000000           mov eax, 1
// 0051543e  7f07                 jg 0x515447
// 00515440  83c8ff               or eax, 0xffffffff
// 00515443  eb02                 jmp 0x515447
// 00515445  33c0                 xor eax, eax
// 00515447  85c0                 test eax, eax
// 00515449  7415                 je 0x515460
// 0051544b  83eb01               sub ebx, 1
// 0051544e  83ef05               sub edi, 5
// 00515451  85db                 test ebx, ebx
// 00515453  0f8567ffffff         jne 0x5153c0
// 00515459  5f                   pop edi
// 0051545a  5e                   pop esi
// 0051545b  5d                   pop ebp
// 0051545c  33c0                 xor eax, eax
// 0051545e  5b                   pop ebx
// 0051545f  c3                   ret 
// 00515460  0fb64704             movzx eax, byte ptr [edi + 4]
// 00515464  5f                   pop edi
// 00515465  5e                   pop esi
// 00515466  5d                   pop ebp
// 00515467  5b                   pop ebx
// 00515468  c3                   ret 
// library libpng-1.2.5/png.c (function _png_handle_as_unknown)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
