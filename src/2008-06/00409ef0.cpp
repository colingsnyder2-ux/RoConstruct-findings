// roc 2008-06 00409ef0  unit: RBX::GlobalSettings::Item  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409ef0
//
// 00409ef0  6aff                 push -1
// 00409ef2  6851767d00           push 0x7d7651
// 00409ef7  64a100000000         mov eax, dword ptr fs:[0]
// 00409efd  50                   push eax
// 00409efe  64892500000000       mov dword ptr fs:[0], esp
// 00409f05  83ec20               sub esp, 0x20
// 00409f08  56                   push esi
// 00409f09  8bf1                 mov esi, ecx
// 00409f0b  68e4b88000           push 0x80b8e4
// 00409f10  8d4c240c             lea ecx, [esp + 0xc]
// 00409f14  89742408             mov dword ptr [esp + 8], esi
// 00409f18  ff1558248000         call dword ptr [0x802458]
// 00409f1e  8d442408             lea eax, [esp + 8]
// 00409f22  50                   push eax
// 00409f23  8bce                 mov ecx, esi
// 00409f25  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00409f2d  e81efeffff           call 0x409d50
// 00409f32  8d4c2408             lea ecx, [esp + 8]
// 00409f36  c644242c02           mov byte ptr [esp + 0x2c], 2
// 00409f3b  ff1568248000         call dword ptr [0x802468]
// 00409f41  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00409f45  c706dcb88000         mov dword ptr [esi], 0x80b8dc
// 00409f4b  8bc6                 mov eax, esi
// 00409f4d  5e                   pop esi
// 00409f4e  64890d00000000       mov dword ptr fs:[0], ecx
// 00409f55  83c42c               add esp, 0x2c
// 00409f58  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0bad_function_call@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
