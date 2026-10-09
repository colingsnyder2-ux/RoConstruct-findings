// roc 2008-06 0040ce70  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ce70
//
// 0040ce70  56                   push esi
// 0040ce71  8bf1                 mov esi, ecx
// 0040ce73  e818fbffff           call 0x40c990
// 0040ce78  c70624c98000         mov dword ptr [esi], 0x80c924
// 0040ce7e  c7461018c98000       mov dword ptr [esi + 0x10], 0x80c918
// 0040ce85  c7461410c98000       mov dword ptr [esi + 0x14], 0x80c910
// 0040ce8c  c7462008c98000       mov dword ptr [esi + 0x20], 0x80c908
// 0040ce93  c74624f8c88000       mov dword ptr [esi + 0x24], 0x80c8f8
// 0040ce9a  c74644e8c88000       mov dword ptr [esi + 0x44], 0x80c8e8
// 0040cea1  c74664d8c88000       mov dword ptr [esi + 0x64], 0x80c8d8
// 0040cea8  c78684000000c8c88000 mov dword ptr [esi + 0x84], 0x80c8c8
// 0040ceb2  c786a4000000b8c88000 mov dword ptr [esi + 0xa4], 0x80c8b8
// 0040cebc  c786c4000000a8c88000 mov dword ptr [esi + 0xc4], 0x80c8a8
// 0040cec6  8bc6                 mov eax, esi
// 0040cec8  5e                   pop esi
// 0040cec9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
