// roc 2009-12 005e86b0  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e86b0
//
// 005e86b0  53                   push ebx
// 005e86b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005e86b5  8b4304               mov eax, dword ptr [ebx + 4]
// 005e86b8  55                   push ebp
// 005e86b9  57                   push edi
// 005e86ba  6a01                 push 1
// 005e86bc  50                   push eax
// 005e86bd  8bf9                 mov edi, ecx
// 005e86bf  e88c83ffff           call 0x5e0a50
// 005e86c4  33ed                 xor ebp, ebp
// 005e86c6  396f04               cmp dword ptr [edi + 4], ebp
// 005e86c9  7e7f                 jle 0x5e874a
// 005e86cb  56                   push esi
// 005e86cc  33f6                 xor esi, esi
// 005e86ce  8bff                 mov edi, edi
// 005e86d0  8b03                 mov eax, dword ptr [ebx]
// 005e86d2  8b0f                 mov ecx, dword ptr [edi]
// 005e86d4  d90430               fld dword ptr [eax + esi]
// 005e86d7  d91c31               fstp dword ptr [ecx + esi]
// 005e86da  03c6                 add eax, esi
// 005e86dc  d94004               fld dword ptr [eax + 4]
// 005e86df  03ce                 add ecx, esi
// 005e86e1  d95904               fstp dword ptr [ecx + 4]
// 005e86e4  45                   inc ebp
// 005e86e5  d94008               fld dword ptr [eax + 8]
// 005e86e8  83c650               add esi, 0x50
// 005e86eb  d95908               fstp dword ptr [ecx + 8]
// 005e86ee  d9400c               fld dword ptr [eax + 0xc]
// 005e86f1  d9590c               fstp dword ptr [ecx + 0xc]
// 005e86f4  d94010               fld dword ptr [eax + 0x10]
// 005e86f7  d95910               fstp dword ptr [ecx + 0x10]
// 005e86fa  d94014               fld dword ptr [eax + 0x14]
// 005e86fd  d95914               fstp dword ptr [ecx + 0x14]
// 005e8700  d94018               fld dword ptr [eax + 0x18]
// 005e8703  d95918               fstp dword ptr [ecx + 0x18]
// 005e8706  dd4020               fld qword ptr [eax + 0x20]
// 005e8709  dd5920               fstp qword ptr [ecx + 0x20]
// 005e870c  dd4028               fld qword ptr [eax + 0x28]
// 005e870f  dd5928               fstp qword ptr [ecx + 0x28]
// 005e8712  dd4030               fld qword ptr [eax + 0x30]
// 005e8715  dd5930               fstp qword ptr [ecx + 0x30]
// 005e8718  dd4038               fld qword ptr [eax + 0x38]
// 005e871b  dd5938               fstp qword ptr [ecx + 0x38]
// 005e871e  d94040               fld dword ptr [eax + 0x40]
// 005e8721  d95940               fstp dword ptr [ecx + 0x40]
// 005e8724  d94044               fld dword ptr [eax + 0x44]
// 005e8727  d95944               fstp dword ptr [ecx + 0x44]
// 005e872a  d94048               fld dword ptr [eax + 0x48]
// 005e872d  d95948               fstp dword ptr [ecx + 0x48]
// 005e8730  0fb6504c             movzx edx, byte ptr [eax + 0x4c]
// 005e8734  88514c               mov byte ptr [ecx + 0x4c], dl
// 005e8737  0fb6504d             movzx edx, byte ptr [eax + 0x4d]
// 005e873b  88514d               mov byte ptr [ecx + 0x4d], dl
// 005e873e  8a404e               mov al, byte ptr [eax + 0x4e]
// 005e8741  88414e               mov byte ptr [ecx + 0x4e], al
// 005e8744  3b6f04               cmp ebp, dword ptr [edi + 4]
// 005e8747  7c87                 jl 0x5e86d0
// 005e8749  5e                   pop esi
// 005e874a  8bc7                 mov eax, edi
// 005e874c  5f                   pop edi
// 005e874d  5d                   pop ebp
// 005e874e  5b                   pop ebx
// 005e874f  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??4?$Array@VGLight@G3D@@@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
