// roc 2008-06 00507d20  unit: G3D::Shader  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507d20
//
// 00507d20  8b442404             mov eax, dword ptr [esp + 4]
// 00507d24  85c0                 test eax, eax
// 00507d26  740f                 je 0x507d37
// 00507d28  8b40fc               mov eax, dword ptr [eax - 4]
// 00507d2b  8b0d14359700         mov ecx, dword ptr [0x973514]
// 00507d31  50                   push eax
// 00507d32  e8c9feffff           call 0x507c00
// 00507d37  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?alignedFree@System@G3D@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
