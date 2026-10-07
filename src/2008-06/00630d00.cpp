// roc 2008-06 00630d00  unit: RBX::BodyMover  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630d00
//
// 00630d00  6aff                 push -1
// 00630d02  68880d7c00           push 0x7c0d88
// 00630d07  64a100000000         mov eax, dword ptr fs:[0]
// 00630d0d  50                   push eax
// 00630d0e  64892500000000       mov dword ptr fs:[0], esp
// 00630d15  83ec08               sub esp, 8
// 00630d18  8b442424             mov eax, dword ptr [esp + 0x24]
// 00630d1c  56                   push esi
// 00630d1d  57                   push edi
// 00630d1e  8bf1                 mov esi, ecx
// 00630d20  89742408             mov dword ptr [esp + 8], esi
// 00630d24  50                   push eax
// 00630d25  51                   push ecx
// 00630d26  8bc4                 mov eax, esp
// 00630d28  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00630d30  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00630d38  89642414             mov dword ptr [esp + 0x14], esp
// 00630d3c  c70000000000         mov dword ptr [eax], 0
// 00630d42  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00630d46  8b542428             mov edx, dword ptr [esp + 0x28]
// 00630d4a  51                   push ecx
// 00630d4b  52                   push edx
// 00630d4c  c644242801           mov byte ptr [esp + 0x28], 1
// 00630d51  e89afdffff           call 0x630af0
// 00630d56  50                   push eax
// 00630d57  8bce                 mov ecx, esi
// 00630d59  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00630d5e  e8ad48e1ff           call 0x445610
// 00630d63  6a18                 push 0x18
// 00630d65  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00630d6a  c70634418200         mov dword ptr [esi], 0x824134
// 00630d70  e8abfb0600           call 0x6a0920
// 00630d75  83c404               add esp, 4
// 00630d78  85c0                 test eax, eax
// 00630d7a  741e                 je 0x630d9a
// 00630d7c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00630d80  33c9                 xor ecx, ecx
// 00630d82  33d2                 xor edx, edx
// 00630d84  897808               mov dword ptr [eax + 8], edi
// 00630d87  c70050738400         mov dword ptr [eax], 0x847350
// 00630d8d  897004               mov dword ptr [eax + 4], esi
// 00630d90  894810               mov dword ptr [eax + 0x10], ecx
// 00630d93  895014               mov dword ptr [eax + 0x14], edx
// 00630d96  8bf8                 mov edi, eax
// 00630d98  eb02                 jmp 0x630d9c
// 00630d9a  33ff                 xor edi, edi
// 00630d9c  8b4618               mov eax, dword ptr [esi + 0x18]
// 00630d9f  3bf8                 cmp edi, eax
// 00630da1  740d                 je 0x630db0
// 00630da3  85c0                 test eax, eax
// 00630da5  7409                 je 0x630db0
// 00630da7  50                   push eax
// 00630da8  e8cdf80600           call 0x6a067a
// 00630dad  83c404               add esp, 4
// 00630db0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00630db4  897e18               mov dword ptr [esi + 0x18], edi
// 00630db7  5f                   pop edi
// 00630db8  8bc6                 mov eax, esi
// 00630dba  64890d00000000       mov dword ptr fs:[0], ecx
// 00630dc1  5e                   pop esi
// 00630dc2  83c414               add esp, 0x14
// 00630dc5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
