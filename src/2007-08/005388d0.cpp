// roc 2007-08 005388d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005388d0
//
// 005388d0  83ec08               sub esp, 8
// 005388d3  8b542414             mov edx, dword ptr [esp + 0x14]
// 005388d7  53                   push ebx
// 005388d8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005388dc  56                   push esi
// 005388dd  8b742418             mov esi, dword ptr [esp + 0x18]
// 005388e1  57                   push edi
// 005388e2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005388e6  32c0                 xor al, al
// 005388e8  88442410             mov byte ptr [esp + 0x10], al
// 005388ec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005388f0  8844240c             mov byte ptr [esp + 0xc], al
// 005388f4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005388f8  50                   push eax
// 005388f9  51                   push ecx
// 005388fa  52                   push edx
// 005388fb  57                   push edi
// 005388fc  56                   push esi
// 005388fd  53                   push ebx
// 005388fe  e89dd6ffff           call 0x535fa0
// 00538903  2bf3                 sub esi, ebx
// 00538905  c1fe03               sar esi, 3
// 00538908  03f6                 add esi, esi
// 0053890a  83c418               add esp, 0x18
// 0053890d  03f6                 add esi, esi
// 0053890f  03f6                 add esi, esi
// 00538911  8bc7                 mov eax, edi
// 00538913  5f                   pop edi
// 00538914  2bc6                 sub eax, esi
// 00538916  5e                   pop esi
// 00538917  5b                   pop ebx
// 00538918  83c408               add esp, 8
// 0053891b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
