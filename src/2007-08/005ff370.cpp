// roc 2007-08 005ff370  unit: RBX::RedoVerb  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ff370
//
// 005ff370  6aff                 push -1
// 005ff372  6818c17500           push 0x75c118
// 005ff377  64a100000000         mov eax, dword ptr fs:[0]
// 005ff37d  50                   push eax
// 005ff37e  64892500000000       mov dword ptr fs:[0], esp
// 005ff385  83ec10               sub esp, 0x10
// 005ff388  56                   push esi
// 005ff389  57                   push edi
// 005ff38a  33ff                 xor edi, edi
// 005ff38c  8bf1                 mov esi, ecx
// 005ff38e  897c240c             mov dword ptr [esp + 0xc], edi
// 005ff392  897c2410             mov dword ptr [esp + 0x10], edi
// 005ff396  897c2414             mov dword ptr [esp + 0x14], edi
// 005ff39a  8d442428             lea eax, [esp + 0x28]
// 005ff39e  50                   push eax
// 005ff39f  8d4c240c             lea ecx, [esp + 0xc]
// 005ff3a3  897c2424             mov dword ptr [esp + 0x24], edi
// 005ff3a7  e8c44cfbff           call 0x5b4070
// 005ff3ac  8d4c2408             lea ecx, [esp + 8]
// 005ff3b0  51                   push ecx
// 005ff3b1  8bce                 mov ecx, esi
// 005ff3b3  e868feffff           call 0x5ff220
// 005ff3b8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ff3bc  3bc7                 cmp eax, edi
// 005ff3be  5f                   pop edi
// 005ff3bf  5e                   pop esi
// 005ff3c0  7409                 je 0x5ff3cb
// 005ff3c2  50                   push eax
// 005ff3c3  e89a080300           call 0x62fc62
// 005ff3c8  83c404               add esp, 4
// 005ff3cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ff3cf  64890d00000000       mov dword ptr fs:[0], ecx
// 005ff3d6  83c41c               add esp, 0x1c
// 005ff3d9  c20400               ret 4
// library rbxgs/v8datamodel\ICameraOwner.cpp (function ?setCameraIgnoreParts@ICameraOwner@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ICameraOwner.cpp
