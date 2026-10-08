// from server: 100% by auto
// roc 2009-06 004cfe40  unit: W4PacketReliability::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cfe40
//
// 004cfe40  64a100000000         mov eax, dword ptr fs:[0]
// 004cfe46  6aff                 push -1
// 004cfe48  685eac8500           push 0x85ac5e
// 004cfe4d  50                   push eax
// 004cfe4e  b801000000           mov eax, 1
// 004cfe53  64892500000000       mov dword ptr fs:[0], esp
// 004cfe5a  84053ce8a300         test byte ptr [0xa3e83c], al
// 004cfe60  7525                 jne 0x4cfe87
// 004cfe62  09053ce8a300         or dword ptr [0xa3e83c], eax
// 004cfe68  b950e7a300           mov ecx, 0xa3e750
// 004cfe6d  c744240800000000     mov dword ptr [esp + 8], 0
// 004cfe75  e876590000           call 0x4d57f0
// 004cfe7a  68c0598900           push 0x8959c0
// 004cfe7f  e8779c2400           call 0x719afb
// 004cfe84  83c404               add esp, 4
// 004cfe87  8b0c24               mov ecx, dword ptr [esp]
// 004cfe8a  b850e7a300           mov eax, 0xa3e750
// 004cfe8f  64890d00000000       mov dword ptr fs:[0], ecx
// 004cfe96  83c40c               add esp, 0xc
// 004cfe99  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
