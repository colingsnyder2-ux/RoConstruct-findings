// roc 2008-06 0062aa00  unit: RBX::VExplosion::?$SignalDesc  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062aa00
//
// 0062aa00  6aff                 push -1
// 0062aa02  68880d7c00           push 0x7c0d88
// 0062aa07  64a100000000         mov eax, dword ptr fs:[0]
// 0062aa0d  50                   push eax
// 0062aa0e  64892500000000       mov dword ptr fs:[0], esp
// 0062aa15  83ec08               sub esp, 8
// 0062aa18  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062aa1c  56                   push esi
// 0062aa1d  57                   push edi
// 0062aa1e  8bf1                 mov esi, ecx
// 0062aa20  89742408             mov dword ptr [esp + 8], esi
// 0062aa24  50                   push eax
// 0062aa25  51                   push ecx
// 0062aa26  8bc4                 mov eax, esp
// 0062aa28  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0062aa30  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0062aa38  89642414             mov dword ptr [esp + 0x14], esp
// 0062aa3c  c70000000000         mov dword ptr [eax], 0
// 0062aa42  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0062aa46  8b542428             mov edx, dword ptr [esp + 0x28]
// 0062aa4a  51                   push ecx
// 0062aa4b  52                   push edx
// 0062aa4c  c644242801           mov byte ptr [esp + 0x28], 1
// 0062aa51  e8ca58f9ff           call 0x5c0320
// 0062aa56  50                   push eax
// 0062aa57  8bce                 mov ecx, esi
// 0062aa59  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0062aa5e  e84dfaf6ff           call 0x59a4b0
// 0062aa63  6a18                 push 0x18
// 0062aa65  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0062aa6a  c706e45c8400         mov dword ptr [esi], 0x845ce4
// 0062aa70  e8ab5e0700           call 0x6a0920
// 0062aa75  83c404               add esp, 4
// 0062aa78  85c0                 test eax, eax
// 0062aa7a  741e                 je 0x62aa9a
// 0062aa7c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0062aa80  33c9                 xor ecx, ecx
// 0062aa82  33d2                 xor edx, edx
// 0062aa84  897808               mov dword ptr [eax + 8], edi
// 0062aa87  c700845c8400         mov dword ptr [eax], 0x845c84
// 0062aa8d  897004               mov dword ptr [eax + 4], esi
// 0062aa90  894810               mov dword ptr [eax + 0x10], ecx
// 0062aa93  895014               mov dword ptr [eax + 0x14], edx
// 0062aa96  8bf8                 mov edi, eax
// 0062aa98  eb02                 jmp 0x62aa9c
// 0062aa9a  33ff                 xor edi, edi
// 0062aa9c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0062aa9f  3bf8                 cmp edi, eax
// 0062aaa1  740d                 je 0x62aab0
// 0062aaa3  85c0                 test eax, eax
// 0062aaa5  7409                 je 0x62aab0
// 0062aaa7  50                   push eax
// 0062aaa8  e8cd5b0700           call 0x6a067a
// 0062aaad  83c404               add esp, 4
// 0062aab0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062aab4  897e18               mov dword ptr [esi + 0x18], edi
// 0062aab7  5f                   pop edi
// 0062aab8  8bc6                 mov eax, esi
// 0062aaba  64890d00000000       mov dword ptr fs:[0], ecx
// 0062aac1  5e                   pop esi
// 0062aac2  83c414               add esp, 0x14
// 0062aac5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
