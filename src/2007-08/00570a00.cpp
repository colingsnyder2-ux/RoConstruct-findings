// roc 2007-08 00570a00  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570a00
//
// 00570a00  6aff                 push -1
// 00570a02  68ab4c7500           push 0x754cab
// 00570a07  64a100000000         mov eax, dword ptr fs:[0]
// 00570a0d  50                   push eax
// 00570a0e  64892500000000       mov dword ptr fs:[0], esp
// 00570a15  83ec0c               sub esp, 0xc
// 00570a18  56                   push esi
// 00570a19  8bf1                 mov esi, ecx
// 00570a1b  33c0                 xor eax, eax
// 00570a1d  57                   push edi
// 00570a1e  89742408             mov dword ptr [esp + 8], esi
// 00570a22  894604               mov dword ptr [esi + 4], eax
// 00570a25  894608               mov dword ptr [esi + 8], eax
// 00570a28  89460c               mov dword ptr [esi + 0xc], eax
// 00570a2b  8944241c             mov dword ptr [esp + 0x1c], eax
// 00570a2f  894614               mov dword ptr [esi + 0x14], eax
// 00570a32  894618               mov dword ptr [esi + 0x18], eax
// 00570a35  89461c               mov dword ptr [esi + 0x1c], eax
// 00570a38  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00570a3c  3bf8                 cmp edi, eax
// 00570a3e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00570a43  897e20               mov dword ptr [esi + 0x20], edi
// 00570a46  7443                 je 0x570a8b
// 00570a48  55                   push ebp
// 00570a49  e872fdffff           call 0x5707c0
// 00570a4e  8be8                 mov ebp, eax
// 00570a50  8bcd                 mov ecx, ebp
// 00570a52  896c2410             mov dword ptr [esp + 0x10], ebp
// 00570a56  e8f54c1b00           call 0x725750
// 00570a5b  c644241401           mov byte ptr [esp + 0x14], 1
// 00570a60  57                   push edi
// 00570a61  8bce                 mov ecx, esi
// 00570a63  c644242402           mov byte ptr [esp + 0x24], 2
// 00570a68  e833ffffff           call 0x5709a0
// 00570a6d  8d442428             lea eax, [esp + 0x28]
// 00570a71  50                   push eax
// 00570a72  8d4f10               lea ecx, [edi + 0x10]
// 00570a75  8974242c             mov dword ptr [esp + 0x2c], esi
// 00570a79  e8f2350400           call 0x5b4070
// 00570a7e  8bcd                 mov ecx, ebp
// 00570a80  c644242001           mov byte ptr [esp + 0x20], 1
// 00570a85  e8e64c1b00           call 0x725770
// 00570a8a  5d                   pop ebp
// 00570a8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00570a8f  5f                   pop edi
// 00570a90  8bc6                 mov eax, esi
// 00570a92  5e                   pop esi
// 00570a93  64890d00000000       mov dword ptr fs:[0], ecx
// 00570a9a  83c418               add esp, 0x18
// 00570a9d  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ??0?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAE@PAV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
