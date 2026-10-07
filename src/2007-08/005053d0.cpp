// roc 2007-08 005053d0  unit: G3D::Log  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005053d0
//
// 005053d0  8b442404             mov eax, dword ptr [esp + 4]
// 005053d4  56                   push esi
// 005053d5  50                   push eax
// 005053d6  8bf1                 mov esi, ecx
// 005053d8  e873ffffff           call 0x505350
// 005053dd  8bc6                 mov eax, esi
// 005053df  5e                   pop esi
// 005053e0  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??0Vector3@G3D@@QAE@AAVTextInput@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
