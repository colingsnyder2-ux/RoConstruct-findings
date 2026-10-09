// roc 2007-03 005a8850  unit: seg_005a0000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8850
//
// 005a8850  83ec08               sub esp, 8
// 005a8853  56                   push esi
// 005a8854  8bf1                 mov esi, ecx
// 005a8856  8b4610               mov eax, dword ptr [esi + 0x10]
// 005a8859  57                   push edi
// 005a885a  33ff                 xor edi, edi
// 005a885c  3bc7                 cmp eax, edi
// 005a885e  7409                 je 0x5a8869
// 005a8860  50                   push eax
// 005a8861  e88a580700           call 0x61e0f0
// 005a8866  83c404               add esp, 4
// 005a8869  897e10               mov dword ptr [esi + 0x10], edi
// 005a886c  897e14               mov dword ptr [esi + 0x14], edi
// 005a886f  897e18               mov dword ptr [esi + 0x18], edi
// 005a8872  8b4604               mov eax, dword ptr [esi + 4]
// 005a8875  8b08                 mov ecx, dword ptr [eax]
// 005a8877  50                   push eax
// 005a8878  56                   push esi
// 005a8879  51                   push ecx
// 005a887a  56                   push esi
// 005a887b  8d442418             lea eax, [esp + 0x18]
// 005a887f  50                   push eax
// 005a8880  8bce                 mov ecx, esi
// 005a8882  e839500000           call 0x5ad8c0
// 005a8887  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a888a  51                   push ecx
// 005a888b  e860580700           call 0x61e0f0
// 005a8890  83c404               add esp, 4
// 005a8893  897e04               mov dword ptr [esi + 4], edi
// 005a8896  897e08               mov dword ptr [esi + 8], edi
// 005a8899  5f                   pop edi
// 005a889a  5e                   pop esi
// 005a889b  83c408               add esp, 8
// 005a889e  c3                   ret 
// library openrbx-client/App\v8world\SimJobStage.cpp (function ??1Mechanism@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
