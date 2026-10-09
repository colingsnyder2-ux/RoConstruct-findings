// roc 2008-06 00635ca0  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635ca0
//
// 00635ca0  56                   push esi
// 00635ca1  8bf1                 mov esi, ecx
// 00635ca3  e8385bf2ff           call 0x55b7e0
// 00635ca8  c7060c898400         mov dword ptr [esi], 0x84890c
// 00635cae  c74610fc888400       mov dword ptr [esi + 0x10], 0x8488fc
// 00635cb5  c74614f4888400       mov dword ptr [esi + 0x14], 0x8488f4
// 00635cbc  c74620ec888400       mov dword ptr [esi + 0x20], 0x8488ec
// 00635cc3  c74624dc888400       mov dword ptr [esi + 0x24], 0x8488dc
// 00635cca  c74644cc888400       mov dword ptr [esi + 0x44], 0x8488cc
// 00635cd1  c74664bc888400       mov dword ptr [esi + 0x64], 0x8488bc
// 00635cd8  c78684000000ac888400 mov dword ptr [esi + 0x84], 0x8488ac
// 00635ce2  c786a40000009c888400 mov dword ptr [esi + 0xa4], 0x84889c
// 00635cec  c786c40000008c888400 mov dword ptr [esi + 0xc4], 0x84888c
// 00635cf6  8bc6                 mov eax, esi
// 00635cf8  5e                   pop esi
// 00635cf9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
