// roc 2009-12 005e2190  unit: RBX::RbxG3D::RenderScene  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e2190
//
// 005e2190  6aff                 push -1
// 005e2192  6824e29300           push 0x93e224
// 005e2197  64a100000000         mov eax, dword ptr fs:[0]
// 005e219d  50                   push eax
// 005e219e  64892500000000       mov dword ptr fs:[0], esp
// 005e21a5  83ec4c               sub esp, 0x4c
// 005e21a8  56                   push esi
// 005e21a9  8bf1                 mov esi, ecx
// 005e21ab  8b4604               mov eax, dword ptr [esi + 4]
// 005e21ae  3b4608               cmp eax, dword ptr [esi + 8]
// 005e21b1  89742404             mov dword ptr [esp + 4], esi
// 005e21b5  7d3b                 jge 0x5e21f2
// 005e21b7  8b16                 mov edx, dword ptr [esi]
// 005e21b9  8bc8                 mov ecx, eax
// 005e21bb  c1e104               shl ecx, 4
// 005e21be  03c8                 add ecx, eax
// 005e21c0  8d0c8a               lea ecx, [edx + ecx*4]
// 005e21c3  894c2408             mov dword ptr [esp + 8], ecx
// 005e21c7  c744245800000000     mov dword ptr [esp + 0x58], 0
// 005e21cf  85c9                 test ecx, ecx
// 005e21d1  740a                 je 0x5e21dd
// 005e21d3  8b442460             mov eax, dword ptr [esp + 0x60]
// 005e21d7  50                   push eax
// 005e21d8  e8b3e7ffff           call 0x5e0990
// 005e21dd  ff4604               inc dword ptr [esi + 4]
// 005e21e0  5e                   pop esi
// 005e21e1  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005e21e5  64890d00000000       mov dword ptr fs:[0], ecx
// 005e21ec  83c458               add esp, 0x58
// 005e21ef  c20400               ret 4
// 005e21f2  8b0e                 mov ecx, dword ptr [esi]
// 005e21f4  57                   push edi
// 005e21f5  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 005e21f9  3bf9                 cmp edi, ecx
// 005e21fb  7276                 jb 0x5e2273
// 005e21fd  8bd0                 mov edx, eax
// 005e21ff  c1e204               shl edx, 4
// 005e2202  03d0                 add edx, eax
// 005e2204  8d0c91               lea ecx, [ecx + edx*4]
// 005e2207  3bf9                 cmp edi, ecx
// 005e2209  7368                 jae 0x5e2273
// 005e220b  57                   push edi
// 005e220c  8d4c2414             lea ecx, [esp + 0x14]
// 005e2210  e87be7ffff           call 0x5e0990
// 005e2215  8d542410             lea edx, [esp + 0x10]
// 005e2219  52                   push edx
// 005e221a  8bce                 mov ecx, esi
// 005e221c  c744246001000000     mov dword ptr [esp + 0x60], 1
// 005e2224  e867ffffff           call 0x5e2190
// 005e2229  8b442450             mov eax, dword ptr [esp + 0x50]
// 005e222d  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 005e2235  85c0                 test eax, eax
// 005e2237  745b                 je 0x5e2294
// 005e2239  83c004               add eax, 4
// 005e223c  50                   push eax
// 005e223d  ff1508b29800         call dword ptr [0x98b208]
// 005e2243  85c0                 test eax, eax
// 005e2245  754d                 jne 0x5e2294
// 005e2247  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005e224b  e8d08de6ff           call 0x44b020
// 005e2250  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005e2254  85c9                 test ecx, ecx
// 005e2256  743c                 je 0x5e2294
// 005e2258  8b01                 mov eax, dword ptr [ecx]
// 005e225a  8b10                 mov edx, dword ptr [eax]
// 005e225c  6a01                 push 1
// 005e225e  ffd2                 call edx
// 005e2260  5f                   pop edi
// 005e2261  5e                   pop esi
// 005e2262  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005e2266  64890d00000000       mov dword ptr fs:[0], ecx
// 005e226d  83c458               add esp, 0x58
// 005e2270  c20400               ret 4
// 005e2273  6a00                 push 0
// 005e2275  40                   inc eax
// 005e2276  50                   push eax
// 005e2277  8bce                 mov ecx, esi
// 005e2279  e842f6ffff           call 0x5e18c0
// 005e227e  8b4604               mov eax, dword ptr [esi + 4]
// 005e2281  8b16                 mov edx, dword ptr [esi]
// 005e2283  8bc8                 mov ecx, eax
// 005e2285  c1e104               shl ecx, 4
// 005e2288  03c8                 add ecx, eax
// 005e228a  57                   push edi
// 005e228b  8d4c8abc             lea ecx, [edx + ecx*4 - 0x44]
// 005e228f  e85ce7ffff           call 0x5e09f0
// 005e2294  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005e2298  5f                   pop edi
// 005e2299  5e                   pop esi
// 005e229a  64890d00000000       mov dword ptr fs:[0], ecx
// 005e22a1  83c458               add esp, 0x58
// 005e22a4  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?append@?$Array@VRenderSurface@Render@RBX@@@G3D@@QAEXABVRenderSurface@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
