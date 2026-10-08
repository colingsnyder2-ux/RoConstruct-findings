// roc 2007-08 005aa780  unit: RBX::World  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aa780
//
// 005aa780  6aff                 push -1
// 005aa782  6838877500           push 0x758738
// 005aa787  64a100000000         mov eax, dword ptr fs:[0]
// 005aa78d  50                   push eax
// 005aa78e  64892500000000       mov dword ptr fs:[0], esp
// 005aa795  83ec18               sub esp, 0x18
// 005aa798  53                   push ebx
// 005aa799  55                   push ebp
// 005aa79a  56                   push esi
// 005aa79b  8be9                 mov ebp, ecx
// 005aa79d  57                   push edi
// 005aa79e  8d4c241c             lea ecx, [esp + 0x1c]
// 005aa7a2  e809ecffff           call 0x5a93b0
// 005aa7a7  89442420             mov dword ptr [esp + 0x20], eax
// 005aa7ab  c6401101             mov byte ptr [eax + 0x11], 1
// 005aa7af  8b442420             mov eax, dword ptr [esp + 0x20]
// 005aa7b3  894004               mov dword ptr [eax + 4], eax
// 005aa7b6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005aa7ba  8900                 mov dword ptr [eax], eax
// 005aa7bc  8b442420             mov eax, dword ptr [esp + 0x20]
// 005aa7c0  33ff                 xor edi, edi
// 005aa7c2  894008               mov dword ptr [eax + 8], eax
// 005aa7c5  897c2424             mov dword ptr [esp + 0x24], edi
// 005aa7c9  8b742438             mov esi, dword ptr [esp + 0x38]
// 005aa7cd  33db                 xor ebx, ebx
// 005aa7cf  397e04               cmp dword ptr [esi + 4], edi
// 005aa7d2  897c2430             mov dword ptr [esp + 0x30], edi
// 005aa7d6  7e42                 jle 0x5aa81a
// 005aa7d8  8b06                 mov eax, dword ptr [esi]
// 005aa7da  8d0c98               lea ecx, [eax + ebx*4]
// 005aa7dd  51                   push ecx
// 005aa7de  8d542414             lea edx, [esp + 0x14]
// 005aa7e2  52                   push edx
// 005aa7e3  8d4c2424             lea ecx, [esp + 0x24]
// 005aa7e7  e8c4810300           call 0x5e29b0
// 005aa7ec  83c301               add ebx, 1
// 005aa7ef  3b5e04               cmp ebx, dword ptr [esi + 4]
// 005aa7f2  7ce4                 jl 0x5aa7d8
// 005aa7f4  397e04               cmp dword ptr [esi + 4], edi
// 005aa7f7  7e21                 jle 0x5aa81a
// 005aa7f9  8da42400000000       lea esp, [esp]
// 005aa800  8b0e                 mov ecx, dword ptr [esi]
// 005aa802  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 005aa805  8d44241c             lea eax, [esp + 0x1c]
// 005aa809  50                   push eax
// 005aa80a  52                   push edx
// 005aa80b  8bcd                 mov ecx, ebp
// 005aa80d  e8bef7ffff           call 0x5a9fd0
// 005aa812  83c701               add edi, 1
// 005aa815  3b7e04               cmp edi, dword ptr [esi + 4]
// 005aa818  7ce6                 jl 0x5aa800
// 005aa81a  8b442420             mov eax, dword ptr [esp + 0x20]
// 005aa81e  8b10                 mov edx, dword ptr [eax]
// 005aa820  50                   push eax
// 005aa821  8d4c2420             lea ecx, [esp + 0x20]
// 005aa825  51                   push ecx
// 005aa826  52                   push edx
// 005aa827  8bf1                 mov esi, ecx
// 005aa829  56                   push esi
// 005aa82a  8d442420             lea eax, [esp + 0x20]
// 005aa82e  50                   push eax
// 005aa82f  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 005aa837  e824920000           call 0x5b3a60
// 005aa83c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005aa840  51                   push ecx
// 005aa841  e81c540800           call 0x62fc62
// 005aa846  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005aa84a  83c404               add esp, 4
// 005aa84d  5f                   pop edi
// 005aa84e  5e                   pop esi
// 005aa84f  5d                   pop ebp
// 005aa850  5b                   pop ebx
// 005aa851  64890d00000000       mov dword ptr fs:[0], ecx
// 005aa858  83c424               add esp, 0x24
// 005aa85b  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?destroyJointsToWorld@World@RBX@@QAEXABV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
