// from server: 100% by auto
// roc 2008-06 00507d00  unit: G3D::Shader  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507d00
//
// 00507d00  8b442404             mov eax, dword ptr [esp + 4]
// 00507d04  8b0d14359700         mov ecx, dword ptr [0x973514]
// 00507d0a  50                   push eax
// 00507d0b  e8f0feffff           call 0x507c00
// 00507d10  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?free@System@G3D@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
