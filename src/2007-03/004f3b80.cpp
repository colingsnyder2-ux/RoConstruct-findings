// roc 2007-03 004f3b80  unit: seg_004f0000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3b80
//
// 004f3b80  803d81ad8b0000       cmp byte ptr [0x8bad81], 0
// 004f3b87  7528                 jne 0x4f3bb1
// 004f3b89  683c280400           push 0x4283c
// 004f3b8e  e875a51200           call 0x61e108
// 004f3b93  83c404               add esp, 4
// 004f3b96  85c0                 test eax, eax
// 004f3b98  7409                 je 0x4f3ba3
// 004f3b9a  8bc8                 mov ecx, eax
// 004f3b9c  e80fffffff           call 0x4f3ab0
// 004f3ba1  eb02                 jmp 0x4f3ba5
// 004f3ba3  33c0                 xor eax, eax
// 004f3ba5  a37cad8b00           mov dword ptr [0x8bad7c], eax
// 004f3baa  c60581ad8b0001       mov byte ptr [0x8bad81], 1
// 004f3bb1  8b442404             mov eax, dword ptr [esp + 4]
// 004f3bb5  8b0d7cad8b00         mov ecx, dword ptr [0x8bad7c]
// 004f3bbb  50                   push eax
// 004f3bbc  e82ff5ffff           call 0x4f30f0
// 004f3bc1  c3                   ret 
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?malloc@System@G3D@@SAPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
