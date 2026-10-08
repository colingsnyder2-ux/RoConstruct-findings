// roc 2007-03 005e6f20  unit: seg_005e0000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e6f20
//
// 005e6f20  6aff                 push -1
// 005e6f22  6898c57500           push 0x75c598
// 005e6f27  64a100000000         mov eax, dword ptr fs:[0]
// 005e6f2d  50                   push eax
// 005e6f2e  64892500000000       mov dword ptr fs:[0], esp
// 005e6f35  83ec10               sub esp, 0x10
// 005e6f38  56                   push esi
// 005e6f39  57                   push edi
// 005e6f3a  33ff                 xor edi, edi
// 005e6f3c  8bf1                 mov esi, ecx
// 005e6f3e  897c240c             mov dword ptr [esp + 0xc], edi
// 005e6f42  897c2410             mov dword ptr [esp + 0x10], edi
// 005e6f46  897c2414             mov dword ptr [esp + 0x14], edi
// 005e6f4a  8d442428             lea eax, [esp + 0x28]
// 005e6f4e  50                   push eax
// 005e6f4f  8d4c240c             lea ecx, [esp + 0xc]
// 005e6f53  897c2424             mov dword ptr [esp + 0x24], edi
// 005e6f57  e8e4e2f9ff           call 0x585240
// 005e6f5c  8d4c2408             lea ecx, [esp + 8]
// 005e6f60  51                   push ecx
// 005e6f61  8bce                 mov ecx, esi
// 005e6f63  e868feffff           call 0x5e6dd0
// 005e6f68  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e6f6c  3bc7                 cmp eax, edi
// 005e6f6e  5f                   pop edi
// 005e6f6f  5e                   pop esi
// 005e6f70  7409                 je 0x5e6f7b
// 005e6f72  50                   push eax
// 005e6f73  e878710300           call 0x61e0f0
// 005e6f78  83c404               add esp, 4
// 005e6f7b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e6f7f  64890d00000000       mov dword ptr fs:[0], ecx
// 005e6f86  83c41c               add esp, 0x1c
// 005e6f89  c20400               ret 4
// library rbxgs/v8datamodel\ICameraOwner.cpp (function ?setCameraIgnoreParts@ICameraOwner@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ICameraOwner.cpp
