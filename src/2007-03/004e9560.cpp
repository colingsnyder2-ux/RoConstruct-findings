// roc 2007-03 004e9560  unit: seg_004e0000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e9560
//
// 004e9560  6a01                 push 1
// 004e9562  6a01                 push 1
// 004e9564  b9f09f8b00           mov ecx, 0x8b9ff0
// 004e9569  e802e5ffff           call 0x4e7a70
// 004e956e  6a01                 push 1
// 004e9570  6a01                 push 1
// 004e9572  b9fc9f8b00           mov ecx, 0x8b9ffc
// 004e9577  e8f4e4ffff           call 0x4e7a70
// 004e957c  6a01                 push 1
// 004e957e  6a01                 push 1
// 004e9580  b9989f8b00           mov ecx, 0x8b9f98
// 004e9585  e806e6ffff           call 0x4e7b90
// 004e958a  6a01                 push 1
// 004e958c  6a01                 push 1
// 004e958e  b9a49f8b00           mov ecx, 0x8b9fa4
// 004e9593  e8d8e4ffff           call 0x4e7a70
// 004e9598  6a01                 push 1
// 004e959a  6a01                 push 1
// 004e959c  b908a08b00           mov ecx, 0x8ba008
// 004e95a1  e87a1af9ff           call 0x47b020
// 004e95a6  a108a08b00           mov eax, dword ptr [0x8ba008]
// 004e95ab  6a01                 push 1
// 004e95ad  6a00                 push 0
// 004e95af  b914a08b00           mov ecx, 0x8ba014
// 004e95b4  c70001000000         mov dword ptr [eax], 1
// 004e95ba  e8611af9ff           call 0x47b020
// 004e95bf  c3                   ret 
// library rbxgs-render/Mesh.cpp (function ?initStatics@Mesh@Render@RBX@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
