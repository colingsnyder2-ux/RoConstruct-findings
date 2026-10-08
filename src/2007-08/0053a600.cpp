// roc 2007-08 0053a600  unit: RBX::VScriptContext::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053a600
//
// 0053a600  56                   push esi
// 0053a601  8bf1                 mov esi, ecx
// 0053a603  c706f4567a00         mov dword ptr [esi], 0x7a56f4
// 0053a609  c74604e8567a00       mov dword ptr [esi + 4], 0x7a56e8
// 0053a610  c74610e0567a00       mov dword ptr [esi + 0x10], 0x7a56e0
// 0053a617  c74614d0567a00       mov dword ptr [esi + 0x14], 0x7a56d0
// 0053a61e  c7462cc0567a00       mov dword ptr [esi + 0x2c], 0x7a56c0
// 0053a625  c74644b0567a00       mov dword ptr [esi + 0x44], 0x7a56b0
// 0053a62c  c7465ca0567a00       mov dword ptr [esi + 0x5c], 0x7a56a0
// 0053a633  c7467490567a00       mov dword ptr [esi + 0x74], 0x7a5690
// 0053a63a  c7868c00000080567a00 mov dword ptr [esi + 0x8c], 0x7a5680
// 0053a644  e8675c0000           call 0x5402b0
// 0053a649  f644240801           test byte ptr [esp + 8], 1
// 0053a64e  740a                 je 0x53a65a
// 0053a650  56                   push esi
// 0053a651  ff15c4e67700         call dword ptr [0x77e6c4]
// 0053a657  83c404               add esp, 4
// 0053a65a  8bc6                 mov eax, esi
// 0053a65c  5e                   pop esi
// 0053a65d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
