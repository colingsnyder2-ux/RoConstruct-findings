// roc 2009-06 00598a00  unit: seg_00590000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00598a00
//
// 00598a00  83ec0c               sub esp, 0xc
// 00598a03  53                   push ebx
// 00598a04  55                   push ebp
// 00598a05  56                   push esi
// 00598a06  57                   push edi
// 00598a07  0fb77802             movzx edi, word ptr [eax + 2]
// 00598a0b  33d2                 xor edx, edx
// 00598a0d  8bd9                 mov ebx, ecx
// 00598a0f  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00598a17  8d4a07               lea ecx, [edx + 7]
// 00598a1a  8d7204               lea esi, [edx + 4]
// 00598a1d  85ff                 test edi, edi
// 00598a1f  7508                 jne 0x598a29
// 00598a21  b98a000000           mov ecx, 0x8a
// 00598a26  8d7203               lea esi, [edx + 3]
// 00598a29  bdffff0000           mov ebp, 0xffff
// 00598a2e  66896c9806           mov word ptr [eax + ebx*4 + 6], bp
// 00598a33  85db                 test ebx, ebx
// 00598a35  0f8c9b000000         jl 0x598ad6
// 00598a3b  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00598a3f  83c006               add eax, 6
// 00598a42  43                   inc ebx
// 00598a43  895c2414             mov dword ptr [esp + 0x14], ebx
// 00598a47  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00598a4b  89442410             mov dword ptr [esp + 0x10], eax
// 00598a4f  90                   nop 
// 00598a50  8bc7                 mov eax, edi
// 00598a52  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00598a56  0fb73f               movzx edi, word ptr [edi]
// 00598a59  42                   inc edx
// 00598a5a  3bd1                 cmp edx, ecx
// 00598a5c  7d04                 jge 0x598a62
// 00598a5e  3bc7                 cmp eax, edi
// 00598a60  7464                 je 0x598ac6
// 00598a62  3bd6                 cmp edx, esi
// 00598a64  7d0a                 jge 0x598a70
// 00598a66  660194837c0a0000     add word ptr [ebx + eax*4 + 0xa7c], dx
// 00598a6e  eb2e                 jmp 0x598a9e
// 00598a70  85c0                 test eax, eax
// 00598a72  7415                 je 0x598a89
// 00598a74  3bc5                 cmp eax, ebp
// 00598a76  7408                 je 0x598a80
// 00598a78  66ff84837c0a0000     inc word ptr [ebx + eax*4 + 0xa7c]
// 00598a80  66ff83bc0a0000       inc word ptr [ebx + 0xabc]
// 00598a87  eb15                 jmp 0x598a9e
// 00598a89  83fa0a               cmp edx, 0xa
// 00598a8c  7f09                 jg 0x598a97
// 00598a8e  66ff83c00a0000       inc word ptr [ebx + 0xac0]
// 00598a95  eb07                 jmp 0x598a9e
// 00598a97  66ff83c40a0000       inc word ptr [ebx + 0xac4]
// 00598a9e  33d2                 xor edx, edx
// 00598aa0  8be8                 mov ebp, eax
// 00598aa2  85ff                 test edi, edi
// 00598aa4  750a                 jne 0x598ab0
// 00598aa6  b98a000000           mov ecx, 0x8a
// 00598aab  8d7203               lea esi, [edx + 3]
// 00598aae  eb16                 jmp 0x598ac6
// 00598ab0  3bc7                 cmp eax, edi
// 00598ab2  750a                 jne 0x598abe
// 00598ab4  b906000000           mov ecx, 6
// 00598ab9  8d71fd               lea esi, [ecx - 3]
// 00598abc  eb08                 jmp 0x598ac6
// 00598abe  b907000000           mov ecx, 7
// 00598ac3  8d71fd               lea esi, [ecx - 3]
// 00598ac6  8344241004           add dword ptr [esp + 0x10], 4
// 00598acb  836c241401           sub dword ptr [esp + 0x14], 1
// 00598ad0  0f857affffff         jne 0x598a50
// 00598ad6  5f                   pop edi
// 00598ad7  5e                   pop esi
// 00598ad8  5d                   pop ebp
// 00598ad9  5b                   pop ebx
// 00598ada  83c40c               add esp, 0xc
// 00598add  c3                   ret 
// library zlib-1.2.3/trees.c (function _scan_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
