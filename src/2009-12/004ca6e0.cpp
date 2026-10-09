// roc 2009-12 004ca6e0  unit: G3D::VARArea  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ca6e0
//
// 004ca6e0  56                   push esi
// 004ca6e1  8bf1                 mov esi, ecx
// 004ca6e3  ff4678               inc dword ptr [esi + 0x78]
// 004ca6e6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ca6ea  f30f1001             movss xmm0, dword ptr [ecx]
// 004ca6ee  f30f108e5c040000     movss xmm1, dword ptr [esi + 0x45c]
// 004ca6f6  0f2ec8               ucomiss xmm1, xmm0
// 004ca6f9  9f                   lahf 
// 004ca6fa  f6c444               test ah, 0x44
// 004ca6fd  7a24                 jp 0x4ca723
// 004ca6ff  f30f108e60040000     movss xmm1, dword ptr [esi + 0x460]
// 004ca707  0f2e4904             ucomiss xmm1, dword ptr [ecx + 4]
// 004ca70b  9f                   lahf 
// 004ca70c  f6c444               test ah, 0x44
// 004ca70f  7a12                 jp 0x4ca723
// 004ca711  f30f108e64040000     movss xmm1, dword ptr [esi + 0x464]
// 004ca719  0f2e4908             ucomiss xmm1, dword ptr [ecx + 8]
// 004ca71d  9f                   lahf 
// 004ca71e  f6c444               test ah, 0x44
// 004ca721  7b68                 jnp 0x4ca78b
// 004ca723  f30f11865c040000     movss dword ptr [esi + 0x45c], xmm0
// 004ca72b  d94104               fld dword ptr [ecx + 4]
// 004ca72e  d99e60040000         fstp dword ptr [esi + 0x460]
// 004ca734  686cd0b700           push 0xb7d06c
// 004ca739  d94108               fld dword ptr [ecx + 8]
// 004ca73c  6802120000           push 0x1202
// 004ca741  d99e64040000         fstp dword ptr [esi + 0x464]
// 004ca747  f30f1001             movss xmm0, dword ptr [ecx]
// 004ca74b  f30f11056cd0b700     movss dword ptr [0xb7d06c], xmm0
// 004ca753  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 004ca758  f30f110570d0b700     movss dword ptr [0xb7d070], xmm0
// 004ca760  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 004ca765  f30f110574d0b700     movss dword ptr [0xb7d074], xmm0
// 004ca76d  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 004ca775  6808040000           push 0x408
// 004ca77a  f30f110578d0b700     movss dword ptr [0xb7d078], xmm0
// 004ca782  ff158cbb9800         call dword ptr [0x98bb8c]
// 004ca788  ff4670               inc dword ptr [esi + 0x70]
// 004ca78b  5e                   pop esi
// 004ca78c  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setSpecularCoefficient@RenderDevice@G3D@@QAEXABVColor3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
