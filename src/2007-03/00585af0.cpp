// roc 2007-03 00585af0  unit: seg_00580000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00585af0
//
// 00585af0  6aff                 push -1
// 00585af2  68089c7500           push 0x759c08
// 00585af7  64a100000000         mov eax, dword ptr fs:[0]
// 00585afd  50                   push eax
// 00585afe  64892500000000       mov dword ptr fs:[0], esp
// 00585b05  83ec08               sub esp, 8
// 00585b08  8b442424             mov eax, dword ptr [esp + 0x24]
// 00585b0c  56                   push esi
// 00585b0d  57                   push edi
// 00585b0e  8bf1                 mov esi, ecx
// 00585b10  89742408             mov dword ptr [esp + 8], esi
// 00585b14  50                   push eax
// 00585b15  51                   push ecx
// 00585b16  8bc4                 mov eax, esp
// 00585b18  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00585b20  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00585b28  89642414             mov dword ptr [esp + 0x14], esp
// 00585b2c  c70000000000         mov dword ptr [eax], 0
// 00585b32  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00585b36  8b542428             mov edx, dword ptr [esp + 0x28]
// 00585b3a  51                   push ecx
// 00585b3b  52                   push edx
// 00585b3c  c644242801           mov byte ptr [esp + 0x28], 1
// 00585b41  e83afbffff           call 0x585680
// 00585b46  50                   push eax
// 00585b47  8bce                 mov ecx, esi
// 00585b49  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00585b4e  e83dcdebff           call 0x442890
// 00585b53  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00585b57  50                   push eax
// 00585b58  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00585b5d  e88e850900           call 0x61e0f0
// 00585b62  6a18                 push 0x18
// 00585b64  c706c0e67800         mov dword ptr [esi], 0x78e6c0
// 00585b6a  e899850900           call 0x61e108
// 00585b6f  83c408               add esp, 8
// 00585b72  85c0                 test eax, eax
// 00585b74  741e                 je 0x585b94
// 00585b76  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00585b7a  33c9                 xor ecx, ecx
// 00585b7c  33d2                 xor edx, edx
// 00585b7e  897808               mov dword ptr [eax + 8], edi
// 00585b81  c70004fb7a00         mov dword ptr [eax], 0x7afb04
// 00585b87  897004               mov dword ptr [eax + 4], esi
// 00585b8a  894810               mov dword ptr [eax + 0x10], ecx
// 00585b8d  895014               mov dword ptr [eax + 0x14], edx
// 00585b90  8bf8                 mov edi, eax
// 00585b92  eb02                 jmp 0x585b96
// 00585b94  33ff                 xor edi, edi
// 00585b96  8b4618               mov eax, dword ptr [esi + 0x18]
// 00585b99  3bf8                 cmp edi, eax
// 00585b9b  7409                 je 0x585ba6
// 00585b9d  50                   push eax
// 00585b9e  e84d850900           call 0x61e0f0
// 00585ba3  83c404               add esp, 4
// 00585ba6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00585baa  897e18               mov dword ptr [esi + 0x18], edi
// 00585bad  5f                   pop edi
// 00585bae  8bc6                 mov eax, esi
// 00585bb0  64890d00000000       mov dword ptr fs:[0], ecx
// 00585bb7  5e                   pop esi
// 00585bb8  83c414               add esp, 0x14
// 00585bbb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
