// roc 2008-06 0063b340  unit: RBX::VBodyGyro::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063b340
//
// 0063b340  c7011c998400         mov dword ptr [ecx], 0x84991c
// 0063b346  c741100c998400       mov dword ptr [ecx + 0x10], 0x84990c
// 0063b34d  c7411404998400       mov dword ptr [ecx + 0x14], 0x849904
// 0063b354  c74120fc988400       mov dword ptr [ecx + 0x20], 0x8498fc
// 0063b35b  c74124ec988400       mov dword ptr [ecx + 0x24], 0x8498ec
// 0063b362  c74144dc988400       mov dword ptr [ecx + 0x44], 0x8498dc
// 0063b369  c74164cc988400       mov dword ptr [ecx + 0x64], 0x8498cc
// 0063b370  c78184000000bc988400 mov dword ptr [ecx + 0x84], 0x8498bc
// 0063b37a  c781a4000000ac988400 mov dword ptr [ecx + 0xa4], 0x8498ac
// 0063b384  c781c40000009c988400 mov dword ptr [ecx + 0xc4], 0x84989c
// 0063b38e  e9adf1f1ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
