// roc 2009-12 004cbad0  unit: G3D::VARArea  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cbad0
//
// 004cbad0  56                   push esi
// 004cbad1  57                   push edi
// 004cbad2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004cbad6  8bc7                 mov eax, edi
// 004cbad8  6bc05c               imul eax, eax, 0x5c
// 004cbadb  8bf1                 mov esi, ecx
// 004cbadd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cbae1  8d8430c8040000       lea eax, [eax + esi + 0x4c8]
// 004cbae8  51                   push ecx
// 004cbae9  d901                 fld dword ptr [ecx]
// 004cbaeb  d918                 fstp dword ptr [eax]
// 004cbaed  d94104               fld dword ptr [ecx + 4]
// 004cbaf0  d95804               fstp dword ptr [eax + 4]
// 004cbaf3  d94108               fld dword ptr [ecx + 8]
// 004cbaf6  d95808               fstp dword ptr [eax + 8]
// 004cbaf9  d9410c               fld dword ptr [ecx + 0xc]
// 004cbafc  d9580c               fstp dword ptr [eax + 0xc]
// 004cbaff  803dbed0b70000       cmp byte ptr [0xb7d0be], 0
// 004cbb06  740f                 je 0x4cbb17
// 004cbb08  8d8fc0840000         lea ecx, [edi + 0x84c0]
// 004cbb0e  51                   push ecx
// 004cbb0f  ff150cd9b700         call dword ptr [0xb7d90c]
// 004cbb15  eb06                 jmp 0x4cbb1d
// 004cbb17  ff15bcbb9800         call dword ptr [0x98bbbc]
// 004cbb1d  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 004cbb23  3bc7                 cmp eax, edi
// 004cbb25  7d02                 jge 0x4cbb29
// 004cbb27  8bc7                 mov eax, edi
// 004cbb29  8986c4040000         mov dword ptr [esi + 0x4c4], eax
// 004cbb2f  b801000000           mov eax, 1
// 004cbb34  014678               add dword ptr [esi + 0x78], eax
// 004cbb37  014670               add dword ptr [esi + 0x70], eax
// 004cbb3a  5f                   pop edi
// 004cbb3b  5e                   pop esi
// 004cbb3c  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoord@RenderDevice@G3D@@QAEXIABVVector4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
