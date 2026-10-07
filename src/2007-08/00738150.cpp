// roc 2007-08 00738150  unit: G3D::GFont  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00738150
//
// 00738150  56                   push esi
// 00738151  57                   push edi
// 00738152  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00738156  d907                 fld dword ptr [edi]
// 00738158  83ec08               sub esp, 8
// 0073815b  dc05485b7900         fadd qword ptr [0x795b48]
// 00738161  8bf1                 mov esi, ecx
// 00738163  dd1c24               fstp qword ptr [esp]
// 00738166  e8bd8fefff           call 0x631128
// 0073816b  e8f08befff           call 0x630d60
// 00738170  668906               mov word ptr [esi], ax
// 00738173  d94704               fld dword ptr [edi + 4]
// 00738176  dc05485b7900         fadd qword ptr [0x795b48]
// 0073817c  dd1c24               fstp qword ptr [esp]
// 0073817f  e8a48fefff           call 0x631128
// 00738184  e8d78befff           call 0x630d60
// 00738189  66894602             mov word ptr [esi + 2], ax
// 0073818d  d94708               fld dword ptr [edi + 8]
// 00738190  dc05485b7900         fadd qword ptr [0x795b48]
// 00738196  dd1c24               fstp qword ptr [esp]
// 00738199  e88a8fefff           call 0x631128
// 0073819e  83c408               add esp, 8
// 007381a1  e8ba8befff           call 0x630d60
// 007381a6  66894604             mov word ptr [esi + 4], ax
// 007381aa  5f                   pop edi
// 007381ab  8bc6                 mov eax, esi
// 007381ad  5e                   pop esi
// 007381ae  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3int16.cpp (function ??0Vector3int16@G3D@@QAE@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3int16.cpp
