// roc 2008-06 00477df0  unit: G3D::VARArea  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477df0
//
// 00477df0  56                   push esi
// 00477df1  57                   push edi
// 00477df2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00477df6  8bc7                 mov eax, edi
// 00477df8  6bc05c               imul eax, eax, 0x5c
// 00477dfb  8bf1                 mov esi, ecx
// 00477dfd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00477e01  8d8430c8040000       lea eax, [eax + esi + 0x4c8]
// 00477e08  51                   push ecx
// 00477e09  d901                 fld dword ptr [ecx]
// 00477e0b  d918                 fstp dword ptr [eax]
// 00477e0d  d94104               fld dword ptr [ecx + 4]
// 00477e10  d95804               fstp dword ptr [eax + 4]
// 00477e13  d94108               fld dword ptr [ecx + 8]
// 00477e16  d95808               fstp dword ptr [eax + 8]
// 00477e19  d9410c               fld dword ptr [ecx + 0xc]
// 00477e1c  d9580c               fstp dword ptr [eax + 0xc]
// 00477e1f  803d7eee960000       cmp byte ptr [0x96ee7e], 0
// 00477e26  740f                 je 0x477e37
// 00477e28  8d8fc0840000         lea ecx, [edi + 0x84c0]
// 00477e2e  51                   push ecx
// 00477e2f  ff15fcf79600         call dword ptr [0x96f7fc]
// 00477e35  eb06                 jmp 0x477e3d
// 00477e37  ff15f8298000         call dword ptr [0x8029f8]
// 00477e3d  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 00477e43  3bc7                 cmp eax, edi
// 00477e45  7d02                 jge 0x477e49
// 00477e47  8bc7                 mov eax, edi
// 00477e49  8986c4040000         mov dword ptr [esi + 0x4c4], eax
// 00477e4f  b801000000           mov eax, 1
// 00477e54  014678               add dword ptr [esi + 0x78], eax
// 00477e57  014670               add dword ptr [esi + 0x70], eax
// 00477e5a  5f                   pop edi
// 00477e5b  5e                   pop esi
// 00477e5c  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoord@RenderDevice@G3D@@QAEXIABVVector4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
