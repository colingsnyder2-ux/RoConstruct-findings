// roc 2008-06 0063d9b0  unit: RBX::VSparkles::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063d9b0
//
// 0063d9b0  6aff                 push -1
// 0063d9b2  68d8a77d00           push 0x7da7d8
// 0063d9b7  64a100000000         mov eax, dword ptr fs:[0]
// 0063d9bd  50                   push eax
// 0063d9be  64892500000000       mov dword ptr fs:[0], esp
// 0063d9c5  51                   push ecx
// 0063d9c6  56                   push esi
// 0063d9c7  8bf1                 mov esi, ecx
// 0063d9c9  89742404             mov dword ptr [esp + 4], esi
// 0063d9cd  e81efeffff           call 0x63d7f0
// 0063d9d2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063d9da  e8a12df8ff           call 0x5c0780
// 0063d9df  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063d9e3  89461c               mov dword ptr [esi + 0x1c], eax
// 0063d9e6  c70654a18400         mov dword ptr [esi], 0x84a154
// 0063d9ec  c7461044a18400       mov dword ptr [esi + 0x10], 0x84a144
// 0063d9f3  c746143ca18400       mov dword ptr [esi + 0x14], 0x84a13c
// 0063d9fa  c7462034a18400       mov dword ptr [esi + 0x20], 0x84a134
// 0063da01  c7462424a18400       mov dword ptr [esi + 0x24], 0x84a124
// 0063da08  c7464414a18400       mov dword ptr [esi + 0x44], 0x84a114
// 0063da0f  c7466404a18400       mov dword ptr [esi + 0x64], 0x84a104
// 0063da16  c78684000000f4a08400 mov dword ptr [esi + 0x84], 0x84a0f4
// 0063da20  c786a4000000e4a08400 mov dword ptr [esi + 0xa4], 0x84a0e4
// 0063da2a  c786c4000000d4a08400 mov dword ptr [esi + 0xc4], 0x84a0d4
// 0063da34  8bc6                 mov eax, esi
// 0063da36  5e                   pop esi
// 0063da37  64890d00000000       mov dword ptr fs:[0], ecx
// 0063da3e  83c410               add esp, 0x10
// 0063da41  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
