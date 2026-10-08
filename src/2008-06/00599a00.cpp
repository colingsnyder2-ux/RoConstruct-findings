// roc 2008-06 00599a00  unit: RBX::PartInstance  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599a00
//
// 00599a00  64a100000000         mov eax, dword ptr fs:[0]
// 00599a06  6aff                 push -1
// 00599a08  684e257d00           push 0x7d254e
// 00599a0d  50                   push eax
// 00599a0e  b801000000           mov eax, 1
// 00599a13  64892500000000       mov dword ptr fs:[0], esp
// 00599a1a  840578639700         test byte ptr [0x976378], al
// 00599a20  752f                 jne 0x599a51
// 00599a22  090578639700         or dword ptr [0x976378], eax
// 00599a28  6880639400           push 0x946380
// 00599a2d  682c2b8300           push 0x832b2c
// 00599a32  b968639700           mov ecx, 0x976368
// 00599a37  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00599a3f  e84c23fdff           call 0x56bd90
// 00599a44  68b0db7f00           push 0x7fdbb0
// 00599a49  e8617d1000           call 0x6a17af
// 00599a4e  83c404               add esp, 4
// 00599a51  8b0c24               mov ecx, dword ptr [esp]
// 00599a54  b868639700           mov eax, 0x976368
// 00599a59  64890d00000000       mov dword ptr fs:[0], ecx
// 00599a60  83c40c               add esp, 0xc
// 00599a63  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??$singleton@VCoordinateFrame@G3D@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
