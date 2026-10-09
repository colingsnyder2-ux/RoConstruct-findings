// roc 2008-06 004927a0  unit: RBX::Network::VPlayer::?$SignalDesc  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004927a0
//
// 004927a0  6aff                 push -1
// 004927a2  6848667c00           push 0x7c6648
// 004927a7  64a100000000         mov eax, dword ptr fs:[0]
// 004927ad  50                   push eax
// 004927ae  64892500000000       mov dword ptr fs:[0], esp
// 004927b5  51                   push ecx
// 004927b6  56                   push esi
// 004927b7  8bf1                 mov esi, ecx
// 004927b9  89742404             mov dword ptr [esp + 4], esi
// 004927bd  e87e72ffff           call 0x489a40
// 004927c2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004927ca  e891ebffff           call 0x491360
// 004927cf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004927d3  89461c               mov dword ptr [esi + 0x1c], eax
// 004927d6  c7066c1d8200         mov dword ptr [esi], 0x821d6c
// 004927dc  c746105c1d8200       mov dword ptr [esi + 0x10], 0x821d5c
// 004927e3  c74614541d8200       mov dword ptr [esi + 0x14], 0x821d54
// 004927ea  c746204c1d8200       mov dword ptr [esi + 0x20], 0x821d4c
// 004927f1  c746243c1d8200       mov dword ptr [esi + 0x24], 0x821d3c
// 004927f8  c746442c1d8200       mov dword ptr [esi + 0x44], 0x821d2c
// 004927ff  c746641c1d8200       mov dword ptr [esi + 0x64], 0x821d1c
// 00492806  c786840000000c1d8200 mov dword ptr [esi + 0x84], 0x821d0c
// 00492810  c786a4000000fc1c8200 mov dword ptr [esi + 0xa4], 0x821cfc
// 0049281a  c786c4000000ec1c8200 mov dword ptr [esi + 0xc4], 0x821cec
// 00492824  8bc6                 mov eax, esi
// 00492826  5e                   pop esi
// 00492827  64890d00000000       mov dword ptr fs:[0], ecx
// 0049282e  83c410               add esp, 0x10
// 00492831  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
