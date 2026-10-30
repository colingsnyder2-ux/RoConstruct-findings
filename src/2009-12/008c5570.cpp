// roc 2009-12 008c5570  unit: CXTPCustomizeToolbarsPage  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5570
//
// 008c5570  55                   push ebp
// 008c5571  8b2dc4cb9800         mov ebp, dword ptr [0x98cbc4]
// 008c5577  56                   push esi
// 008c5578  57                   push edi
// 008c5579  6a00                 push 0
// 008c557b  6a00                 push 0
// 008c557d  8bf1                 mov esi, ecx
// 008c557f  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008c5585  6888010000           push 0x188
// 008c558a  50                   push eax
// 008c558b  ffd5                 call ebp
// 008c558d  8bf8                 mov edi, eax
// 008c558f  83ffff               cmp edi, -1
// 008c5592  7474                 je 0x8c5608
// 008c5594  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008c559a  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 008c55a0  53                   push ebx
// 008c55a1  8b99b8000000         mov ebx, dword ptr [ecx + 0xb8]
// 008c55a7  6a00                 push 0
// 008c55a9  57                   push edi
// 008c55aa  6899010000           push 0x199
// 008c55af  52                   push edx
// 008c55b0  ffd5                 call ebp
// 008c55b2  85c0                 test eax, eax
// 008c55b4  7c47                 jl 0x8c55fd
// 008c55b6  3b8384000000         cmp eax, dword ptr [ebx + 0x84]
// 008c55bc  7d3f                 jge 0x8c55fd
// 008c55be  50                   push eax
// 008c55bf  8bcb                 mov ecx, ebx
// 008c55c1  e81af7f4ff           call 0x814ce0
// 008c55c6  8bd8                 mov ebx, eax
// 008c55c8  83bb3401000000       cmp dword ptr [ebx + 0x134], 0
// 008c55cf  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008c55d5  7513                 jne 0x8c55ea
// 008c55d7  6a01                 push 1
// 008c55d9  57                   push edi
// 008c55da  e8ab170600           call 0x926d8a
// 008c55df  5b                   pop ebx
// 008c55e0  5f                   pop edi
// 008c55e1  8bce                 mov ecx, esi
// 008c55e3  5e                   pop esi
// 008c55e4  5d                   pop ebp
// 008c55e5  e9e6fdffff           jmp 0x8c53d0
// 008c55ea  57                   push edi
// 008c55eb  e894170600           call 0x926d84
// 008c55f0  8b13                 mov edx, dword ptr [ebx]
// 008c55f2  50                   push eax
// 008c55f3  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 008c55f9  8bcb                 mov ecx, ebx
// 008c55fb  ffd0                 call eax
// 008c55fd  5b                   pop ebx
// 008c55fe  5f                   pop edi
// 008c55ff  8bce                 mov ecx, esi
// 008c5601  5e                   pop esi
// 008c5602  5d                   pop ebp
// 008c5603  e9c8fdffff           jmp 0x8c53d0
// 008c5608  5f                   pop edi
// 008c5609  5e                   pop esi
// 008c560a  5d                   pop ebp
// 008c560b  c3                   ret 
// copied from an identical function in another client (function ?OnChkChange@CXTPCustomizeToolbarsPage@@IAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCustomizeToolbarsPage.cpp