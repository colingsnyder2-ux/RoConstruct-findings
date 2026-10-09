// roc 2008-06 005c4450  unit: RBX::Profiling::Profiler  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c4450
//
// 005c4450  c701f48c8300         mov dword ptr [ecx], 0x838cf4
// 005c4456  c74110e48c8300       mov dword ptr [ecx + 0x10], 0x838ce4
// 005c445d  c74114dc8c8300       mov dword ptr [ecx + 0x14], 0x838cdc
// 005c4464  c74120d48c8300       mov dword ptr [ecx + 0x20], 0x838cd4
// 005c446b  c74124c48c8300       mov dword ptr [ecx + 0x24], 0x838cc4
// 005c4472  c74144b48c8300       mov dword ptr [ecx + 0x44], 0x838cb4
// 005c4479  c74164a48c8300       mov dword ptr [ecx + 0x64], 0x838ca4
// 005c4480  c78184000000948c8300 mov dword ptr [ecx + 0x84], 0x838c94
// 005c448a  c781a4000000848c8300 mov dword ptr [ecx + 0xa4], 0x838c84
// 005c4494  c781c4000000748c8300 mov dword ptr [ecx + 0xc4], 0x838c74
// 005c449e  e99d60f9ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
