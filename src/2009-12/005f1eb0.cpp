// roc 2009-12 005f1eb0  unit: seg_005f0000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f1eb0
//
// 005f1eb0  51                   push ecx
// 005f1eb1  f30f100578259c00     movss xmm0, dword ptr [0x9c2578]
// 005f1eb9  8bc1                 mov eax, ecx
// 005f1ebb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f1ebf  f30f1009             movss xmm1, dword ptr [ecx]
// 005f1ec3  f30f59c8             mulss xmm1, xmm0
// 005f1ec7  f30f110c24           movss dword ptr [esp], xmm1
// 005f1ecc  d90424               fld dword ptr [esp]
// 005f1ecf  db5c2408             fistp dword ptr [esp + 8]
// 005f1ed3  8b542408             mov edx, dword ptr [esp + 8]
// 005f1ed7  81faff000000         cmp edx, 0xff
// 005f1edd  7e05                 jle 0x5f1ee4
// 005f1edf  baff000000           mov edx, 0xff
// 005f1ee4  8810                 mov byte ptr [eax], dl
// 005f1ee6  f30f104904           movss xmm1, dword ptr [ecx + 4]
// 005f1eeb  f30f59c8             mulss xmm1, xmm0
// 005f1eef  f30f110c24           movss dword ptr [esp], xmm1
// 005f1ef4  d90424               fld dword ptr [esp]
// 005f1ef7  db5c2408             fistp dword ptr [esp + 8]
// 005f1efb  8b542408             mov edx, dword ptr [esp + 8]
// 005f1eff  81faff000000         cmp edx, 0xff
// 005f1f05  7e05                 jle 0x5f1f0c
// 005f1f07  baff000000           mov edx, 0xff
// 005f1f0c  885001               mov byte ptr [eax + 1], dl
// 005f1f0f  f30f104908           movss xmm1, dword ptr [ecx + 8]
// 005f1f14  f30f59c8             mulss xmm1, xmm0
// 005f1f18  f30f110c24           movss dword ptr [esp], xmm1
// 005f1f1d  d90424               fld dword ptr [esp]
// 005f1f20  db5c2408             fistp dword ptr [esp + 8]
// 005f1f24  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f1f28  81f9ff000000         cmp ecx, 0xff
// 005f1f2e  7e05                 jle 0x5f1f35
// 005f1f30  b9ff000000           mov ecx, 0xff
// 005f1f35  884802               mov byte ptr [eax + 2], cl
// 005f1f38  59                   pop ecx
// 005f1f39  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color3uint8.cpp (function ??0Color3uint8@G3D@@QAE@ABVColor3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color3uint8.cpp
