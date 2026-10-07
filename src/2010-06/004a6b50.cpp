// roc 2010-06 004a6b50  unit: RBX::Reflection::VValue::$$CBV?$vector::V?$shared_ptr::?$holder  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a6b50
//
// 004a6b50  55                   push ebp
// 004a6b51  8bec                 mov ebp, esp
// 004a6b53  6aff                 push -1
// 004a6b55  68a0839800           push 0x9883a0
// 004a6b5a  64a100000000         mov eax, dword ptr fs:[0]
// 004a6b60  50                   push eax
// 004a6b61  64892500000000       mov dword ptr fs:[0], esp
// 004a6b68  83ec08               sub esp, 8
// 004a6b6b  53                   push ebx
// 004a6b6c  56                   push esi
// 004a6b6d  57                   push edi
// 004a6b6e  8965f0               mov dword ptr [ebp - 0x10], esp
// 004a6b71  6a18                 push 0x18
// 004a6b73  e8280e3000           call 0x7a79a0
// 004a6b78  8bf0                 mov esi, eax
// 004a6b7a  83c404               add esp, 4
// 004a6b7d  8975ec               mov dword ptr [ebp - 0x14], esi
// 004a6b80  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004a6b87  85f6                 test esi, esi
// 004a6b89  7405                 je 0x4a6b90
// 004a6b8b  8b4508               mov eax, dword ptr [ebp + 8]
// 004a6b8e  8906                 mov dword ptr [esi], eax
// 004a6b90  8d4604               lea eax, [esi + 4]
// 004a6b93  85c0                 test eax, eax
// 004a6b95  7405                 je 0x4a6b9c
// 004a6b97  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004a6b9a  8908                 mov dword ptr [eax], ecx
// 004a6b9c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004a6b9f  52                   push edx
// 004a6ba0  8d4608               lea eax, [esi + 8]
// 004a6ba3  50                   push eax
// 004a6ba4  e8f7d7ffff           call 0x4a43a0
// 004a6ba9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004a6bac  83c408               add esp, 8
// 004a6baf  5f                   pop edi
// 004a6bb0  8bc6                 mov eax, esi
// 004a6bb2  5e                   pop esi
// 004a6bb3  64890d00000000       mov dword ptr fs:[0], ecx
// 004a6bba  5b                   pop ebx
// 004a6bbb  8be5                 mov esp, ebp
// 004a6bbd  5d                   pop ebp
// 004a6bbe  c20c00               ret 0xc
// library rbxgs/reflection\type.cpp (function ?_Buynode@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@2@PAU342@0ABUItem@SignatureDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
