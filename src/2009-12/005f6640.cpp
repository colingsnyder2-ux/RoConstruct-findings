// roc 2009-12 005f6640  unit: G3D::BinaryInput  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6640
//
// 005f6640  51                   push ecx
// 005f6641  f30f100578259c00     movss xmm0, dword ptr [0x9c2578]
// 005f6649  8bc1                 mov eax, ecx
// 005f664b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f664f  f30f1009             movss xmm1, dword ptr [ecx]
// 005f6653  f30f59c8             mulss xmm1, xmm0
// 005f6657  f30f110c24           movss dword ptr [esp], xmm1
// 005f665c  d90424               fld dword ptr [esp]
// 005f665f  db5c2408             fistp dword ptr [esp + 8]
// 005f6663  8b542408             mov edx, dword ptr [esp + 8]
// 005f6667  81faff000000         cmp edx, 0xff
// 005f666d  7e05                 jle 0x5f6674
// 005f666f  baff000000           mov edx, 0xff
// 005f6674  8810                 mov byte ptr [eax], dl
// 005f6676  f30f104904           movss xmm1, dword ptr [ecx + 4]
// 005f667b  f30f59c8             mulss xmm1, xmm0
// 005f667f  f30f110c24           movss dword ptr [esp], xmm1
// 005f6684  d90424               fld dword ptr [esp]
// 005f6687  db5c2408             fistp dword ptr [esp + 8]
// 005f668b  8b542408             mov edx, dword ptr [esp + 8]
// 005f668f  81faff000000         cmp edx, 0xff
// 005f6695  7e05                 jle 0x5f669c
// 005f6697  baff000000           mov edx, 0xff
// 005f669c  885001               mov byte ptr [eax + 1], dl
// 005f669f  f30f104908           movss xmm1, dword ptr [ecx + 8]
// 005f66a4  f30f59c8             mulss xmm1, xmm0
// 005f66a8  f30f110c24           movss dword ptr [esp], xmm1
// 005f66ad  d90424               fld dword ptr [esp]
// 005f66b0  db5c2408             fistp dword ptr [esp + 8]
// 005f66b4  8b542408             mov edx, dword ptr [esp + 8]
// 005f66b8  81faff000000         cmp edx, 0xff
// 005f66be  7e05                 jle 0x5f66c5
// 005f66c0  baff000000           mov edx, 0xff
// 005f66c5  885002               mov byte ptr [eax + 2], dl
// 005f66c8  f30f10490c           movss xmm1, dword ptr [ecx + 0xc]
// 005f66cd  f30f59c8             mulss xmm1, xmm0
// 005f66d1  f30f110c24           movss dword ptr [esp], xmm1
// 005f66d6  d90424               fld dword ptr [esp]
// 005f66d9  db5c2408             fistp dword ptr [esp + 8]
// 005f66dd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f66e1  81f9ff000000         cmp ecx, 0xff
// 005f66e7  7e05                 jle 0x5f66ee
// 005f66e9  b9ff000000           mov ecx, 0xff
// 005f66ee  884803               mov byte ptr [eax + 3], cl
// 005f66f1  59                   pop ecx
// 005f66f2  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4uint8.cpp (function ??0Color4uint8@G3D@@QAE@ABVColor4@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color4uint8.cpp
