// from server: 100% by auto
// roc 2009-06 005a0a70  unit: seg_005a0000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a0a70
//
// 005a0a70  55                   push ebp
// 005a0a71  8baba8010000         mov ebp, dword ptr [ebx + 0x1a8]
// 005a0a77  56                   push esi
// 005a0a78  33f6                 xor esi, esi
// 005a0a7a  397364               cmp dword ptr [ebx + 0x64], esi
// 005a0a7d  7e3a                 jle 0x5a0ab9
// 005a0a7f  57                   push edi
// 005a0a80  8d7d34               lea edi, [ebp + 0x34]
// 005a0a83  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 005a0a86  33c0                 xor eax, eax
// 005a0a88  85f6                 test esi, esi
// 005a0a8a  7e1a                 jle 0x5a0aa6
// 005a0a8c  8d5520               lea edx, [ebp + 0x20]
// 005a0a8f  90                   nop 
// 005a0a90  3b0a                 cmp ecx, dword ptr [edx]
// 005a0a92  740a                 je 0x5a0a9e
// 005a0a94  40                   inc eax
// 005a0a95  83c204               add edx, 4
// 005a0a98  3bc6                 cmp eax, esi
// 005a0a9a  7cf4                 jl 0x5a0a90
// 005a0a9c  eb08                 jmp 0x5a0aa6
// 005a0a9e  8b448534             mov eax, dword ptr [ebp + eax*4 + 0x34]
// 005a0aa2  85c0                 test eax, eax
// 005a0aa4  7507                 jne 0x5a0aad
// 005a0aa6  8bc3                 mov eax, ebx
// 005a0aa8  e843ffffff           call 0x5a09f0
// 005a0aad  8907                 mov dword ptr [edi], eax
// 005a0aaf  46                   inc esi
// 005a0ab0  83c704               add edi, 4
// 005a0ab3  3b7364               cmp esi, dword ptr [ebx + 0x64]
// 005a0ab6  7ccb                 jl 0x5a0a83
// 005a0ab8  5f                   pop edi
// 005a0ab9  5e                   pop esi
// 005a0aba  5d                   pop ebp
// 005a0abb  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_odither_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
