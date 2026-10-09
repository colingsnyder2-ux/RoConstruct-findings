// roc 2008-06 0056b480  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b480
//
// 0056b480  6aff                 push -1
// 0056b482  6868e37c00           push 0x7ce368
// 0056b487  64a100000000         mov eax, dword ptr fs:[0]
// 0056b48d  50                   push eax
// 0056b48e  64892500000000       mov dword ptr fs:[0], esp
// 0056b495  51                   push ecx
// 0056b496  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056b49a  56                   push esi
// 0056b49b  8bf1                 mov esi, ecx
// 0056b49d  6aff                 push -1
// 0056b49f  50                   push eax
// 0056b4a0  8974240c             mov dword ptr [esp + 0xc], esi
// 0056b4a4  c70630b78000         mov dword ptr [esi], 0x80b730
// 0056b4aa  e8e18afeff           call 0x553f90
// 0056b4af  894604               mov dword ptr [esi + 4], eax
// 0056b4b2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056b4b6  6aff                 push -1
// 0056b4b8  51                   push ecx
// 0056b4b9  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0056b4c1  e8ca8afeff           call 0x553f90
// 0056b4c6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0056b4ca  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056b4ce  894608               mov dword ptr [esi + 8], eax
// 0056b4d1  83c410               add esp, 0x10
// 0056b4d4  89560c               mov dword ptr [esi + 0xc], edx
// 0056b4d7  8bc6                 mov eax, esi
// 0056b4d9  5e                   pop esi
// 0056b4da  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b4e1  83c410               add esp, 0x10
// 0056b4e4  c20c00               ret 0xc
// library openrbx-client/App\reflection\reflection_function.cpp (function ??0MemberDescriptor@Reflection@RBX@@IAE@ABVClassDescriptor@12@PBD1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_function.cpp
