// roc 2007-03 00474c20  unit: seg_00470000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474c20
//
// 00474c20  56                   push esi
// 00474c21  57                   push edi
// 00474c22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00474c26  8bc7                 mov eax, edi
// 00474c28  6bc05c               imul eax, eax, 0x5c
// 00474c2b  8bf1                 mov esi, ecx
// 00474c2d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00474c31  8d8430c8040000       lea eax, [eax + esi + 0x4c8]
// 00474c38  51                   push ecx
// 00474c39  d901                 fld dword ptr [ecx]
// 00474c3b  d918                 fstp dword ptr [eax]
// 00474c3d  d94104               fld dword ptr [ecx + 4]
// 00474c40  d95804               fstp dword ptr [eax + 4]
// 00474c43  d94108               fld dword ptr [ecx + 8]
// 00474c46  d95808               fstp dword ptr [eax + 8]
// 00474c49  d9410c               fld dword ptr [ecx + 0xc]
// 00474c4c  d9580c               fstp dword ptr [eax + 0xc]
// 00474c4f  803d2a768b0000       cmp byte ptr [0x8b762a], 0
// 00474c56  740f                 je 0x474c67
// 00474c58  8d8fc0840000         lea ecx, [edi + 0x84c0]
// 00474c5e  51                   push ecx
// 00474c5f  ff15a07f8b00         call dword ptr [0x8b7fa0]
// 00474c65  eb06                 jmp 0x474c6d
// 00474c67  ff15aceb7700         call dword ptr [0x77ebac]
// 00474c6d  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 00474c73  3bc7                 cmp eax, edi
// 00474c75  7d02                 jge 0x474c79
// 00474c77  8bc7                 mov eax, edi
// 00474c79  8986c4040000         mov dword ptr [esi + 0x4c4], eax
// 00474c7f  b801000000           mov eax, 1
// 00474c84  014678               add dword ptr [esi + 0x78], eax
// 00474c87  014670               add dword ptr [esi + 0x70], eax
// 00474c8a  5f                   pop edi
// 00474c8b  5e                   pop esi
// 00474c8c  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoord@RenderDevice@G3D@@QAEXIABVVector4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
