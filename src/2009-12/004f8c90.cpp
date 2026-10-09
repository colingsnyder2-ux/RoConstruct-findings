// roc 2009-12 004f8c90  unit: RBX::VBrickColor::?$holder  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f8c90
//
// 004f8c90  55                   push ebp
// 004f8c91  8bec                 mov ebp, esp
// 004f8c93  6aff                 push -1
// 004f8c95  68c05b9300           push 0x935bc0
// 004f8c9a  64a100000000         mov eax, dword ptr fs:[0]
// 004f8ca0  50                   push eax
// 004f8ca1  64892500000000       mov dword ptr fs:[0], esp
// 004f8ca8  83ec08               sub esp, 8
// 004f8cab  53                   push ebx
// 004f8cac  56                   push esi
// 004f8cad  57                   push edi
// 004f8cae  8965f0               mov dword ptr [ebp - 0x10], esp
// 004f8cb1  6a18                 push 0x18
// 004f8cb3  e8a8ab2f00           call 0x7f3860
// 004f8cb8  8bf0                 mov esi, eax
// 004f8cba  83c404               add esp, 4
// 004f8cbd  8975ec               mov dword ptr [ebp - 0x14], esi
// 004f8cc0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004f8cc7  85f6                 test esi, esi
// 004f8cc9  7405                 je 0x4f8cd0
// 004f8ccb  8b4508               mov eax, dword ptr [ebp + 8]
// 004f8cce  8906                 mov dword ptr [esi], eax
// 004f8cd0  8d4604               lea eax, [esi + 4]
// 004f8cd3  85c0                 test eax, eax
// 004f8cd5  7405                 je 0x4f8cdc
// 004f8cd7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004f8cda  8908                 mov dword ptr [eax], ecx
// 004f8cdc  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004f8cdf  52                   push edx
// 004f8ce0  8d4608               lea eax, [esi + 8]
// 004f8ce3  50                   push eax
// 004f8ce4  e867d5ffff           call 0x4f6250
// 004f8ce9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004f8cec  83c408               add esp, 8
// 004f8cef  5f                   pop edi
// 004f8cf0  8bc6                 mov eax, esi
// 004f8cf2  5e                   pop esi
// 004f8cf3  64890d00000000       mov dword ptr fs:[0], ecx
// 004f8cfa  5b                   pop ebx
// 004f8cfb  8be5                 mov esp, ebp
// 004f8cfd  5d                   pop ebp
// 004f8cfe  c20c00               ret 0xc
// library rbxgs/reflection\type.cpp (function ?_Buynode@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@2@PAU342@0ABUItem@SignatureDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
