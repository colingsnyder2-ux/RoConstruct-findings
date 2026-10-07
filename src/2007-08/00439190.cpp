// roc 2007-08 00439190  unit: CPropertyGridItemBrickColor  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00439190
//
// 00439190  6aff                 push -1
// 00439192  688ee77300           push 0x73e78e
// 00439197  64a100000000         mov eax, dword ptr fs:[0]
// 0043919d  50                   push eax
// 0043919e  a188518b00           mov eax, dword ptr [0x8b5188]
// 004391a3  33c4                 xor eax, esp
// 004391a5  50                   push eax
// 004391a6  8d442404             lea eax, [esp + 4]
// 004391aa  64a300000000         mov dword ptr fs:[0], eax
// 004391b0  b801000000           mov eax, 1
// 004391b5  840578b98b00         test byte ptr [0x8bb978], al
// 004391bb  7525                 jne 0x4391e2
// 004391bd  090578b98b00         or dword ptr [0x8bb978], eax
// 004391c3  b970b98b00           mov ecx, 0x8bb970
// 004391c8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004391d0  e82bc52e00           call 0x725700
// 004391d5  68d0797700           push 0x7779d0
// 004391da  e8447b1f00           call 0x630d23
// 004391df  83c404               add esp, 4
// 004391e2  b870b98b00           mov eax, 0x8bb970
// 004391e7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004391eb  64890d00000000       mov dword ptr fs:[0], ecx
// 004391f2  59                   pop ecx
// 004391f3  83c40c               add esp, 0xc
// 004391f6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
