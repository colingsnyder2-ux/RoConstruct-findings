// roc 2008-06 00443050  unit: RBX::Reflection::Metadata::Members  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443050
//
// 00443050  c70154588100         mov dword ptr [ecx], 0x815854
// 00443056  c7411044588100       mov dword ptr [ecx + 0x10], 0x815844
// 0044305d  c741143c588100       mov dword ptr [ecx + 0x14], 0x81583c
// 00443064  c7412034588100       mov dword ptr [ecx + 0x20], 0x815834
// 0044306b  c7412424588100       mov dword ptr [ecx + 0x24], 0x815824
// 00443072  c7414414588100       mov dword ptr [ecx + 0x44], 0x815814
// 00443079  c7416404588100       mov dword ptr [ecx + 0x64], 0x815804
// 00443080  c78184000000f4578100 mov dword ptr [ecx + 0x84], 0x8157f4
// 0044308a  c781a4000000e4578100 mov dword ptr [ecx + 0xa4], 0x8157e4
// 00443094  c781c4000000d4578100 mov dword ptr [ecx + 0xc4], 0x8157d4
// 0044309e  e99d741100           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
