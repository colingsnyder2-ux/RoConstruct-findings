// roc 2007-08 004263b0  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004263b0
//
// 004263b0  56                   push esi
// 004263b1  8bf1                 mov esi, ecx
// 004263b3  e8b8f9ffff           call 0x425d70
// 004263b8  c706bc957800         mov dword ptr [esi], 0x7895bc
// 004263be  c74604b4957800       mov dword ptr [esi + 4], 0x7895b4
// 004263c5  c74610ac957800       mov dword ptr [esi + 0x10], 0x7895ac
// 004263cc  c746149c957800       mov dword ptr [esi + 0x14], 0x78959c
// 004263d3  c7462c8c957800       mov dword ptr [esi + 0x2c], 0x78958c
// 004263da  c746447c957800       mov dword ptr [esi + 0x44], 0x78957c
// 004263e1  c7465c6c957800       mov dword ptr [esi + 0x5c], 0x78956c
// 004263e8  c746745c957800       mov dword ptr [esi + 0x74], 0x78955c
// 004263ef  c7868c0000004c957800 mov dword ptr [esi + 0x8c], 0x78954c
// 004263f9  8bc6                 mov eax, esi
// 004263fb  5e                   pop esi
// 004263fc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
