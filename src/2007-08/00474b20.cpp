// roc 2007-08 00474b20  unit: G3D::VARArea  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474b20
//
// 00474b20  56                   push esi
// 00474b21  57                   push edi
// 00474b22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00474b26  8bc7                 mov eax, edi
// 00474b28  6bc05c               imul eax, eax, 0x5c
// 00474b2b  8bf1                 mov esi, ecx
// 00474b2d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00474b31  8d8430c8040000       lea eax, [eax + esi + 0x4c8]
// 00474b38  51                   push ecx
// 00474b39  d901                 fld dword ptr [ecx]
// 00474b3b  d918                 fstp dword ptr [eax]
// 00474b3d  d94104               fld dword ptr [ecx + 4]
// 00474b40  d95804               fstp dword ptr [eax + 4]
// 00474b43  d94108               fld dword ptr [ecx + 8]
// 00474b46  d95808               fstp dword ptr [eax + 8]
// 00474b49  d9410c               fld dword ptr [ecx + 0xc]
// 00474b4c  d9580c               fstp dword ptr [eax + 0xc]
// 00474b4f  803d62cf8b0000       cmp byte ptr [0x8bcf62], 0
// 00474b56  740f                 je 0x474b67
// 00474b58  8d8fc0840000         lea ecx, [edi + 0x84c0]
// 00474b5e  51                   push ecx
// 00474b5f  ff15e8d88b00         call dword ptr [0x8bd8e8]
// 00474b65  eb06                 jmp 0x474b6d
// 00474b67  ff1510eb7700         call dword ptr [0x77eb10]
// 00474b6d  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 00474b73  3bc7                 cmp eax, edi
// 00474b75  7d02                 jge 0x474b79
// 00474b77  8bc7                 mov eax, edi
// 00474b79  8986c4040000         mov dword ptr [esi + 0x4c4], eax
// 00474b7f  b801000000           mov eax, 1
// 00474b84  014678               add dword ptr [esi + 0x78], eax
// 00474b87  014670               add dword ptr [esi + 0x70], eax
// 00474b8a  5f                   pop edi
// 00474b8b  5e                   pop esi
// 00474b8c  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoord@RenderDevice@G3D@@QAEXIABVVector4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
