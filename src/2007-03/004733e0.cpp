// roc 2007-03 004733e0  unit: seg_00470000  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004733e0
//
// 004733e0  83ec10               sub esp, 0x10
// 004733e3  dd44241c             fld qword ptr [esp + 0x1c]
// 004733e7  56                   push esi
// 004733e8  dc442430             fadd qword ptr [esp + 0x30]
// 004733ec  57                   push edi
// 004733ed  dd5c2410             fstp qword ptr [esp + 0x10]
// 004733f1  dd442410             fld qword ptr [esp + 0x10]
// 004733f5  db5c2434             fistp dword ptr [esp + 0x34]
// 004733f9  8b442434             mov eax, dword ptr [esp + 0x34]
// 004733fd  dd442424             fld qword ptr [esp + 0x24]
// 00473401  db5c2408             fistp dword ptr [esp + 8]
// 00473405  dd44241c             fld qword ptr [esp + 0x1c]
// 00473409  dc44242c             fadd qword ptr [esp + 0x2c]
// 0047340d  8b542408             mov edx, dword ptr [esp + 8]
// 00473411  dd5c2410             fstp qword ptr [esp + 0x10]
// 00473415  dd442410             fld qword ptr [esp + 0x10]
// 00473419  db5c242c             fistp dword ptr [esp + 0x2c]
// 0047341d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00473421  dd44241c             fld qword ptr [esp + 0x1c]
// 00473425  db5c240c             fistp dword ptr [esp + 0xc]
// 00473429  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047342d  dd442424             fld qword ptr [esp + 0x24]
// 00473431  db5c2410             fistp dword ptr [esp + 0x10]
// 00473435  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00473439  dd44241c             fld qword ptr [esp + 0x1c]
// 0047343d  db5c2424             fistp dword ptr [esp + 0x24]
// 00473441  2bc2                 sub eax, edx
// 00473443  50                   push eax
// 00473444  8b442428             mov eax, dword ptr [esp + 0x28]
// 00473448  2bce                 sub ecx, esi
// 0047344a  51                   push ecx
// 0047344b  57                   push edi
// 0047344c  50                   push eax
// 0047344d  ff15c0eb7700         call dword ptr [0x77ebc0]
// 00473453  5f                   pop edi
// 00473454  5e                   pop esi
// 00473455  83c410               add esp, 0x10
// 00473458  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?_glViewport@G3D@@YAXNNNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
