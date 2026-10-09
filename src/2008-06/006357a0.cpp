// roc 2008-06 006357a0  unit: RBX::N$1?sDoubleValue::V?$Value::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006357a0
//
// 006357a0  c7014c878400         mov dword ptr [ecx], 0x84874c
// 006357a6  c741103c878400       mov dword ptr [ecx + 0x10], 0x84873c
// 006357ad  c7411434878400       mov dword ptr [ecx + 0x14], 0x848734
// 006357b4  c741202c878400       mov dword ptr [ecx + 0x20], 0x84872c
// 006357bb  c741241c878400       mov dword ptr [ecx + 0x24], 0x84871c
// 006357c2  c741440c878400       mov dword ptr [ecx + 0x44], 0x84870c
// 006357c9  c74164fc868400       mov dword ptr [ecx + 0x64], 0x8486fc
// 006357d0  c78184000000ec868400 mov dword ptr [ecx + 0x84], 0x8486ec
// 006357da  c781a4000000dc868400 mov dword ptr [ecx + 0xa4], 0x8486dc
// 006357e4  c781c4000000cc868400 mov dword ptr [ecx + 0xc4], 0x8486cc
// 006357ee  e94d4df2ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
