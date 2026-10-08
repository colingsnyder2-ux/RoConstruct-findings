// from server: 100% by auto
// roc 2010-06 00555db0  unit: seg_00550000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00555db0
//
// 00555db0  51                   push ecx
// 00555db1  f30f10051804a200     movss xmm0, dword ptr [0xa20418]
// 00555db9  8bc1                 mov eax, ecx
// 00555dbb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00555dbf  f30f1009             movss xmm1, dword ptr [ecx]
// 00555dc3  f30f59c8             mulss xmm1, xmm0
// 00555dc7  f30f110c24           movss dword ptr [esp], xmm1
// 00555dcc  d90424               fld dword ptr [esp]
// 00555dcf  db5c2408             fistp dword ptr [esp + 8]
// 00555dd3  8b542408             mov edx, dword ptr [esp + 8]
// 00555dd7  81faff000000         cmp edx, 0xff
// 00555ddd  7e05                 jle 0x555de4
// 00555ddf  baff000000           mov edx, 0xff
// 00555de4  8810                 mov byte ptr [eax], dl
// 00555de6  f30f104904           movss xmm1, dword ptr [ecx + 4]
// 00555deb  f30f59c8             mulss xmm1, xmm0
// 00555def  f30f110c24           movss dword ptr [esp], xmm1
// 00555df4  d90424               fld dword ptr [esp]
// 00555df7  db5c2408             fistp dword ptr [esp + 8]
// 00555dfb  8b542408             mov edx, dword ptr [esp + 8]
// 00555dff  81faff000000         cmp edx, 0xff
// 00555e05  7e05                 jle 0x555e0c
// 00555e07  baff000000           mov edx, 0xff
// 00555e0c  885001               mov byte ptr [eax + 1], dl
// 00555e0f  f30f104908           movss xmm1, dword ptr [ecx + 8]
// 00555e14  f30f59c8             mulss xmm1, xmm0
// 00555e18  f30f110c24           movss dword ptr [esp], xmm1
// 00555e1d  d90424               fld dword ptr [esp]
// 00555e20  db5c2408             fistp dword ptr [esp + 8]
// 00555e24  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00555e28  81f9ff000000         cmp ecx, 0xff
// 00555e2e  7e05                 jle 0x555e35
// 00555e30  b9ff000000           mov ecx, 0xff
// 00555e35  884802               mov byte ptr [eax + 2], cl
// 00555e38  59                   pop ecx
// 00555e39  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color3uint8.cpp (function ??0Color3uint8@G3D@@QAE@ABVColor3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color3uint8.cpp
