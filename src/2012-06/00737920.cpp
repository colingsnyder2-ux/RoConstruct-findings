// roc 2012-06 00737920  unit: RBX::TextService::W4YAlignment::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00737920
//
// 00737920  64a100000000         mov eax, dword ptr fs:[0]
// 00737926  6aff                 push -1
// 00737928  68ae09ac00           push 0xac09ae
// 0073792d  50                   push eax
// 0073792e  b801000000           mov eax, 1
// 00737933  64892500000000       mov dword ptr fs:[0], esp
// 0073793a  84057443e300         test byte ptr [0xe34374], al
// 00737940  7525                 jne 0x737967
// 00737942  09057443e300         or dword ptr [0xe34374], eax
// 00737948  b9c842e300           mov ecx, 0xe342c8
// 0073794d  c744240800000000     mov dword ptr [esp + 8], 0
// 00737955  e8d66f0700           call 0x7ae930
// 0073795a  68c080b100           push 0xb180c0
// 0073795f  e891b82400           call 0x9831f5
// 00737964  83c404               add esp, 4
// 00737967  8b0c24               mov ecx, dword ptr [esp]
// 0073796a  b8c842e300           mov eax, 0xe342c8
// 0073796f  64890d00000000       mov dword ptr fs:[0], ecx
// 00737976  83c40c               add esp, 0xc
// 00737979  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
