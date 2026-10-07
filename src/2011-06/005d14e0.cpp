// roc 2011-06 005d14e0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d14e0
//
// 005d14e0  64a100000000         mov eax, dword ptr fs:[0]
// 005d14e6  6aff                 push -1
// 005d14e8  680e559e00           push 0x9e550e
// 005d14ed  50                   push eax
// 005d14ee  b801000000           mov eax, 1
// 005d14f3  64892500000000       mov dword ptr fs:[0], esp
// 005d14fa  8405b49bcc00         test byte ptr [0xcc9bb4], al
// 005d1500  7525                 jne 0x5d1527
// 005d1502  0905b49bcc00         or dword ptr [0xcc9bb4], eax
// 005d1508  b9109bcc00           mov ecx, 0xcc9b10
// 005d150d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1515  e8f68f1600           call 0x73a510
// 005d151a  68a07da300           push 0xa37da0
// 005d151f  e8399c2300           call 0x80b15d
// 005d1524  83c404               add esp, 4
// 005d1527  8b0c24               mov ecx, dword ptr [esp]
// 005d152a  b8109bcc00           mov eax, 0xcc9b10
// 005d152f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1536  83c40c               add esp, 0xc
// 005d1539  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
