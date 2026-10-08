// from server: 100% by auto
// roc 2010-06 007639d0  unit: RBX::Assembly  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007639d0
//
// 007639d0  83ec08               sub esp, 8
// 007639d3  8b542414             mov edx, dword ptr [esp + 0x14]
// 007639d7  53                   push ebx
// 007639d8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007639dc  56                   push esi
// 007639dd  8b742418             mov esi, dword ptr [esp + 0x18]
// 007639e1  57                   push edi
// 007639e2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007639e6  32c0                 xor al, al
// 007639e8  88442410             mov byte ptr [esp + 0x10], al
// 007639ec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007639f0  8844240c             mov byte ptr [esp + 0xc], al
// 007639f4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007639f8  50                   push eax
// 007639f9  51                   push ecx
// 007639fa  52                   push edx
// 007639fb  57                   push edi
// 007639fc  56                   push esi
// 007639fd  53                   push ebx
// 007639fe  e8cd36edff           call 0x6370d0
// 00763a03  2bf3                 sub esi, ebx
// 00763a05  c1fe03               sar esi, 3
// 00763a08  03f6                 add esi, esi
// 00763a0a  83c418               add esp, 0x18
// 00763a0d  03f6                 add esi, esi
// 00763a0f  03f6                 add esi, esi
// 00763a11  8bc7                 mov eax, edi
// 00763a13  5f                   pop edi
// 00763a14  2bc6                 sub eax, esi
// 00763a16  5e                   pop esi
// 00763a17  5b                   pop ebx
// 00763a18  83c408               add esp, 8
// 00763a1b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
