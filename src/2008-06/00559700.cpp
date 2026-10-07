// roc 2008-06 00559700  unit: RBX::VInstance::?$SignalDesc  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559700
//
// 00559700  6aff                 push -1
// 00559702  68880d7c00           push 0x7c0d88
// 00559707  64a100000000         mov eax, dword ptr fs:[0]
// 0055970d  50                   push eax
// 0055970e  64892500000000       mov dword ptr fs:[0], esp
// 00559715  83ec08               sub esp, 8
// 00559718  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055971c  56                   push esi
// 0055971d  57                   push edi
// 0055971e  8bf1                 mov esi, ecx
// 00559720  89742408             mov dword ptr [esp + 8], esi
// 00559724  50                   push eax
// 00559725  51                   push ecx
// 00559726  8bc4                 mov eax, esp
// 00559728  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00559730  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00559738  89642414             mov dword ptr [esp + 0x14], esp
// 0055973c  c70000000000         mov dword ptr [eax], 0
// 00559742  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00559746  8b542428             mov edx, dword ptr [esp + 0x28]
// 0055974a  51                   push ecx
// 0055974b  52                   push edx
// 0055974c  c644242801           mov byte ptr [esp + 0x28], 1
// 00559751  e82a16ebff           call 0x40ad80
// 00559756  50                   push eax
// 00559757  8bce                 mov ecx, esi
// 00559759  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0055975e  e82d0bebff           call 0x40a290
// 00559763  6a18                 push 0x18
// 00559765  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0055976a  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 00559770  e8ab711400           call 0x6a0920
// 00559775  83c404               add esp, 4
// 00559778  85c0                 test eax, eax
// 0055977a  741e                 je 0x55979a
// 0055977c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00559780  33c9                 xor ecx, ecx
// 00559782  33d2                 xor edx, edx
// 00559784  897808               mov dword ptr [eax + 8], edi
// 00559787  c700b8d68200         mov dword ptr [eax], 0x82d6b8
// 0055978d  897004               mov dword ptr [eax + 4], esi
// 00559790  894810               mov dword ptr [eax + 0x10], ecx
// 00559793  895014               mov dword ptr [eax + 0x14], edx
// 00559796  8bf8                 mov edi, eax
// 00559798  eb02                 jmp 0x55979c
// 0055979a  33ff                 xor edi, edi
// 0055979c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0055979f  3bf8                 cmp edi, eax
// 005597a1  740d                 je 0x5597b0
// 005597a3  85c0                 test eax, eax
// 005597a5  7409                 je 0x5597b0
// 005597a7  50                   push eax
// 005597a8  e8cd6e1400           call 0x6a067a
// 005597ad  83c404               add esp, 4
// 005597b0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005597b4  897e18               mov dword ptr [esi + 0x18], edi
// 005597b7  5f                   pop edi
// 005597b8  8bc6                 mov eax, esi
// 005597ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005597c1  5e                   pop esi
// 005597c2  83c414               add esp, 0x14
// 005597c5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
