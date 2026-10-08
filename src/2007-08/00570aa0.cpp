// roc 2007-08 00570aa0  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570aa0
//
// 00570aa0  6aff                 push -1
// 00570aa2  68ab4c7500           push 0x754cab
// 00570aa7  64a100000000         mov eax, dword ptr fs:[0]
// 00570aad  50                   push eax
// 00570aae  64892500000000       mov dword ptr fs:[0], esp
// 00570ab5  83ec0c               sub esp, 0xc
// 00570ab8  56                   push esi
// 00570ab9  8bf1                 mov esi, ecx
// 00570abb  33c0                 xor eax, eax
// 00570abd  57                   push edi
// 00570abe  89742408             mov dword ptr [esp + 8], esi
// 00570ac2  894604               mov dword ptr [esi + 4], eax
// 00570ac5  894608               mov dword ptr [esi + 8], eax
// 00570ac8  89460c               mov dword ptr [esi + 0xc], eax
// 00570acb  8944241c             mov dword ptr [esp + 0x1c], eax
// 00570acf  894614               mov dword ptr [esi + 0x14], eax
// 00570ad2  894618               mov dword ptr [esi + 0x18], eax
// 00570ad5  89461c               mov dword ptr [esi + 0x1c], eax
// 00570ad8  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00570adc  3bf8                 cmp edi, eax
// 00570ade  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00570ae3  897e20               mov dword ptr [esi + 0x20], edi
// 00570ae6  7443                 je 0x570b2b
// 00570ae8  55                   push ebp
// 00570ae9  e8d2fcffff           call 0x5707c0
// 00570aee  8be8                 mov ebp, eax
// 00570af0  8bcd                 mov ecx, ebp
// 00570af2  896c2410             mov dword ptr [esp + 0x10], ebp
// 00570af6  e8554c1b00           call 0x725750
// 00570afb  c644241401           mov byte ptr [esp + 0x14], 1
// 00570b00  57                   push edi
// 00570b01  8bce                 mov ecx, esi
// 00570b03  c644242402           mov byte ptr [esp + 0x24], 2
// 00570b08  e833feffff           call 0x570940
// 00570b0d  8d442428             lea eax, [esp + 0x28]
// 00570b11  50                   push eax
// 00570b12  8d4f10               lea ecx, [edi + 0x10]
// 00570b15  8974242c             mov dword ptr [esp + 0x2c], esi
// 00570b19  e852350400           call 0x5b4070
// 00570b1e  8bcd                 mov ecx, ebp
// 00570b20  c644242001           mov byte ptr [esp + 0x20], 1
// 00570b25  e8464c1b00           call 0x725770
// 00570b2a  5d                   pop ebp
// 00570b2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00570b2f  5f                   pop edi
// 00570b30  8bc6                 mov eax, esi
// 00570b32  5e                   pop esi
// 00570b33  64890d00000000       mov dword ptr fs:[0], ecx
// 00570b3a  83c418               add esp, 0x18
// 00570b3d  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ??0?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAE@PAV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
