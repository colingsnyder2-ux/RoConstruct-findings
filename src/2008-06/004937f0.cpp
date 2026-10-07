// roc 2008-06 004937f0  unit: RBX::Network::Player  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004937f0
//
// 004937f0  6aff                 push -1
// 004937f2  6870e07c00           push 0x7ce070
// 004937f7  64a100000000         mov eax, dword ptr fs:[0]
// 004937fd  50                   push eax
// 004937fe  64892500000000       mov dword ptr fs:[0], esp
// 00493805  83ec14               sub esp, 0x14
// 00493808  53                   push ebx
// 00493809  55                   push ebp
// 0049380a  56                   push esi
// 0049380b  8bf1                 mov esi, ecx
// 0049380d  57                   push edi
// 0049380e  56                   push esi
// 0049380f  8d4c2420             lea ecx, [esp + 0x20]
// 00493813  e8486f0d00           call 0x56a760
// 00493818  d9442438             fld dword ptr [esp + 0x38]
// 0049381c  33c0                 xor eax, eax
// 0049381e  d95c2414             fstp dword ptr [esp + 0x14]
// 00493822  8944242c             mov dword ptr [esp + 0x2c], eax
// 00493826  88442410             mov byte ptr [esp + 0x10], al
// 0049382a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049382e  8b36                 mov esi, dword ptr [esi]
// 00493830  8b7e58               mov edi, dword ptr [esi + 0x58]
// 00493833  83ec40               sub esp, 0x40
// 00493836  89642458             mov dword ptr [esp + 0x58], esp
// 0049383a  8bdc                 mov ebx, esp
// 0049383c  8be8                 mov ebp, eax
// 0049383e  8d442450             lea eax, [esp + 0x50]
// 00493842  50                   push eax
// 00493843  8d4c2458             lea ecx, [esp + 0x58]
// 00493847  51                   push ecx
// 00493848  83ec1c               sub esp, 0x1c
// 0049384b  8bd4                 mov edx, esp
// 0049384d  8964247c             mov dword ptr [esp + 0x7c], esp
// 00493851  52                   push edx
// 00493852  8d4e08               lea ecx, [esi + 8]
// 00493855  c684249400000001     mov byte ptr [esp + 0x94], 1
// 0049385d  83c704               add edi, 4
// 00493860  e84bdb0d00           call 0x5713b0
// 00493865  83ec1c               sub esp, 0x1c
// 00493868  8bc4                 mov eax, esp
// 0049386a  89a42498000000       mov dword ptr [esp + 0x98], esp
// 00493871  50                   push eax
// 00493872  8d4d08               lea ecx, [ebp + 8]
// 00493875  e836db0d00           call 0x5713b0
// 0049387a  8bcb                 mov ecx, ebx
// 0049387c  e81fd0ffff           call 0x4908a0
// 00493881  83ec40               sub esp, 0x40
// 00493884  89a42498000000       mov dword ptr [esp + 0x98], esp
// 0049388b  8bdc                 mov ebx, esp
// 0049388d  8d8c2490000000       lea ecx, [esp + 0x90]
// 00493894  51                   push ecx
// 00493895  8d942498000000       lea edx, [esp + 0x98]
// 0049389c  52                   push edx
// 0049389d  83ec1c               sub esp, 0x1c
// 004938a0  8bc4                 mov eax, esp
// 004938a2  89a424bc000000       mov dword ptr [esp + 0xbc], esp
// 004938a9  50                   push eax
// 004938aa  8d4e08               lea ecx, [esi + 8]
// 004938ad  e8feda0d00           call 0x5713b0
// 004938b2  83ec1c               sub esp, 0x1c
// 004938b5  8bcc                 mov ecx, esp
// 004938b7  89a424d8000000       mov dword ptr [esp + 0xd8], esp
// 004938be  51                   push ecx
// 004938bf  8bcd                 mov ecx, ebp
// 004938c1  83c108               add ecx, 8
// 004938c4  e8b7da0d00           call 0x571380
// 004938c9  8bcb                 mov ecx, ebx
// 004938cb  e8d0cfffff           call 0x4908a0
// 004938d0  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 004938d7  56                   push esi
// 004938d8  8bcf                 mov ecx, edi
// 004938da  e8c1fbffff           call 0x4934a0
// 004938df  807c241000           cmp byte ptr [esp + 0x10], 0
// 004938e4  7405                 je 0x4938eb
// 004938e6  c644241000           mov byte ptr [esp + 0x10], 0
// 004938eb  8d4c241c             lea ecx, [esp + 0x1c]
// 004938ef  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004938f7  e8546d0d00           call 0x56a650
// 004938fc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00493900  5f                   pop edi
// 00493901  8bc6                 mov eax, esi
// 00493903  5e                   pop esi
// 00493904  5d                   pop ebp
// 00493905  64890d00000000       mov dword ptr fs:[0], ecx
// 0049390c  5b                   pop ebx
// 0049390d  83c420               add esp, 0x20
// 00493910  c20800               ret 8
// library rbxgs/humanoid\Running.cpp (function ??R?$signal1@XMU?$last_value@X@boost@@HU?$less@H@std@@V?$function@$$A6AXM@ZV?$allocator@X@std@@@2@@boost@@QAE?AUunusable@?$last_value@X@1@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Running.cpp
