// roc 2008-06 0040b8f0  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b8f0
//
// 0040b8f0  c701a4be8000         mov dword ptr [ecx], 0x80bea4
// 0040b8f6  c7411094be8000       mov dword ptr [ecx + 0x10], 0x80be94
// 0040b8fd  c741148cbe8000       mov dword ptr [ecx + 0x14], 0x80be8c
// 0040b904  c7412084be8000       mov dword ptr [ecx + 0x20], 0x80be84
// 0040b90b  c7412474be8000       mov dword ptr [ecx + 0x24], 0x80be74
// 0040b912  c7414464be8000       mov dword ptr [ecx + 0x44], 0x80be64
// 0040b919  c7416454be8000       mov dword ptr [ecx + 0x64], 0x80be54
// 0040b920  c7818400000044be8000 mov dword ptr [ecx + 0x84], 0x80be44
// 0040b92a  c781a400000034be8000 mov dword ptr [ecx + 0xa4], 0x80be34
// 0040b934  c781c400000024be8000 mov dword ptr [ecx + 0xc4], 0x80be24
// 0040b93e  e95dffffff           jmp 0x40b8a0
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
