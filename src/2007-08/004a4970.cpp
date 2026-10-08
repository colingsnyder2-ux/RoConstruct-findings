// roc 2007-08 004a4970  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a4970
//
// 004a4970  56                   push esi
// 004a4971  8bf1                 mov esi, ecx
// 004a4973  c70674cd7900         mov dword ptr [esi], 0x79cd74
// 004a4979  c746046ccd7900       mov dword ptr [esi + 4], 0x79cd6c
// 004a4980  c7461064cd7900       mov dword ptr [esi + 0x10], 0x79cd64
// 004a4987  c7461454cd7900       mov dword ptr [esi + 0x14], 0x79cd54
// 004a498e  c7462c44cd7900       mov dword ptr [esi + 0x2c], 0x79cd44
// 004a4995  c7464434cd7900       mov dword ptr [esi + 0x44], 0x79cd34
// 004a499c  c7465c24cd7900       mov dword ptr [esi + 0x5c], 0x79cd24
// 004a49a3  c7467414cd7900       mov dword ptr [esi + 0x74], 0x79cd14
// 004a49aa  c7868c00000004cd7900 mov dword ptr [esi + 0x8c], 0x79cd04
// 004a49b4  e8f7b80900           call 0x5402b0
// 004a49b9  f644240801           test byte ptr [esp + 8], 1
// 004a49be  740a                 je 0x4a49ca
// 004a49c0  56                   push esi
// 004a49c1  ff15c4e67700         call dword ptr [0x77e6c4]
// 004a49c7  83c404               add esp, 4
// 004a49ca  8bc6                 mov eax, esi
// 004a49cc  5e                   pop esi
// 004a49cd  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
