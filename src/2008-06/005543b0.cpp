// roc 2008-06 005543b0  unit: RBX::RenderBase::AggregateChunk  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005543b0
//
// 005543b0  56                   push esi
// 005543b1  8bf1                 mov esi, ecx
// 005543b3  e828740000           call 0x55b7e0
// 005543b8  c706b4d38200         mov dword ptr [esi], 0x82d3b4
// 005543be  c74610a8d38200       mov dword ptr [esi + 0x10], 0x82d3a8
// 005543c5  c74614a0d38200       mov dword ptr [esi + 0x14], 0x82d3a0
// 005543cc  c7462098d38200       mov dword ptr [esi + 0x20], 0x82d398
// 005543d3  c7462488d38200       mov dword ptr [esi + 0x24], 0x82d388
// 005543da  c7464478d38200       mov dword ptr [esi + 0x44], 0x82d378
// 005543e1  c7466468d38200       mov dword ptr [esi + 0x64], 0x82d368
// 005543e8  c7868400000058d38200 mov dword ptr [esi + 0x84], 0x82d358
// 005543f2  c786a400000048d38200 mov dword ptr [esi + 0xa4], 0x82d348
// 005543fc  c786c400000038d38200 mov dword ptr [esi + 0xc4], 0x82d338
// 00554406  8bc6                 mov eax, esi
// 00554408  5e                   pop esi
// 00554409  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
