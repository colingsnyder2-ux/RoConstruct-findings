// roc 2012-06 005bb630  unit: RakNet::RakPeer  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bb630
//
// 005bb630  83ec10               sub esp, 0x10
// 005bb633  53                   push ebx
// 005bb634  56                   push esi
// 005bb635  57                   push edi
// 005bb636  e885d3ffff           call 0x5b89c0
// 005bb63b  33ff                 xor edi, edi
// 005bb63d  8944240c             mov dword ptr [esp + 0xc], eax
// 005bb641  89542410             mov dword ptr [esp + 0x10], edx
// 005bb645  33f6                 xor esi, esi
// 005bb647  e874d3ffff           call 0x5b89c0
// 005bb64c  6a01                 push 1
// 005bb64e  8bd8                 mov ebx, eax
// 005bb650  8954241c             mov dword ptr [esp + 0x1c], edx
// 005bb654  e847d10000           call 0x5c87a0
// 005bb659  6a00                 push 0
// 005bb65b  e840d10000           call 0x5c87a0
// 005bb660  83c408               add esp, 8
// 005bb663  e858d3ffff           call 0x5b89c0
// 005bb668  2bc3                 sub eax, ebx
// 005bb66a  c1e01c               shl eax, 0x1c
// 005bb66d  25000000f0           and eax, 0xf0000000
// 005bb672  8bce                 mov ecx, esi
// 005bb674  d3e8                 shr eax, cl
// 005bb676  83c604               add esi, 4
// 005bb679  47                   inc edi
// 005bb67a  30443c0b             xor byte ptr [esp + edi + 0xb], al
// 005bb67e  83fe20               cmp esi, 0x20
// 005bb681  7cc4                 jl 0x5bb647
// 005bb683  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005bb687  8b542410             mov edx, dword ptr [esp + 0x10]
// 005bb68b  5f                   pop edi
// 005bb68c  5e                   pop esi
// 005bb68d  5b                   pop ebx
// 005bb68e  83c410               add esp, 0x10
// 005bb691  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?Get64BitUniqueRandomNumber@RakPeerInterface@RakNet@@SA_KXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
