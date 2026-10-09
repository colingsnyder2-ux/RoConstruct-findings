// roc 2008-06 0056bd90  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056bd90
//
// 0056bd90  6aff                 push -1
// 0056bd92  6868e37c00           push 0x7ce368
// 0056bd97  64a100000000         mov eax, dword ptr fs:[0]
// 0056bd9d  50                   push eax
// 0056bd9e  64892500000000       mov dword ptr fs:[0], esp
// 0056bda5  51                   push ecx
// 0056bda6  56                   push esi
// 0056bda7  57                   push edi
// 0056bda8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0056bdac  8bf1                 mov esi, ecx
// 0056bdae  6aff                 push -1
// 0056bdb0  57                   push edi
// 0056bdb1  89742410             mov dword ptr [esp + 0x10], esi
// 0056bdb5  c70630b78000         mov dword ptr [esi], 0x80b730
// 0056bdbb  e8d081feff           call 0x553f90
// 0056bdc0  894604               mov dword ptr [esi + 4], eax
// 0056bdc3  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056bdc7  57                   push edi
// 0056bdc8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0056bdd0  c70644148200         mov dword ptr [esi], 0x821444
// 0056bdd6  894608               mov dword ptr [esi + 8], eax
// 0056bdd9  e8b284feff           call 0x554290
// 0056bdde  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056bde2  83c40c               add esp, 0xc
// 0056bde5  89460c               mov dword ptr [esi + 0xc], eax
// 0056bde8  5f                   pop edi
// 0056bde9  8bc6                 mov eax, esi
// 0056bdeb  5e                   pop esi
// 0056bdec  64890d00000000       mov dword ptr fs:[0], ecx
// 0056bdf3  83c410               add esp, 0x10
// 0056bdf6  c20800               ret 8
// library openrbx-client/App\reflection\reflection_property.cpp (function ??0Type@Reflection@RBX@@IAE@PBDABVtype_info@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_property.cpp
