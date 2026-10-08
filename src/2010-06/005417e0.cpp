// roc 2010-06 005417e0  unit: RBX::AggregatingSceneManager  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005417e0
//
// 005417e0  64a100000000         mov eax, dword ptr fs:[0]
// 005417e6  6aff                 push -1
// 005417e8  68c0fa9800           push 0x98fac0
// 005417ed  50                   push eax
// 005417ee  8b442410             mov eax, dword ptr [esp + 0x10]
// 005417f2  64892500000000       mov dword ptr fs:[0], esp
// 005417f9  83ec18               sub esp, 0x18
// 005417fc  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 00541801  56                   push esi
// 00541802  8bf1                 mov esi, ecx
// 00541804  50                   push eax
// 00541805  7439                 je 0x541840
// 00541807  8d4c2408             lea ecx, [esp + 8]
// 0054180b  e810eaffff           call 0x540220
// 00541810  8d4c2404             lea ecx, [esp + 4]
// 00541814  51                   push ecx
// 00541815  8d542414             lea edx, [esp + 0x14]
// 00541819  52                   push edx
// 0054181a  8d4e28               lea ecx, [esi + 0x28]
// 0054181d  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00541825  e8c6f4ffff           call 0x540cf0
// 0054182a  c74424049cf2a100     mov dword ptr [esp + 4], 0xa1f29c
// 00541832  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0054183a  8d4c2404             lea ecx, [esp + 4]
// 0054183e  eb37                 jmp 0x541877
// 00541840  8d4c2414             lea ecx, [esp + 0x14]
// 00541844  e8d7e9ffff           call 0x540220
// 00541849  8d4c2410             lea ecx, [esp + 0x10]
// 0054184d  51                   push ecx
// 0054184e  8d542408             lea edx, [esp + 8]
// 00541852  52                   push edx
// 00541853  8d4e48               lea ecx, [esi + 0x48]
// 00541856  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 0054185e  e88df4ffff           call 0x540cf0
// 00541863  c74424109cf2a100     mov dword ptr [esp + 0x10], 0xa1f29c
// 0054186b  c744242403000000     mov dword ptr [esp + 0x24], 3
// 00541873  8d4c2410             lea ecx, [esp + 0x10]
// 00541877  e8a4e1ffff           call 0x53fa20
// 0054187c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00541880  5e                   pop esi
// 00541881  64890d00000000       mov dword ptr fs:[0], ecx
// 00541888  83c424               add esp, 0x24
// 0054188b  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?invalidateModel@AggregatingSceneManager@Render@RBX@@UAEXABV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
