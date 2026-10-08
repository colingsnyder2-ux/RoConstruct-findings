// from server: 100% by auto
// roc 2007-08 0059dae0  unit: RBX::HopperBin::W4BinType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059dae0
//
// 0059dae0  64a100000000         mov eax, dword ptr fs:[0]
// 0059dae6  6aff                 push -1
// 0059dae8  687e7a7500           push 0x757a7e
// 0059daed  50                   push eax
// 0059daee  b801000000           mov eax, 1
// 0059daf3  64892500000000       mov dword ptr fs:[0], esp
// 0059dafa  840540518c00         test byte ptr [0x8c5140], al
// 0059db00  7525                 jne 0x59db27
// 0059db02  090540518c00         or dword ptr [0x8c5140], eax
// 0059db08  b9a8508c00           mov ecx, 0x8c50a8
// 0059db0d  c744240800000000     mov dword ptr [esp + 8], 0
// 0059db15  e806feffff           call 0x59d920
// 0059db1a  6840b07700           push 0x77b040
// 0059db1f  e8ff310900           call 0x630d23
// 0059db24  83c404               add esp, 4
// 0059db27  8b0c24               mov ecx, dword ptr [esp]
// 0059db2a  b8a8508c00           mov eax, 0x8c50a8
// 0059db2f  64890d00000000       mov dword ptr fs:[0], ecx
// 0059db36  83c40c               add esp, 0xc
// 0059db39  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
