// roc 2008-06 0063d790  unit: RBX::Sparkles  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063d790
//
// 0063d790  c7017ca08400         mov dword ptr [ecx], 0x84a07c
// 0063d796  c741106ca08400       mov dword ptr [ecx + 0x10], 0x84a06c
// 0063d79d  c7411464a08400       mov dword ptr [ecx + 0x14], 0x84a064
// 0063d7a4  c741205ca08400       mov dword ptr [ecx + 0x20], 0x84a05c
// 0063d7ab  c741244ca08400       mov dword ptr [ecx + 0x24], 0x84a04c
// 0063d7b2  c741443ca08400       mov dword ptr [ecx + 0x44], 0x84a03c
// 0063d7b9  c741642ca08400       mov dword ptr [ecx + 0x64], 0x84a02c
// 0063d7c0  c781840000001ca08400 mov dword ptr [ecx + 0x84], 0x84a01c
// 0063d7ca  c781a40000000ca08400 mov dword ptr [ecx + 0xa4], 0x84a00c
// 0063d7d4  c781c4000000fc9f8400 mov dword ptr [ecx + 0xc4], 0x849ffc
// 0063d7de  e95dcdf1ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
