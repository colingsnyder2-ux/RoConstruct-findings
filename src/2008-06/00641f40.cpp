// roc 2008-06 00641f40  unit: RBX::Humanoid  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00641f40
//
// 00641f40  64a100000000         mov eax, dword ptr fs:[0]
// 00641f46  6aff                 push -1
// 00641f48  68a0e97d00           push 0x7de9a0
// 00641f4d  50                   push eax
// 00641f4e  64892500000000       mov dword ptr fs:[0], esp
// 00641f55  83ec18               sub esp, 0x18
// 00641f58  56                   push esi
// 00641f59  57                   push edi
// 00641f5a  6a04                 push 4
// 00641f5c  8bf9                 mov edi, ecx
// 00641f5e  e8bde90500           call 0x6a0920
// 00641f63  33f6                 xor esi, esi
// 00641f65  83c404               add esp, 4
// 00641f68  3bc6                 cmp eax, esi
// 00641f6a  7408                 je 0x641f74
// 00641f6c  8d4c2408             lea ecx, [esp + 8]
// 00641f70  8908                 mov dword ptr [eax], ecx
// 00641f72  eb02                 jmp 0x641f76
// 00641f74  33c0                 xor eax, eax
// 00641f76  89442408             mov dword ptr [esp + 8], eax
// 00641f7a  89742414             mov dword ptr [esp + 0x14], esi
// 00641f7e  89742418             mov dword ptr [esp + 0x18], esi
// 00641f82  8974241c             mov dword ptr [esp + 0x1c], esi
// 00641f86  8d542430             lea edx, [esp + 0x30]
// 00641f8a  52                   push edx
// 00641f8b  8d4c240c             lea ecx, [esp + 0xc]
// 00641f8f  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 00641f97  e804f4ddff           call 0x4213a0
// 00641f9c  8d442408             lea eax, [esp + 8]
// 00641fa0  50                   push eax
// 00641fa1  8bcf                 mov ecx, edi
// 00641fa3  e858feffff           call 0x641e00
// 00641fa8  8b442414             mov eax, dword ptr [esp + 0x14]
// 00641fac  3bc6                 cmp eax, esi
// 00641fae  7409                 je 0x641fb9
// 00641fb0  50                   push eax
// 00641fb1  e8c4e60500           call 0x6a067a
// 00641fb6  83c404               add esp, 4
// 00641fb9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00641fbd  51                   push ecx
// 00641fbe  89742418             mov dword ptr [esp + 0x18], esi
// 00641fc2  8974241c             mov dword ptr [esp + 0x1c], esi
// 00641fc6  89742420             mov dword ptr [esp + 0x20], esi
// 00641fca  e8abe60500           call 0x6a067a
// 00641fcf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00641fd3  83c404               add esp, 4
// 00641fd6  5f                   pop edi
// 00641fd7  5e                   pop esi
// 00641fd8  64890d00000000       mov dword ptr fs:[0], ecx
// 00641fdf  83c424               add esp, 0x24
// 00641fe2  c20400               ret 4
// library rbxgs/v8datamodel\ICameraOwner.cpp (function ?setCameraIgnoreParts@ICameraOwner@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ICameraOwner.cpp
