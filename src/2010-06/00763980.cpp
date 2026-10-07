// roc 2010-06 00763980  unit: RBX::Assembly  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00763980
//
// 00763980  83ec08               sub esp, 8
// 00763983  8b542414             mov edx, dword ptr [esp + 0x14]
// 00763987  53                   push ebx
// 00763988  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0076398c  56                   push esi
// 0076398d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00763991  57                   push edi
// 00763992  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00763996  32c0                 xor al, al
// 00763998  88442410             mov byte ptr [esp + 0x10], al
// 0076399c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007639a0  8844240c             mov byte ptr [esp + 0xc], al
// 007639a4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007639a8  50                   push eax
// 007639a9  51                   push ecx
// 007639aa  52                   push edx
// 007639ab  57                   push edi
// 007639ac  56                   push esi
// 007639ad  53                   push ebx
// 007639ae  e83dfeffff           call 0x7637f0
// 007639b3  83c418               add esp, 0x18
// 007639b6  2bf3                 sub esi, ebx
// 007639b8  c1fe03               sar esi, 3
// 007639bb  8d04f7               lea eax, [edi + esi*8]
// 007639be  5f                   pop edi
// 007639bf  5e                   pop esi
// 007639c0  5b                   pop ebx
// 007639c1  83c408               add esp, 8
// 007639c4  c3                   ret 
// library templates-boost-1_34_1/vector_sp.cpp (function ??$_Copy_opt@PAV?$shared_ptr@UT@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@UT@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
