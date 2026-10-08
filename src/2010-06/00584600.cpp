// from server: 100% by auto
// roc 2010-06 00584600  unit: seg_00580000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00584600
//
// 00584600  55                   push ebp
// 00584601  8baba8010000         mov ebp, dword ptr [ebx + 0x1a8]
// 00584607  56                   push esi
// 00584608  33f6                 xor esi, esi
// 0058460a  397364               cmp dword ptr [ebx + 0x64], esi
// 0058460d  7e3a                 jle 0x584649
// 0058460f  57                   push edi
// 00584610  8d7d34               lea edi, [ebp + 0x34]
// 00584613  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 00584616  33c0                 xor eax, eax
// 00584618  85f6                 test esi, esi
// 0058461a  7e1a                 jle 0x584636
// 0058461c  8d5520               lea edx, [ebp + 0x20]
// 0058461f  90                   nop 
// 00584620  3b0a                 cmp ecx, dword ptr [edx]
// 00584622  740a                 je 0x58462e
// 00584624  40                   inc eax
// 00584625  83c204               add edx, 4
// 00584628  3bc6                 cmp eax, esi
// 0058462a  7cf4                 jl 0x584620
// 0058462c  eb08                 jmp 0x584636
// 0058462e  8b448534             mov eax, dword ptr [ebp + eax*4 + 0x34]
// 00584632  85c0                 test eax, eax
// 00584634  7507                 jne 0x58463d
// 00584636  8bc3                 mov eax, ebx
// 00584638  e843ffffff           call 0x584580
// 0058463d  8907                 mov dword ptr [edi], eax
// 0058463f  46                   inc esi
// 00584640  83c704               add edi, 4
// 00584643  3b7364               cmp esi, dword ptr [ebx + 0x64]
// 00584646  7ccb                 jl 0x584613
// 00584648  5f                   pop edi
// 00584649  5e                   pop esi
// 0058464a  5d                   pop ebp
// 0058464b  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_odither_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
