// roc 2008-06 005d7890  unit: RBX::Humanoid  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7890
//
// 005d7890  56                   push esi
// 005d7891  8bf1                 mov esi, ecx
// 005d7893  e8483ff8ff           call 0x55b7e0
// 005d7898  c7069cd28300         mov dword ptr [esi], 0x83d29c
// 005d789e  c746108cd28300       mov dword ptr [esi + 0x10], 0x83d28c
// 005d78a5  c7461484d28300       mov dword ptr [esi + 0x14], 0x83d284
// 005d78ac  c746207cd28300       mov dword ptr [esi + 0x20], 0x83d27c
// 005d78b3  c746246cd28300       mov dword ptr [esi + 0x24], 0x83d26c
// 005d78ba  c746445cd28300       mov dword ptr [esi + 0x44], 0x83d25c
// 005d78c1  c746644cd28300       mov dword ptr [esi + 0x64], 0x83d24c
// 005d78c8  c786840000003cd28300 mov dword ptr [esi + 0x84], 0x83d23c
// 005d78d2  c786a40000002cd28300 mov dword ptr [esi + 0xa4], 0x83d22c
// 005d78dc  c786c40000001cd28300 mov dword ptr [esi + 0xc4], 0x83d21c
// 005d78e6  8bc6                 mov eax, esi
// 005d78e8  5e                   pop esi
// 005d78e9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
