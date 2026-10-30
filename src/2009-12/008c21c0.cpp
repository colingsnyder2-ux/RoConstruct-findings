// roc 2009-12 008c21c0  unit: CXTPImageEditorDlg::CDlgToolBar  size: 665 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c21c0
//
// 008c21c0  6aff                 push -1
// 008c21c2  68de3f9600           push 0x963fde
// 008c21c7  64a100000000         mov eax, dword ptr fs:[0]
// 008c21cd  50                   push eax
// 008c21ce  81ecb8000000         sub esp, 0xb8
// 008c21d4  a10052b600           mov eax, dword ptr [0xb65200]
// 008c21d9  33c4                 xor eax, esp
// 008c21db  898424b4000000       mov dword ptr [esp + 0xb4], eax
// 008c21e2  53                   push ebx
// 008c21e3  55                   push ebp
// 008c21e4  56                   push esi
// 008c21e5  57                   push edi
// 008c21e6  a10052b600           mov eax, dword ptr [0xb65200]
// 008c21eb  33c4                 xor eax, esp
// 008c21ed  50                   push eax
// 008c21ee  8d8424cc000000       lea eax, [esp + 0xcc]
// 008c21f5  64a300000000         mov dword ptr fs:[0], eax
// 008c21fb  8bf1                 mov esi, ecx
// 008c21fd  56                   push esi
// 008c21fe  8d4c2478             lea ecx, [esp + 0x78]
// 008c2202  e8e91ff3ff           call 0x7f41f0
// 008c2207  56                   push esi
// 008c2208  8d4c2438             lea ecx, [esp + 0x38]
// 008c220c  c78424d800000000000000 mov dword ptr [esp + 0xd8], 0
// 008c2217  e8b490f8ff           call 0x84b2d0
// 008c221c  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008c2220  8d442434             lea eax, [esp + 0x34]
// 008c2224  50                   push eax
// 008c2225  51                   push ecx
// 008c2226  8d4c244c             lea ecx, [esp + 0x4c]
// 008c222a  e80191f8ff           call 0x84b330
// 008c222f  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 008c2237  e894d7f6ff           call 0x82f9d0
// 008c223c  6a0f                 push 0xf
// 008c223e  8bc8                 mov ecx, eax
// 008c2240  e8bbcef6ff           call 0x82f100
// 008c2245  50                   push eax
// 008c2246  8d542438             lea edx, [esp + 0x38]
// 008c224a  52                   push edx
// 008c224b  8d4c244c             lea ecx, [esp + 0x4c]
// 008c224f  e8aa23f3ff           call 0x7f45fe
// 008c2254  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008c2257  8b442440             mov eax, dword ptr [esp + 0x40]
// 008c225b  8b1d58ca9800         mov ebx, dword ptr [0x98ca58]
// 008c2261  2bc1                 sub eax, ecx
// 008c2263  2b442438             sub eax, dword ptr [esp + 0x38]
// 008c2267  6a03                 push 3
// 008c2269  99                   cdq 
// 008c226a  2bc2                 sub eax, edx
// 008c226c  8bf8                 mov edi, eax
// 008c226e  8b4658               mov eax, dword ptr [esi + 0x58]
// 008c2271  83c00a               add eax, 0xa
// 008c2274  d1ff                 sar edi, 1
// 008c2276  89442430             mov dword ptr [esp + 0x30], eax
// 008c227a  6a03                 push 3
// 008c227c  8d44242c             lea eax, [esp + 0x2c]
// 008c2280  03cf                 add ecx, edi
// 008c2282  bd0a000000           mov ebp, 0xa
// 008c2287  50                   push eax
// 008c2288  896c2430             mov dword ptr [esp + 0x30], ebp
// 008c228c  897c2434             mov dword ptr [esp + 0x34], edi
// 008c2290  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008c2294  ffd3                 call ebx
// 008c2296  e835d7f6ff           call 0x82f9d0
// 008c229b  6a10                 push 0x10
// 008c229d  8bc8                 mov ecx, eax
// 008c229f  e85ccef6ff           call 0x82f100
// 008c22a4  50                   push eax
// 008c22a5  68ffffff00           push 0xffffff
// 008c22aa  8d4c242c             lea ecx, [esp + 0x2c]
// 008c22ae  51                   push ecx
// 008c22af  8d4c2450             lea ecx, [esp + 0x50]
// 008c22b3  e84023f3ff           call 0x7f45f8
// 008c22b8  6a01                 push 1
// 008c22ba  6a01                 push 1
// 008c22bc  8d54242c             lea edx, [esp + 0x2c]
// 008c22c0  52                   push edx
// 008c22c1  ffd3                 call ebx
// 008c22c3  e808d7f6ff           call 0x82f9d0
// 008c22c8  6a15                 push 0x15
// 008c22ca  8bc8                 mov ecx, eax
// 008c22cc  e82fcef6ff           call 0x82f100
// 008c22d1  8bd8                 mov ebx, eax
// 008c22d3  e8f8d6f6ff           call 0x82f9d0
// 008c22d8  6a0f                 push 0xf
// 008c22da  8bc8                 mov ecx, eax
// 008c22dc  e81fcef6ff           call 0x82f100
// 008c22e1  53                   push ebx
// 008c22e2  50                   push eax
// 008c22e3  8d44242c             lea eax, [esp + 0x2c]
// 008c22e7  50                   push eax
// 008c22e8  8d4c2450             lea ecx, [esp + 0x50]
// 008c22ec  e80723f3ff           call 0x7f45f8
// 008c22f1  8b4654               mov eax, dword ptr [esi + 0x54]
// 008c22f4  33c9                 xor ecx, ecx
// 008c22f6  3bc1                 cmp eax, ecx
// 008c22f8  750c                 jne 0x8c2306
// 008c22fa  888c24d4000000       mov byte ptr [esp + 0xd4], cl
// 008c2301  e90e010000           jmp 0x8c2414
// 008c2306  8b9898090000         mov ebx, dword ptr [eax + 0x998]
// 008c230c  3bd9                 cmp ebx, ecx
// 008c230e  0f84f8000000         je 0x8c240c
// 008c2314  394b08               cmp dword ptr [ebx + 8], ecx
// 008c2317  745a                 je 0x8c2373
// 008c2319  8b5b04               mov ebx, dword ptr [ebx + 4]
// 008c231c  51                   push ecx
// 008c231d  51                   push ecx
// 008c231e  53                   push ebx
// 008c231f  e8fca0f4ff           call 0x80c420
// 008c2324  8bd8                 mov ebx, eax
// 008c2326  33c9                 xor ecx, ecx
// 008c2328  83c40c               add esp, 0xc
// 008c232b  3bd9                 cmp ebx, ecx
// 008c232d  0f84d9000000         je 0x8c240c
// 008c2333  83ec08               sub esp, 8
// 008c2336  8bc4                 mov eax, esp
// 008c2338  8964241c             mov dword ptr [esp + 0x1c], esp
// 008c233c  83ec08               sub esp, 8
// 008c233f  8908                 mov dword ptr [eax], ecx
// 008c2341  894804               mov dword ptr [eax + 4], ecx
// 008c2344  8bc4                 mov eax, esp
// 008c2346  89642424             mov dword ptr [esp + 0x24], esp
// 008c234a  8908                 mov dword ptr [eax], ecx
// 008c234c  894804               mov dword ptr [eax + 4], ecx
// 008c234f  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008c2352  8b5658               mov edx, dword ptr [esi + 0x58]
// 008c2355  51                   push ecx
// 008c2356  52                   push edx
// 008c2357  57                   push edi
// 008c2358  55                   push ebp
// 008c2359  8d442464             lea eax, [esp + 0x64]
// 008c235d  53                   push ebx
// 008c235e  50                   push eax
// 008c235f  e84ce7f4ff           call 0x810ab0
// 008c2364  83c428               add esp, 0x28
// 008c2367  53                   push ebx
// 008c2368  ff153cb19800         call dword ptr [0x98b13c]
// 008c236e  e999000000           jmp 0x8c240c
// 008c2373  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008c2377  c7442418148aa000     mov dword ptr [esp + 0x18], 0xa08a14
// 008c237f  894c2420             mov dword ptr [esp + 0x20], ecx
// 008c2383  c68424d400000002     mov byte ptr [esp + 0xd4], 2
// 008c238b  e840d6f6ff           call 0x82f9d0
// 008c2390  6a0f                 push 0xf
// 008c2392  8bc8                 mov ecx, eax
// 008c2394  e867cdf6ff           call 0x82f100
// 008c2399  8d4c2444             lea ecx, [esp + 0x44]
// 008c239d  51                   push ecx
// 008c239e  50                   push eax
// 008c239f  68fffeff00           push 0xfffeff
// 008c23a4  83ec08               sub esp, 8
// 008c23a7  8bc4                 mov eax, esp
// 008c23a9  c70000000000         mov dword ptr [eax], 0
// 008c23af  c7400400000000       mov dword ptr [eax + 4], 0
// 008c23b6  8b565c               mov edx, dword ptr [esi + 0x5c]
// 008c23b9  8b4658               mov eax, dword ptr [esi + 0x58]
// 008c23bc  89642428             mov dword ptr [esp + 0x28], esp
// 008c23c0  52                   push edx
// 008c23c1  50                   push eax
// 008c23c2  8d4c2434             lea ecx, [esp + 0x34]
// 008c23c6  53                   push ebx
// 008c23c7  51                   push ecx
// 008c23c8  e8d3f6ffff           call 0x8c1aa0
// 008c23cd  8b4658               mov eax, dword ptr [esi + 0x58]
// 008c23d0  8b765c               mov esi, dword ptr [esi + 0x5c]
// 008c23d3  8b542440             mov edx, dword ptr [esp + 0x40]
// 008c23d7  83c424               add esp, 0x24
// 008c23da  6a04                 push 4
// 008c23dc  56                   push esi
// 008c23dd  50                   push eax
// 008c23de  8b442454             mov eax, dword ptr [esp + 0x54]
// 008c23e2  57                   push edi
// 008c23e3  6a0a                 push 0xa
// 008c23e5  6a00                 push 0
// 008c23e7  52                   push edx
// 008c23e8  6a00                 push 0
// 008c23ea  6a00                 push 0
// 008c23ec  50                   push eax
// 008c23ed  ff15f8ca9800         call dword ptr [0x98caf8]
// 008c23f3  8d4c2418             lea ecx, [esp + 0x18]
// 008c23f7  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 008c23ff  c744241818229a00     mov dword ptr [esp + 0x18], 0x9a2218
// 008c2407  e824ceb4ff           call 0x40f230
// 008c240c  c68424d400000000     mov byte ptr [esp + 0xd4], 0
// 008c2414  8d4c2444             lea ecx, [esp + 0x44]
// 008c2418  e82391f8ff           call 0x84b540
// 008c241d  8d4c2474             lea ecx, [esp + 0x74]
// 008c2421  c78424d4000000ffffffff mov dword ptr [esp + 0xd4], 0xffffffff
// 008c242c  e8b91df3ff           call 0x7f41ea
// 008c2431  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 008c2438  64890d00000000       mov dword ptr fs:[0], ecx
// 008c243f  59                   pop ecx
// 008c2440  5f                   pop edi
// 008c2441  5e                   pop esi
// 008c2442  5d                   pop ebp
// 008c2443  5b                   pop ebx
// 008c2444  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008c244b  33cc                 xor ecx, esp
// 008c244d  e8482ff3ff           call 0x7f539a
// 008c2452  81c4c4000000         add esp, 0xc4
// 008c2458  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPImageEditorPreview@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp