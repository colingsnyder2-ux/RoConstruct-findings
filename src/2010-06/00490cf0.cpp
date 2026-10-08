// from server: 100% by auto
// roc 2010-06 00490cf0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00490cf0
//
// 00490cf0  83ec10               sub esp, 0x10
// 00490cf3  dd44241c             fld qword ptr [esp + 0x1c]
// 00490cf7  56                   push esi
// 00490cf8  dc442430             fadd qword ptr [esp + 0x30]
// 00490cfc  57                   push edi
// 00490cfd  dd5c2410             fstp qword ptr [esp + 0x10]
// 00490d01  dd442410             fld qword ptr [esp + 0x10]
// 00490d05  db5c2434             fistp dword ptr [esp + 0x34]
// 00490d09  8b442434             mov eax, dword ptr [esp + 0x34]
// 00490d0d  dd442424             fld qword ptr [esp + 0x24]
// 00490d11  db5c2408             fistp dword ptr [esp + 8]
// 00490d15  dd44241c             fld qword ptr [esp + 0x1c]
// 00490d19  dc44242c             fadd qword ptr [esp + 0x2c]
// 00490d1d  8b542408             mov edx, dword ptr [esp + 8]
// 00490d21  dd5c2410             fstp qword ptr [esp + 0x10]
// 00490d25  dd442410             fld qword ptr [esp + 0x10]
// 00490d29  db5c242c             fistp dword ptr [esp + 0x2c]
// 00490d2d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00490d31  dd44241c             fld qword ptr [esp + 0x1c]
// 00490d35  db5c240c             fistp dword ptr [esp + 0xc]
// 00490d39  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00490d3d  dd442424             fld qword ptr [esp + 0x24]
// 00490d41  db5c2410             fistp dword ptr [esp + 0x10]
// 00490d45  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00490d49  dd44241c             fld qword ptr [esp + 0x1c]
// 00490d4d  db5c2424             fistp dword ptr [esp + 0x24]
// 00490d51  2bc2                 sub eax, edx
// 00490d53  50                   push eax
// 00490d54  8b442428             mov eax, dword ptr [esp + 0x28]
// 00490d58  2bce                 sub ecx, esi
// 00490d5a  51                   push ecx
// 00490d5b  57                   push edi
// 00490d5c  50                   push eax
// 00490d5d  ff1570ab9e00         call dword ptr [0x9eab70]
// 00490d63  5f                   pop edi
// 00490d64  5e                   pop esi
// 00490d65  83c410               add esp, 0x10
// 00490d68  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?_glViewport@G3D@@YAXNNNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
