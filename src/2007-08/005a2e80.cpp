// roc 2007-08 005a2e80  unit: RBX::VTeams::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a2e80
//
// 005a2e80  56                   push esi
// 005a2e81  8bf1                 mov esi, ecx
// 005a2e83  c706844c7b00         mov dword ptr [esi], 0x7b4c84
// 005a2e89  c746047c4c7b00       mov dword ptr [esi + 4], 0x7b4c7c
// 005a2e90  c74610744c7b00       mov dword ptr [esi + 0x10], 0x7b4c74
// 005a2e97  c74614644c7b00       mov dword ptr [esi + 0x14], 0x7b4c64
// 005a2e9e  c7462c544c7b00       mov dword ptr [esi + 0x2c], 0x7b4c54
// 005a2ea5  c74644444c7b00       mov dword ptr [esi + 0x44], 0x7b4c44
// 005a2eac  c7465c344c7b00       mov dword ptr [esi + 0x5c], 0x7b4c34
// 005a2eb3  c74674244c7b00       mov dword ptr [esi + 0x74], 0x7b4c24
// 005a2eba  c7868c000000144c7b00 mov dword ptr [esi + 0x8c], 0x7b4c14
// 005a2ec4  e8e7d3f9ff           call 0x5402b0
// 005a2ec9  f644240801           test byte ptr [esp + 8], 1
// 005a2ece  740a                 je 0x5a2eda
// 005a2ed0  56                   push esi
// 005a2ed1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005a2ed7  83c404               add esp, 4
// 005a2eda  8bc6                 mov eax, esi
// 005a2edc  5e                   pop esi
// 005a2edd  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
