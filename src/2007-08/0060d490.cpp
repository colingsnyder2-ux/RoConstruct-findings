// roc 2007-08 0060d490  unit: RBX::Block  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060d490
//
// 0060d490  83ec10               sub esp, 0x10
// 0060d493  53                   push ebx
// 0060d494  55                   push ebp
// 0060d495  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0060d499  56                   push esi
// 0060d49a  57                   push edi
// 0060d49b  55                   push ebp
// 0060d49c  8bf1                 mov esi, ecx
// 0060d49e  e86df8ffff           call 0x60cd10
// 0060d4a3  85f6                 test esi, esi
// 0060d4a5  8bf8                 mov edi, eax
// 0060d4a7  897c2414             mov dword ptr [esp + 0x14], edi
// 0060d4ab  7506                 jne 0x60d4b3
// 0060d4ad  ff15d8e67700         call dword ptr [0x77e6d8]
// 0060d4b3  8b5e04               mov ebx, dword ptr [esi + 4]
// 0060d4b6  3bfb                 cmp edi, ebx
// 0060d4b8  89742410             mov dword ptr [esp + 0x10], esi
// 0060d4bc  7416                 je 0x60d4d4
// 0060d4be  83c70c               add edi, 0xc
// 0060d4c1  57                   push edi
// 0060d4c2  55                   push ebp
// 0060d4c3  8bce                 mov ecx, esi
// 0060d4c5  e8e6eeffff           call 0x60c3b0
// 0060d4ca  84c0                 test al, al
// 0060d4cc  7506                 jne 0x60d4d4
// 0060d4ce  8d4c2410             lea ecx, [esp + 0x10]
// 0060d4d2  eb0c                 jmp 0x60d4e0
// 0060d4d4  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0060d4d8  89742418             mov dword ptr [esp + 0x18], esi
// 0060d4dc  8d4c2418             lea ecx, [esp + 0x18]
// 0060d4e0  8b11                 mov edx, dword ptr [ecx]
// 0060d4e2  8b442424             mov eax, dword ptr [esp + 0x24]
// 0060d4e6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0060d4e9  5f                   pop edi
// 0060d4ea  5e                   pop esi
// 0060d4eb  5d                   pop ebp
// 0060d4ec  8910                 mov dword ptr [eax], edx
// 0060d4ee  894804               mov dword ptr [eax + 4], ecx
// 0060d4f1  5b                   pop ebx
// 0060d4f2  83c410               add esp, 0x10
// 0060d4f5  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?find@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@QAE?AViterator@12@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
