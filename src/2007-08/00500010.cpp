// roc 2007-08 00500010  unit: G3D::Shader  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00500010
//
// 00500010  803db1088c0000       cmp byte ptr [0x8c08b1], 0
// 00500017  7528                 jne 0x500041
// 00500019  683c280400           push 0x4283c
// 0050001e  e8d3fe1200           call 0x62fef6
// 00500023  83c404               add esp, 4
// 00500026  85c0                 test eax, eax
// 00500028  7409                 je 0x500033
// 0050002a  8bc8                 mov ecx, eax
// 0050002c  e80fffffff           call 0x4fff40
// 00500031  eb02                 jmp 0x500035
// 00500033  33c0                 xor eax, eax
// 00500035  a3ac088c00           mov dword ptr [0x8c08ac], eax
// 0050003a  c605b1088c0001       mov byte ptr [0x8c08b1], 1
// 00500041  8b442404             mov eax, dword ptr [esp + 4]
// 00500045  8b0dac088c00         mov ecx, dword ptr [0x8c08ac]
// 0050004b  50                   push eax
// 0050004c  e82ff5ffff           call 0x4ff580
// 00500051  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?malloc@System@G3D@@SAPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
