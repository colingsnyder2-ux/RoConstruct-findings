// roc 2008-06 00445410  unit: P8CRenderSettings::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445410
//
// 00445410  c7014c5d8100         mov dword ptr [ecx], 0x815d4c
// 00445416  c741103c5d8100       mov dword ptr [ecx + 0x10], 0x815d3c
// 0044541d  c74114345d8100       mov dword ptr [ecx + 0x14], 0x815d34
// 00445424  c741202c5d8100       mov dword ptr [ecx + 0x20], 0x815d2c
// 0044542b  c741241c5d8100       mov dword ptr [ecx + 0x24], 0x815d1c
// 00445432  c741440c5d8100       mov dword ptr [ecx + 0x44], 0x815d0c
// 00445439  c74164fc5c8100       mov dword ptr [ecx + 0x64], 0x815cfc
// 00445440  c78184000000ec5c8100 mov dword ptr [ecx + 0x84], 0x815cec
// 0044544a  c781a4000000dc5c8100 mov dword ptr [ecx + 0xa4], 0x815cdc
// 00445454  c781c4000000cc5c8100 mov dword ptr [ecx + 0xc4], 0x815ccc
// 0044545e  e9dd501100           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
