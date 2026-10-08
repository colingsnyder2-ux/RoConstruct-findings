// roc 2009-06 0049f460  unit: G3D::VARArea  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049f460
//
// 0049f460  56                   push esi
// 0049f461  57                   push edi
// 0049f462  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0049f466  8bc7                 mov eax, edi
// 0049f468  6bc05c               imul eax, eax, 0x5c
// 0049f46b  8bf1                 mov esi, ecx
// 0049f46d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049f471  8d8430c8040000       lea eax, [eax + esi + 0x4c8]
// 0049f478  51                   push ecx
// 0049f479  d901                 fld dword ptr [ecx]
// 0049f47b  d918                 fstp dword ptr [eax]
// 0049f47d  d94104               fld dword ptr [ecx + 4]
// 0049f480  d95804               fstp dword ptr [eax + 4]
// 0049f483  d94108               fld dword ptr [ecx + 8]
// 0049f486  d95808               fstp dword ptr [eax + 8]
// 0049f489  d9410c               fld dword ptr [ecx + 0xc]
// 0049f48c  d9580c               fstp dword ptr [eax + 0xc]
// 0049f48f  803d0ec9a30000       cmp byte ptr [0xa3c90e], 0
// 0049f496  740f                 je 0x49f4a7
// 0049f498  8d8fc0840000         lea ecx, [edi + 0x84c0]
// 0049f49e  51                   push ecx
// 0049f49f  ff155cd1a300         call dword ptr [0xa3d15c]
// 0049f4a5  eb06                 jmp 0x49f4ad
// 0049f4a7  ff1598eb8900         call dword ptr [0x89eb98]
// 0049f4ad  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 0049f4b3  3bc7                 cmp eax, edi
// 0049f4b5  7d02                 jge 0x49f4b9
// 0049f4b7  8bc7                 mov eax, edi
// 0049f4b9  8986c4040000         mov dword ptr [esi + 0x4c4], eax
// 0049f4bf  b801000000           mov eax, 1
// 0049f4c4  014678               add dword ptr [esi + 0x78], eax
// 0049f4c7  014670               add dword ptr [esi + 0x70], eax
// 0049f4ca  5f                   pop edi
// 0049f4cb  5e                   pop esi
// 0049f4cc  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoord@RenderDevice@G3D@@QAEXIABVVector4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
