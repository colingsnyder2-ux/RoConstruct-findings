// from server: 100% by auto
// roc 2012-06 00770ba0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770ba0
//
// 00770ba0  64a100000000         mov eax, dword ptr fs:[0]
// 00770ba6  6aff                 push -1
// 00770ba8  68de3bac00           push 0xac3bde
// 00770bad  50                   push eax
// 00770bae  b801000000           mov eax, 1
// 00770bb3  64892500000000       mov dword ptr fs:[0], esp
// 00770bba  8405dc8ce300         test byte ptr [0xe38cdc], al
// 00770bc0  7525                 jne 0x770be7
// 00770bc2  0905dc8ce300         or dword ptr [0xe38cdc], eax
// 00770bc8  b9308ce300           mov ecx, 0xe38c30
// 00770bcd  c744240800000000     mov dword ptr [esp + 8], 0
// 00770bd5  e8d6c60500           call 0x7cd2b0
// 00770bda  6860aab100           push 0xb1aa60
// 00770bdf  e811262100           call 0x9831f5
// 00770be4  83c404               add esp, 4
// 00770be7  8b0c24               mov ecx, dword ptr [esp]
// 00770bea  b8308ce300           mov eax, 0xe38c30
// 00770bef  64890d00000000       mov dword ptr fs:[0], ecx
// 00770bf6  83c40c               add esp, 0xc
// 00770bf9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
