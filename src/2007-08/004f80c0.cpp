// roc 2007-08 004f80c0  unit: G3D::Sphere  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f80c0
//
// 004f80c0  51                   push ecx
// 004f80c1  8b4904               mov ecx, dword ptr [ecx + 4]
// 004f80c4  85c9                 test ecx, ecx
// 004f80c6  c7042400000000       mov dword ptr [esp], 0
// 004f80cd  750a                 jne 0x4f80d9
// 004f80cf  8b442408             mov eax, dword ptr [esp + 8]
// 004f80d3  8908                 mov dword ptr [eax], ecx
// 004f80d5  59                   pop ecx
// 004f80d6  c20800               ret 8
// 004f80d9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004f80dd  8b01                 mov eax, dword ptr [ecx]
// 004f80df  8b400c               mov eax, dword ptr [eax + 0xc]
// 004f80e2  56                   push esi
// 004f80e3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f80e7  52                   push edx
// 004f80e8  56                   push esi
// 004f80e9  ffd0                 call eax
// 004f80eb  8bc6                 mov eax, esi
// 004f80ed  5e                   pop esi
// 004f80ee  59                   pop ecx
// 004f80ef  c20800               ret 8
// library rbxgs-render/RenderScene.cpp (function ?matte@Level@Material@Render@RBX@@QBE?AV?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@PAVRenderDevice@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
