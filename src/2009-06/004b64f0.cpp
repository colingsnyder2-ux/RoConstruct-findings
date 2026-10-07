// roc 2009-06 004b64f0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b64f0
//
// 004b64f0  55                   push ebp
// 004b64f1  8bec                 mov ebp, esp
// 004b64f3  6aff                 push -1
// 004b64f5  68608c8500           push 0x858c60
// 004b64fa  64a100000000         mov eax, dword ptr fs:[0]
// 004b6500  50                   push eax
// 004b6501  64892500000000       mov dword ptr fs:[0], esp
// 004b6508  83ec08               sub esp, 8
// 004b650b  53                   push ebx
// 004b650c  56                   push esi
// 004b650d  57                   push edi
// 004b650e  8965f0               mov dword ptr [ebp - 0x10], esp
// 004b6511  6a18                 push 0x18
// 004b6513  e820252600           call 0x718a38
// 004b6518  8bf0                 mov esi, eax
// 004b651a  83c404               add esp, 4
// 004b651d  8975ec               mov dword ptr [ebp - 0x14], esi
// 004b6520  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b6527  85f6                 test esi, esi
// 004b6529  7405                 je 0x4b6530
// 004b652b  8b4508               mov eax, dword ptr [ebp + 8]
// 004b652e  8906                 mov dword ptr [esi], eax
// 004b6530  8d4604               lea eax, [esi + 4]
// 004b6533  85c0                 test eax, eax
// 004b6535  7405                 je 0x4b653c
// 004b6537  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004b653a  8908                 mov dword ptr [eax], ecx
// 004b653c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004b653f  52                   push edx
// 004b6540  8d4608               lea eax, [esi + 8]
// 004b6543  50                   push eax
// 004b6544  e847deffff           call 0x4b4390
// 004b6549  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b654c  83c408               add esp, 8
// 004b654f  5f                   pop edi
// 004b6550  8bc6                 mov eax, esi
// 004b6552  5e                   pop esi
// 004b6553  64890d00000000       mov dword ptr fs:[0], ecx
// 004b655a  5b                   pop ebx
// 004b655b  8be5                 mov esp, ebp
// 004b655d  5d                   pop ebp
// 004b655e  c20c00               ret 0xc
// library rbxgs/reflection\type.cpp (function ?_Buynode@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@2@PAU342@0ABUItem@SignatureDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
