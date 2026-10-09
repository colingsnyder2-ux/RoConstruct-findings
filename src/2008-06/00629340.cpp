// roc 2008-06 00629340  unit: seg_00620000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00629340
//
// 00629340  c701f4588400         mov dword ptr [ecx], 0x8458f4
// 00629346  c74110e4588400       mov dword ptr [ecx + 0x10], 0x8458e4
// 0062934d  c74114dc588400       mov dword ptr [ecx + 0x14], 0x8458dc
// 00629354  c74120d4588400       mov dword ptr [ecx + 0x20], 0x8458d4
// 0062935b  c74124c4588400       mov dword ptr [ecx + 0x24], 0x8458c4
// 00629362  c74144b4588400       mov dword ptr [ecx + 0x44], 0x8458b4
// 00629369  c74164a4588400       mov dword ptr [ecx + 0x64], 0x8458a4
// 00629370  c7818400000094588400 mov dword ptr [ecx + 0x84], 0x845894
// 0062937a  c781a400000084588400 mov dword ptr [ecx + 0xa4], 0x845884
// 00629384  c781c400000074588400 mov dword ptr [ecx + 0xc4], 0x845874
// 0062938e  e9ad11f3ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
