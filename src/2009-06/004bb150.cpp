// roc 2009-06 004bb150  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bb150
//
// 004bb150  6aff                 push -1
// 004bb152  6868eb8600           push 0x86eb68
// 004bb157  64a100000000         mov eax, dword ptr fs:[0]
// 004bb15d  50                   push eax
// 004bb15e  64892500000000       mov dword ptr fs:[0], esp
// 004bb165  83ec08               sub esp, 8
// 004bb168  8b442424             mov eax, dword ptr [esp + 0x24]
// 004bb16c  56                   push esi
// 004bb16d  57                   push edi
// 004bb16e  8bf1                 mov esi, ecx
// 004bb170  89742408             mov dword ptr [esp + 8], esi
// 004bb174  50                   push eax
// 004bb175  51                   push ecx
// 004bb176  8bc4                 mov eax, esp
// 004bb178  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004bb180  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004bb188  89642414             mov dword ptr [esp + 0x14], esp
// 004bb18c  c70000000000         mov dword ptr [eax], 0
// 004bb192  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004bb196  8b542428             mov edx, dword ptr [esp + 0x28]
// 004bb19a  51                   push ecx
// 004bb19b  52                   push edx
// 004bb19c  c644242801           mov byte ptr [esp + 0x28], 1
// 004bb1a1  e83afaffff           call 0x4babe0
// 004bb1a6  50                   push eax
// 004bb1a7  8bce                 mov ecx, esi
// 004bb1a9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004bb1ae  e88de5f4ff           call 0x409740
// 004bb1b3  6a00                 push 0
// 004bb1b5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004bb1ba  e873d82500           call 0x718a32
// 004bb1bf  6a18                 push 0x18
// 004bb1c1  c70650d48a00         mov dword ptr [esi], 0x8ad450
// 004bb1c7  e86cd82500           call 0x718a38
// 004bb1cc  83c408               add esp, 8
// 004bb1cf  85c0                 test eax, eax
// 004bb1d1  741e                 je 0x4bb1f1
// 004bb1d3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004bb1d7  33c9                 xor ecx, ecx
// 004bb1d9  33d2                 xor edx, edx
// 004bb1db  897808               mov dword ptr [eax + 8], edi
// 004bb1de  c70098448c00         mov dword ptr [eax], 0x8c4498
// 004bb1e4  897004               mov dword ptr [eax + 4], esi
// 004bb1e7  894810               mov dword ptr [eax + 0x10], ecx
// 004bb1ea  895014               mov dword ptr [eax + 0x14], edx
// 004bb1ed  8bf8                 mov edi, eax
// 004bb1ef  eb02                 jmp 0x4bb1f3
// 004bb1f1  33ff                 xor edi, edi
// 004bb1f3  8b4618               mov eax, dword ptr [esi + 0x18]
// 004bb1f6  3bf8                 cmp edi, eax
// 004bb1f8  7409                 je 0x4bb203
// 004bb1fa  50                   push eax
// 004bb1fb  e832d82500           call 0x718a32
// 004bb200  83c404               add esp, 4
// 004bb203  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004bb207  897e18               mov dword ptr [esi + 0x18], edi
// 004bb20a  5f                   pop edi
// 004bb20b  8bc6                 mov eax, esi
// 004bb20d  64890d00000000       mov dword ptr fs:[0], ecx
// 004bb214  5e                   pop esi
// 004bb215  83c414               add esp, 0x14
// 004bb218  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
