// roc 2008-06 005bf3c0  unit: RBX::VGameSettings::?$FactoryProduct  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf3c0
//
// 005bf3c0  6aff                 push -1
// 005bf3c2  68880d7c00           push 0x7c0d88
// 005bf3c7  64a100000000         mov eax, dword ptr fs:[0]
// 005bf3cd  50                   push eax
// 005bf3ce  64892500000000       mov dword ptr fs:[0], esp
// 005bf3d5  83ec08               sub esp, 8
// 005bf3d8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005bf3dc  56                   push esi
// 005bf3dd  57                   push edi
// 005bf3de  8bf1                 mov esi, ecx
// 005bf3e0  89742408             mov dword ptr [esp + 8], esi
// 005bf3e4  50                   push eax
// 005bf3e5  51                   push ecx
// 005bf3e6  8bc4                 mov eax, esp
// 005bf3e8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005bf3f0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005bf3f8  89642414             mov dword ptr [esp + 0x14], esp
// 005bf3fc  c70000000000         mov dword ptr [eax], 0
// 005bf402  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005bf406  8b542428             mov edx, dword ptr [esp + 0x28]
// 005bf40a  51                   push ecx
// 005bf40b  52                   push edx
// 005bf40c  c644242801           mov byte ptr [esp + 0x28], 1
// 005bf411  e86afeffff           call 0x5bf280
// 005bf416  50                   push eax
// 005bf417  8bce                 mov ecx, esi
// 005bf419  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005bf41e  e87d3ee8ff           call 0x4432a0
// 005bf423  6a18                 push 0x18
// 005bf425  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005bf42a  c70688598100         mov dword ptr [esi], 0x815988
// 005bf430  e8eb140e00           call 0x6a0920
// 005bf435  83c404               add esp, 4
// 005bf438  85c0                 test eax, eax
// 005bf43a  741e                 je 0x5bf45a
// 005bf43c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005bf440  33c9                 xor ecx, ecx
// 005bf442  33d2                 xor edx, edx
// 005bf444  897808               mov dword ptr [eax + 8], edi
// 005bf447  c700a0848300         mov dword ptr [eax], 0x8384a0
// 005bf44d  897004               mov dword ptr [eax + 4], esi
// 005bf450  894810               mov dword ptr [eax + 0x10], ecx
// 005bf453  895014               mov dword ptr [eax + 0x14], edx
// 005bf456  8bf8                 mov edi, eax
// 005bf458  eb02                 jmp 0x5bf45c
// 005bf45a  33ff                 xor edi, edi
// 005bf45c  8b4618               mov eax, dword ptr [esi + 0x18]
// 005bf45f  3bf8                 cmp edi, eax
// 005bf461  740d                 je 0x5bf470
// 005bf463  85c0                 test eax, eax
// 005bf465  7409                 je 0x5bf470
// 005bf467  50                   push eax
// 005bf468  e80d120e00           call 0x6a067a
// 005bf46d  83c404               add esp, 4
// 005bf470  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005bf474  897e18               mov dword ptr [esi + 0x18], edi
// 005bf477  5f                   pop edi
// 005bf478  8bc6                 mov eax, esi
// 005bf47a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf481  5e                   pop esi
// 005bf482  83c414               add esp, 0x14
// 005bf485  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
