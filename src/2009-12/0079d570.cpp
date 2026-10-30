// roc 2009-12 0079d570  unit: seg_00790000  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079d570
//
// 0079d570  53                   push ebx
// 0079d571  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0079d575  55                   push ebp
// 0079d576  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0079d57a  56                   push esi
// 0079d57b  45                   inc ebp
// 0079d57c  8bf0                 mov esi, eax
// 0079d57e  55                   push ebp
// 0079d57f  56                   push esi
// 0079d580  53                   push ebx
// 0079d581  e8ba010000           call 0x79d740
// 0079d586  83c40c               add esp, 0xc
// 0079d589  85c0                 test eax, eax
// 0079d58b  7564                 jne 0x79d5f1
// 0079d58d  8d4900               lea ecx, [ecx]
// 0079d590  3b7304               cmp esi, dword ptr [ebx + 4]
// 0079d593  735a                 jae 0x79d5ef
// 0079d595  8a0f                 mov cl, byte ptr [edi]
// 0079d597  0fb606               movzx eax, byte ptr [esi]
// 0079d59a  80f925               cmp cl, 0x25
// 0079d59d  742b                 je 0x79d5ca
// 0079d59f  80f92e               cmp cl, 0x2e
// 0079d5a2  7437                 je 0x79d5db
// 0079d5a4  80f95b               cmp cl, 0x5b
// 0079d5a7  740e                 je 0x79d5b7
// 0079d5a9  0fb6c9               movzx ecx, cl
// 0079d5ac  33d2                 xor edx, edx
// 0079d5ae  3bc8                 cmp ecx, eax
// 0079d5b0  0f94c2               sete dl
// 0079d5b3  8bc2                 mov eax, edx
// 0079d5b5  eb20                 jmp 0x79d5d7
// 0079d5b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079d5bb  49                   dec ecx
// 0079d5bc  51                   push ecx
// 0079d5bd  50                   push eax
// 0079d5be  8bc7                 mov eax, edi
// 0079d5c0  e8fbfdffff           call 0x79d3c0
// 0079d5c5  83c408               add esp, 8
// 0079d5c8  eb0d                 jmp 0x79d5d7
// 0079d5ca  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 0079d5ce  e8cdfcffff           call 0x79d2a0
// 0079d5d3  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0079d5d7  85c0                 test eax, eax
// 0079d5d9  7414                 je 0x79d5ef
// 0079d5db  55                   push ebp
// 0079d5dc  46                   inc esi
// 0079d5dd  56                   push esi
// 0079d5de  53                   push ebx
// 0079d5df  e85c010000           call 0x79d740
// 0079d5e4  83c40c               add esp, 0xc
// 0079d5e7  85c0                 test eax, eax
// 0079d5e9  74a5                 je 0x79d590
// 0079d5eb  5e                   pop esi
// 0079d5ec  5d                   pop ebp
// 0079d5ed  5b                   pop ebx
// 0079d5ee  c3                   ret 
// 0079d5ef  33c0                 xor eax, eax
// 0079d5f1  5e                   pop esi
// 0079d5f2  5d                   pop ebp
// 0079d5f3  5b                   pop ebx
// 0079d5f4  c3                   ret 
// copied from an identical function in another client (function _min_expand)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lstrlib.c