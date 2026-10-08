// from server: 100% by auto
// roc 2012-06 0065e780  unit: seg_00650000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065e780
//
// 0065e780  83ec0c               sub esp, 0xc
// 0065e783  53                   push ebx
// 0065e784  55                   push ebp
// 0065e785  56                   push esi
// 0065e786  57                   push edi
// 0065e787  0fb77802             movzx edi, word ptr [eax + 2]
// 0065e78b  33d2                 xor edx, edx
// 0065e78d  8bd9                 mov ebx, ecx
// 0065e78f  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0065e797  8d4a07               lea ecx, [edx + 7]
// 0065e79a  8d7204               lea esi, [edx + 4]
// 0065e79d  85ff                 test edi, edi
// 0065e79f  7508                 jne 0x65e7a9
// 0065e7a1  b98a000000           mov ecx, 0x8a
// 0065e7a6  8d7203               lea esi, [edx + 3]
// 0065e7a9  bdffff0000           mov ebp, 0xffff
// 0065e7ae  66896c9806           mov word ptr [eax + ebx*4 + 6], bp
// 0065e7b3  85db                 test ebx, ebx
// 0065e7b5  0f8c9b000000         jl 0x65e856
// 0065e7bb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0065e7bf  83c006               add eax, 6
// 0065e7c2  43                   inc ebx
// 0065e7c3  895c2414             mov dword ptr [esp + 0x14], ebx
// 0065e7c7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0065e7cb  89442410             mov dword ptr [esp + 0x10], eax
// 0065e7cf  90                   nop 
// 0065e7d0  8bc7                 mov eax, edi
// 0065e7d2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0065e7d6  0fb73f               movzx edi, word ptr [edi]
// 0065e7d9  42                   inc edx
// 0065e7da  3bd1                 cmp edx, ecx
// 0065e7dc  7d04                 jge 0x65e7e2
// 0065e7de  3bc7                 cmp eax, edi
// 0065e7e0  7464                 je 0x65e846
// 0065e7e2  3bd6                 cmp edx, esi
// 0065e7e4  7d0a                 jge 0x65e7f0
// 0065e7e6  660194837c0a0000     add word ptr [ebx + eax*4 + 0xa7c], dx
// 0065e7ee  eb2e                 jmp 0x65e81e
// 0065e7f0  85c0                 test eax, eax
// 0065e7f2  7415                 je 0x65e809
// 0065e7f4  3bc5                 cmp eax, ebp
// 0065e7f6  7408                 je 0x65e800
// 0065e7f8  66ff84837c0a0000     inc word ptr [ebx + eax*4 + 0xa7c]
// 0065e800  66ff83bc0a0000       inc word ptr [ebx + 0xabc]
// 0065e807  eb15                 jmp 0x65e81e
// 0065e809  83fa0a               cmp edx, 0xa
// 0065e80c  7f09                 jg 0x65e817
// 0065e80e  66ff83c00a0000       inc word ptr [ebx + 0xac0]
// 0065e815  eb07                 jmp 0x65e81e
// 0065e817  66ff83c40a0000       inc word ptr [ebx + 0xac4]
// 0065e81e  33d2                 xor edx, edx
// 0065e820  8be8                 mov ebp, eax
// 0065e822  85ff                 test edi, edi
// 0065e824  750a                 jne 0x65e830
// 0065e826  b98a000000           mov ecx, 0x8a
// 0065e82b  8d7203               lea esi, [edx + 3]
// 0065e82e  eb16                 jmp 0x65e846
// 0065e830  3bc7                 cmp eax, edi
// 0065e832  750a                 jne 0x65e83e
// 0065e834  b906000000           mov ecx, 6
// 0065e839  8d71fd               lea esi, [ecx - 3]
// 0065e83c  eb08                 jmp 0x65e846
// 0065e83e  b907000000           mov ecx, 7
// 0065e843  8d71fd               lea esi, [ecx - 3]
// 0065e846  8344241004           add dword ptr [esp + 0x10], 4
// 0065e84b  836c241401           sub dword ptr [esp + 0x14], 1
// 0065e850  0f857affffff         jne 0x65e7d0
// 0065e856  5f                   pop edi
// 0065e857  5e                   pop esi
// 0065e858  5d                   pop ebp
// 0065e859  5b                   pop ebx
// 0065e85a  83c40c               add esp, 0xc
// 0065e85d  c3                   ret 
// library zlib-1.2.3/trees.c (function _scan_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
