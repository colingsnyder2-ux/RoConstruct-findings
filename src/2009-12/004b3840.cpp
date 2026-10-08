// roc 2009-12 004b3840  unit: Ogre::VGpuProgramParameters::?$SharedPtr  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004b3840
//
// 004b3840  83ec08               sub esp, 8
// 004b3843  8b542414             mov edx, dword ptr [esp + 0x14]
// 004b3847  53                   push ebx
// 004b3848  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004b384c  56                   push esi
// 004b384d  8b742418             mov esi, dword ptr [esp + 0x18]
// 004b3851  57                   push edi
// 004b3852  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004b3856  32c0                 xor al, al
// 004b3858  88442410             mov byte ptr [esp + 0x10], al
// 004b385c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b3860  8844240c             mov byte ptr [esp + 0xc], al
// 004b3864  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b3868  50                   push eax
// 004b3869  51                   push ecx
// 004b386a  52                   push edx
// 004b386b  57                   push edi
// 004b386c  56                   push esi
// 004b386d  53                   push ebx
// 004b386e  e83dfbffff           call 0x4b33b0
// 004b3873  2bf3                 sub esi, ebx
// 004b3875  b879787878           mov eax, 0x78787879
// 004b387a  f7ee                 imul esi
// 004b387c  c1fa05               sar edx, 5
// 004b387f  8bc2                 mov eax, edx
// 004b3881  c1e81f               shr eax, 0x1f
// 004b3884  03c2                 add eax, edx
// 004b3886  8bc8                 mov ecx, eax
// 004b3888  c1e104               shl ecx, 4
// 004b388b  83c418               add esp, 0x18
// 004b388e  03c8                 add ecx, eax
// 004b3890  8bc7                 mov eax, edi
// 004b3892  03c9                 add ecx, ecx
// 004b3894  5f                   pop edi
// 004b3895  03c9                 add ecx, ecx
// 004b3897  5e                   pop esi
// 004b3898  2bc1                 sub eax, ecx
// 004b389a  5b                   pop ebx
// 004b389b  83c408               add esp, 8
// 004b389e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Copy_backward_opt@PAV?$basic_option@D@program_options@boost@@PAV123@@std@@YAPAV?$basic_option@D@program_options@boost@@PAV123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
