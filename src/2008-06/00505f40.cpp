// roc 2008-06 00505f40  unit: RBX::Render::RenderScene  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505f40
//
// 00505f40  53                   push ebx
// 00505f41  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00505f45  8b4304               mov eax, dword ptr [ebx + 4]
// 00505f48  55                   push ebp
// 00505f49  57                   push edi
// 00505f4a  6a01                 push 1
// 00505f4c  50                   push eax
// 00505f4d  8bf9                 mov edi, ecx
// 00505f4f  e87cc7ffff           call 0x5026d0
// 00505f54  33ed                 xor ebp, ebp
// 00505f56  396f04               cmp dword ptr [edi + 4], ebp
// 00505f59  7e7f                 jle 0x505fda
// 00505f5b  56                   push esi
// 00505f5c  33f6                 xor esi, esi
// 00505f5e  8bff                 mov edi, edi
// 00505f60  8b03                 mov eax, dword ptr [ebx]
// 00505f62  8b0f                 mov ecx, dword ptr [edi]
// 00505f64  d90430               fld dword ptr [eax + esi]
// 00505f67  d91c31               fstp dword ptr [ecx + esi]
// 00505f6a  03c6                 add eax, esi
// 00505f6c  d94004               fld dword ptr [eax + 4]
// 00505f6f  03ce                 add ecx, esi
// 00505f71  d95904               fstp dword ptr [ecx + 4]
// 00505f74  45                   inc ebp
// 00505f75  d94008               fld dword ptr [eax + 8]
// 00505f78  83c650               add esi, 0x50
// 00505f7b  d95908               fstp dword ptr [ecx + 8]
// 00505f7e  d9400c               fld dword ptr [eax + 0xc]
// 00505f81  d9590c               fstp dword ptr [ecx + 0xc]
// 00505f84  d94010               fld dword ptr [eax + 0x10]
// 00505f87  d95910               fstp dword ptr [ecx + 0x10]
// 00505f8a  d94014               fld dword ptr [eax + 0x14]
// 00505f8d  d95914               fstp dword ptr [ecx + 0x14]
// 00505f90  d94018               fld dword ptr [eax + 0x18]
// 00505f93  d95918               fstp dword ptr [ecx + 0x18]
// 00505f96  dd4020               fld qword ptr [eax + 0x20]
// 00505f99  dd5920               fstp qword ptr [ecx + 0x20]
// 00505f9c  dd4028               fld qword ptr [eax + 0x28]
// 00505f9f  dd5928               fstp qword ptr [ecx + 0x28]
// 00505fa2  dd4030               fld qword ptr [eax + 0x30]
// 00505fa5  dd5930               fstp qword ptr [ecx + 0x30]
// 00505fa8  dd4038               fld qword ptr [eax + 0x38]
// 00505fab  dd5938               fstp qword ptr [ecx + 0x38]
// 00505fae  d94040               fld dword ptr [eax + 0x40]
// 00505fb1  d95940               fstp dword ptr [ecx + 0x40]
// 00505fb4  d94044               fld dword ptr [eax + 0x44]
// 00505fb7  d95944               fstp dword ptr [ecx + 0x44]
// 00505fba  d94048               fld dword ptr [eax + 0x48]
// 00505fbd  d95948               fstp dword ptr [ecx + 0x48]
// 00505fc0  0fb6504c             movzx edx, byte ptr [eax + 0x4c]
// 00505fc4  88514c               mov byte ptr [ecx + 0x4c], dl
// 00505fc7  0fb6504d             movzx edx, byte ptr [eax + 0x4d]
// 00505fcb  88514d               mov byte ptr [ecx + 0x4d], dl
// 00505fce  8a404e               mov al, byte ptr [eax + 0x4e]
// 00505fd1  88414e               mov byte ptr [ecx + 0x4e], al
// 00505fd4  3b6f04               cmp ebp, dword ptr [edi + 4]
// 00505fd7  7c87                 jl 0x505f60
// 00505fd9  5e                   pop esi
// 00505fda  8bc7                 mov eax, edi
// 00505fdc  5f                   pop edi
// 00505fdd  5d                   pop ebp
// 00505fde  5b                   pop ebx
// 00505fdf  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??4?$Array@VGLight@G3D@@@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
