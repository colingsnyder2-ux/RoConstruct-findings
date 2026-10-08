// from server: 100% by auto
// roc 2007-08 005e2310  unit: seg_005e0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e2310
//
// 005e2310  56                   push esi
// 005e2311  8bf1                 mov esi, ecx
// 005e2313  8b4604               mov eax, dword ptr [esi + 4]
// 005e2316  3b4608               cmp eax, dword ptr [esi + 8]
// 005e2319  8b0e                 mov ecx, dword ptr [esi]
// 005e231b  7d17                 jge 0x5e2334
// 005e231d  8d0481               lea eax, [ecx + eax*4]
// 005e2320  85c0                 test eax, eax
// 005e2322  7408                 je 0x5e232c
// 005e2324  8b542408             mov edx, dword ptr [esp + 8]
// 005e2328  8b0a                 mov ecx, dword ptr [edx]
// 005e232a  8908                 mov dword ptr [eax], ecx
// 005e232c  83460401             add dword ptr [esi + 4], 1
// 005e2330  5e                   pop esi
// 005e2331  c20400               ret 4
// 005e2334  57                   push edi
// 005e2335  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e2339  3bf9                 cmp edi, ecx
// 005e233b  721e                 jb 0x5e235b
// 005e233d  8d1481               lea edx, [ecx + eax*4]
// 005e2340  3bfa                 cmp edi, edx
// 005e2342  7317                 jae 0x5e235b
// 005e2344  8b07                 mov eax, dword ptr [edi]
// 005e2346  8d4c240c             lea ecx, [esp + 0xc]
// 005e234a  51                   push ecx
// 005e234b  8bce                 mov ecx, esi
// 005e234d  89442410             mov dword ptr [esp + 0x10], eax
// 005e2351  e8baffffff           call 0x5e2310
// 005e2356  5f                   pop edi
// 005e2357  5e                   pop esi
// 005e2358  c20400               ret 4
// 005e235b  6a00                 push 0
// 005e235d  83c001               add eax, 1
// 005e2360  50                   push eax
// 005e2361  8bce                 mov ecx, esi
// 005e2363  e8b8cffeff           call 0x5cf320
// 005e2368  8b0f                 mov ecx, dword ptr [edi]
// 005e236a  8b5604               mov edx, dword ptr [esi + 4]
// 005e236d  8b06                 mov eax, dword ptr [esi]
// 005e236f  5f                   pop edi
// 005e2370  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005e2374  5e                   pop esi
// 005e2375  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
