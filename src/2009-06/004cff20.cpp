// from server: 100% by auto
// roc 2009-06 004cff20  unit: W4PacketReliability::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cff20
//
// 004cff20  64a100000000         mov eax, dword ptr fs:[0]
// 004cff26  6aff                 push -1
// 004cff28  689eac8500           push 0x85ac9e
// 004cff2d  50                   push eax
// 004cff2e  b801000000           mov eax, 1
// 004cff33  64892500000000       mov dword ptr fs:[0], esp
// 004cff3a  84051ceaa300         test byte ptr [0xa3ea1c], al
// 004cff40  7525                 jne 0x4cff67
// 004cff42  09051ceaa300         or dword ptr [0xa3ea1c], eax
// 004cff48  b930e9a300           mov ecx, 0xa3e930
// 004cff4d  c744240800000000     mov dword ptr [esp + 8], 0
// 004cff55  e8065a0000           call 0x4d5960
// 004cff5a  68a0598900           push 0x8959a0
// 004cff5f  e8979b2400           call 0x719afb
// 004cff64  83c404               add esp, 4
// 004cff67  8b0c24               mov ecx, dword ptr [esp]
// 004cff6a  b830e9a300           mov eax, 0xa3e930
// 004cff6f  64890d00000000       mov dword ptr fs:[0], ecx
// 004cff76  83c40c               add esp, 0xc
// 004cff79  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
