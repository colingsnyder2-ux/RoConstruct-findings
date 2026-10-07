// roc 2008-06 00417f00  unit: VCLuaFunction::?$CComObject  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417f00
//
// 00417f00  55                   push ebp
// 00417f01  8bec                 mov ebp, esp
// 00417f03  6aff                 push -1
// 00417f05  6810dc7b00           push 0x7bdc10
// 00417f0a  64a100000000         mov eax, dword ptr fs:[0]
// 00417f10  50                   push eax
// 00417f11  64892500000000       mov dword ptr fs:[0], esp
// 00417f18  83ec08               sub esp, 8
// 00417f1b  53                   push ebx
// 00417f1c  56                   push esi
// 00417f1d  57                   push edi
// 00417f1e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00417f21  6a18                 push 0x18
// 00417f23  e8f8892800           call 0x6a0920
// 00417f28  8bf0                 mov esi, eax
// 00417f2a  83c404               add esp, 4
// 00417f2d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00417f30  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00417f37  85f6                 test esi, esi
// 00417f39  7405                 je 0x417f40
// 00417f3b  8b4508               mov eax, dword ptr [ebp + 8]
// 00417f3e  8906                 mov dword ptr [esi], eax
// 00417f40  8d4604               lea eax, [esi + 4]
// 00417f43  85c0                 test eax, eax
// 00417f45  7405                 je 0x417f4c
// 00417f47  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00417f4a  8908                 mov dword ptr [eax], ecx
// 00417f4c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00417f4f  52                   push edx
// 00417f50  8d4608               lea eax, [esi + 8]
// 00417f53  50                   push eax
// 00417f54  e857f2ffff           call 0x4171b0
// 00417f59  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00417f5c  83c408               add esp, 8
// 00417f5f  5f                   pop edi
// 00417f60  8bc6                 mov eax, esi
// 00417f62  5e                   pop esi
// 00417f63  64890d00000000       mov dword ptr fs:[0], ecx
// 00417f6a  5b                   pop ebx
// 00417f6b  8be5                 mov esp, ebp
// 00417f6d  5d                   pop ebp
// 00417f6e  c20c00               ret 0xc
// library rbxgs/reflection\type.cpp (function ?_Buynode@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@2@PAU342@0ABUItem@SignatureDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
