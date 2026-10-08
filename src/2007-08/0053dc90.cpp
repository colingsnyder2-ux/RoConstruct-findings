// roc 2007-08 0053dc90  unit: RBX::VScript::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053dc90
//
// 0053dc90  56                   push esi
// 0053dc91  8bf1                 mov esi, ecx
// 0053dc93  c706f45d7a00         mov dword ptr [esi], 0x7a5df4
// 0053dc99  c74604ec5d7a00       mov dword ptr [esi + 4], 0x7a5dec
// 0053dca0  c74610e45d7a00       mov dword ptr [esi + 0x10], 0x7a5de4
// 0053dca7  c74614d45d7a00       mov dword ptr [esi + 0x14], 0x7a5dd4
// 0053dcae  c7462cc45d7a00       mov dword ptr [esi + 0x2c], 0x7a5dc4
// 0053dcb5  c74644b45d7a00       mov dword ptr [esi + 0x44], 0x7a5db4
// 0053dcbc  c7465ca45d7a00       mov dword ptr [esi + 0x5c], 0x7a5da4
// 0053dcc3  c74674945d7a00       mov dword ptr [esi + 0x74], 0x7a5d94
// 0053dcca  c7868c000000845d7a00 mov dword ptr [esi + 0x8c], 0x7a5d84
// 0053dcd4  e8d7250000           call 0x5402b0
// 0053dcd9  f644240801           test byte ptr [esp + 8], 1
// 0053dcde  740a                 je 0x53dcea
// 0053dce0  56                   push esi
// 0053dce1  ff15c4e67700         call dword ptr [0x77e6c4]
// 0053dce7  83c404               add esp, 4
// 0053dcea  8bc6                 mov eax, esi
// 0053dcec  5e                   pop esi
// 0053dced  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
