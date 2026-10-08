// from server: 100% by auto
// roc 2011-06 00573080  unit: seg_00570000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00573080
//
// 00573080  83ec0c               sub esp, 0xc
// 00573083  53                   push ebx
// 00573084  55                   push ebp
// 00573085  56                   push esi
// 00573086  57                   push edi
// 00573087  0fb77802             movzx edi, word ptr [eax + 2]
// 0057308b  33d2                 xor edx, edx
// 0057308d  8bd9                 mov ebx, ecx
// 0057308f  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00573097  8d4a07               lea ecx, [edx + 7]
// 0057309a  8d7204               lea esi, [edx + 4]
// 0057309d  85ff                 test edi, edi
// 0057309f  7508                 jne 0x5730a9
// 005730a1  b98a000000           mov ecx, 0x8a
// 005730a6  8d7203               lea esi, [edx + 3]
// 005730a9  bdffff0000           mov ebp, 0xffff
// 005730ae  66896c9806           mov word ptr [eax + ebx*4 + 6], bp
// 005730b3  85db                 test ebx, ebx
// 005730b5  0f8c9b000000         jl 0x573156
// 005730bb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005730bf  83c006               add eax, 6
// 005730c2  43                   inc ebx
// 005730c3  895c2414             mov dword ptr [esp + 0x14], ebx
// 005730c7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005730cb  89442410             mov dword ptr [esp + 0x10], eax
// 005730cf  90                   nop 
// 005730d0  8bc7                 mov eax, edi
// 005730d2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005730d6  0fb73f               movzx edi, word ptr [edi]
// 005730d9  42                   inc edx
// 005730da  3bd1                 cmp edx, ecx
// 005730dc  7d04                 jge 0x5730e2
// 005730de  3bc7                 cmp eax, edi
// 005730e0  7464                 je 0x573146
// 005730e2  3bd6                 cmp edx, esi
// 005730e4  7d0a                 jge 0x5730f0
// 005730e6  660194837c0a0000     add word ptr [ebx + eax*4 + 0xa7c], dx
// 005730ee  eb2e                 jmp 0x57311e
// 005730f0  85c0                 test eax, eax
// 005730f2  7415                 je 0x573109
// 005730f4  3bc5                 cmp eax, ebp
// 005730f6  7408                 je 0x573100
// 005730f8  66ff84837c0a0000     inc word ptr [ebx + eax*4 + 0xa7c]
// 00573100  66ff83bc0a0000       inc word ptr [ebx + 0xabc]
// 00573107  eb15                 jmp 0x57311e
// 00573109  83fa0a               cmp edx, 0xa
// 0057310c  7f09                 jg 0x573117
// 0057310e  66ff83c00a0000       inc word ptr [ebx + 0xac0]
// 00573115  eb07                 jmp 0x57311e
// 00573117  66ff83c40a0000       inc word ptr [ebx + 0xac4]
// 0057311e  33d2                 xor edx, edx
// 00573120  8be8                 mov ebp, eax
// 00573122  85ff                 test edi, edi
// 00573124  750a                 jne 0x573130
// 00573126  b98a000000           mov ecx, 0x8a
// 0057312b  8d7203               lea esi, [edx + 3]
// 0057312e  eb16                 jmp 0x573146
// 00573130  3bc7                 cmp eax, edi
// 00573132  750a                 jne 0x57313e
// 00573134  b906000000           mov ecx, 6
// 00573139  8d71fd               lea esi, [ecx - 3]
// 0057313c  eb08                 jmp 0x573146
// 0057313e  b907000000           mov ecx, 7
// 00573143  8d71fd               lea esi, [ecx - 3]
// 00573146  8344241004           add dword ptr [esp + 0x10], 4
// 0057314b  836c241401           sub dword ptr [esp + 0x14], 1
// 00573150  0f857affffff         jne 0x5730d0
// 00573156  5f                   pop edi
// 00573157  5e                   pop esi
// 00573158  5d                   pop ebp
// 00573159  5b                   pop ebx
// 0057315a  83c40c               add esp, 0xc
// 0057315d  c3                   ret 
// library zlib-1.2.3/trees.c (function _scan_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
