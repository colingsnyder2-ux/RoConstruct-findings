// from server: 100% by auto
// roc 2008-06 005cd850  unit: RBX::VInstance::?$RefPropDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd850
//
// 005cd850  64a100000000         mov eax, dword ptr fs:[0]
// 005cd856  6aff                 push -1
// 005cd858  681e547d00           push 0x7d541e
// 005cd85d  50                   push eax
// 005cd85e  b801000000           mov eax, 1
// 005cd863  64892500000000       mov dword ptr fs:[0], esp
// 005cd86a  8405689a9700         test byte ptr [0x979a68], al
// 005cd870  7525                 jne 0x5cd897
// 005cd872  0905689a9700         or dword ptr [0x979a68], eax
// 005cd878  b980999700           mov ecx, 0x979980
// 005cd87d  c744240800000000     mov dword ptr [esp + 8], 0
// 005cd885  e866fbffff           call 0x5cd3f0
// 005cd88a  68c0ee7f00           push 0x7feec0
// 005cd88f  e81b3f0d00           call 0x6a17af
// 005cd894  83c404               add esp, 4
// 005cd897  8b0c24               mov ecx, dword ptr [esp]
// 005cd89a  b880999700           mov eax, 0x979980
// 005cd89f  64890d00000000       mov dword ptr fs:[0], ecx
// 005cd8a6  83c40c               add esp, 0xc
// 005cd8a9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
