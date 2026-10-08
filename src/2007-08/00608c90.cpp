// roc 2007-08 00608c90  unit: RBX::SimJobStage  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608c90
//
// 00608c90  83ec08               sub esp, 8
// 00608c93  56                   push esi
// 00608c94  8bf1                 mov esi, ecx
// 00608c96  8b4610               mov eax, dword ptr [esi + 0x10]
// 00608c99  57                   push edi
// 00608c9a  33ff                 xor edi, edi
// 00608c9c  3bc7                 cmp eax, edi
// 00608c9e  7409                 je 0x608ca9
// 00608ca0  50                   push eax
// 00608ca1  e8bc6f0200           call 0x62fc62
// 00608ca6  83c404               add esp, 4
// 00608ca9  897e10               mov dword ptr [esi + 0x10], edi
// 00608cac  897e14               mov dword ptr [esi + 0x14], edi
// 00608caf  897e18               mov dword ptr [esi + 0x18], edi
// 00608cb2  8b4604               mov eax, dword ptr [esi + 4]
// 00608cb5  8b08                 mov ecx, dword ptr [eax]
// 00608cb7  50                   push eax
// 00608cb8  56                   push esi
// 00608cb9  51                   push ecx
// 00608cba  56                   push esi
// 00608cbb  8d442418             lea eax, [esp + 0x18]
// 00608cbf  50                   push eax
// 00608cc0  8bce                 mov ecx, esi
// 00608cc2  e899adfaff           call 0x5b3a60
// 00608cc7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00608cca  51                   push ecx
// 00608ccb  e8926f0200           call 0x62fc62
// 00608cd0  83c404               add esp, 4
// 00608cd3  897e04               mov dword ptr [esi + 4], edi
// 00608cd6  897e08               mov dword ptr [esi + 8], edi
// 00608cd9  5f                   pop edi
// 00608cda  5e                   pop esi
// 00608cdb  83c408               add esp, 8
// 00608cde  c3                   ret 
// library openrbx-client/App\v8world\SimJobStage.cpp (function ??1Mechanism@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
