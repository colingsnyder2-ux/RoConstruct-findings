// roc 2011-06 005d07c0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d07c0
//
// 005d07c0  64a100000000         mov eax, dword ptr fs:[0]
// 005d07c6  6aff                 push -1
// 005d07c8  684e519e00           push 0x9e514e
// 005d07cd  50                   push eax
// 005d07ce  b801000000           mov eax, 1
// 005d07d3  64892500000000       mov dword ptr fs:[0], esp
// 005d07da  84050488cc00         test byte ptr [0xcc8804], al
// 005d07e0  7525                 jne 0x5d0807
// 005d07e2  09050488cc00         or dword ptr [0xcc8804], eax
// 005d07e8  b96087cc00           mov ecx, 0xcc8760
// 005d07ed  c744240800000000     mov dword ptr [esp + 8], 0
// 005d07f5  e826221600           call 0x732a20
// 005d07fa  68807fa300           push 0xa37f80
// 005d07ff  e859a92300           call 0x80b15d
// 005d0804  83c404               add esp, 4
// 005d0807  8b0c24               mov ecx, dword ptr [esp]
// 005d080a  b86087cc00           mov eax, 0xcc8760
// 005d080f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0816  83c40c               add esp, 0xc
// 005d0819  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
