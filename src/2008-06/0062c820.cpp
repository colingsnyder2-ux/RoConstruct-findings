// roc 2008-06 0062c820  unit: RBX::VFlagStand::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062c820
//
// 0062c820  6aff                 push -1
// 0062c822  68d8997d00           push 0x7d99d8
// 0062c827  64a100000000         mov eax, dword ptr fs:[0]
// 0062c82d  50                   push eax
// 0062c82e  64892500000000       mov dword ptr fs:[0], esp
// 0062c835  51                   push ecx
// 0062c836  56                   push esi
// 0062c837  8bf1                 mov esi, ecx
// 0062c839  89742404             mov dword ptr [esp + 4], esi
// 0062c83d  e88ef2ffff           call 0x62bad0
// 0062c842  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062c84a  e8413bf9ff           call 0x5c0390
// 0062c84f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062c853  89461c               mov dword ptr [esi + 0x1c], eax
// 0062c856  c7063c648400         mov dword ptr [esi], 0x84643c
// 0062c85c  c7461030648400       mov dword ptr [esi + 0x10], 0x846430
// 0062c863  c7461428648400       mov dword ptr [esi + 0x14], 0x846428
// 0062c86a  c7462020648400       mov dword ptr [esi + 0x20], 0x846420
// 0062c871  c7462410648400       mov dword ptr [esi + 0x24], 0x846410
// 0062c878  c7464400648400       mov dword ptr [esi + 0x44], 0x846400
// 0062c87f  c74664f0638400       mov dword ptr [esi + 0x64], 0x8463f0
// 0062c886  c78684000000e0638400 mov dword ptr [esi + 0x84], 0x8463e0
// 0062c890  c786a4000000d0638400 mov dword ptr [esi + 0xa4], 0x8463d0
// 0062c89a  c786c4000000c0638400 mov dword ptr [esi + 0xc4], 0x8463c0
// 0062c8a4  8bc6                 mov eax, esi
// 0062c8a6  5e                   pop esi
// 0062c8a7  64890d00000000       mov dword ptr fs:[0], ecx
// 0062c8ae  83c410               add esp, 0x10
// 0062c8b1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
