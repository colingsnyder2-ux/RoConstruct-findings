// roc 2010-06 008d62a0  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d62a0
//
// 008d62a0  83ec08               sub esp, 8
// 008d62a3  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d62a7  53                   push ebx
// 008d62a8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008d62ac  56                   push esi
// 008d62ad  8b742418             mov esi, dword ptr [esp + 0x18]
// 008d62b1  57                   push edi
// 008d62b2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008d62b6  32c0                 xor al, al
// 008d62b8  88442410             mov byte ptr [esp + 0x10], al
// 008d62bc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d62c0  8844240c             mov byte ptr [esp + 0xc], al
// 008d62c4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d62c8  50                   push eax
// 008d62c9  51                   push ecx
// 008d62ca  52                   push edx
// 008d62cb  57                   push edi
// 008d62cc  56                   push esi
// 008d62cd  53                   push ebx
// 008d62ce  e8dd78ecff           call 0x79dbb0
// 008d62d3  2bf3                 sub esi, ebx
// 008d62d5  c1fe03               sar esi, 3
// 008d62d8  03f6                 add esi, esi
// 008d62da  83c418               add esp, 0x18
// 008d62dd  03f6                 add esi, esi
// 008d62df  03f6                 add esi, esi
// 008d62e1  8bc7                 mov eax, edi
// 008d62e3  5f                   pop edi
// 008d62e4  2bc6                 sub eax, esi
// 008d62e6  5e                   pop esi
// 008d62e7  5b                   pop ebx
// 008d62e8  83c408               add esp, 8
// 008d62eb  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
