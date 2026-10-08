// from server: 100% by auto
// roc 2009-06 0049de60  unit: G3D::VARArea  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049de60
//
// 0049de60  83ec10               sub esp, 0x10
// 0049de63  dd44241c             fld qword ptr [esp + 0x1c]
// 0049de67  56                   push esi
// 0049de68  dc442430             fadd qword ptr [esp + 0x30]
// 0049de6c  57                   push edi
// 0049de6d  dd5c2410             fstp qword ptr [esp + 0x10]
// 0049de71  dd442410             fld qword ptr [esp + 0x10]
// 0049de75  db5c2434             fistp dword ptr [esp + 0x34]
// 0049de79  8b442434             mov eax, dword ptr [esp + 0x34]
// 0049de7d  dd442424             fld qword ptr [esp + 0x24]
// 0049de81  db5c2408             fistp dword ptr [esp + 8]
// 0049de85  dd44241c             fld qword ptr [esp + 0x1c]
// 0049de89  dc44242c             fadd qword ptr [esp + 0x2c]
// 0049de8d  8b542408             mov edx, dword ptr [esp + 8]
// 0049de91  dd5c2410             fstp qword ptr [esp + 0x10]
// 0049de95  dd442410             fld qword ptr [esp + 0x10]
// 0049de99  db5c242c             fistp dword ptr [esp + 0x2c]
// 0049de9d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0049dea1  dd44241c             fld qword ptr [esp + 0x1c]
// 0049dea5  db5c240c             fistp dword ptr [esp + 0xc]
// 0049dea9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0049dead  dd442424             fld qword ptr [esp + 0x24]
// 0049deb1  db5c2410             fistp dword ptr [esp + 0x10]
// 0049deb5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0049deb9  dd44241c             fld qword ptr [esp + 0x1c]
// 0049debd  db5c2424             fistp dword ptr [esp + 0x24]
// 0049dec1  2bc2                 sub eax, edx
// 0049dec3  50                   push eax
// 0049dec4  8b442428             mov eax, dword ptr [esp + 0x28]
// 0049dec8  2bce                 sub ecx, esi
// 0049deca  51                   push ecx
// 0049decb  57                   push edi
// 0049decc  50                   push eax
// 0049decd  ff1584eb8900         call dword ptr [0x89eb84]
// 0049ded3  5f                   pop edi
// 0049ded4  5e                   pop esi
// 0049ded5  83c410               add esp, 0x10
// 0049ded8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?_glViewport@G3D@@YAXNNNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
