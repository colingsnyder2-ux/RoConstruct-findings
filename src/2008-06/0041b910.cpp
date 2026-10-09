// roc 2008-06 0041b910  unit: VDHTMLWindow::?$SignalDesc  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b910
//
// 0041b910  c701cced8000         mov dword ptr [ecx], 0x80edcc
// 0041b916  c74110c0ed8000       mov dword ptr [ecx + 0x10], 0x80edc0
// 0041b91d  c74114b8ed8000       mov dword ptr [ecx + 0x14], 0x80edb8
// 0041b924  c74120b0ed8000       mov dword ptr [ecx + 0x20], 0x80edb0
// 0041b92b  c74124a0ed8000       mov dword ptr [ecx + 0x24], 0x80eda0
// 0041b932  c7414490ed8000       mov dword ptr [ecx + 0x44], 0x80ed90
// 0041b939  c7416480ed8000       mov dword ptr [ecx + 0x64], 0x80ed80
// 0041b940  c7818400000070ed8000 mov dword ptr [ecx + 0x84], 0x80ed70
// 0041b94a  c781a400000060ed8000 mov dword ptr [ecx + 0xa4], 0x80ed60
// 0041b954  c781c400000050ed8000 mov dword ptr [ecx + 0xc4], 0x80ed50
// 0041b95e  e9ddeb1300           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
