// roc 2007-08 004f8080  unit: G3D::Sphere  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f8080
//
// 004f8080  51                   push ecx
// 004f8081  8b4908               mov ecx, dword ptr [ecx + 8]
// 004f8084  85c9                 test ecx, ecx
// 004f8086  c7042400000000       mov dword ptr [esp], 0
// 004f808d  750a                 jne 0x4f8099
// 004f808f  8b442408             mov eax, dword ptr [esp + 8]
// 004f8093  8908                 mov dword ptr [eax], ecx
// 004f8095  59                   pop ecx
// 004f8096  c20800               ret 8
// 004f8099  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004f809d  8b01                 mov eax, dword ptr [ecx]
// 004f809f  8b400c               mov eax, dword ptr [eax + 0xc]
// 004f80a2  56                   push esi
// 004f80a3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f80a7  52                   push edx
// 004f80a8  56                   push esi
// 004f80a9  ffd0                 call eax
// 004f80ab  8bc6                 mov eax, esi
// 004f80ad  5e                   pop esi
// 004f80ae  59                   pop ecx
// 004f80af  c20800               ret 8
// library rbxgs-render/Material.cpp (function ?baseTexture@Level@Material@Render@RBX@@QBE?AV?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@PAVRenderDevice@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
