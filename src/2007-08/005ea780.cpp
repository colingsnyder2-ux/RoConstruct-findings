// roc 2007-08 005ea780  unit: RBX::VFlagStandService::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ea780
//
// 005ea780  56                   push esi
// 005ea781  8bf1                 mov esi, ecx
// 005ea783  c70654de7b00         mov dword ptr [esi], 0x7bde54
// 005ea789  c746044cde7b00       mov dword ptr [esi + 4], 0x7bde4c
// 005ea790  c7461044de7b00       mov dword ptr [esi + 0x10], 0x7bde44
// 005ea797  c7461434de7b00       mov dword ptr [esi + 0x14], 0x7bde34
// 005ea79e  c7462c24de7b00       mov dword ptr [esi + 0x2c], 0x7bde24
// 005ea7a5  c7464414de7b00       mov dword ptr [esi + 0x44], 0x7bde14
// 005ea7ac  c7465c04de7b00       mov dword ptr [esi + 0x5c], 0x7bde04
// 005ea7b3  c74674f4dd7b00       mov dword ptr [esi + 0x74], 0x7bddf4
// 005ea7ba  c7868c000000e4dd7b00 mov dword ptr [esi + 0x8c], 0x7bdde4
// 005ea7c4  e8e75af5ff           call 0x5402b0
// 005ea7c9  f644240801           test byte ptr [esp + 8], 1
// 005ea7ce  740a                 je 0x5ea7da
// 005ea7d0  56                   push esi
// 005ea7d1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005ea7d7  83c404               add esp, 4
// 005ea7da  8bc6                 mov eax, esi
// 005ea7dc  5e                   pop esi
// 005ea7dd  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
