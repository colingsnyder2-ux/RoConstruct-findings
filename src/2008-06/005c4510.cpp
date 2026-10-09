// roc 2008-06 005c4510  unit: RBX::Profiling::Profiler  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c4510
//
// 005c4510  56                   push esi
// 005c4511  8bf1                 mov esi, ecx
// 005c4513  e8c872f9ff           call 0x55b7e0
// 005c4518  c706f48c8300         mov dword ptr [esi], 0x838cf4
// 005c451e  c74610e48c8300       mov dword ptr [esi + 0x10], 0x838ce4
// 005c4525  c74614dc8c8300       mov dword ptr [esi + 0x14], 0x838cdc
// 005c452c  c74620d48c8300       mov dword ptr [esi + 0x20], 0x838cd4
// 005c4533  c74624c48c8300       mov dword ptr [esi + 0x24], 0x838cc4
// 005c453a  c74644b48c8300       mov dword ptr [esi + 0x44], 0x838cb4
// 005c4541  c74664a48c8300       mov dword ptr [esi + 0x64], 0x838ca4
// 005c4548  c78684000000948c8300 mov dword ptr [esi + 0x84], 0x838c94
// 005c4552  c786a4000000848c8300 mov dword ptr [esi + 0xa4], 0x838c84
// 005c455c  c786c4000000748c8300 mov dword ptr [esi + 0xc4], 0x838c74
// 005c4566  8bc6                 mov eax, esi
// 005c4568  5e                   pop esi
// 005c4569  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
