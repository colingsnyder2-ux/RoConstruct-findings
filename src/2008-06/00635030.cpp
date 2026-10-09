// roc 2008-06 00635030  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635030
//
// 00635030  c701ac848400         mov dword ptr [ecx], 0x8484ac
// 00635036  c74110a0848400       mov dword ptr [ecx + 0x10], 0x8484a0
// 0063503d  c7411498848400       mov dword ptr [ecx + 0x14], 0x848498
// 00635044  c7412090848400       mov dword ptr [ecx + 0x20], 0x848490
// 0063504b  c7412480848400       mov dword ptr [ecx + 0x24], 0x848480
// 00635052  c7414470848400       mov dword ptr [ecx + 0x44], 0x848470
// 00635059  c7416460848400       mov dword ptr [ecx + 0x64], 0x848460
// 00635060  c7818400000050848400 mov dword ptr [ecx + 0x84], 0x848450
// 0063506a  c781a400000040848400 mov dword ptr [ecx + 0xa4], 0x848440
// 00635074  c781c400000030848400 mov dword ptr [ecx + 0xc4], 0x848430
// 0063507e  e9bd54f2ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
