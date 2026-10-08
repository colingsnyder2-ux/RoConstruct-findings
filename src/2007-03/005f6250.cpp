// roc 2007-03 005f6250  unit: seg_005f0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f6250
//
// 005f6250  83ec10               sub esp, 0x10
// 005f6253  53                   push ebx
// 005f6254  55                   push ebp
// 005f6255  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005f6259  56                   push esi
// 005f625a  57                   push edi
// 005f625b  55                   push ebp
// 005f625c  8bf1                 mov esi, ecx
// 005f625e  e8ddf8ffff           call 0x5f5b40
// 005f6263  85f6                 test esi, esi
// 005f6265  8bf8                 mov edi, eax
// 005f6267  897c2414             mov dword ptr [esp + 0x14], edi
// 005f626b  7506                 jne 0x5f6273
// 005f626d  ff1544e97700         call dword ptr [0x77e944]
// 005f6273  8b5e04               mov ebx, dword ptr [esi + 4]
// 005f6276  3bfb                 cmp edi, ebx
// 005f6278  89742410             mov dword ptr [esp + 0x10], esi
// 005f627c  7416                 je 0x5f6294
// 005f627e  83c70c               add edi, 0xc
// 005f6281  57                   push edi
// 005f6282  55                   push ebp
// 005f6283  8bce                 mov ecx, esi
// 005f6285  e856efffff           call 0x5f51e0
// 005f628a  84c0                 test al, al
// 005f628c  7506                 jne 0x5f6294
// 005f628e  8d4c2410             lea ecx, [esp + 0x10]
// 005f6292  eb0c                 jmp 0x5f62a0
// 005f6294  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005f6298  89742418             mov dword ptr [esp + 0x18], esi
// 005f629c  8d4c2418             lea ecx, [esp + 0x18]
// 005f62a0  8b11                 mov edx, dword ptr [ecx]
// 005f62a2  8b442424             mov eax, dword ptr [esp + 0x24]
// 005f62a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 005f62a9  5f                   pop edi
// 005f62aa  5e                   pop esi
// 005f62ab  5d                   pop ebp
// 005f62ac  8910                 mov dword ptr [eax], edx
// 005f62ae  894804               mov dword ptr [eax + 4], ecx
// 005f62b1  5b                   pop ebx
// 005f62b2  83c410               add esp, 0x10
// 005f62b5  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?find@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@QAE?AViterator@12@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
