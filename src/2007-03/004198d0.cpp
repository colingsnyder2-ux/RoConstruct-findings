// roc 2007-03 004198d0  unit: seg_00410000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004198d0
//
// 004198d0  6aff                 push -1
// 004198d2  68bed87300           push 0x73d8be
// 004198d7  64a100000000         mov eax, dword ptr fs:[0]
// 004198dd  50                   push eax
// 004198de  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004198e3  33c4                 xor eax, esp
// 004198e5  50                   push eax
// 004198e6  8d442404             lea eax, [esp + 4]
// 004198ea  64a300000000         mov dword ptr fs:[0], eax
// 004198f0  b801000000           mov eax, 1
// 004198f5  8405d8578b00         test byte ptr [0x8b57d8], al
// 004198fb  7525                 jne 0x419922
// 004198fd  0905d8578b00         or dword ptr [0x8b57d8], eax
// 00419903  b950578b00           mov ecx, 0x8b5750
// 00419908  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00419910  e80b741500           call 0x570d20
// 00419915  6830757700           push 0x777530
// 0041991a  e894582000           call 0x61f1b3
// 0041991f  83c404               add esp, 4
// 00419922  b850578b00           mov eax, 0x8b5750
// 00419927  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041992b  64890d00000000       mov dword ptr fs:[0], ecx
// 00419932  59                   pop ecx
// 00419933  83c40c               add esp, 0xc
// 00419936  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
