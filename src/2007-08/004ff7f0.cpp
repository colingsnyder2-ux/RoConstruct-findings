// from server: 100% by auto
// roc 2007-08 004ff7f0  unit: G3D::Shader  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff7f0
//
// 004ff7f0  8b442404             mov eax, dword ptr [esp + 4]
// 004ff7f4  8b0dac088c00         mov ecx, dword ptr [0x8c08ac]
// 004ff7fa  50                   push eax
// 004ff7fb  e8f0feffff           call 0x4ff6f0
// 004ff800  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?free@System@G3D@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
