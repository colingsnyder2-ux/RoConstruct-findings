// roc 2007-08 005742b0  unit: RBX::PartInstance  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005742b0
//
// 005742b0  64a100000000         mov eax, dword ptr fs:[0]
// 005742b6  6aff                 push -1
// 005742b8  688e527500           push 0x75528e
// 005742bd  50                   push eax
// 005742be  b801000000           mov eax, 1
// 005742c3  64892500000000       mov dword ptr fs:[0], esp
// 005742ca  8405102b8c00         test byte ptr [0x8c2b10], al
// 005742d0  752f                 jne 0x574301
// 005742d2  0905102b8c00         or dword ptr [0x8c2b10], eax
// 005742d8  68d0998900           push 0x8999d0
// 005742dd  68c0a97a00           push 0x7aa9c0
// 005742e2  b9002b8c00           mov ecx, 0x8c2b00
// 005742e7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005742ef  e80c83ffff           call 0x56c600
// 005742f4  6870a07700           push 0x77a070
// 005742f9  e825ca0b00           call 0x630d23
// 005742fe  83c404               add esp, 4
// 00574301  8b0c24               mov ecx, dword ptr [esp]
// 00574304  b8002b8c00           mov eax, 0x8c2b00
// 00574309  64890d00000000       mov dword ptr fs:[0], ecx
// 00574310  83c40c               add esp, 0xc
// 00574313  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??$singleton@VCoordinateFrame@G3D@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
