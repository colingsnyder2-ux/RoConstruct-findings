// from server: 100% by auto
// roc 2012-06 00770200  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770200
//
// 00770200  64a100000000         mov eax, dword ptr fs:[0]
// 00770206  6aff                 push -1
// 00770208  681e39ac00           push 0xac391e
// 0077020d  50                   push eax
// 0077020e  b801000000           mov eax, 1
// 00770213  64892500000000       mov dword ptr fs:[0], esp
// 0077021a  8405bc7de300         test byte ptr [0xe37dbc], al
// 00770220  7525                 jne 0x770247
// 00770222  0905bc7de300         or dword ptr [0xe37dbc], eax
// 00770228  b9107de300           mov ecx, 0xe37d10
// 0077022d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770235  e8164d1100           call 0x884f50
// 0077023a  68c0abb100           push 0xb1abc0
// 0077023f  e8b12f2100           call 0x9831f5
// 00770244  83c404               add esp, 4
// 00770247  8b0c24               mov ecx, dword ptr [esp]
// 0077024a  b8107de300           mov eax, 0xe37d10
// 0077024f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770256  83c40c               add esp, 0xc
// 00770259  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
