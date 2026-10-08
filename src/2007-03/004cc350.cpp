// roc 2007-03 004cc350  unit: seg_004c0000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cc350
//
// 004cc350  6aff                 push -1
// 004cc352  6821d97400           push 0x74d921
// 004cc357  64a100000000         mov eax, dword ptr fs:[0]
// 004cc35d  50                   push eax
// 004cc35e  64892500000000       mov dword ptr fs:[0], esp
// 004cc365  83ec08               sub esp, 8
// 004cc368  c744240400000000     mov dword ptr [esp + 4], 0
// 004cc370  56                   push esi
// 004cc371  c744240400000000     mov dword ptr [esp + 4], 0
// 004cc379  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004cc37d  8b4904               mov ecx, dword ptr [ecx + 4]
// 004cc380  8d442404             lea eax, [esp + 4]
// 004cc384  50                   push eax
// 004cc385  8d542424             lea edx, [esp + 0x24]
// 004cc389  52                   push edx
// 004cc38a  56                   push esi
// 004cc38b  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004cc393  e808200200           call 0x4ee3a0
// 004cc398  8b442404             mov eax, dword ptr [esp + 4]
// 004cc39c  85c0                 test eax, eax
// 004cc39e  c744240801000000     mov dword ptr [esp + 8], 1
// 004cc3a6  c644241400           mov byte ptr [esp + 0x14], 0
// 004cc3ab  7427                 je 0x4cc3d4
// 004cc3ad  83c004               add eax, 4
// 004cc3b0  50                   push eax
// 004cc3b1  ff15a8d27700         call dword ptr [0x77d2a8]
// 004cc3b7  85c0                 test eax, eax
// 004cc3b9  7519                 jne 0x4cc3d4
// 004cc3bb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004cc3bf  e8fc6ff9ff           call 0x4633c0
// 004cc3c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004cc3c8  85c9                 test ecx, ecx
// 004cc3ca  7408                 je 0x4cc3d4
// 004cc3cc  8b01                 mov eax, dword ptr [ecx]
// 004cc3ce  8b10                 mov edx, dword ptr [eax]
// 004cc3d0  6a01                 push 1
// 004cc3d2  ffd2                 call edx
// 004cc3d4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cc3d8  8bc6                 mov eax, esi
// 004cc3da  5e                   pop esi
// 004cc3db  64890d00000000       mov dword ptr fs:[0], ecx
// 004cc3e2  83c414               add esp, 0x14
// 004cc3e5  c21000               ret 0x10
// library rbxgs-view/MaterialFactory.cpp (function ?getSurfacesTexture@MaterialFactory@View@RBX@@AAE?AV?$ReferenceCountedPointer@VTextureProxy@Render@RBX@@@G3D@@VColor3@5@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
