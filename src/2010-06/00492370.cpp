// roc 2010-06 00492370  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492370
//
// 00492370  56                   push esi
// 00492371  57                   push edi
// 00492372  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00492376  8bc7                 mov eax, edi
// 00492378  6bc05c               imul eax, eax, 0x5c
// 0049237b  8bf1                 mov esi, ecx
// 0049237d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00492381  8d8430c8040000       lea eax, [eax + esi + 0x4c8]
// 00492388  51                   push ecx
// 00492389  d901                 fld dword ptr [ecx]
// 0049238b  d918                 fstp dword ptr [eax]
// 0049238d  d94104               fld dword ptr [ecx + 4]
// 00492390  d95804               fstp dword ptr [eax + 4]
// 00492393  d94108               fld dword ptr [ecx + 8]
// 00492396  d95808               fstp dword ptr [eax + 8]
// 00492399  d9410c               fld dword ptr [ecx + 0xc]
// 0049239c  d9580c               fstp dword ptr [eax + 0xc]
// 0049239f  803dba38c00000       cmp byte ptr [0xc038ba], 0
// 004923a6  740f                 je 0x4923b7
// 004923a8  8d8fc0840000         lea ecx, [edi + 0x84c0]
// 004923ae  51                   push ecx
// 004923af  ff159c39c000         call dword ptr [0xc0399c]
// 004923b5  eb06                 jmp 0x4923bd
// 004923b7  ff1558ab9e00         call dword ptr [0x9eab58]
// 004923bd  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 004923c3  3bc7                 cmp eax, edi
// 004923c5  7d02                 jge 0x4923c9
// 004923c7  8bc7                 mov eax, edi
// 004923c9  8986c4040000         mov dword ptr [esi + 0x4c4], eax
// 004923cf  b801000000           mov eax, 1
// 004923d4  014678               add dword ptr [esi + 0x78], eax
// 004923d7  014670               add dword ptr [esi + 0x70], eax
// 004923da  5f                   pop edi
// 004923db  5e                   pop esi
// 004923dc  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoord@RenderDevice@G3D@@QAEXIABVVector4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
