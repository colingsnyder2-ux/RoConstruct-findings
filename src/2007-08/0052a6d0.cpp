// roc 2007-08 0052a6d0  unit: seg_00520000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052a6d0
//
// 0052a6d0  55                   push ebp
// 0052a6d1  8baba8010000         mov ebp, dword ptr [ebx + 0x1a8]
// 0052a6d7  56                   push esi
// 0052a6d8  33f6                 xor esi, esi
// 0052a6da  397364               cmp dword ptr [ebx + 0x64], esi
// 0052a6dd  7e3e                 jle 0x52a71d
// 0052a6df  57                   push edi
// 0052a6e0  8d7d34               lea edi, [ebp + 0x34]
// 0052a6e3  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 0052a6e6  33c0                 xor eax, eax
// 0052a6e8  85f6                 test esi, esi
// 0052a6ea  7e1c                 jle 0x52a708
// 0052a6ec  8d5520               lea edx, [ebp + 0x20]
// 0052a6ef  90                   nop 
// 0052a6f0  3b0a                 cmp ecx, dword ptr [edx]
// 0052a6f2  740c                 je 0x52a700
// 0052a6f4  83c001               add eax, 1
// 0052a6f7  83c204               add edx, 4
// 0052a6fa  3bc6                 cmp eax, esi
// 0052a6fc  7cf2                 jl 0x52a6f0
// 0052a6fe  eb08                 jmp 0x52a708
// 0052a700  8b448534             mov eax, dword ptr [ebp + eax*4 + 0x34]
// 0052a704  85c0                 test eax, eax
// 0052a706  7507                 jne 0x52a70f
// 0052a708  8bc3                 mov eax, ebx
// 0052a70a  e841ffffff           call 0x52a650
// 0052a70f  8907                 mov dword ptr [edi], eax
// 0052a711  83c601               add esi, 1
// 0052a714  83c704               add edi, 4
// 0052a717  3b7364               cmp esi, dword ptr [ebx + 0x64]
// 0052a71a  7cc7                 jl 0x52a6e3
// 0052a71c  5f                   pop edi
// 0052a71d  5e                   pop esi
// 0052a71e  5d                   pop ebp
// 0052a71f  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_odither_tables)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
