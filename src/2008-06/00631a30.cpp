// roc 2008-06 00631a30  unit: RBX::VBodyVelocity::?$FactoryProduct  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631a30
//
// 00631a30  6aff                 push -1
// 00631a32  68880d7c00           push 0x7c0d88
// 00631a37  64a100000000         mov eax, dword ptr fs:[0]
// 00631a3d  50                   push eax
// 00631a3e  64892500000000       mov dword ptr fs:[0], esp
// 00631a45  83ec08               sub esp, 8
// 00631a48  8b442424             mov eax, dword ptr [esp + 0x24]
// 00631a4c  56                   push esi
// 00631a4d  57                   push edi
// 00631a4e  8bf1                 mov esi, ecx
// 00631a50  89742408             mov dword ptr [esp + 8], esi
// 00631a54  50                   push eax
// 00631a55  51                   push ecx
// 00631a56  8bc4                 mov eax, esp
// 00631a58  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00631a60  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00631a68  89642414             mov dword ptr [esp + 0x14], esp
// 00631a6c  c70000000000         mov dword ptr [eax], 0
// 00631a72  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00631a76  8b542428             mov edx, dword ptr [esp + 0x28]
// 00631a7a  51                   push ecx
// 00631a7b  52                   push edx
// 00631a7c  c644242801           mov byte ptr [esp + 0x28], 1
// 00631a81  e86af5ffff           call 0x630ff0
// 00631a86  50                   push eax
// 00631a87  8bce                 mov ecx, esi
// 00631a89  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00631a8e  e87d3be1ff           call 0x445610
// 00631a93  6a18                 push 0x18
// 00631a95  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00631a9a  c70634418200         mov dword ptr [esi], 0x824134
// 00631aa0  e87bee0600           call 0x6a0920
// 00631aa5  83c404               add esp, 4
// 00631aa8  85c0                 test eax, eax
// 00631aaa  741e                 je 0x631aca
// 00631aac  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00631ab0  33c9                 xor ecx, ecx
// 00631ab2  33d2                 xor edx, edx
// 00631ab4  897808               mov dword ptr [eax + 8], edi
// 00631ab7  c70078738400         mov dword ptr [eax], 0x847378
// 00631abd  897004               mov dword ptr [eax + 4], esi
// 00631ac0  894810               mov dword ptr [eax + 0x10], ecx
// 00631ac3  895014               mov dword ptr [eax + 0x14], edx
// 00631ac6  8bf8                 mov edi, eax
// 00631ac8  eb02                 jmp 0x631acc
// 00631aca  33ff                 xor edi, edi
// 00631acc  8b4618               mov eax, dword ptr [esi + 0x18]
// 00631acf  3bf8                 cmp edi, eax
// 00631ad1  740d                 je 0x631ae0
// 00631ad3  85c0                 test eax, eax
// 00631ad5  7409                 je 0x631ae0
// 00631ad7  50                   push eax
// 00631ad8  e89deb0600           call 0x6a067a
// 00631add  83c404               add esp, 4
// 00631ae0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00631ae4  897e18               mov dword ptr [esi + 0x18], edi
// 00631ae7  5f                   pop edi
// 00631ae8  8bc6                 mov eax, esi
// 00631aea  64890d00000000       mov dword ptr fs:[0], ecx
// 00631af1  5e                   pop esi
// 00631af2  83c414               add esp, 0x14
// 00631af5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
