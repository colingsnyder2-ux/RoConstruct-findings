// roc 2010-06 0057c590  unit: seg_00570000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057c590
//
// 0057c590  83ec0c               sub esp, 0xc
// 0057c593  53                   push ebx
// 0057c594  55                   push ebp
// 0057c595  56                   push esi
// 0057c596  57                   push edi
// 0057c597  0fb77802             movzx edi, word ptr [eax + 2]
// 0057c59b  33d2                 xor edx, edx
// 0057c59d  8bd9                 mov ebx, ecx
// 0057c59f  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0057c5a7  8d4a07               lea ecx, [edx + 7]
// 0057c5aa  8d7204               lea esi, [edx + 4]
// 0057c5ad  85ff                 test edi, edi
// 0057c5af  7508                 jne 0x57c5b9
// 0057c5b1  b98a000000           mov ecx, 0x8a
// 0057c5b6  8d7203               lea esi, [edx + 3]
// 0057c5b9  bdffff0000           mov ebp, 0xffff
// 0057c5be  66896c9806           mov word ptr [eax + ebx*4 + 6], bp
// 0057c5c3  85db                 test ebx, ebx
// 0057c5c5  0f8c9b000000         jl 0x57c666
// 0057c5cb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0057c5cf  83c006               add eax, 6
// 0057c5d2  43                   inc ebx
// 0057c5d3  895c2414             mov dword ptr [esp + 0x14], ebx
// 0057c5d7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0057c5db  89442410             mov dword ptr [esp + 0x10], eax
// 0057c5df  90                   nop 
// 0057c5e0  8bc7                 mov eax, edi
// 0057c5e2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0057c5e6  0fb73f               movzx edi, word ptr [edi]
// 0057c5e9  42                   inc edx
// 0057c5ea  3bd1                 cmp edx, ecx
// 0057c5ec  7d04                 jge 0x57c5f2
// 0057c5ee  3bc7                 cmp eax, edi
// 0057c5f0  7464                 je 0x57c656
// 0057c5f2  3bd6                 cmp edx, esi
// 0057c5f4  7d0a                 jge 0x57c600
// 0057c5f6  660194837c0a0000     add word ptr [ebx + eax*4 + 0xa7c], dx
// 0057c5fe  eb2e                 jmp 0x57c62e
// 0057c600  85c0                 test eax, eax
// 0057c602  7415                 je 0x57c619
// 0057c604  3bc5                 cmp eax, ebp
// 0057c606  7408                 je 0x57c610
// 0057c608  66ff84837c0a0000     inc word ptr [ebx + eax*4 + 0xa7c]
// 0057c610  66ff83bc0a0000       inc word ptr [ebx + 0xabc]
// 0057c617  eb15                 jmp 0x57c62e
// 0057c619  83fa0a               cmp edx, 0xa
// 0057c61c  7f09                 jg 0x57c627
// 0057c61e  66ff83c00a0000       inc word ptr [ebx + 0xac0]
// 0057c625  eb07                 jmp 0x57c62e
// 0057c627  66ff83c40a0000       inc word ptr [ebx + 0xac4]
// 0057c62e  33d2                 xor edx, edx
// 0057c630  8be8                 mov ebp, eax
// 0057c632  85ff                 test edi, edi
// 0057c634  750a                 jne 0x57c640
// 0057c636  b98a000000           mov ecx, 0x8a
// 0057c63b  8d7203               lea esi, [edx + 3]
// 0057c63e  eb16                 jmp 0x57c656
// 0057c640  3bc7                 cmp eax, edi
// 0057c642  750a                 jne 0x57c64e
// 0057c644  b906000000           mov ecx, 6
// 0057c649  8d71fd               lea esi, [ecx - 3]
// 0057c64c  eb08                 jmp 0x57c656
// 0057c64e  b907000000           mov ecx, 7
// 0057c653  8d71fd               lea esi, [ecx - 3]
// 0057c656  8344241004           add dword ptr [esp + 0x10], 4
// 0057c65b  836c241401           sub dword ptr [esp + 0x14], 1
// 0057c660  0f857affffff         jne 0x57c5e0
// 0057c666  5f                   pop edi
// 0057c667  5e                   pop esi
// 0057c668  5d                   pop ebp
// 0057c669  5b                   pop ebx
// 0057c66a  83c40c               add esp, 0xc
// 0057c66d  c3                   ret 
// library zlib-1.2.3/trees.c (function _scan_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
