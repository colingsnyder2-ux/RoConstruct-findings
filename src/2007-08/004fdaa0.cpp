// roc 2007-08 004fdaa0  unit: RBX::Render::AggregateChunk  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fdaa0
//
// 004fdaa0  53                   push ebx
// 004fdaa1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004fdaa5  8b4304               mov eax, dword ptr [ebx + 4]
// 004fdaa8  55                   push ebp
// 004fdaa9  57                   push edi
// 004fdaaa  6a01                 push 1
// 004fdaac  50                   push eax
// 004fdaad  8bf9                 mov edi, ecx
// 004fdaaf  e81ca3ffff           call 0x4f7dd0
// 004fdab4  33ed                 xor ebp, ebp
// 004fdab6  396f04               cmp dword ptr [edi + 4], ebp
// 004fdab9  0f8e7f000000         jle 0x4fdb3e
// 004fdabf  56                   push esi
// 004fdac0  33f6                 xor esi, esi
// 004fdac2  8b03                 mov eax, dword ptr [ebx]
// 004fdac4  8b0f                 mov ecx, dword ptr [edi]
// 004fdac6  d90430               fld dword ptr [eax + esi]
// 004fdac9  d91c31               fstp dword ptr [ecx + esi]
// 004fdacc  03c6                 add eax, esi
// 004fdace  d94004               fld dword ptr [eax + 4]
// 004fdad1  03ce                 add ecx, esi
// 004fdad3  d95904               fstp dword ptr [ecx + 4]
// 004fdad6  83c501               add ebp, 1
// 004fdad9  d94008               fld dword ptr [eax + 8]
// 004fdadc  83c650               add esi, 0x50
// 004fdadf  d95908               fstp dword ptr [ecx + 8]
// 004fdae2  d9400c               fld dword ptr [eax + 0xc]
// 004fdae5  d9590c               fstp dword ptr [ecx + 0xc]
// 004fdae8  d94010               fld dword ptr [eax + 0x10]
// 004fdaeb  d95910               fstp dword ptr [ecx + 0x10]
// 004fdaee  d94014               fld dword ptr [eax + 0x14]
// 004fdaf1  d95914               fstp dword ptr [ecx + 0x14]
// 004fdaf4  d94018               fld dword ptr [eax + 0x18]
// 004fdaf7  d95918               fstp dword ptr [ecx + 0x18]
// 004fdafa  dd4020               fld qword ptr [eax + 0x20]
// 004fdafd  dd5920               fstp qword ptr [ecx + 0x20]
// 004fdb00  dd4028               fld qword ptr [eax + 0x28]
// 004fdb03  dd5928               fstp qword ptr [ecx + 0x28]
// 004fdb06  dd4030               fld qword ptr [eax + 0x30]
// 004fdb09  dd5930               fstp qword ptr [ecx + 0x30]
// 004fdb0c  dd4038               fld qword ptr [eax + 0x38]
// 004fdb0f  dd5938               fstp qword ptr [ecx + 0x38]
// 004fdb12  d94040               fld dword ptr [eax + 0x40]
// 004fdb15  d95940               fstp dword ptr [ecx + 0x40]
// 004fdb18  d94044               fld dword ptr [eax + 0x44]
// 004fdb1b  d95944               fstp dword ptr [ecx + 0x44]
// 004fdb1e  d94048               fld dword ptr [eax + 0x48]
// 004fdb21  d95948               fstp dword ptr [ecx + 0x48]
// 004fdb24  0fb6504c             movzx edx, byte ptr [eax + 0x4c]
// 004fdb28  88514c               mov byte ptr [ecx + 0x4c], dl
// 004fdb2b  0fb6504d             movzx edx, byte ptr [eax + 0x4d]
// 004fdb2f  88514d               mov byte ptr [ecx + 0x4d], dl
// 004fdb32  8a404e               mov al, byte ptr [eax + 0x4e]
// 004fdb35  88414e               mov byte ptr [ecx + 0x4e], al
// 004fdb38  3b6f04               cmp ebp, dword ptr [edi + 4]
// 004fdb3b  7c85                 jl 0x4fdac2
// 004fdb3d  5e                   pop esi
// 004fdb3e  8bc7                 mov eax, edi
// 004fdb40  5f                   pop edi
// 004fdb41  5d                   pop ebp
// 004fdb42  5b                   pop ebx
// 004fdb43  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??4?$Array@VGLight@G3D@@@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
