// roc 2008-06 005b4570  unit: RBX::VHat::?$FactoryProduct  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b4570
//
// 005b4570  6aff                 push -1
// 005b4572  68e4387d00           push 0x7d38e4
// 005b4577  64a100000000         mov eax, dword ptr fs:[0]
// 005b457d  50                   push eax
// 005b457e  64892500000000       mov dword ptr fs:[0], esp
// 005b4585  51                   push ecx
// 005b4586  56                   push esi
// 005b4587  8bf1                 mov esi, ecx
// 005b4589  57                   push edi
// 005b458a  89742408             mov dword ptr [esp + 8], esi
// 005b458e  8d8e90000000         lea ecx, [esi + 0x90]
// 005b4594  c744241404000000     mov dword ptr [esp + 0x14], 4
// 005b459c  e8dff7f9ff           call 0x553d80
// 005b45a1  8d4e70               lea ecx, [esi + 0x70]
// 005b45a4  c644241403           mov byte ptr [esp + 0x14], 3
// 005b45a9  e8f2fdffff           call 0x5b43a0
// 005b45ae  8d4e50               lea ecx, [esi + 0x50]
// 005b45b1  c644241402           mov byte ptr [esp + 0x14], 2
// 005b45b6  e825faffff           call 0x5b3fe0
// 005b45bb  8d4e30               lea ecx, [esi + 0x30]
// 005b45be  c644241401           mov byte ptr [esp + 0x14], 1
// 005b45c3  e8b8f7f9ff           call 0x553d80
// 005b45c8  8b4624               mov eax, dword ptr [esi + 0x24]
// 005b45cb  33ff                 xor edi, edi
// 005b45cd  3bc7                 cmp eax, edi
// 005b45cf  7409                 je 0x5b45da
// 005b45d1  50                   push eax
// 005b45d2  e8a3c00e00           call 0x6a067a
// 005b45d7  83c404               add esp, 4
// 005b45da  8b4618               mov eax, dword ptr [esi + 0x18]
// 005b45dd  50                   push eax
// 005b45de  897e24               mov dword ptr [esi + 0x24], edi
// 005b45e1  897e28               mov dword ptr [esi + 0x28], edi
// 005b45e4  897e2c               mov dword ptr [esi + 0x2c], edi
// 005b45e7  e88ec00e00           call 0x6a067a
// 005b45ec  8b460c               mov eax, dword ptr [esi + 0xc]
// 005b45ef  83c404               add esp, 4
// 005b45f2  3bc7                 cmp eax, edi
// 005b45f4  7409                 je 0x5b45ff
// 005b45f6  50                   push eax
// 005b45f7  e87ec00e00           call 0x6a067a
// 005b45fc  83c404               add esp, 4
// 005b45ff  8b0e                 mov ecx, dword ptr [esi]
// 005b4601  51                   push ecx
// 005b4602  897e0c               mov dword ptr [esi + 0xc], edi
// 005b4605  897e10               mov dword ptr [esi + 0x10], edi
// 005b4608  897e14               mov dword ptr [esi + 0x14], edi
// 005b460b  e86ac00e00           call 0x6a067a
// 005b4610  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b4614  83c404               add esp, 4
// 005b4617  5f                   pop edi
// 005b4618  5e                   pop esi
// 005b4619  64890d00000000       mov dword ptr fs:[0], ecx
// 005b4620  83c410               add esp, 0x10
// 005b4623  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??1BrickMap@BrickColor@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
