// from server: 100% by auto
// roc 2010-06 0074fb20  unit: RBX::Humanoid  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0074fb20
//
// 0074fb20  83ec08               sub esp, 8
// 0074fb23  8b542414             mov edx, dword ptr [esp + 0x14]
// 0074fb27  53                   push ebx
// 0074fb28  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0074fb2c  56                   push esi
// 0074fb2d  8b742418             mov esi, dword ptr [esp + 0x18]
// 0074fb31  57                   push edi
// 0074fb32  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0074fb36  32c0                 xor al, al
// 0074fb38  88442410             mov byte ptr [esp + 0x10], al
// 0074fb3c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0074fb40  8844240c             mov byte ptr [esp + 0xc], al
// 0074fb44  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0074fb48  50                   push eax
// 0074fb49  51                   push ecx
// 0074fb4a  52                   push edx
// 0074fb4b  57                   push edi
// 0074fb4c  56                   push esi
// 0074fb4d  53                   push ebx
// 0074fb4e  e84dfeffff           call 0x74f9a0
// 0074fb53  2bf3                 sub esi, ebx
// 0074fb55  b893244992           mov eax, 0x92492493
// 0074fb5a  f7ee                 imul esi
// 0074fb5c  03d6                 add edx, esi
// 0074fb5e  c1fa04               sar edx, 4
// 0074fb61  8bc2                 mov eax, edx
// 0074fb63  c1e81f               shr eax, 0x1f
// 0074fb66  03c2                 add eax, edx
// 0074fb68  83c418               add esp, 0x18
// 0074fb6b  8d0cc500000000       lea ecx, [eax*8]
// 0074fb72  2bc8                 sub ecx, eax
// 0074fb74  8d048f               lea eax, [edi + ecx*4]
// 0074fb77  5f                   pop edi
// 0074fb78  5e                   pop esi
// 0074fb79  5b                   pop ebx
// 0074fb7a  83c408               add esp, 8
// 0074fb7d  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Copy_opt@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV12@@std@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAV10@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
