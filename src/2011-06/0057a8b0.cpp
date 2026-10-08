// from server: 100% by auto
// roc 2011-06 0057a8b0  unit: seg_00570000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057a8b0
//
// 0057a8b0  55                   push ebp
// 0057a8b1  8baba8010000         mov ebp, dword ptr [ebx + 0x1a8]
// 0057a8b7  56                   push esi
// 0057a8b8  33f6                 xor esi, esi
// 0057a8ba  397364               cmp dword ptr [ebx + 0x64], esi
// 0057a8bd  7e3a                 jle 0x57a8f9
// 0057a8bf  57                   push edi
// 0057a8c0  8d7d34               lea edi, [ebp + 0x34]
// 0057a8c3  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 0057a8c6  33c0                 xor eax, eax
// 0057a8c8  85f6                 test esi, esi
// 0057a8ca  7e1a                 jle 0x57a8e6
// 0057a8cc  8d5520               lea edx, [ebp + 0x20]
// 0057a8cf  90                   nop 
// 0057a8d0  3b0a                 cmp ecx, dword ptr [edx]
// 0057a8d2  740a                 je 0x57a8de
// 0057a8d4  40                   inc eax
// 0057a8d5  83c204               add edx, 4
// 0057a8d8  3bc6                 cmp eax, esi
// 0057a8da  7cf4                 jl 0x57a8d0
// 0057a8dc  eb08                 jmp 0x57a8e6
// 0057a8de  8b448534             mov eax, dword ptr [ebp + eax*4 + 0x34]
// 0057a8e2  85c0                 test eax, eax
// 0057a8e4  7507                 jne 0x57a8ed
// 0057a8e6  8bc3                 mov eax, ebx
// 0057a8e8  e843ffffff           call 0x57a830
// 0057a8ed  8907                 mov dword ptr [edi], eax
// 0057a8ef  46                   inc esi
// 0057a8f0  83c704               add edi, 4
// 0057a8f3  3b7364               cmp esi, dword ptr [ebx + 0x64]
// 0057a8f6  7ccb                 jl 0x57a8c3
// 0057a8f8  5f                   pop edi
// 0057a8f9  5e                   pop esi
// 0057a8fa  5d                   pop ebp
// 0057a8fb  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_odither_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
