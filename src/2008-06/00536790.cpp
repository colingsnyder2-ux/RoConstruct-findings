// from server: 100% by auto
// roc 2008-06 00536790  unit: seg_00530000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536790
//
// 00536790  55                   push ebp
// 00536791  8baba8010000         mov ebp, dword ptr [ebx + 0x1a8]
// 00536797  56                   push esi
// 00536798  33f6                 xor esi, esi
// 0053679a  397364               cmp dword ptr [ebx + 0x64], esi
// 0053679d  7e3a                 jle 0x5367d9
// 0053679f  57                   push edi
// 005367a0  8d7d34               lea edi, [ebp + 0x34]
// 005367a3  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 005367a6  33c0                 xor eax, eax
// 005367a8  85f6                 test esi, esi
// 005367aa  7e1a                 jle 0x5367c6
// 005367ac  8d5520               lea edx, [ebp + 0x20]
// 005367af  90                   nop 
// 005367b0  3b0a                 cmp ecx, dword ptr [edx]
// 005367b2  740a                 je 0x5367be
// 005367b4  40                   inc eax
// 005367b5  83c204               add edx, 4
// 005367b8  3bc6                 cmp eax, esi
// 005367ba  7cf4                 jl 0x5367b0
// 005367bc  eb08                 jmp 0x5367c6
// 005367be  8b448534             mov eax, dword ptr [ebp + eax*4 + 0x34]
// 005367c2  85c0                 test eax, eax
// 005367c4  7507                 jne 0x5367cd
// 005367c6  8bc3                 mov eax, ebx
// 005367c8  e843ffffff           call 0x536710
// 005367cd  8907                 mov dword ptr [edi], eax
// 005367cf  46                   inc esi
// 005367d0  83c704               add edi, 4
// 005367d3  3b7364               cmp esi, dword ptr [ebx + 0x64]
// 005367d6  7ccb                 jl 0x5367a3
// 005367d8  5f                   pop edi
// 005367d9  5e                   pop esi
// 005367da  5d                   pop ebp
// 005367db  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_odither_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
