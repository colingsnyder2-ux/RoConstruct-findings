// from server: 100% by auto
// roc 2012-06 006e0870  unit: RBX::DataModel  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006e0870
//
// 006e0870  64a100000000         mov eax, dword ptr fs:[0]
// 006e0876  6aff                 push -1
// 006e0878  688eb5ab00           push 0xabb58e
// 006e087d  50                   push eax
// 006e087e  b801000000           mov eax, 1
// 006e0883  64892500000000       mov dword ptr fs:[0], esp
// 006e088a  840544fce200         test byte ptr [0xe2fc44], al
// 006e0890  7525                 jne 0x6e08b7
// 006e0892  090544fce200         or dword ptr [0xe2fc44], eax
// 006e0898  b998fbe200           mov ecx, 0xe2fb98
// 006e089d  c744240800000000     mov dword ptr [esp + 8], 0
// 006e08a5  e8e6f3ffff           call 0x6dfc90
// 006e08aa  68906cb100           push 0xb16c90
// 006e08af  e841292a00           call 0x9831f5
// 006e08b4  83c404               add esp, 4
// 006e08b7  8b0c24               mov ecx, dword ptr [esp]
// 006e08ba  b898fbe200           mov eax, 0xe2fb98
// 006e08bf  64890d00000000       mov dword ptr fs:[0], ecx
// 006e08c6  83c40c               add esp, 0xc
// 006e08c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
