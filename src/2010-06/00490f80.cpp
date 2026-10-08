// roc 2010-06 00490f80  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00490f80
//
// 00490f80  56                   push esi
// 00490f81  8bf1                 mov esi, ecx
// 00490f83  ff4678               inc dword ptr [esi + 0x78]
// 00490f86  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00490f8a  f30f1001             movss xmm0, dword ptr [ecx]
// 00490f8e  f30f108e5c040000     movss xmm1, dword ptr [esi + 0x45c]
// 00490f96  0f2ec8               ucomiss xmm1, xmm0
// 00490f99  9f                   lahf 
// 00490f9a  f6c444               test ah, 0x44
// 00490f9d  7a24                 jp 0x490fc3
// 00490f9f  f30f108e60040000     movss xmm1, dword ptr [esi + 0x460]
// 00490fa7  0f2e4904             ucomiss xmm1, dword ptr [ecx + 4]
// 00490fab  9f                   lahf 
// 00490fac  f6c444               test ah, 0x44
// 00490faf  7a12                 jp 0x490fc3
// 00490fb1  f30f108e64040000     movss xmm1, dword ptr [esi + 0x464]
// 00490fb9  0f2e4908             ucomiss xmm1, dword ptr [ecx + 8]
// 00490fbd  9f                   lahf 
// 00490fbe  f6c444               test ah, 0x44
// 00490fc1  7b68                 jnp 0x49102b
// 00490fc3  f30f11865c040000     movss dword ptr [esi + 0x45c], xmm0
// 00490fcb  d94104               fld dword ptr [ecx + 4]
// 00490fce  d99e60040000         fstp dword ptr [esi + 0x460]
// 00490fd4  68a43cc000           push 0xc03ca4
// 00490fd9  d94108               fld dword ptr [ecx + 8]
// 00490fdc  6802120000           push 0x1202
// 00490fe1  d99e64040000         fstp dword ptr [esi + 0x464]
// 00490fe7  f30f1001             movss xmm0, dword ptr [ecx]
// 00490feb  f30f1105a43cc000     movss dword ptr [0xc03ca4], xmm0
// 00490ff3  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 00490ff8  f30f1105a83cc000     movss dword ptr [0xc03ca8], xmm0
// 00491000  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 00491005  f30f1105ac3cc000     movss dword ptr [0xc03cac], xmm0
// 0049100d  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 00491015  6808040000           push 0x408
// 0049101a  f30f1105b03cc000     movss dword ptr [0xc03cb0], xmm0
// 00491022  ff1578ab9e00         call dword ptr [0x9eab78]
// 00491028  ff4670               inc dword ptr [esi + 0x70]
// 0049102b  5e                   pop esi
// 0049102c  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setSpecularCoefficient@RenderDevice@G3D@@QAEXABVColor3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
