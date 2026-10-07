// roc 2007-08 004732f0  unit: G3D::VARArea  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004732f0
//
// 004732f0  83ec10               sub esp, 0x10
// 004732f3  dd44241c             fld qword ptr [esp + 0x1c]
// 004732f7  56                   push esi
// 004732f8  dc442430             fadd qword ptr [esp + 0x30]
// 004732fc  57                   push edi
// 004732fd  dd5c2410             fstp qword ptr [esp + 0x10]
// 00473301  dd442410             fld qword ptr [esp + 0x10]
// 00473305  db5c2434             fistp dword ptr [esp + 0x34]
// 00473309  8b442434             mov eax, dword ptr [esp + 0x34]
// 0047330d  dd442424             fld qword ptr [esp + 0x24]
// 00473311  db5c2408             fistp dword ptr [esp + 8]
// 00473315  dd44241c             fld qword ptr [esp + 0x1c]
// 00473319  dc44242c             fadd qword ptr [esp + 0x2c]
// 0047331d  8b542408             mov edx, dword ptr [esp + 8]
// 00473321  dd5c2410             fstp qword ptr [esp + 0x10]
// 00473325  dd442410             fld qword ptr [esp + 0x10]
// 00473329  db5c242c             fistp dword ptr [esp + 0x2c]
// 0047332d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00473331  dd44241c             fld qword ptr [esp + 0x1c]
// 00473335  db5c240c             fistp dword ptr [esp + 0xc]
// 00473339  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047333d  dd442424             fld qword ptr [esp + 0x24]
// 00473341  db5c2410             fistp dword ptr [esp + 0x10]
// 00473345  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00473349  dd44241c             fld qword ptr [esp + 0x1c]
// 0047334d  db5c2424             fistp dword ptr [esp + 0x24]
// 00473351  2bc2                 sub eax, edx
// 00473353  50                   push eax
// 00473354  8b442428             mov eax, dword ptr [esp + 0x28]
// 00473358  2bce                 sub ecx, esi
// 0047335a  51                   push ecx
// 0047335b  57                   push edi
// 0047335c  50                   push eax
// 0047335d  ff15fcea7700         call dword ptr [0x77eafc]
// 00473363  5f                   pop edi
// 00473364  5e                   pop esi
// 00473365  83c410               add esp, 0x10
// 00473368  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?_glViewport@G3D@@YAXNNNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
