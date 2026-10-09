// roc 2008-06 00585c60  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585c60
//
// 00585c60  c701dc108300         mov dword ptr [ecx], 0x8310dc
// 00585c66  c74110cc108300       mov dword ptr [ecx + 0x10], 0x8310cc
// 00585c6d  c74114c4108300       mov dword ptr [ecx + 0x14], 0x8310c4
// 00585c74  c74120bc108300       mov dword ptr [ecx + 0x20], 0x8310bc
// 00585c7b  c74124ac108300       mov dword ptr [ecx + 0x24], 0x8310ac
// 00585c82  c741449c108300       mov dword ptr [ecx + 0x44], 0x83109c
// 00585c89  c741648c108300       mov dword ptr [ecx + 0x64], 0x83108c
// 00585c90  c781840000007c108300 mov dword ptr [ecx + 0x84], 0x83107c
// 00585c9a  c781a40000006c108300 mov dword ptr [ecx + 0xa4], 0x83106c
// 00585ca4  c781c40000005c108300 mov dword ptr [ecx + 0xc4], 0x83105c
// 00585cae  e98d48fdff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
