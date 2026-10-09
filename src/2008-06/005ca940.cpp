// roc 2008-06 005ca940  unit: RBX::KeyboardSecondaryController  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ca940
//
// 005ca940  c70174a08300         mov dword ptr [ecx], 0x83a074
// 005ca946  c7411068a08300       mov dword ptr [ecx + 0x10], 0x83a068
// 005ca94d  c7411460a08300       mov dword ptr [ecx + 0x14], 0x83a060
// 005ca954  c7412058a08300       mov dword ptr [ecx + 0x20], 0x83a058
// 005ca95b  c7412448a08300       mov dword ptr [ecx + 0x24], 0x83a048
// 005ca962  c7414438a08300       mov dword ptr [ecx + 0x44], 0x83a038
// 005ca969  c7416428a08300       mov dword ptr [ecx + 0x64], 0x83a028
// 005ca970  c7818400000018a08300 mov dword ptr [ecx + 0x84], 0x83a018
// 005ca97a  c781a400000008a08300 mov dword ptr [ecx + 0xa4], 0x83a008
// 005ca984  c781c4000000f89f8300 mov dword ptr [ecx + 0xc4], 0x839ff8
// 005ca98e  e9adfbf8ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
