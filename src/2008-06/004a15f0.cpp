// roc 2008-06 004a15f0  unit: RBX::Network::Server::ClientProxy  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a15f0
//
// 004a15f0  56                   push esi
// 004a15f1  8bf1                 mov esi, ecx
// 004a15f3  e848300100           call 0x4b4640
// 004a15f8  c7066c338200         mov dword ptr [esi], 0x82336c
// 004a15fe  c7461060338200       mov dword ptr [esi + 0x10], 0x823360
// 004a1605  c7461458338200       mov dword ptr [esi + 0x14], 0x823358
// 004a160c  c7462050338200       mov dword ptr [esi + 0x20], 0x823350
// 004a1613  c7462440338200       mov dword ptr [esi + 0x24], 0x823340
// 004a161a  c7464430338200       mov dword ptr [esi + 0x44], 0x823330
// 004a1621  c7466420338200       mov dword ptr [esi + 0x64], 0x823320
// 004a1628  c7868400000010338200 mov dword ptr [esi + 0x84], 0x823310
// 004a1632  c786a400000000338200 mov dword ptr [esi + 0xa4], 0x823300
// 004a163c  c786c4000000f0328200 mov dword ptr [esi + 0xc4], 0x8232f0
// 004a1646  c78630010000c0328200 mov dword ptr [esi + 0x130], 0x8232c0
// 004a1650  c78634010000b4328200 mov dword ptr [esi + 0x134], 0x8232b4
// 004a165a  8bc6                 mov eax, esi
// 004a165c  5e                   pop esi
// 004a165d  c3                   ret 
// library openrbx-client/App\script\ScriptContext.cpp (function ??0ScriptContext@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptContext.cpp
