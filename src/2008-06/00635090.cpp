// roc 2008-06 00635090  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635090
//
// 00635090  56                   push esi
// 00635091  8bf1                 mov esi, ecx
// 00635093  e84867f2ff           call 0x55b7e0
// 00635098  c706ac848400         mov dword ptr [esi], 0x8484ac
// 0063509e  c74610a0848400       mov dword ptr [esi + 0x10], 0x8484a0
// 006350a5  c7461498848400       mov dword ptr [esi + 0x14], 0x848498
// 006350ac  c7462090848400       mov dword ptr [esi + 0x20], 0x848490
// 006350b3  c7462480848400       mov dword ptr [esi + 0x24], 0x848480
// 006350ba  c7464470848400       mov dword ptr [esi + 0x44], 0x848470
// 006350c1  c7466460848400       mov dword ptr [esi + 0x64], 0x848460
// 006350c8  c7868400000050848400 mov dword ptr [esi + 0x84], 0x848450
// 006350d2  c786a400000040848400 mov dword ptr [esi + 0xa4], 0x848440
// 006350dc  c786c400000030848400 mov dword ptr [esi + 0xc4], 0x848430
// 006350e6  8bc6                 mov eax, esi
// 006350e8  5e                   pop esi
// 006350e9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
