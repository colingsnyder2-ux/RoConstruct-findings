// roc 2009-12 007b3180  unit: RBX::Assembly  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b3180
//
// 007b3180  83ec08               sub esp, 8
// 007b3183  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b3187  53                   push ebx
// 007b3188  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007b318c  56                   push esi
// 007b318d  8b742418             mov esi, dword ptr [esp + 0x18]
// 007b3191  57                   push edi
// 007b3192  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007b3196  32c0                 xor al, al
// 007b3198  88442410             mov byte ptr [esp + 0x10], al
// 007b319c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b31a0  8844240c             mov byte ptr [esp + 0xc], al
// 007b31a4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007b31a8  50                   push eax
// 007b31a9  51                   push ecx
// 007b31aa  52                   push edx
// 007b31ab  57                   push edi
// 007b31ac  56                   push esi
// 007b31ad  53                   push ebx
// 007b31ae  e84dfeffff           call 0x7b3000
// 007b31b3  2bf3                 sub esi, ebx
// 007b31b5  b893244992           mov eax, 0x92492493
// 007b31ba  f7ee                 imul esi
// 007b31bc  03d6                 add edx, esi
// 007b31be  c1fa04               sar edx, 4
// 007b31c1  8bc2                 mov eax, edx
// 007b31c3  c1e81f               shr eax, 0x1f
// 007b31c6  03c2                 add eax, edx
// 007b31c8  83c418               add esp, 0x18
// 007b31cb  8d0cc500000000       lea ecx, [eax*8]
// 007b31d2  2bc8                 sub ecx, eax
// 007b31d4  8d048f               lea eax, [edi + ecx*4]
// 007b31d7  5f                   pop edi
// 007b31d8  5e                   pop esi
// 007b31d9  5b                   pop ebx
// 007b31da  83c408               add esp, 8
// 007b31dd  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Copy_opt@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV12@@std@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAV10@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
