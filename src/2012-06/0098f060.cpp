// roc 2012-06 0098f060  unit: CXTPControlComboBoxList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098f060
//
// 0098f060  6aff                 push -1
// 0098f062  68dec4ad00           push 0xadc4de
// 0098f067  64a100000000         mov eax, dword ptr fs:[0]
// 0098f06d  50                   push eax
// 0098f06e  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0098f073  33c4                 xor eax, esp
// 0098f075  50                   push eax
// 0098f076  8d442404             lea eax, [esp + 4]
// 0098f07a  64a300000000         mov dword ptr fs:[0], eax
// 0098f080  b801000000           mov eax, 1
// 0098f085  84052893e500         test byte ptr [0xe59328], al
// 0098f08b  7525                 jne 0x98f0b2
// 0098f08d  09052893e500         or dword ptr [0xe59328], eax
// 0098f093  b91c93e500           mov ecx, 0xe5931c
// 0098f098  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0098f0a0  e84bf2ffff           call 0x98e2f0
// 0098f0a5  689015b200           push 0xb21590
// 0098f0aa  e84641ffff           call 0x9831f5
// 0098f0af  83c404               add esp, 4
// 0098f0b2  b81c93e500           mov eax, 0xe5931c
// 0098f0b7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0098f0bb  64890d00000000       mov dword ptr fs:[0], ecx
// 0098f0c2  59                   pop ecx
// 0098f0c3  83c40c               add esp, 0xc
// 0098f0c6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
