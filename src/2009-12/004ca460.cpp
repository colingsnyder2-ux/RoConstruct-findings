// roc 2009-12 004ca460  unit: G3D::VARArea  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ca460
//
// 004ca460  83ec10               sub esp, 0x10
// 004ca463  dd44241c             fld qword ptr [esp + 0x1c]
// 004ca467  56                   push esi
// 004ca468  dc442430             fadd qword ptr [esp + 0x30]
// 004ca46c  57                   push edi
// 004ca46d  dd5c2410             fstp qword ptr [esp + 0x10]
// 004ca471  dd442410             fld qword ptr [esp + 0x10]
// 004ca475  db5c2434             fistp dword ptr [esp + 0x34]
// 004ca479  8b442434             mov eax, dword ptr [esp + 0x34]
// 004ca47d  dd442424             fld qword ptr [esp + 0x24]
// 004ca481  db5c2408             fistp dword ptr [esp + 8]
// 004ca485  dd44241c             fld qword ptr [esp + 0x1c]
// 004ca489  dc44242c             fadd qword ptr [esp + 0x2c]
// 004ca48d  8b542408             mov edx, dword ptr [esp + 8]
// 004ca491  dd5c2410             fstp qword ptr [esp + 0x10]
// 004ca495  dd442410             fld qword ptr [esp + 0x10]
// 004ca499  db5c242c             fistp dword ptr [esp + 0x2c]
// 004ca49d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004ca4a1  dd44241c             fld qword ptr [esp + 0x1c]
// 004ca4a5  db5c240c             fistp dword ptr [esp + 0xc]
// 004ca4a9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ca4ad  dd442424             fld qword ptr [esp + 0x24]
// 004ca4b1  db5c2410             fistp dword ptr [esp + 0x10]
// 004ca4b5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004ca4b9  dd44241c             fld qword ptr [esp + 0x1c]
// 004ca4bd  db5c2424             fistp dword ptr [esp + 0x24]
// 004ca4c1  2bc2                 sub eax, edx
// 004ca4c3  50                   push eax
// 004ca4c4  8b442428             mov eax, dword ptr [esp + 0x28]
// 004ca4c8  2bce                 sub ecx, esi
// 004ca4ca  51                   push ecx
// 004ca4cb  57                   push edi
// 004ca4cc  50                   push eax
// 004ca4cd  ff15a8bb9800         call dword ptr [0x98bba8]
// 004ca4d3  5f                   pop edi
// 004ca4d4  5e                   pop esi
// 004ca4d5  83c410               add esp, 0x10
// 004ca4d8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?_glViewport@G3D@@YAXNNNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
