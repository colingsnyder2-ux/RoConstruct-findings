// roc 2007-08 004f5b30  unit: boost::bad_lexical_cast  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f5b30
//
// 004f5b30  6a01                 push 1
// 004f5b32  6a01                 push 1
// 004f5b34  b920fb8b00           mov ecx, 0x8bfb20
// 004f5b39  e8b2e5ffff           call 0x4f40f0
// 004f5b3e  6a01                 push 1
// 004f5b40  6a01                 push 1
// 004f5b42  b92cfb8b00           mov ecx, 0x8bfb2c
// 004f5b47  e8a4e5ffff           call 0x4f40f0
// 004f5b4c  6a01                 push 1
// 004f5b4e  6a01                 push 1
// 004f5b50  b9c8fa8b00           mov ecx, 0x8bfac8
// 004f5b55  e8b6e6ffff           call 0x4f4210
// 004f5b5a  6a01                 push 1
// 004f5b5c  6a01                 push 1
// 004f5b5e  b9d4fa8b00           mov ecx, 0x8bfad4
// 004f5b63  e888e5ffff           call 0x4f40f0
// 004f5b68  6a01                 push 1
// 004f5b6a  6a01                 push 1
// 004f5b6c  b938fb8b00           mov ecx, 0x8bfb38
// 004f5b71  e82a6ff8ff           call 0x47caa0
// 004f5b76  a138fb8b00           mov eax, dword ptr [0x8bfb38]
// 004f5b7b  6a01                 push 1
// 004f5b7d  6a00                 push 0
// 004f5b7f  b944fb8b00           mov ecx, 0x8bfb44
// 004f5b84  c70001000000         mov dword ptr [eax], 1
// 004f5b8a  e8116ff8ff           call 0x47caa0
// 004f5b8f  c3                   ret 
// library rbxgs-render/Mesh.cpp (function ?initStatics@Mesh@Render@RBX@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
