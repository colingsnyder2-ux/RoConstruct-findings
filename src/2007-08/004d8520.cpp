// roc 2007-08 004d8520  unit: RBX::View::MegaTextureProxy  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d8520
//
// 004d8520  6aff                 push -1
// 004d8522  68d1ca7400           push 0x74cad1
// 004d8527  64a100000000         mov eax, dword ptr fs:[0]
// 004d852d  50                   push eax
// 004d852e  64892500000000       mov dword ptr fs:[0], esp
// 004d8535  83ec08               sub esp, 8
// 004d8538  c744240400000000     mov dword ptr [esp + 4], 0
// 004d8540  56                   push esi
// 004d8541  c744240400000000     mov dword ptr [esp + 4], 0
// 004d8549  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004d854d  8b4904               mov ecx, dword ptr [ecx + 4]
// 004d8550  8d442404             lea eax, [esp + 4]
// 004d8554  50                   push eax
// 004d8555  8d542424             lea edx, [esp + 0x24]
// 004d8559  52                   push edx
// 004d855a  56                   push esi
// 004d855b  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004d8563  e888210200           call 0x4fa6f0
// 004d8568  8b442404             mov eax, dword ptr [esp + 4]
// 004d856c  85c0                 test eax, eax
// 004d856e  c744240801000000     mov dword ptr [esp + 8], 1
// 004d8576  c644241400           mov byte ptr [esp + 0x14], 0
// 004d857b  7427                 je 0x4d85a4
// 004d857d  83c004               add eax, 4
// 004d8580  50                   push eax
// 004d8581  ff15e8d27700         call dword ptr [0x77d2e8]
// 004d8587  85c0                 test eax, eax
// 004d8589  7519                 jne 0x4d85a4
// 004d858b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d858f  e83cf8f7ff           call 0x457dd0
// 004d8594  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d8598  85c9                 test ecx, ecx
// 004d859a  7408                 je 0x4d85a4
// 004d859c  8b01                 mov eax, dword ptr [ecx]
// 004d859e  8b10                 mov edx, dword ptr [eax]
// 004d85a0  6a01                 push 1
// 004d85a2  ffd2                 call edx
// 004d85a4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d85a8  8bc6                 mov eax, esi
// 004d85aa  5e                   pop esi
// 004d85ab  64890d00000000       mov dword ptr fs:[0], ecx
// 004d85b2  83c414               add esp, 0x14
// 004d85b5  c21000               ret 0x10
// library rbxgs-view/MaterialFactory.cpp (function ?getSurfacesTexture@MaterialFactory@View@RBX@@AAE?AV?$ReferenceCountedPointer@VTextureProxy@Render@RBX@@@G3D@@VColor3@5@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
