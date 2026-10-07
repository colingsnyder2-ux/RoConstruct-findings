// roc 2011-06 004a7f80  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a7f80
//
// 004a7f80  55                   push ebp
// 004a7f81  8bec                 mov ebp, esp
// 004a7f83  6aff                 push -1
// 004a7f85  68007f9d00           push 0x9d7f00
// 004a7f8a  64a100000000         mov eax, dword ptr fs:[0]
// 004a7f90  50                   push eax
// 004a7f91  64892500000000       mov dword ptr fs:[0], esp
// 004a7f98  83ec08               sub esp, 8
// 004a7f9b  53                   push ebx
// 004a7f9c  56                   push esi
// 004a7f9d  57                   push edi
// 004a7f9e  8965f0               mov dword ptr [ebp - 0x10], esp
// 004a7fa1  6a18                 push 0x18
// 004a7fa3  e8b6203600           call 0x80a05e
// 004a7fa8  8bf0                 mov esi, eax
// 004a7faa  83c404               add esp, 4
// 004a7fad  8975ec               mov dword ptr [ebp - 0x14], esi
// 004a7fb0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004a7fb7  85f6                 test esi, esi
// 004a7fb9  7405                 je 0x4a7fc0
// 004a7fbb  8b4508               mov eax, dword ptr [ebp + 8]
// 004a7fbe  8906                 mov dword ptr [esi], eax
// 004a7fc0  8d4604               lea eax, [esi + 4]
// 004a7fc3  85c0                 test eax, eax
// 004a7fc5  7405                 je 0x4a7fcc
// 004a7fc7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004a7fca  8908                 mov dword ptr [eax], ecx
// 004a7fcc  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004a7fcf  52                   push edx
// 004a7fd0  8d4608               lea eax, [esi + 8]
// 004a7fd3  50                   push eax
// 004a7fd4  e8a7d4ffff           call 0x4a5480
// 004a7fd9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004a7fdc  83c408               add esp, 8
// 004a7fdf  5f                   pop edi
// 004a7fe0  8bc6                 mov eax, esi
// 004a7fe2  5e                   pop esi
// 004a7fe3  64890d00000000       mov dword ptr fs:[0], ecx
// 004a7fea  5b                   pop ebx
// 004a7feb  8be5                 mov esp, ebp
// 004a7fed  5d                   pop ebp
// 004a7fee  c20c00               ret 0xc
// library rbxgs/reflection\type.cpp (function ?_Buynode@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@2@PAU342@0ABUItem@SignatureDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
