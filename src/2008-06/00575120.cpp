// roc 2008-06 00575120  unit: RBX::UnifiedWidget  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00575120
//
// 00575120  6aff                 push -1
// 00575122  68f1047d00           push 0x7d04f1
// 00575127  64a100000000         mov eax, dword ptr fs:[0]
// 0057512d  50                   push eax
// 0057512e  64892500000000       mov dword ptr fs:[0], esp
// 00575135  81ecc0000000         sub esp, 0xc0
// 0057513b  56                   push esi
// 0057513c  57                   push edi
// 0057513d  c744240800000000     mov dword ptr [esp + 8], 0
// 00575145  8bb424d8000000       mov esi, dword ptr [esp + 0xd8]
// 0057514c  8bce                 mov ecx, esi
// 0057514e  c78424d000000002000000 mov dword ptr [esp + 0xd0], 2
// 00575159  ff1560248000         call dword ptr [0x802460]
// 0057515f  6a01                 push 1
// 00575161  6a01                 push 1
// 00575163  8d842400010000       lea eax, [esp + 0x100]
// 0057516a  50                   push eax
// 0057516b  8d4c2450             lea ecx, [esp + 0x50]
// 0057516f  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00575177  ff153c248000         call dword ptr [0x80243c]
// 0057517d  8bf8                 mov edi, eax
// 0057517f  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 00575186  51                   push ecx
// 00575187  8d4c2410             lea ecx, [esp + 0x10]
// 0057518b  c68424d400000003     mov byte ptr [esp + 0xd4], 3
// 00575193  ff155c248000         call dword ptr [0x80245c]
// 00575199  8d4c2428             lea ecx, [esp + 0x28]
// 0057519d  c68424d000000004     mov byte ptr [esp + 0xd0], 4
// 005751a5  ff1560248000         call dword ptr [0x802460]
// 005751ab  56                   push esi
// 005751ac  6a01                 push 1
// 005751ae  57                   push edi
// 005751af  8d4c2418             lea ecx, [esp + 0x18]
// 005751b3  c68424dc00000005     mov byte ptr [esp + 0xdc], 5
// 005751bb  e88048ffff           call 0x569a40
// 005751c0  8d4c2428             lea ecx, [esp + 0x28]
// 005751c4  c68424d000000006     mov byte ptr [esp + 0xd0], 6
// 005751cc  ff1568248000         call dword ptr [0x802468]
// 005751d2  8d4c240c             lea ecx, [esp + 0xc]
// 005751d6  c68424d000000003     mov byte ptr [esp + 0xd0], 3
// 005751de  ff1568248000         call dword ptr [0x802468]
// 005751e4  8d4c2444             lea ecx, [esp + 0x44]
// 005751e8  c68424d000000002     mov byte ptr [esp + 0xd0], 2
// 005751f0  ff1540248000         call dword ptr [0x802440]
// 005751f6  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 005751fd  c68424d000000001     mov byte ptr [esp + 0xd0], 1
// 00575205  ff1568248000         call dword ptr [0x802468]
// 0057520b  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 00575212  c68424d000000000     mov byte ptr [esp + 0xd0], 0
// 0057521a  ff1568248000         call dword ptr [0x802468]
// 00575220  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 00575227  5f                   pop edi
// 00575228  8bc6                 mov eax, esi
// 0057522a  5e                   pop esi
// 0057522b  64890d00000000       mov dword ptr fs:[0], ecx
// 00575232  81c4cc000000         add esp, 0xcc
// 00575238  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?doHttpPost@DataModel@RBX@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
