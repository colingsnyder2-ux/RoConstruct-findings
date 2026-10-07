// roc 2007-08 004d04e0  unit: RBX::View::PartChunk  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d04e0
//
// 004d04e0  8b442404             mov eax, dword ptr [esp + 4]
// 004d04e4  56                   push esi
// 004d04e5  50                   push eax
// 004d04e6  8bf1                 mov esi, ecx
// 004d04e8  e8834afaff           call 0x474f70
// 004d04ed  8bc6                 mov eax, esi
// 004d04ef  5e                   pop esi
// 004d04f0  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??0Vector3@G3D@@QAE@AAVTextInput@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
