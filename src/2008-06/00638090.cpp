// roc 2008-06 00638090  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00638090
//
// 00638090  6aff                 push -1
// 00638092  68d8a27d00           push 0x7da2d8
// 00638097  64a100000000         mov eax, dword ptr fs:[0]
// 0063809d  50                   push eax
// 0063809e  64892500000000       mov dword ptr fs:[0], esp
// 006380a5  51                   push ecx
// 006380a6  56                   push esi
// 006380a7  8bf1                 mov esi, ecx
// 006380a9  89742404             mov dword ptr [esp + 4], esi
// 006380ad  e8dee0ffff           call 0x636190
// 006380b2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006380ba  e8d1f0ffff           call 0x637190
// 006380bf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006380c3  89461c               mov dword ptr [esi + 0x1c], eax
// 006380c6  c7061c928400         mov dword ptr [esi], 0x84921c
// 006380cc  c7461010928400       mov dword ptr [esi + 0x10], 0x849210
// 006380d3  c7461408928400       mov dword ptr [esi + 0x14], 0x849208
// 006380da  c7462000928400       mov dword ptr [esi + 0x20], 0x849200
// 006380e1  c74624f0918400       mov dword ptr [esi + 0x24], 0x8491f0
// 006380e8  c74644e0918400       mov dword ptr [esi + 0x44], 0x8491e0
// 006380ef  c74664d0918400       mov dword ptr [esi + 0x64], 0x8491d0
// 006380f6  c78684000000c0918400 mov dword ptr [esi + 0x84], 0x8491c0
// 00638100  c786a4000000b0918400 mov dword ptr [esi + 0xa4], 0x8491b0
// 0063810a  c786c4000000a0918400 mov dword ptr [esi + 0xc4], 0x8491a0
// 00638114  8bc6                 mov eax, esi
// 00638116  5e                   pop esi
// 00638117  64890d00000000       mov dword ptr fs:[0], ecx
// 0063811e  83c410               add esp, 0x10
// 00638121  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
