// roc 2008-06 004933c0  unit: RBX::VPants::?$FactoryProduct  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004933c0
//
// 004933c0  6aff                 push -1
// 004933c2  68a8667c00           push 0x7c66a8
// 004933c7  64a100000000         mov eax, dword ptr fs:[0]
// 004933cd  50                   push eax
// 004933ce  64892500000000       mov dword ptr fs:[0], esp
// 004933d5  51                   push ecx
// 004933d6  56                   push esi
// 004933d7  8bf1                 mov esi, ecx
// 004933d9  89742404             mov dword ptr [esp + 4], esi
// 004933dd  e85ec9ffff           call 0x48fd40
// 004933e2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004933ea  e8c1ebffff           call 0x491fb0
// 004933ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004933f3  89461c               mov dword ptr [esi + 0x1c], eax
// 004933f6  c706641f8200         mov dword ptr [esi], 0x821f64
// 004933fc  c74610541f8200       mov dword ptr [esi + 0x10], 0x821f54
// 00493403  c746144c1f8200       mov dword ptr [esi + 0x14], 0x821f4c
// 0049340a  c74620441f8200       mov dword ptr [esi + 0x20], 0x821f44
// 00493411  c74624341f8200       mov dword ptr [esi + 0x24], 0x821f34
// 00493418  c74644241f8200       mov dword ptr [esi + 0x44], 0x821f24
// 0049341f  c74664141f8200       mov dword ptr [esi + 0x64], 0x821f14
// 00493426  c78684000000041f8200 mov dword ptr [esi + 0x84], 0x821f04
// 00493430  c786a4000000f41e8200 mov dword ptr [esi + 0xa4], 0x821ef4
// 0049343a  c786c4000000e41e8200 mov dword ptr [esi + 0xc4], 0x821ee4
// 00493444  c78630010000dc1e8200 mov dword ptr [esi + 0x130], 0x821edc
// 0049344e  8bc6                 mov eax, esi
// 00493450  5e                   pop esi
// 00493451  64890d00000000       mov dword ptr fs:[0], ecx
// 00493458  83c410               add esp, 0x10
// 0049345b  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
