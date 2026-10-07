// roc 2007-08 005006a0  unit: G3D::Shader  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005006a0
//
// 005006a0  803db1088c0000       cmp byte ptr [0x8c08b1], 0
// 005006a7  7528                 jne 0x5006d1
// 005006a9  683c280400           push 0x4283c
// 005006ae  e843f81200           call 0x62fef6
// 005006b3  83c404               add esp, 4
// 005006b6  85c0                 test eax, eax
// 005006b8  7409                 je 0x5006c3
// 005006ba  8bc8                 mov ecx, eax
// 005006bc  e87ff8ffff           call 0x4fff40
// 005006c1  eb02                 jmp 0x5006c5
// 005006c3  33c0                 xor eax, eax
// 005006c5  a3ac088c00           mov dword ptr [0x8c08ac], eax
// 005006ca  c605b1088c0001       mov byte ptr [0x8c08b1], 1
// 005006d1  8b442408             mov eax, dword ptr [esp + 8]
// 005006d5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005006d9  50                   push eax
// 005006da  51                   push ecx
// 005006db  8b0dac088c00         mov ecx, dword ptr [0x8c08ac]
// 005006e1  e8dafeffff           call 0x5005c0
// 005006e6  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?realloc@System@G3D@@SAPAXPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
