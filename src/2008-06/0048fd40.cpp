// roc 2008-06 0048fd40  unit: RBX::VPants::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048fd40
//
// 0048fd40  56                   push esi
// 0048fd41  8bf1                 mov esi, ecx
// 0048fd43  e8b8591400           call 0x5d5700
// 0048fd48  c7068c1a8200         mov dword ptr [esi], 0x821a8c
// 0048fd4e  c74610801a8200       mov dword ptr [esi + 0x10], 0x821a80
// 0048fd55  c74614781a8200       mov dword ptr [esi + 0x14], 0x821a78
// 0048fd5c  c74620701a8200       mov dword ptr [esi + 0x20], 0x821a70
// 0048fd63  c74624601a8200       mov dword ptr [esi + 0x24], 0x821a60
// 0048fd6a  c74644501a8200       mov dword ptr [esi + 0x44], 0x821a50
// 0048fd71  c74664401a8200       mov dword ptr [esi + 0x64], 0x821a40
// 0048fd78  c78684000000301a8200 mov dword ptr [esi + 0x84], 0x821a30
// 0048fd82  c786a4000000201a8200 mov dword ptr [esi + 0xa4], 0x821a20
// 0048fd8c  c786c4000000101a8200 mov dword ptr [esi + 0xc4], 0x821a10
// 0048fd96  c78630010000081a8200 mov dword ptr [esi + 0x130], 0x821a08
// 0048fda0  8bc6                 mov eax, esi
// 0048fda2  5e                   pop esi
// 0048fda3  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
