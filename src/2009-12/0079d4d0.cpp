// roc 2009-12 0079d4d0  unit: seg_00790000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079d4d0
//
// 0079d4d0  53                   push ebx
// 0079d4d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0079d4d5  55                   push ebp
// 0079d4d6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0079d4da  56                   push esi
// 0079d4db  8b742414             mov esi, dword ptr [esp + 0x14]
// 0079d4df  57                   push edi
// 0079d4e0  33ff                 xor edi, edi
// 0079d4e2  3b7304               cmp esi, dword ptr [ebx + 4]
// 0079d4e5  7352                 jae 0x79d539
// 0079d4e7  8a4d00               mov cl, byte ptr [ebp]
// 0079d4ea  0fb606               movzx eax, byte ptr [esi]
// 0079d4ed  80f925               cmp cl, 0x25
// 0079d4f0  742b                 je 0x79d51d
// 0079d4f2  80f92e               cmp cl, 0x2e
// 0079d4f5  7437                 je 0x79d52e
// 0079d4f7  80f95b               cmp cl, 0x5b
// 0079d4fa  740e                 je 0x79d50a
// 0079d4fc  0fb6c9               movzx ecx, cl
// 0079d4ff  33d2                 xor edx, edx
// 0079d501  3bc8                 cmp ecx, eax
// 0079d503  0f94c2               sete dl
// 0079d506  8bc2                 mov eax, edx
// 0079d508  eb20                 jmp 0x79d52a
// 0079d50a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079d50e  49                   dec ecx
// 0079d50f  51                   push ecx
// 0079d510  50                   push eax
// 0079d511  8bc5                 mov eax, ebp
// 0079d513  e8a8feffff           call 0x79d3c0
// 0079d518  83c408               add esp, 8
// 0079d51b  eb0d                 jmp 0x79d52a
// 0079d51d  0fb65d01             movzx ebx, byte ptr [ebp + 1]
// 0079d521  e87afdffff           call 0x79d2a0
// 0079d526  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0079d52a  85c0                 test eax, eax
// 0079d52c  7407                 je 0x79d535
// 0079d52e  46                   inc esi
// 0079d52f  47                   inc edi
// 0079d530  3b7304               cmp esi, dword ptr [ebx + 4]
// 0079d533  72b2                 jb 0x79d4e7
// 0079d535  85ff                 test edi, edi
// 0079d537  7c22                 jl 0x79d55b
// 0079d539  8b742420             mov esi, dword ptr [esp + 0x20]
// 0079d53d  46                   inc esi
// 0079d53e  8bff                 mov edi, edi
// 0079d540  8b542418             mov edx, dword ptr [esp + 0x18]
// 0079d544  56                   push esi
// 0079d545  8d0417               lea eax, [edi + edx]
// 0079d548  50                   push eax
// 0079d549  53                   push ebx
// 0079d54a  e8f1010000           call 0x79d740
// 0079d54f  83c40c               add esp, 0xc
// 0079d552  85c0                 test eax, eax
// 0079d554  7507                 jne 0x79d55d
// 0079d556  83ef01               sub edi, 1
// 0079d559  79e5                 jns 0x79d540
// 0079d55b  33c0                 xor eax, eax
// 0079d55d  5f                   pop edi
// 0079d55e  5e                   pop esi
// 0079d55f  5d                   pop ebp
// 0079d560  5b                   pop ebx
// 0079d561  c3                   ret 
// copied from an identical function in another client (function _max_expand)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lstrlib.c