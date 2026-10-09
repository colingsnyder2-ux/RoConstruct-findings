// roc 2008-06 0057abf0  unit: RBX::VDataModel::?$DescribedNonCreatable  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057abf0
//
// 0057abf0  6aff                 push -1
// 0057abf2  68e8f77c00           push 0x7cf7e8
// 0057abf7  64a100000000         mov eax, dword ptr fs:[0]
// 0057abfd  50                   push eax
// 0057abfe  64892500000000       mov dword ptr fs:[0], esp
// 0057ac05  51                   push ecx
// 0057ac06  56                   push esi
// 0057ac07  8bf1                 mov esi, ecx
// 0057ac09  89742404             mov dword ptr [esp + 4], esi
// 0057ac0d  e89efbffff           call 0x57a7b0
// 0057ac12  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057ac1a  e8a1dcffff           call 0x5788c0
// 0057ac1f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057ac23  89461c               mov dword ptr [esi + 0x1c], eax
// 0057ac26  c706ac028300         mov dword ptr [esi], 0x8302ac
// 0057ac2c  c74610a0028300       mov dword ptr [esi + 0x10], 0x8302a0
// 0057ac33  c7461498028300       mov dword ptr [esi + 0x14], 0x830298
// 0057ac3a  c7462090028300       mov dword ptr [esi + 0x20], 0x830290
// 0057ac41  c7462480028300       mov dword ptr [esi + 0x24], 0x830280
// 0057ac48  c7464470028300       mov dword ptr [esi + 0x44], 0x830270
// 0057ac4f  c7466460028300       mov dword ptr [esi + 0x64], 0x830260
// 0057ac56  c7868400000050028300 mov dword ptr [esi + 0x84], 0x830250
// 0057ac60  c786a400000040028300 mov dword ptr [esi + 0xa4], 0x830240
// 0057ac6a  c786c400000030028300 mov dword ptr [esi + 0xc4], 0x830230
// 0057ac74  c7863001000020028300 mov dword ptr [esi + 0x130], 0x830220
// 0057ac7e  c7865001000010028300 mov dword ptr [esi + 0x150], 0x830210
// 0057ac88  c7867001000000028300 mov dword ptr [esi + 0x170], 0x830200
// 0057ac92  8bc6                 mov eax, esi
// 0057ac94  5e                   pop esi
// 0057ac95  64890d00000000       mov dword ptr fs:[0], ecx
// 0057ac9c  83c410               add esp, 0x10
// 0057ac9f  c3                   ret 
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??0?$DescribedNonCreatable@VGlobalSettings@RBX@@VServiceProvider@2@$1?sGlobalSettings@2@3QBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/GlobalSettings.cpp
