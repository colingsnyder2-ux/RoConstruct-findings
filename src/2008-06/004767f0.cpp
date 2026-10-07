// roc 2008-06 004767f0  unit: G3D::VARArea  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004767f0
//
// 004767f0  83ec10               sub esp, 0x10
// 004767f3  dd44241c             fld qword ptr [esp + 0x1c]
// 004767f7  56                   push esi
// 004767f8  dc442430             fadd qword ptr [esp + 0x30]
// 004767fc  57                   push edi
// 004767fd  dd5c2410             fstp qword ptr [esp + 0x10]
// 00476801  dd442410             fld qword ptr [esp + 0x10]
// 00476805  db5c2434             fistp dword ptr [esp + 0x34]
// 00476809  8b442434             mov eax, dword ptr [esp + 0x34]
// 0047680d  dd442424             fld qword ptr [esp + 0x24]
// 00476811  db5c2408             fistp dword ptr [esp + 8]
// 00476815  dd44241c             fld qword ptr [esp + 0x1c]
// 00476819  dc44242c             fadd qword ptr [esp + 0x2c]
// 0047681d  8b542408             mov edx, dword ptr [esp + 8]
// 00476821  dd5c2410             fstp qword ptr [esp + 0x10]
// 00476825  dd442410             fld qword ptr [esp + 0x10]
// 00476829  db5c242c             fistp dword ptr [esp + 0x2c]
// 0047682d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00476831  dd44241c             fld qword ptr [esp + 0x1c]
// 00476835  db5c240c             fistp dword ptr [esp + 0xc]
// 00476839  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047683d  dd442424             fld qword ptr [esp + 0x24]
// 00476841  db5c2410             fistp dword ptr [esp + 0x10]
// 00476845  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00476849  dd44241c             fld qword ptr [esp + 0x1c]
// 0047684d  db5c2424             fistp dword ptr [esp + 0x24]
// 00476851  2bc2                 sub eax, edx
// 00476853  50                   push eax
// 00476854  8b442428             mov eax, dword ptr [esp + 0x28]
// 00476858  2bce                 sub ecx, esi
// 0047685a  51                   push ecx
// 0047685b  57                   push edi
// 0047685c  50                   push eax
// 0047685d  ff15e0298000         call dword ptr [0x8029e0]
// 00476863  5f                   pop edi
// 00476864  5e                   pop esi
// 00476865  83c410               add esp, 0x10
// 00476868  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?_glViewport@G3D@@YAXNNNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
