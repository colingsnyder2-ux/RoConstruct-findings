// roc 2007-08 004f40d0  unit: boost::bad_lexical_cast  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f40d0
//
// 004f40d0  8b542408             mov edx, dword ptr [esp + 8]
// 004f40d4  8b0d38fb8b00         mov ecx, dword ptr [0x8bfb38]
// 004f40da  8b442404             mov eax, dword ptr [esp + 4]
// 004f40de  011481               add dword ptr [ecx + eax*4], edx
// 004f40e1  0115c4fa8b00         add dword ptr [0x8bfac4], edx
// 004f40e7  c3                   ret 
// library rbxgs-render/Mesh.cpp (function ?allocVertex@Mesh@Render@RBX@@SAIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
