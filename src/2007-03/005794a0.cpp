// roc 2007-03 005794a0  unit: seg_00570000  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005794a0
//
// 005794a0  6aff                 push -1
// 005794a2  6838677500           push 0x756738
// 005794a7  64a100000000         mov eax, dword ptr fs:[0]
// 005794ad  50                   push eax
// 005794ae  64892500000000       mov dword ptr fs:[0], esp
// 005794b5  83ec24               sub esp, 0x24
// 005794b8  8b442434             mov eax, dword ptr [esp + 0x34]
// 005794bc  56                   push esi
// 005794bd  8bf1                 mov esi, ecx
// 005794bf  56                   push esi
// 005794c0  50                   push eax
// 005794c1  6a00                 push 0
// 005794c3  8d4c2410             lea ecx, [esp + 0x10]
// 005794c7  e8c4030600           call 0x5d9890
// 005794cc  d944243c             fld dword ptr [esp + 0x3c]
// 005794d0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005794d4  51                   push ecx
// 005794d5  83ec0c               sub esp, 0xc
// 005794d8  8bc4                 mov eax, esp
// 005794da  d918                 fstp dword ptr [eax]
// 005794dc  8d542414             lea edx, [esp + 0x14]
// 005794e0  d9442450             fld dword ptr [esp + 0x50]
// 005794e4  89642448             mov dword ptr [esp + 0x48], esp
// 005794e8  d95804               fstp dword ptr [eax + 4]
// 005794eb  52                   push edx
// 005794ec  d9442458             fld dword ptr [esp + 0x58]
// 005794f0  8bce                 mov ecx, esi
// 005794f2  d95808               fstp dword ptr [eax + 8]
// 005794f5  c744244400000000     mov dword ptr [esp + 0x44], 0
// 005794fd  e83effffff           call 0x579440
// 00579502  8d4c2404             lea ecx, [esp + 4]
// 00579506  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0057950e  e83d040600           call 0x5d9950
// 00579513  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00579517  64890d00000000       mov dword ptr fs:[0], ecx
// 0057951e  5e                   pop esi
// 0057951f  83c430               add esp, 0x30
// 00579522  c21400               ret 0x14
// library rbxgs/v8datamodel\RootInstance.cpp (function ?moveSafe@RootInstance@RBX@@AAEXAAV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@VVector3@G3D@@W4MoveType@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
