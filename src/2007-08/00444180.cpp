// roc 2007-08 00444180  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00444180
//
// 00444180  56                   push esi
// 00444181  8bf1                 mov esi, ecx
// 00444183  c7060cf67800         mov dword ptr [esi], 0x78f60c
// 00444189  c7460404f67800       mov dword ptr [esi + 4], 0x78f604
// 00444190  c74610fcf57800       mov dword ptr [esi + 0x10], 0x78f5fc
// 00444197  c74614ecf57800       mov dword ptr [esi + 0x14], 0x78f5ec
// 0044419e  c7462cdcf57800       mov dword ptr [esi + 0x2c], 0x78f5dc
// 004441a5  c74644ccf57800       mov dword ptr [esi + 0x44], 0x78f5cc
// 004441ac  c7465cbcf57800       mov dword ptr [esi + 0x5c], 0x78f5bc
// 004441b3  c74674acf57800       mov dword ptr [esi + 0x74], 0x78f5ac
// 004441ba  c7868c0000009cf57800 mov dword ptr [esi + 0x8c], 0x78f59c
// 004441c4  e8e7c00f00           call 0x5402b0
// 004441c9  f644240801           test byte ptr [esp + 8], 1
// 004441ce  740a                 je 0x4441da
// 004441d0  56                   push esi
// 004441d1  ff15c4e67700         call dword ptr [0x77e6c4]
// 004441d7  83c404               add esp, 4
// 004441da  8bc6                 mov eax, esi
// 004441dc  5e                   pop esi
// 004441dd  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
