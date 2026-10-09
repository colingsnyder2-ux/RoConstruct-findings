// roc 2008-06 0040a0e0  unit: RBX::GlobalSettings::Item  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a0e0
//
// 0040a0e0  c70184b98000         mov dword ptr [ecx], 0x80b984
// 0040a0e6  c7411078b98000       mov dword ptr [ecx + 0x10], 0x80b978
// 0040a0ed  c7411470b98000       mov dword ptr [ecx + 0x14], 0x80b970
// 0040a0f4  c7412068b98000       mov dword ptr [ecx + 0x20], 0x80b968
// 0040a0fb  c7412458b98000       mov dword ptr [ecx + 0x24], 0x80b958
// 0040a102  c7414448b98000       mov dword ptr [ecx + 0x44], 0x80b948
// 0040a109  c7416438b98000       mov dword ptr [ecx + 0x64], 0x80b938
// 0040a110  c7818400000028b98000 mov dword ptr [ecx + 0x84], 0x80b928
// 0040a11a  c781a400000018b98000 mov dword ptr [ecx + 0xa4], 0x80b918
// 0040a124  c781c400000008b98000 mov dword ptr [ecx + 0xc4], 0x80b908
// 0040a12e  e90d041500           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
