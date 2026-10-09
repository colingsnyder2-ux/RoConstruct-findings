// roc 2008-06 0040d1b0  unit: RBX::Reflection::Metadata::Item  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040d1b0
//
// 0040d1b0  56                   push esi
// 0040d1b1  8bf1                 mov esi, ecx
// 0040d1b3  e838feffff           call 0x40cff0
// 0040d1b8  c706a4be8000         mov dword ptr [esi], 0x80bea4
// 0040d1be  c7461094be8000       mov dword ptr [esi + 0x10], 0x80be94
// 0040d1c5  c746148cbe8000       mov dword ptr [esi + 0x14], 0x80be8c
// 0040d1cc  c7462084be8000       mov dword ptr [esi + 0x20], 0x80be84
// 0040d1d3  c7462474be8000       mov dword ptr [esi + 0x24], 0x80be74
// 0040d1da  c7464464be8000       mov dword ptr [esi + 0x44], 0x80be64
// 0040d1e1  c7466454be8000       mov dword ptr [esi + 0x64], 0x80be54
// 0040d1e8  c7868400000044be8000 mov dword ptr [esi + 0x84], 0x80be44
// 0040d1f2  c786a400000034be8000 mov dword ptr [esi + 0xa4], 0x80be34
// 0040d1fc  c786c400000024be8000 mov dword ptr [esi + 0xc4], 0x80be24
// 0040d206  8bc6                 mov eax, esi
// 0040d208  5e                   pop esi
// 0040d209  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
