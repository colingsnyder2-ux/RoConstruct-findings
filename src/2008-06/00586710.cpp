// roc 2008-06 00586710  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00586710
//
// 00586710  6aff                 push -1
// 00586712  68880d7c00           push 0x7c0d88
// 00586717  64a100000000         mov eax, dword ptr fs:[0]
// 0058671d  50                   push eax
// 0058671e  64892500000000       mov dword ptr fs:[0], esp
// 00586725  83ec08               sub esp, 8
// 00586728  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058672c  56                   push esi
// 0058672d  57                   push edi
// 0058672e  8bf1                 mov esi, ecx
// 00586730  89742408             mov dword ptr [esp + 8], esi
// 00586734  50                   push eax
// 00586735  51                   push ecx
// 00586736  8bc4                 mov eax, esp
// 00586738  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00586740  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00586748  89642414             mov dword ptr [esp + 0x14], esp
// 0058674c  c70000000000         mov dword ptr [eax], 0
// 00586752  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00586756  8b542428             mov edx, dword ptr [esp + 0x28]
// 0058675a  51                   push ecx
// 0058675b  52                   push edx
// 0058675c  c644242801           mov byte ptr [esp + 0x28], 1
// 00586761  e8dafdffff           call 0x586540
// 00586766  50                   push eax
// 00586767  8bce                 mov ecx, esi
// 00586769  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0058676e  e81d3be8ff           call 0x40a290
// 00586773  6a18                 push 0x18
// 00586775  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0058677a  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 00586780  e89ba11100           call 0x6a0920
// 00586785  83c404               add esp, 4
// 00586788  85c0                 test eax, eax
// 0058678a  741e                 je 0x5867aa
// 0058678c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00586790  33c9                 xor ecx, ecx
// 00586792  33d2                 xor edx, edx
// 00586794  897808               mov dword ptr [eax + 8], edi
// 00586797  c70020118300         mov dword ptr [eax], 0x831120
// 0058679d  897004               mov dword ptr [eax + 4], esi
// 005867a0  894810               mov dword ptr [eax + 0x10], ecx
// 005867a3  895014               mov dword ptr [eax + 0x14], edx
// 005867a6  8bf8                 mov edi, eax
// 005867a8  eb02                 jmp 0x5867ac
// 005867aa  33ff                 xor edi, edi
// 005867ac  8b4618               mov eax, dword ptr [esi + 0x18]
// 005867af  3bf8                 cmp edi, eax
// 005867b1  740d                 je 0x5867c0
// 005867b3  85c0                 test eax, eax
// 005867b5  7409                 je 0x5867c0
// 005867b7  50                   push eax
// 005867b8  e8bd9e1100           call 0x6a067a
// 005867bd  83c404               add esp, 4
// 005867c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005867c4  897e18               mov dword ptr [esi + 0x18], edi
// 005867c7  5f                   pop edi
// 005867c8  8bc6                 mov eax, esi
// 005867ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005867d1  5e                   pop esi
// 005867d2  83c414               add esp, 0x14
// 005867d5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
