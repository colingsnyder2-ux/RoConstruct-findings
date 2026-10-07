// roc 2011-06 005d0360  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0360
//
// 005d0360  64a100000000         mov eax, dword ptr fs:[0]
// 005d0366  6aff                 push -1
// 005d0368  680e509e00           push 0x9e500e
// 005d036d  50                   push eax
// 005d036e  b801000000           mov eax, 1
// 005d0373  64892500000000       mov dword ptr fs:[0], esp
// 005d037a  84057481cc00         test byte ptr [0xcc8174], al
// 005d0380  7525                 jne 0x5d03a7
// 005d0382  09057481cc00         or dword ptr [0xcc8174], eax
// 005d0388  b9d080cc00           mov ecx, 0xcc80d0
// 005d038d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0395  e876831700           call 0x748710
// 005d039a  682080a300           push 0xa38020
// 005d039f  e8b9ad2300           call 0x80b15d
// 005d03a4  83c404               add esp, 4
// 005d03a7  8b0c24               mov ecx, dword ptr [esp]
// 005d03aa  b8d080cc00           mov eax, 0xcc80d0
// 005d03af  64890d00000000       mov dword ptr fs:[0], ecx
// 005d03b6  83c40c               add esp, 0xc
// 005d03b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
