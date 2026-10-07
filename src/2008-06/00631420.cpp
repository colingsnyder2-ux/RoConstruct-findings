// roc 2008-06 00631420  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631420
//
// 00631420  6aff                 push -1
// 00631422  68880d7c00           push 0x7c0d88
// 00631427  64a100000000         mov eax, dword ptr fs:[0]
// 0063142d  50                   push eax
// 0063142e  64892500000000       mov dword ptr fs:[0], esp
// 00631435  83ec08               sub esp, 8
// 00631438  8b442424             mov eax, dword ptr [esp + 0x24]
// 0063143c  56                   push esi
// 0063143d  57                   push edi
// 0063143e  8bf1                 mov esi, ecx
// 00631440  89742408             mov dword ptr [esp + 8], esi
// 00631444  50                   push eax
// 00631445  51                   push ecx
// 00631446  8bc4                 mov eax, esp
// 00631448  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00631450  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00631458  89642414             mov dword ptr [esp + 0x14], esp
// 0063145c  c70000000000         mov dword ptr [eax], 0
// 00631462  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00631466  8b542428             mov edx, dword ptr [esp + 0x28]
// 0063146a  51                   push ecx
// 0063146b  52                   push edx
// 0063146c  c644242801           mov byte ptr [esp + 0x28], 1
// 00631471  e8eafbffff           call 0x631060
// 00631476  50                   push eax
// 00631477  8bce                 mov ecx, esi
// 00631479  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063147e  e82d90f6ff           call 0x59a4b0
// 00631483  6a18                 push 0x18
// 00631485  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0063148a  c706e45c8400         mov dword ptr [esi], 0x845ce4
// 00631490  e88bf40600           call 0x6a0920
// 00631495  83c404               add esp, 4
// 00631498  85c0                 test eax, eax
// 0063149a  741e                 je 0x6314ba
// 0063149c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006314a0  33c9                 xor ecx, ecx
// 006314a2  33d2                 xor edx, edx
// 006314a4  897808               mov dword ptr [eax + 8], edi
// 006314a7  c700c4728400         mov dword ptr [eax], 0x8472c4
// 006314ad  897004               mov dword ptr [eax + 4], esi
// 006314b0  894810               mov dword ptr [eax + 0x10], ecx
// 006314b3  895014               mov dword ptr [eax + 0x14], edx
// 006314b6  8bf8                 mov edi, eax
// 006314b8  eb02                 jmp 0x6314bc
// 006314ba  33ff                 xor edi, edi
// 006314bc  8b4618               mov eax, dword ptr [esi + 0x18]
// 006314bf  3bf8                 cmp edi, eax
// 006314c1  740d                 je 0x6314d0
// 006314c3  85c0                 test eax, eax
// 006314c5  7409                 je 0x6314d0
// 006314c7  50                   push eax
// 006314c8  e8adf10600           call 0x6a067a
// 006314cd  83c404               add esp, 4
// 006314d0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006314d4  897e18               mov dword ptr [esi + 0x18], edi
// 006314d7  5f                   pop edi
// 006314d8  8bc6                 mov eax, esi
// 006314da  64890d00000000       mov dword ptr fs:[0], ecx
// 006314e1  5e                   pop esi
// 006314e2  83c414               add esp, 0x14
// 006314e5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
