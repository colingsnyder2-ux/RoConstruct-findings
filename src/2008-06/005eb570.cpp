// roc 2008-06 005eb570  unit: RBX::VSky::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eb570
//
// 005eb570  6aff                 push -1
// 005eb572  68186d7d00           push 0x7d6d18
// 005eb577  64a100000000         mov eax, dword ptr fs:[0]
// 005eb57d  50                   push eax
// 005eb57e  64892500000000       mov dword ptr fs:[0], esp
// 005eb585  51                   push ecx
// 005eb586  56                   push esi
// 005eb587  8bf1                 mov esi, ecx
// 005eb589  89742404             mov dword ptr [esp + 4], esi
// 005eb58d  e8eefaffff           call 0x5eb080
// 005eb592  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005eb59a  e8f1fcffff           call 0x5eb290
// 005eb59f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005eb5a3  89461c               mov dword ptr [esi + 0x1c], eax
// 005eb5a6  c70644fb8300         mov dword ptr [esi], 0x83fb44
// 005eb5ac  c7461034fb8300       mov dword ptr [esi + 0x10], 0x83fb34
// 005eb5b3  c746142cfb8300       mov dword ptr [esi + 0x14], 0x83fb2c
// 005eb5ba  c7462024fb8300       mov dword ptr [esi + 0x20], 0x83fb24
// 005eb5c1  c7462414fb8300       mov dword ptr [esi + 0x24], 0x83fb14
// 005eb5c8  c7464404fb8300       mov dword ptr [esi + 0x44], 0x83fb04
// 005eb5cf  c74664f4fa8300       mov dword ptr [esi + 0x64], 0x83faf4
// 005eb5d6  c78684000000e4fa8300 mov dword ptr [esi + 0x84], 0x83fae4
// 005eb5e0  c786a4000000d4fa8300 mov dword ptr [esi + 0xa4], 0x83fad4
// 005eb5ea  c786c4000000c4fa8300 mov dword ptr [esi + 0xc4], 0x83fac4
// 005eb5f4  8bc6                 mov eax, esi
// 005eb5f6  5e                   pop esi
// 005eb5f7  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb5fe  83c410               add esp, 0x10
// 005eb601  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
