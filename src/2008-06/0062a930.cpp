// roc 2008-06 0062a930  unit: RBX::VExplosion::?$SignalDesc  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a930
//
// 0062a930  6aff                 push -1
// 0062a932  68880d7c00           push 0x7c0d88
// 0062a937  64a100000000         mov eax, dword ptr fs:[0]
// 0062a93d  50                   push eax
// 0062a93e  64892500000000       mov dword ptr fs:[0], esp
// 0062a945  83ec08               sub esp, 8
// 0062a948  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062a94c  56                   push esi
// 0062a94d  57                   push edi
// 0062a94e  8bf1                 mov esi, ecx
// 0062a950  89742408             mov dword ptr [esp + 8], esi
// 0062a954  50                   push eax
// 0062a955  51                   push ecx
// 0062a956  8bc4                 mov eax, esp
// 0062a958  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0062a960  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0062a968  89642414             mov dword ptr [esp + 0x14], esp
// 0062a96c  c70000000000         mov dword ptr [eax], 0
// 0062a972  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0062a976  8b542428             mov edx, dword ptr [esp + 0x28]
// 0062a97a  51                   push ecx
// 0062a97b  52                   push edx
// 0062a97c  c644242801           mov byte ptr [esp + 0x28], 1
// 0062a981  e89a59f9ff           call 0x5c0320
// 0062a986  50                   push eax
// 0062a987  8bce                 mov ecx, esi
// 0062a989  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0062a98e  e87dace1ff           call 0x445610
// 0062a993  6a18                 push 0x18
// 0062a995  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0062a99a  c70634418200         mov dword ptr [esi], 0x824134
// 0062a9a0  e87b5f0700           call 0x6a0920
// 0062a9a5  83c404               add esp, 4
// 0062a9a8  85c0                 test eax, eax
// 0062a9aa  741e                 je 0x62a9ca
// 0062a9ac  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0062a9b0  33c9                 xor ecx, ecx
// 0062a9b2  33d2                 xor edx, edx
// 0062a9b4  897808               mov dword ptr [eax + 8], edi
// 0062a9b7  c700705c8400         mov dword ptr [eax], 0x845c70
// 0062a9bd  897004               mov dword ptr [eax + 4], esi
// 0062a9c0  894810               mov dword ptr [eax + 0x10], ecx
// 0062a9c3  895014               mov dword ptr [eax + 0x14], edx
// 0062a9c6  8bf8                 mov edi, eax
// 0062a9c8  eb02                 jmp 0x62a9cc
// 0062a9ca  33ff                 xor edi, edi
// 0062a9cc  8b4618               mov eax, dword ptr [esi + 0x18]
// 0062a9cf  3bf8                 cmp edi, eax
// 0062a9d1  740d                 je 0x62a9e0
// 0062a9d3  85c0                 test eax, eax
// 0062a9d5  7409                 je 0x62a9e0
// 0062a9d7  50                   push eax
// 0062a9d8  e89d5c0700           call 0x6a067a
// 0062a9dd  83c404               add esp, 4
// 0062a9e0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062a9e4  897e18               mov dword ptr [esi + 0x18], edi
// 0062a9e7  5f                   pop edi
// 0062a9e8  8bc6                 mov eax, esi
// 0062a9ea  64890d00000000       mov dword ptr fs:[0], ecx
// 0062a9f1  5e                   pop esi
// 0062a9f2  83c414               add esp, 0x14
// 0062a9f5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
