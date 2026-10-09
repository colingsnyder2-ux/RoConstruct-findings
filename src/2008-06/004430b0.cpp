// roc 2008-06 004430b0  unit: RBX::Reflection::Metadata::Members  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004430b0
//
// 004430b0  56                   push esi
// 004430b1  8bf1                 mov esi, ecx
// 004430b3  e828871100           call 0x55b7e0
// 004430b8  c70654588100         mov dword ptr [esi], 0x815854
// 004430be  c7461044588100       mov dword ptr [esi + 0x10], 0x815844
// 004430c5  c746143c588100       mov dword ptr [esi + 0x14], 0x81583c
// 004430cc  c7462034588100       mov dword ptr [esi + 0x20], 0x815834
// 004430d3  c7462424588100       mov dword ptr [esi + 0x24], 0x815824
// 004430da  c7464414588100       mov dword ptr [esi + 0x44], 0x815814
// 004430e1  c7466404588100       mov dword ptr [esi + 0x64], 0x815804
// 004430e8  c78684000000f4578100 mov dword ptr [esi + 0x84], 0x8157f4
// 004430f2  c786a4000000e4578100 mov dword ptr [esi + 0xa4], 0x8157e4
// 004430fc  c786c4000000d4578100 mov dword ptr [esi + 0xc4], 0x8157d4
// 00443106  8bc6                 mov eax, esi
// 00443108  5e                   pop esi
// 00443109  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
