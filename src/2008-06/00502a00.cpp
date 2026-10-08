// roc 2008-06 00502a00  unit: G3D::Sphere  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00502a00
//
// 00502a00  51                   push ecx
// 00502a01  83792400             cmp dword ptr [ecx + 0x24], 0
// 00502a05  56                   push esi
// 00502a06  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00502a0a  c744240400000000     mov dword ptr [esp + 4], 0
// 00502a12  c70600000000         mov dword ptr [esi], 0
// 00502a18  7512                 jne 0x502a2c
// 00502a1a  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00502a1d  50                   push eax
// 00502a1e  8bce                 mov ecx, esi
// 00502a20  e87b650900           call 0x598fa0
// 00502a25  8bc6                 mov eax, esi
// 00502a27  5e                   pop esi
// 00502a28  59                   pop ecx
// 00502a29  c20400               ret 4
// 00502a2c  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00502a2f  51                   push ecx
// 00502a30  8bce                 mov ecx, esi
// 00502a32  e869650900           call 0x598fa0
// 00502a37  8bc6                 mov eax, esi
// 00502a39  5e                   pop esi
// 00502a3a  59                   pop ecx
// 00502a3b  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?getEnvironmentMap@Sky@G3D@@QBE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
