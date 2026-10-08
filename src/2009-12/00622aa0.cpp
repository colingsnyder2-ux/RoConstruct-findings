// roc 2009-12 00622aa0  unit: seg_00620000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00622aa0
//
// 00622aa0  55                   push ebp
// 00622aa1  8baba8010000         mov ebp, dword ptr [ebx + 0x1a8]
// 00622aa7  56                   push esi
// 00622aa8  33f6                 xor esi, esi
// 00622aaa  397364               cmp dword ptr [ebx + 0x64], esi
// 00622aad  7e3a                 jle 0x622ae9
// 00622aaf  57                   push edi
// 00622ab0  8d7d34               lea edi, [ebp + 0x34]
// 00622ab3  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 00622ab6  33c0                 xor eax, eax
// 00622ab8  85f6                 test esi, esi
// 00622aba  7e1a                 jle 0x622ad6
// 00622abc  8d5520               lea edx, [ebp + 0x20]
// 00622abf  90                   nop 
// 00622ac0  3b0a                 cmp ecx, dword ptr [edx]
// 00622ac2  740a                 je 0x622ace
// 00622ac4  40                   inc eax
// 00622ac5  83c204               add edx, 4
// 00622ac8  3bc6                 cmp eax, esi
// 00622aca  7cf4                 jl 0x622ac0
// 00622acc  eb08                 jmp 0x622ad6
// 00622ace  8b448534             mov eax, dword ptr [ebp + eax*4 + 0x34]
// 00622ad2  85c0                 test eax, eax
// 00622ad4  7507                 jne 0x622add
// 00622ad6  8bc3                 mov eax, ebx
// 00622ad8  e843ffffff           call 0x622a20
// 00622add  8907                 mov dword ptr [edi], eax
// 00622adf  46                   inc esi
// 00622ae0  83c704               add edi, 4
// 00622ae3  3b7364               cmp esi, dword ptr [ebx + 0x64]
// 00622ae6  7ccb                 jl 0x622ab3
// 00622ae8  5f                   pop edi
// 00622ae9  5e                   pop esi
// 00622aea  5d                   pop ebp
// 00622aeb  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_odither_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
