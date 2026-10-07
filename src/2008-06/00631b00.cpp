// roc 2008-06 00631b00  unit: RBX::VBodyVelocity::?$FactoryProduct  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631b00
//
// 00631b00  6aff                 push -1
// 00631b02  68880d7c00           push 0x7c0d88
// 00631b07  64a100000000         mov eax, dword ptr fs:[0]
// 00631b0d  50                   push eax
// 00631b0e  64892500000000       mov dword ptr fs:[0], esp
// 00631b15  83ec08               sub esp, 8
// 00631b18  8b442424             mov eax, dword ptr [esp + 0x24]
// 00631b1c  56                   push esi
// 00631b1d  57                   push edi
// 00631b1e  8bf1                 mov esi, ecx
// 00631b20  89742408             mov dword ptr [esp + 8], esi
// 00631b24  50                   push eax
// 00631b25  51                   push ecx
// 00631b26  8bc4                 mov eax, esp
// 00631b28  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00631b30  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00631b38  89642414             mov dword ptr [esp + 0x14], esp
// 00631b3c  c70000000000         mov dword ptr [eax], 0
// 00631b42  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00631b46  8b542428             mov edx, dword ptr [esp + 0x28]
// 00631b4a  51                   push ecx
// 00631b4b  52                   push edx
// 00631b4c  c644242801           mov byte ptr [esp + 0x28], 1
// 00631b51  e89af4ffff           call 0x630ff0
// 00631b56  50                   push eax
// 00631b57  8bce                 mov ecx, esi
// 00631b59  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00631b5e  e84d89f6ff           call 0x59a4b0
// 00631b63  6a18                 push 0x18
// 00631b65  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00631b6a  c706e45c8400         mov dword ptr [esi], 0x845ce4
// 00631b70  e8abed0600           call 0x6a0920
// 00631b75  83c404               add esp, 4
// 00631b78  85c0                 test eax, eax
// 00631b7a  741e                 je 0x631b9a
// 00631b7c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00631b80  33c9                 xor ecx, ecx
// 00631b82  33d2                 xor edx, edx
// 00631b84  897808               mov dword ptr [eax + 8], edi
// 00631b87  c7008c738400         mov dword ptr [eax], 0x84738c
// 00631b8d  897004               mov dword ptr [eax + 4], esi
// 00631b90  894810               mov dword ptr [eax + 0x10], ecx
// 00631b93  895014               mov dword ptr [eax + 0x14], edx
// 00631b96  8bf8                 mov edi, eax
// 00631b98  eb02                 jmp 0x631b9c
// 00631b9a  33ff                 xor edi, edi
// 00631b9c  8b4618               mov eax, dword ptr [esi + 0x18]
// 00631b9f  3bf8                 cmp edi, eax
// 00631ba1  740d                 je 0x631bb0
// 00631ba3  85c0                 test eax, eax
// 00631ba5  7409                 je 0x631bb0
// 00631ba7  50                   push eax
// 00631ba8  e8cdea0600           call 0x6a067a
// 00631bad  83c404               add esp, 4
// 00631bb0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00631bb4  897e18               mov dword ptr [esi + 0x18], edi
// 00631bb7  5f                   pop edi
// 00631bb8  8bc6                 mov eax, esi
// 00631bba  64890d00000000       mov dword ptr fs:[0], ecx
// 00631bc1  5e                   pop esi
// 00631bc2  83c414               add esp, 0x14
// 00631bc5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
