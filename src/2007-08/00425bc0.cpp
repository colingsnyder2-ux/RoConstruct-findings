// roc 2007-08 00425bc0  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00425bc0
//
// 00425bc0  56                   push esi
// 00425bc1  8bf1                 mov esi, ecx
// 00425bc3  c7065c887800         mov dword ptr [esi], 0x78885c
// 00425bc9  c7460454887800       mov dword ptr [esi + 4], 0x788854
// 00425bd0  c746104c887800       mov dword ptr [esi + 0x10], 0x78884c
// 00425bd7  c746143c887800       mov dword ptr [esi + 0x14], 0x78883c
// 00425bde  c7462c2c887800       mov dword ptr [esi + 0x2c], 0x78882c
// 00425be5  c746441c887800       mov dword ptr [esi + 0x44], 0x78881c
// 00425bec  c7465c0c887800       mov dword ptr [esi + 0x5c], 0x78880c
// 00425bf3  c74674fc877800       mov dword ptr [esi + 0x74], 0x7887fc
// 00425bfa  c7868c000000ec877800 mov dword ptr [esi + 0x8c], 0x7887ec
// 00425c04  e8a7a61100           call 0x5402b0
// 00425c09  f644240801           test byte ptr [esp + 8], 1
// 00425c0e  740a                 je 0x425c1a
// 00425c10  56                   push esi
// 00425c11  ff15c4e67700         call dword ptr [0x77e6c4]
// 00425c17  83c404               add esp, 4
// 00425c1a  8bc6                 mov eax, esi
// 00425c1c  5e                   pop esi
// 00425c1d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
