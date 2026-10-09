// roc 2008-06 0063d7f0  unit: RBX::Sparkles  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063d7f0
//
// 0063d7f0  56                   push esi
// 0063d7f1  8bf1                 mov esi, ecx
// 0063d7f3  e8e8dff1ff           call 0x55b7e0
// 0063d7f8  c7067ca08400         mov dword ptr [esi], 0x84a07c
// 0063d7fe  c746106ca08400       mov dword ptr [esi + 0x10], 0x84a06c
// 0063d805  c7461464a08400       mov dword ptr [esi + 0x14], 0x84a064
// 0063d80c  c746205ca08400       mov dword ptr [esi + 0x20], 0x84a05c
// 0063d813  c746244ca08400       mov dword ptr [esi + 0x24], 0x84a04c
// 0063d81a  c746443ca08400       mov dword ptr [esi + 0x44], 0x84a03c
// 0063d821  c746642ca08400       mov dword ptr [esi + 0x64], 0x84a02c
// 0063d828  c786840000001ca08400 mov dword ptr [esi + 0x84], 0x84a01c
// 0063d832  c786a40000000ca08400 mov dword ptr [esi + 0xa4], 0x84a00c
// 0063d83c  c786c4000000fc9f8400 mov dword ptr [esi + 0xc4], 0x849ffc
// 0063d846  8bc6                 mov eax, esi
// 0063d848  5e                   pop esi
// 0063d849  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
