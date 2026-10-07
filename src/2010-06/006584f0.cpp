// roc 2010-06 006584f0  unit: RBX::VKeyframeSequence::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006584f0
//
// 006584f0  83ec08               sub esp, 8
// 006584f3  8b542414             mov edx, dword ptr [esp + 0x14]
// 006584f7  53                   push ebx
// 006584f8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006584fc  56                   push esi
// 006584fd  8b742418             mov esi, dword ptr [esp + 0x18]
// 00658501  57                   push edi
// 00658502  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00658506  32c0                 xor al, al
// 00658508  88442410             mov byte ptr [esp + 0x10], al
// 0065850c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00658510  8844240c             mov byte ptr [esp + 0xc], al
// 00658514  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00658518  50                   push eax
// 00658519  51                   push ecx
// 0065851a  52                   push edx
// 0065851b  57                   push edi
// 0065851c  56                   push esi
// 0065851d  53                   push ebx
// 0065851e  e83dfcffff           call 0x658160
// 00658523  2bf3                 sub esi, ebx
// 00658525  b893244992           mov eax, 0x92492493
// 0065852a  f7ee                 imul esi
// 0065852c  03d6                 add edx, esi
// 0065852e  c1fa04               sar edx, 4
// 00658531  8bc2                 mov eax, edx
// 00658533  c1e81f               shr eax, 0x1f
// 00658536  03c2                 add eax, edx
// 00658538  83c418               add esp, 0x18
// 0065853b  8d0cc500000000       lea ecx, [eax*8]
// 00658542  2bc8                 sub ecx, eax
// 00658544  8d048f               lea eax, [edi + ecx*4]
// 00658547  5f                   pop edi
// 00658548  5e                   pop esi
// 00658549  5b                   pop ebx
// 0065854a  83c408               add esp, 8
// 0065854d  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Copy_opt@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV12@@std@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAV10@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
