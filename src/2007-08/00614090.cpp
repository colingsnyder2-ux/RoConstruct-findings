// roc 2007-08 00614090  unit: seg_00610000  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00614090
//
// 00614090  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00614094  53                   push ebx
// 00614095  55                   push ebp
// 00614096  56                   push esi
// 00614097  8b7130               mov esi, dword ptr [ecx + 0x30]
// 0061409a  8b1e                 mov ebx, dword ptr [esi]
// 0061409c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0061409f  8d6b34               lea ebp, [ebx + 0x34]
// 006140a2  57                   push edi
// 006140a3  8b7d00               mov edi, dword ptr [ebp]
// 006140a6  83c001               add eax, 1
// 006140a9  3bc7                 cmp eax, edi
// 006140ab  7e24                 jle 0x6140d1
// 006140ad  8b5310               mov edx, dword ptr [ebx + 0x10]
// 006140b0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 006140b3  6854347c00           push 0x7c3454
// 006140b8  68ffff0300           push 0x3ffff
// 006140bd  6a04                 push 4
// 006140bf  55                   push ebp
// 006140c0  52                   push edx
// 006140c1  50                   push eax
// 006140c2  e879f9ffff           call 0x613a40
// 006140c7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006140cb  83c418               add esp, 0x18
// 006140ce  894310               mov dword ptr [ebx + 0x10], eax
// 006140d1  3b7d00               cmp edi, dword ptr [ebp]
// 006140d4  7d1c                 jge 0x6140f2
// 006140d6  eb08                 jmp 0x6140e0
// 006140d8  8da42400000000       lea esp, [esp]
// 006140df  90                   nop 
// 006140e0  8b5310               mov edx, dword ptr [ebx + 0x10]
// 006140e3  c704ba00000000       mov dword ptr [edx + edi*4], 0
// 006140ea  83c701               add edi, 1
// 006140ed  3b7d00               cmp edi, dword ptr [ebp]
// 006140f0  7cee                 jl 0x6140e0
// 006140f2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006140f6  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006140f9  8b5310               mov edx, dword ptr [ebx + 0x10]
// 006140fc  8b7d00               mov edi, dword ptr [ebp]
// 006140ff  893c82               mov dword ptr [edx + eax*4], edi
// 00614102  83462c01             add dword ptr [esi + 0x2c], 1
// 00614106  8b4500               mov eax, dword ptr [ebp]
// 00614109  f6400503             test byte ptr [eax + 5], 3
// 0061410d  7414                 je 0x614123
// 0061410f  f6430504             test byte ptr [ebx + 5], 4
// 00614113  740e                 je 0x614123
// 00614115  50                   push eax
// 00614116  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00614119  53                   push ebx
// 0061411a  50                   push eax
// 0061411b  e8d0bdffff           call 0x60fef0
// 00614120  83c40c               add esp, 0xc
// 00614123  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00614126  83e901               sub ecx, 1
// 00614129  51                   push ecx
// 0061412a  6a00                 push 0
// 0061412c  6a24                 push 0x24
// 0061412e  56                   push esi
// 0061412f  e87c4c0100           call 0x628db0
// 00614134  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00614138  83caff               or edx, 0xffffffff
// 0061413b  895110               mov dword ptr [ecx + 0x10], edx
// 0061413e  895114               mov dword ptr [ecx + 0x14], edx
// 00614141  c7010b000000         mov dword ptr [ecx], 0xb
// 00614147  894108               mov dword ptr [ecx + 8], eax
// 0061414a  8b5500               mov edx, dword ptr [ebp]
// 0061414d  33db                 xor ebx, ebx
// 0061414f  83c410               add esp, 0x10
// 00614152  385a48               cmp byte ptr [edx + 0x48], bl
// 00614155  7639                 jbe 0x614190
// 00614157  8d7d33               lea edi, [ebp + 0x33]
// 0061415a  8d9b00000000         lea ebx, [ebx]
// 00614160  8a0f                 mov cl, byte ptr [edi]
// 00614162  0fb64701             movzx eax, byte ptr [edi + 1]
// 00614166  80e906               sub cl, 6
// 00614169  f6d9                 neg cl
// 0061416b  6a00                 push 0
// 0061416d  50                   push eax
// 0061416e  6a00                 push 0
// 00614170  1bc9                 sbb ecx, ecx
// 00614172  83e104               and ecx, 4
// 00614175  51                   push ecx
// 00614176  56                   push esi
// 00614177  e8044c0100           call 0x628d80
// 0061417c  8b5500               mov edx, dword ptr [ebp]
// 0061417f  0fb64248             movzx eax, byte ptr [edx + 0x48]
// 00614183  83c301               add ebx, 1
// 00614186  83c414               add esp, 0x14
// 00614189  83c702               add edi, 2
// 0061418c  3bd8                 cmp ebx, eax
// 0061418e  7cd0                 jl 0x614160
// 00614190  5f                   pop edi
// 00614191  5e                   pop esi
// 00614192  5d                   pop ebp
// 00614193  5b                   pop ebx
// 00614194  c3                   ret 
// library lua-5.1.4/lparser.c (function _pushclosure)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
