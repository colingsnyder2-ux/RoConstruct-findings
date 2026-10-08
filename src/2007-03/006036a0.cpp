// roc 2007-03 006036a0  unit: seg_00600000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006036a0
//
// 006036a0  6aff                 push -1
// 006036a2  68089c7500           push 0x759c08
// 006036a7  64a100000000         mov eax, dword ptr fs:[0]
// 006036ad  50                   push eax
// 006036ae  64892500000000       mov dword ptr fs:[0], esp
// 006036b5  83ec08               sub esp, 8
// 006036b8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006036bc  56                   push esi
// 006036bd  57                   push edi
// 006036be  8bf1                 mov esi, ecx
// 006036c0  89742408             mov dword ptr [esp + 8], esi
// 006036c4  50                   push eax
// 006036c5  51                   push ecx
// 006036c6  8bc4                 mov eax, esp
// 006036c8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006036d0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006036d8  89642414             mov dword ptr [esp + 0x14], esp
// 006036dc  c70000000000         mov dword ptr [eax], 0
// 006036e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006036e6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006036ea  51                   push ecx
// 006036eb  52                   push edx
// 006036ec  c644242801           mov byte ptr [esp + 0x28], 1
// 006036f1  e8bafdffff           call 0x6034b0
// 006036f6  50                   push eax
// 006036f7  8bce                 mov ecx, esi
// 006036f9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006036fe  e8bd11e4ff           call 0x4448c0
// 00603703  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00603707  50                   push eax
// 00603708  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0060370d  e8dea90100           call 0x61e0f0
// 00603712  6a18                 push 0x18
// 00603714  c70648bd7900         mov dword ptr [esi], 0x79bd48
// 0060371a  e8e9a90100           call 0x61e108
// 0060371f  83c408               add esp, 8
// 00603722  85c0                 test eax, eax
// 00603724  741e                 je 0x603744
// 00603726  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0060372a  33c9                 xor ecx, ecx
// 0060372c  33d2                 xor edx, edx
// 0060372e  897808               mov dword ptr [eax + 8], edi
// 00603731  c700c80b7c00         mov dword ptr [eax], 0x7c0bc8
// 00603737  897004               mov dword ptr [eax + 4], esi
// 0060373a  894810               mov dword ptr [eax + 0x10], ecx
// 0060373d  895014               mov dword ptr [eax + 0x14], edx
// 00603740  8bf8                 mov edi, eax
// 00603742  eb02                 jmp 0x603746
// 00603744  33ff                 xor edi, edi
// 00603746  8b4618               mov eax, dword ptr [esi + 0x18]
// 00603749  3bf8                 cmp edi, eax
// 0060374b  7409                 je 0x603756
// 0060374d  50                   push eax
// 0060374e  e89da90100           call 0x61e0f0
// 00603753  83c404               add esp, 4
// 00603756  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060375a  897e18               mov dword ptr [esi + 0x18], edi
// 0060375d  5f                   pop edi
// 0060375e  8bc6                 mov eax, esi
// 00603760  64890d00000000       mov dword ptr fs:[0], ecx
// 00603767  5e                   pop esi
// 00603768  83c414               add esp, 0x14
// 0060376b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
