// roc 2007-08 00570b40  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570b40
//
// 00570b40  64a100000000         mov eax, dword ptr fs:[0]
// 00570b46  6aff                 push -1
// 00570b48  68224d7500           push 0x754d22
// 00570b4d  50                   push eax
// 00570b4e  64892500000000       mov dword ptr fs:[0], esp
// 00570b55  83ec10               sub esp, 0x10
// 00570b58  56                   push esi
// 00570b59  8bf1                 mov esi, ecx
// 00570b5b  6aff                 push -1
// 00570b5d  6828a17a00           push 0x7aa128
// 00570b62  c706b4707800         mov dword ptr [esi], 0x7870b4
// 00570b68  e8d3bdfbff           call 0x52c940
// 00570b6d  83c408               add esp, 8
// 00570b70  894604               mov dword ptr [esi + 4], eax
// 00570b73  33c0                 xor eax, eax
// 00570b75  89460c               mov dword ptr [esi + 0xc], eax
// 00570b78  894610               mov dword ptr [esi + 0x10], eax
// 00570b7b  894614               mov dword ptr [esi + 0x14], eax
// 00570b7e  89461c               mov dword ptr [esi + 0x1c], eax
// 00570b81  894620               mov dword ptr [esi + 0x20], eax
// 00570b84  894624               mov dword ptr [esi + 0x24], eax
// 00570b87  894628               mov dword ptr [esi + 0x28], eax
// 00570b8a  894630               mov dword ptr [esi + 0x30], eax
// 00570b8d  894634               mov dword ptr [esi + 0x34], eax
// 00570b90  894638               mov dword ptr [esi + 0x38], eax
// 00570b93  894640               mov dword ptr [esi + 0x40], eax
// 00570b96  894644               mov dword ptr [esi + 0x44], eax
// 00570b99  894648               mov dword ptr [esi + 0x48], eax
// 00570b9c  89464c               mov dword ptr [esi + 0x4c], eax
// 00570b9f  894654               mov dword ptr [esi + 0x54], eax
// 00570ba2  894658               mov dword ptr [esi + 0x58], eax
// 00570ba5  89465c               mov dword ptr [esi + 0x5c], eax
// 00570ba8  894664               mov dword ptr [esi + 0x64], eax
// 00570bab  894668               mov dword ptr [esi + 0x68], eax
// 00570bae  89466c               mov dword ptr [esi + 0x6c], eax
// 00570bb1  894670               mov dword ptr [esi + 0x70], eax
// 00570bb4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00570bb8  c70624a17a00         mov dword ptr [esi], 0x7aa124
// 00570bbe  894678               mov dword ptr [esi + 0x78], eax
// 00570bc1  89467c               mov dword ptr [esi + 0x7c], eax
// 00570bc4  898680000000         mov dword ptr [esi + 0x80], eax
// 00570bca  898684000000         mov dword ptr [esi + 0x84], eax
// 00570bd0  8bc6                 mov eax, esi
// 00570bd2  5e                   pop esi
// 00570bd3  64890d00000000       mov dword ptr fs:[0], ecx
// 00570bda  83c41c               add esp, 0x1c
// 00570bdd  c3                   ret 
// library openrbx-client/App\reflection\reflection_object.cpp (function ??0ClassDescriptor@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp
