// roc 2007-08 005aa6a0  unit: RBX::World  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aa6a0
//
// 005aa6a0  6aff                 push -1
// 005aa6a2  6838877500           push 0x758738
// 005aa6a7  64a100000000         mov eax, dword ptr fs:[0]
// 005aa6ad  50                   push eax
// 005aa6ae  64892500000000       mov dword ptr fs:[0], esp
// 005aa6b5  83ec18               sub esp, 0x18
// 005aa6b8  53                   push ebx
// 005aa6b9  55                   push ebp
// 005aa6ba  56                   push esi
// 005aa6bb  8be9                 mov ebp, ecx
// 005aa6bd  57                   push edi
// 005aa6be  8d4c241c             lea ecx, [esp + 0x1c]
// 005aa6c2  e8e9ecffff           call 0x5a93b0
// 005aa6c7  89442420             mov dword ptr [esp + 0x20], eax
// 005aa6cb  c6401101             mov byte ptr [eax + 0x11], 1
// 005aa6cf  8b442420             mov eax, dword ptr [esp + 0x20]
// 005aa6d3  894004               mov dword ptr [eax + 4], eax
// 005aa6d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005aa6da  8900                 mov dword ptr [eax], eax
// 005aa6dc  8b442420             mov eax, dword ptr [esp + 0x20]
// 005aa6e0  33ff                 xor edi, edi
// 005aa6e2  894008               mov dword ptr [eax + 8], eax
// 005aa6e5  897c2424             mov dword ptr [esp + 0x24], edi
// 005aa6e9  8b742438             mov esi, dword ptr [esp + 0x38]
// 005aa6ed  33db                 xor ebx, ebx
// 005aa6ef  397e04               cmp dword ptr [esi + 4], edi
// 005aa6f2  897c2430             mov dword ptr [esp + 0x30], edi
// 005aa6f6  7e42                 jle 0x5aa73a
// 005aa6f8  8b06                 mov eax, dword ptr [esi]
// 005aa6fa  8d0c98               lea ecx, [eax + ebx*4]
// 005aa6fd  51                   push ecx
// 005aa6fe  8d542414             lea edx, [esp + 0x14]
// 005aa702  52                   push edx
// 005aa703  8d4c2424             lea ecx, [esp + 0x24]
// 005aa707  e8a4820300           call 0x5e29b0
// 005aa70c  83c301               add ebx, 1
// 005aa70f  3b5e04               cmp ebx, dword ptr [esi + 4]
// 005aa712  7ce4                 jl 0x5aa6f8
// 005aa714  397e04               cmp dword ptr [esi + 4], edi
// 005aa717  7e21                 jle 0x5aa73a
// 005aa719  8da42400000000       lea esp, [esp]
// 005aa720  8b0e                 mov ecx, dword ptr [esi]
// 005aa722  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 005aa725  8d44241c             lea eax, [esp + 0x1c]
// 005aa729  50                   push eax
// 005aa72a  52                   push edx
// 005aa72b  8bcd                 mov ecx, ebp
// 005aa72d  e82ef3ffff           call 0x5a9a60
// 005aa732  83c701               add edi, 1
// 005aa735  3b7e04               cmp edi, dword ptr [esi + 4]
// 005aa738  7ce6                 jl 0x5aa720
// 005aa73a  8b442420             mov eax, dword ptr [esp + 0x20]
// 005aa73e  8b10                 mov edx, dword ptr [eax]
// 005aa740  50                   push eax
// 005aa741  8d4c2420             lea ecx, [esp + 0x20]
// 005aa745  51                   push ecx
// 005aa746  52                   push edx
// 005aa747  8bf1                 mov esi, ecx
// 005aa749  56                   push esi
// 005aa74a  8d442420             lea eax, [esp + 0x20]
// 005aa74e  50                   push eax
// 005aa74f  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 005aa757  e804930000           call 0x5b3a60
// 005aa75c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005aa760  51                   push ecx
// 005aa761  e8fc540800           call 0x62fc62
// 005aa766  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005aa76a  83c404               add esp, 4
// 005aa76d  5f                   pop edi
// 005aa76e  5e                   pop esi
// 005aa76f  5d                   pop ebp
// 005aa770  5b                   pop ebx
// 005aa771  64890d00000000       mov dword ptr fs:[0], ecx
// 005aa778  83c424               add esp, 0x24
// 005aa77b  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?destroyJointsToWorld@World@RBX@@QAEXABV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
