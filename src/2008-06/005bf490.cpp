// roc 2008-06 005bf490  unit: RBX::VGameSettings::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf490
//
// 005bf490  6aff                 push -1
// 005bf492  6818407d00           push 0x7d4018
// 005bf497  64a100000000         mov eax, dword ptr fs:[0]
// 005bf49d  50                   push eax
// 005bf49e  64892500000000       mov dword ptr fs:[0], esp
// 005bf4a5  51                   push ecx
// 005bf4a6  56                   push esi
// 005bf4a7  8bf1                 mov esi, ecx
// 005bf4a9  89742404             mov dword ptr [esp + 4], esi
// 005bf4ad  e8cefcffff           call 0x5bf180
// 005bf4b2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bf4ba  e8c1fdffff           call 0x5bf280
// 005bf4bf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bf4c3  89461c               mov dword ptr [esi + 0x1c], eax
// 005bf4c6  c706b4868300         mov dword ptr [esi], 0x8386b4
// 005bf4cc  c74610a8868300       mov dword ptr [esi + 0x10], 0x8386a8
// 005bf4d3  c74614a0868300       mov dword ptr [esi + 0x14], 0x8386a0
// 005bf4da  c7462098868300       mov dword ptr [esi + 0x20], 0x838698
// 005bf4e1  c7462488868300       mov dword ptr [esi + 0x24], 0x838688
// 005bf4e8  c7464478868300       mov dword ptr [esi + 0x44], 0x838678
// 005bf4ef  c7466468868300       mov dword ptr [esi + 0x64], 0x838668
// 005bf4f6  c7868400000058868300 mov dword ptr [esi + 0x84], 0x838658
// 005bf500  c786a400000048868300 mov dword ptr [esi + 0xa4], 0x838648
// 005bf50a  c786c400000038868300 mov dword ptr [esi + 0xc4], 0x838638
// 005bf514  8bc6                 mov eax, esi
// 005bf516  5e                   pop esi
// 005bf517  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf51e  83c410               add esp, 0x10
// 005bf521  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
