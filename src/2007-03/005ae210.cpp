// roc 2007-03 005ae210  unit: seg_005a0000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae210
//
// 005ae210  6aff                 push -1
// 005ae212  68d8997500           push 0x7599d8
// 005ae217  64a100000000         mov eax, dword ptr fs:[0]
// 005ae21d  50                   push eax
// 005ae21e  64892500000000       mov dword ptr fs:[0], esp
// 005ae225  83ec18               sub esp, 0x18
// 005ae228  53                   push ebx
// 005ae229  55                   push ebp
// 005ae22a  56                   push esi
// 005ae22b  8be9                 mov ebp, ecx
// 005ae22d  57                   push edi
// 005ae22e  8d4c241c             lea ecx, [esp + 0x1c]
// 005ae232  e8f9f1ffff           call 0x5ad430
// 005ae237  89442420             mov dword ptr [esp + 0x20], eax
// 005ae23b  c6401101             mov byte ptr [eax + 0x11], 1
// 005ae23f  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ae243  894004               mov dword ptr [eax + 4], eax
// 005ae246  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ae24a  8900                 mov dword ptr [eax], eax
// 005ae24c  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ae250  33ff                 xor edi, edi
// 005ae252  894008               mov dword ptr [eax + 8], eax
// 005ae255  897c2424             mov dword ptr [esp + 0x24], edi
// 005ae259  8b742438             mov esi, dword ptr [esp + 0x38]
// 005ae25d  33db                 xor ebx, ebx
// 005ae25f  397e04               cmp dword ptr [esi + 4], edi
// 005ae262  897c2430             mov dword ptr [esp + 0x30], edi
// 005ae266  7e42                 jle 0x5ae2aa
// 005ae268  8b06                 mov eax, dword ptr [esi]
// 005ae26a  8d0c98               lea ecx, [eax + ebx*4]
// 005ae26d  51                   push ecx
// 005ae26e  8d542414             lea edx, [esp + 0x14]
// 005ae272  52                   push edx
// 005ae273  8d4c2424             lea ecx, [esp + 0x24]
// 005ae277  e8f4510600           call 0x613470
// 005ae27c  83c301               add ebx, 1
// 005ae27f  3b5e04               cmp ebx, dword ptr [esi + 4]
// 005ae282  7ce4                 jl 0x5ae268
// 005ae284  397e04               cmp dword ptr [esi + 4], edi
// 005ae287  7e21                 jle 0x5ae2aa
// 005ae289  8da42400000000       lea esp, [esp]
// 005ae290  8b0e                 mov ecx, dword ptr [esi]
// 005ae292  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 005ae295  8d44241c             lea eax, [esp + 0x1c]
// 005ae299  50                   push eax
// 005ae29a  52                   push edx
// 005ae29b  8bcd                 mov ecx, ebp
// 005ae29d  e8fef8ffff           call 0x5adba0
// 005ae2a2  83c701               add edi, 1
// 005ae2a5  3b7e04               cmp edi, dword ptr [esi + 4]
// 005ae2a8  7ce6                 jl 0x5ae290
// 005ae2aa  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ae2ae  8b10                 mov edx, dword ptr [eax]
// 005ae2b0  50                   push eax
// 005ae2b1  8d4c2420             lea ecx, [esp + 0x20]
// 005ae2b5  51                   push ecx
// 005ae2b6  52                   push edx
// 005ae2b7  8bf1                 mov esi, ecx
// 005ae2b9  56                   push esi
// 005ae2ba  8d442420             lea eax, [esp + 0x20]
// 005ae2be  50                   push eax
// 005ae2bf  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 005ae2c7  e8f4f5ffff           call 0x5ad8c0
// 005ae2cc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ae2d0  51                   push ecx
// 005ae2d1  e81afe0600           call 0x61e0f0
// 005ae2d6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ae2da  83c404               add esp, 4
// 005ae2dd  5f                   pop edi
// 005ae2de  5e                   pop esi
// 005ae2df  5d                   pop ebp
// 005ae2e0  5b                   pop ebx
// 005ae2e1  64890d00000000       mov dword ptr fs:[0], ecx
// 005ae2e8  83c424               add esp, 0x24
// 005ae2eb  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?destroyJointsToWorld@World@RBX@@QAEXABV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
