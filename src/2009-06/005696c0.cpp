// roc 2009-06 005696c0  unit: RBX::RbxG3D::RenderScene  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005696c0
//
// 005696c0  53                   push ebx
// 005696c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005696c5  8b4304               mov eax, dword ptr [ebx + 4]
// 005696c8  55                   push ebp
// 005696c9  57                   push edi
// 005696ca  6a01                 push 1
// 005696cc  50                   push eax
// 005696cd  8bf9                 mov edi, ecx
// 005696cf  e87cc9ffff           call 0x566050
// 005696d4  33ed                 xor ebp, ebp
// 005696d6  396f04               cmp dword ptr [edi + 4], ebp
// 005696d9  7e7f                 jle 0x56975a
// 005696db  56                   push esi
// 005696dc  33f6                 xor esi, esi
// 005696de  8bff                 mov edi, edi
// 005696e0  8b03                 mov eax, dword ptr [ebx]
// 005696e2  8b0f                 mov ecx, dword ptr [edi]
// 005696e4  d90430               fld dword ptr [eax + esi]
// 005696e7  d91c31               fstp dword ptr [ecx + esi]
// 005696ea  03c6                 add eax, esi
// 005696ec  d94004               fld dword ptr [eax + 4]
// 005696ef  03ce                 add ecx, esi
// 005696f1  d95904               fstp dword ptr [ecx + 4]
// 005696f4  45                   inc ebp
// 005696f5  d94008               fld dword ptr [eax + 8]
// 005696f8  83c650               add esi, 0x50
// 005696fb  d95908               fstp dword ptr [ecx + 8]
// 005696fe  d9400c               fld dword ptr [eax + 0xc]
// 00569701  d9590c               fstp dword ptr [ecx + 0xc]
// 00569704  d94010               fld dword ptr [eax + 0x10]
// 00569707  d95910               fstp dword ptr [ecx + 0x10]
// 0056970a  d94014               fld dword ptr [eax + 0x14]
// 0056970d  d95914               fstp dword ptr [ecx + 0x14]
// 00569710  d94018               fld dword ptr [eax + 0x18]
// 00569713  d95918               fstp dword ptr [ecx + 0x18]
// 00569716  dd4020               fld qword ptr [eax + 0x20]
// 00569719  dd5920               fstp qword ptr [ecx + 0x20]
// 0056971c  dd4028               fld qword ptr [eax + 0x28]
// 0056971f  dd5928               fstp qword ptr [ecx + 0x28]
// 00569722  dd4030               fld qword ptr [eax + 0x30]
// 00569725  dd5930               fstp qword ptr [ecx + 0x30]
// 00569728  dd4038               fld qword ptr [eax + 0x38]
// 0056972b  dd5938               fstp qword ptr [ecx + 0x38]
// 0056972e  d94040               fld dword ptr [eax + 0x40]
// 00569731  d95940               fstp dword ptr [ecx + 0x40]
// 00569734  d94044               fld dword ptr [eax + 0x44]
// 00569737  d95944               fstp dword ptr [ecx + 0x44]
// 0056973a  d94048               fld dword ptr [eax + 0x48]
// 0056973d  d95948               fstp dword ptr [ecx + 0x48]
// 00569740  0fb6504c             movzx edx, byte ptr [eax + 0x4c]
// 00569744  88514c               mov byte ptr [ecx + 0x4c], dl
// 00569747  0fb6504d             movzx edx, byte ptr [eax + 0x4d]
// 0056974b  88514d               mov byte ptr [ecx + 0x4d], dl
// 0056974e  8a404e               mov al, byte ptr [eax + 0x4e]
// 00569751  88414e               mov byte ptr [ecx + 0x4e], al
// 00569754  3b6f04               cmp ebp, dword ptr [edi + 4]
// 00569757  7c87                 jl 0x5696e0
// 00569759  5e                   pop esi
// 0056975a  8bc7                 mov eax, edi
// 0056975c  5f                   pop edi
// 0056975d  5d                   pop ebp
// 0056975e  5b                   pop ebx
// 0056975f  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??4?$Array@VGLight@G3D@@@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
