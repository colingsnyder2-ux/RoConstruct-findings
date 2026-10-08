// from server: 100% by auto
// roc 2009-06 005e2c70  unit: boost::Vthread::?$sp_counted_impl_p  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e2c70
//
// 005e2c70  83ec08               sub esp, 8
// 005e2c73  8b542414             mov edx, dword ptr [esp + 0x14]
// 005e2c77  53                   push ebx
// 005e2c78  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e2c7c  56                   push esi
// 005e2c7d  8b742418             mov esi, dword ptr [esp + 0x18]
// 005e2c81  57                   push edi
// 005e2c82  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005e2c86  32c0                 xor al, al
// 005e2c88  88442410             mov byte ptr [esp + 0x10], al
// 005e2c8c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e2c90  8844240c             mov byte ptr [esp + 0xc], al
// 005e2c94  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e2c98  50                   push eax
// 005e2c99  51                   push ecx
// 005e2c9a  52                   push edx
// 005e2c9b  57                   push edi
// 005e2c9c  56                   push esi
// 005e2c9d  53                   push ebx
// 005e2c9e  e88df6ffff           call 0x5e2330
// 005e2ca3  2bf3                 sub esi, ebx
// 005e2ca5  c1fe03               sar esi, 3
// 005e2ca8  03f6                 add esi, esi
// 005e2caa  83c418               add esp, 0x18
// 005e2cad  03f6                 add esi, esi
// 005e2caf  03f6                 add esi, esi
// 005e2cb1  8bc7                 mov eax, edi
// 005e2cb3  5f                   pop edi
// 005e2cb4  2bc6                 sub eax, esi
// 005e2cb6  5e                   pop esi
// 005e2cb7  5b                   pop ebx
// 005e2cb8  83c408               add esp, 8
// 005e2cbb  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
