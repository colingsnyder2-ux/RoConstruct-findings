// roc 2007-08 0062e090  unit: RBX::AdornG3D  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062e090
//
// 0062e090  6aff                 push -1
// 0062e092  681bb67500           push 0x75b61b
// 0062e097  64a100000000         mov eax, dword ptr fs:[0]
// 0062e09d  50                   push eax
// 0062e09e  64892500000000       mov dword ptr fs:[0], esp
// 0062e0a5  51                   push ecx
// 0062e0a6  56                   push esi
// 0062e0a7  6a4c                 push 0x4c
// 0062e0a9  8bf1                 mov esi, ecx
// 0062e0ab  c744240800000000     mov dword ptr [esp + 8], 0
// 0062e0b3  e83e1e0000           call 0x62fef6
// 0062e0b8  83c404               add esp, 4
// 0062e0bb  89442404             mov dword ptr [esp + 4], eax
// 0062e0bf  85c0                 test eax, eax
// 0062e0c1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062e0c9  7414                 je 0x62e0df
// 0062e0cb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062e0cf  6a00                 push 0
// 0062e0d1  51                   push ecx
// 0062e0d2  83c608               add esi, 8
// 0062e0d5  56                   push esi
// 0062e0d6  8bc8                 mov ecx, eax
// 0062e0d8  e81329eaff           call 0x4d09f0
// 0062e0dd  eb02                 jmp 0x62e0e1
// 0062e0df  33c0                 xor eax, eax
// 0062e0e1  8b742418             mov esi, dword ptr [esp + 0x18]
// 0062e0e5  50                   push eax
// 0062e0e6  8bce                 mov ecx, esi
// 0062e0e8  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0062e0f0  c70600000000         mov dword ptr [esi], 0
// 0062e0f6  e8756ee4ff           call 0x474f70
// 0062e0fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062e0ff  8bc6                 mov eax, esi
// 0062e101  5e                   pop esi
// 0062e102  64890d00000000       mov dword ptr fs:[0], ecx
// 0062e109  83c410               add esp, 0x10
// 0062e10c  c20800               ret 8
// library rbxgs-appdraw/AdornG3D.cpp (function ?createTextureProxy@AdornG3D@RBX@@UAE?AV?$ReferenceCountedPointer@VTextureProxyBase@RBX@@@G3D@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
