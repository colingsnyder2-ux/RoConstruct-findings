// roc 2008-06 0040d490  unit: RBX::Reflection::Metadata::Item  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040d490
//
// 0040d490  56                   push esi
// 0040d491  8bf1                 mov esi, ecx
// 0040d493  e858fbffff           call 0x40cff0
// 0040d498  c706e4c28000         mov dword ptr [esi], 0x80c2e4
// 0040d49e  c74610d4c28000       mov dword ptr [esi + 0x10], 0x80c2d4
// 0040d4a5  c74614ccc28000       mov dword ptr [esi + 0x14], 0x80c2cc
// 0040d4ac  c74620c4c28000       mov dword ptr [esi + 0x20], 0x80c2c4
// 0040d4b3  c74624b4c28000       mov dword ptr [esi + 0x24], 0x80c2b4
// 0040d4ba  c74644a4c28000       mov dword ptr [esi + 0x44], 0x80c2a4
// 0040d4c1  c7466494c28000       mov dword ptr [esi + 0x64], 0x80c294
// 0040d4c8  c7868400000084c28000 mov dword ptr [esi + 0x84], 0x80c284
// 0040d4d2  c786a400000074c28000 mov dword ptr [esi + 0xa4], 0x80c274
// 0040d4dc  c786c400000064c28000 mov dword ptr [esi + 0xc4], 0x80c264
// 0040d4e6  8bc6                 mov eax, esi
// 0040d4e8  5e                   pop esi
// 0040d4e9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
