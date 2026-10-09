// roc 2007-03 005ae130  unit: seg_005a0000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae130
//
// 005ae130  6aff                 push -1
// 005ae132  68d8997500           push 0x7599d8
// 005ae137  64a100000000         mov eax, dword ptr fs:[0]
// 005ae13d  50                   push eax
// 005ae13e  64892500000000       mov dword ptr fs:[0], esp
// 005ae145  83ec18               sub esp, 0x18
// 005ae148  53                   push ebx
// 005ae149  55                   push ebp
// 005ae14a  56                   push esi
// 005ae14b  8be9                 mov ebp, ecx
// 005ae14d  57                   push edi
// 005ae14e  8d4c241c             lea ecx, [esp + 0x1c]
// 005ae152  e8d9f2ffff           call 0x5ad430
// 005ae157  89442420             mov dword ptr [esp + 0x20], eax
// 005ae15b  c6401101             mov byte ptr [eax + 0x11], 1
// 005ae15f  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ae163  894004               mov dword ptr [eax + 4], eax
// 005ae166  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ae16a  8900                 mov dword ptr [eax], eax
// 005ae16c  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ae170  33ff                 xor edi, edi
// 005ae172  894008               mov dword ptr [eax + 8], eax
// 005ae175  897c2424             mov dword ptr [esp + 0x24], edi
// 005ae179  8b742438             mov esi, dword ptr [esp + 0x38]
// 005ae17d  33db                 xor ebx, ebx
// 005ae17f  397e04               cmp dword ptr [esi + 4], edi
// 005ae182  897c2430             mov dword ptr [esp + 0x30], edi
// 005ae186  7e42                 jle 0x5ae1ca
// 005ae188  8b06                 mov eax, dword ptr [esi]
// 005ae18a  8d0c98               lea ecx, [eax + ebx*4]
// 005ae18d  51                   push ecx
// 005ae18e  8d542414             lea edx, [esp + 0x14]
// 005ae192  52                   push edx
// 005ae193  8d4c2424             lea ecx, [esp + 0x24]
// 005ae197  e8d4520600           call 0x613470
// 005ae19c  83c301               add ebx, 1
// 005ae19f  3b5e04               cmp ebx, dword ptr [esi + 4]
// 005ae1a2  7ce4                 jl 0x5ae188
// 005ae1a4  397e04               cmp dword ptr [esi + 4], edi
// 005ae1a7  7e21                 jle 0x5ae1ca
// 005ae1a9  8da42400000000       lea esp, [esp]
// 005ae1b0  8b0e                 mov ecx, dword ptr [esi]
// 005ae1b2  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 005ae1b5  8d44241c             lea eax, [esp + 0x1c]
// 005ae1b9  50                   push eax
// 005ae1ba  52                   push edx
// 005ae1bb  8bcd                 mov ecx, ebp
// 005ae1bd  e8aef5ffff           call 0x5ad770
// 005ae1c2  83c701               add edi, 1
// 005ae1c5  3b7e04               cmp edi, dword ptr [esi + 4]
// 005ae1c8  7ce6                 jl 0x5ae1b0
// 005ae1ca  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ae1ce  8b10                 mov edx, dword ptr [eax]
// 005ae1d0  50                   push eax
// 005ae1d1  8d4c2420             lea ecx, [esp + 0x20]
// 005ae1d5  51                   push ecx
// 005ae1d6  52                   push edx
// 005ae1d7  8bf1                 mov esi, ecx
// 005ae1d9  56                   push esi
// 005ae1da  8d442420             lea eax, [esp + 0x20]
// 005ae1de  50                   push eax
// 005ae1df  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 005ae1e7  e8d4f6ffff           call 0x5ad8c0
// 005ae1ec  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ae1f0  51                   push ecx
// 005ae1f1  e8fafe0600           call 0x61e0f0
// 005ae1f6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ae1fa  83c404               add esp, 4
// 005ae1fd  5f                   pop edi
// 005ae1fe  5e                   pop esi
// 005ae1ff  5d                   pop ebp
// 005ae200  5b                   pop ebx
// 005ae201  64890d00000000       mov dword ptr fs:[0], ecx
// 005ae208  83c424               add esp, 0x24
// 005ae20b  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?destroyJointsToWorld@World@RBX@@QAEXABV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
