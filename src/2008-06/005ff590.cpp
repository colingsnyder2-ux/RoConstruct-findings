// roc 2008-06 005ff590  unit: RBX::Mouse  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ff590
//
// 005ff590  56                   push esi
// 005ff591  8bf1                 mov esi, ecx
// 005ff593  e87816fdff           call 0x5d0c10
// 005ff598  c70604198400         mov dword ptr [esi], 0x841904
// 005ff59e  c74610f8188400       mov dword ptr [esi + 0x10], 0x8418f8
// 005ff5a5  c74614f0188400       mov dword ptr [esi + 0x14], 0x8418f0
// 005ff5ac  c74620e8188400       mov dword ptr [esi + 0x20], 0x8418e8
// 005ff5b3  c74624d8188400       mov dword ptr [esi + 0x24], 0x8418d8
// 005ff5ba  c74644c8188400       mov dword ptr [esi + 0x44], 0x8418c8
// 005ff5c1  c74664b8188400       mov dword ptr [esi + 0x64], 0x8418b8
// 005ff5c8  c78684000000a8188400 mov dword ptr [esi + 0x84], 0x8418a8
// 005ff5d2  c786a400000098188400 mov dword ptr [esi + 0xa4], 0x841898
// 005ff5dc  c786c400000088188400 mov dword ptr [esi + 0xc4], 0x841888
// 005ff5e6  c7863001000080188400 mov dword ptr [esi + 0x130], 0x841880
// 005ff5f0  8bc6                 mov eax, esi
// 005ff5f2  5e                   pop esi
// 005ff5f3  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
