// roc 2007-03 004f4210  unit: seg_004f0000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f4210
//
// 004f4210  803d81ad8b0000       cmp byte ptr [0x8bad81], 0
// 004f4217  7528                 jne 0x4f4241
// 004f4219  683c280400           push 0x4283c
// 004f421e  e8e59e1200           call 0x61e108
// 004f4223  83c404               add esp, 4
// 004f4226  85c0                 test eax, eax
// 004f4228  7409                 je 0x4f4233
// 004f422a  8bc8                 mov ecx, eax
// 004f422c  e87ff8ffff           call 0x4f3ab0
// 004f4231  eb02                 jmp 0x4f4235
// 004f4233  33c0                 xor eax, eax
// 004f4235  a37cad8b00           mov dword ptr [0x8bad7c], eax
// 004f423a  c60581ad8b0001       mov byte ptr [0x8bad81], 1
// 004f4241  8b442408             mov eax, dword ptr [esp + 8]
// 004f4245  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f4249  50                   push eax
// 004f424a  51                   push ecx
// 004f424b  8b0d7cad8b00         mov ecx, dword ptr [0x8bad7c]
// 004f4251  e8dafeffff           call 0x4f4130
// 004f4256  c3                   ret 
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?realloc@System@G3D@@SAPAXPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
