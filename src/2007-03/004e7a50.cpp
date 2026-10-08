// roc 2007-03 004e7a50  unit: seg_004e0000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e7a50
//
// 004e7a50  8b542408             mov edx, dword ptr [esp + 8]
// 004e7a54  8b0d08a08b00         mov ecx, dword ptr [0x8ba008]
// 004e7a5a  8b442404             mov eax, dword ptr [esp + 4]
// 004e7a5e  011481               add dword ptr [ecx + eax*4], edx
// 004e7a61  0115949f8b00         add dword ptr [0x8b9f94], edx
// 004e7a67  c3                   ret 
// library rbxgs-render/Mesh.cpp (function ?allocVertex@Mesh@Render@RBX@@SAIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
