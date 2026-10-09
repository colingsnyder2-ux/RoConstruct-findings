// roc 2008-06 005c29d0  unit: RBX::VRocket::?$FactoryProduct::Creator  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c29d0
//
// 005c29d0  c7011c8a8300         mov dword ptr [ecx], 0x838a1c
// 005c29d6  c74110108a8300       mov dword ptr [ecx + 0x10], 0x838a10
// 005c29dd  c74114088a8300       mov dword ptr [ecx + 0x14], 0x838a08
// 005c29e4  c74120008a8300       mov dword ptr [ecx + 0x20], 0x838a00
// 005c29eb  c74124f0898300       mov dword ptr [ecx + 0x24], 0x8389f0
// 005c29f2  c74144e0898300       mov dword ptr [ecx + 0x44], 0x8389e0
// 005c29f9  c74164d0898300       mov dword ptr [ecx + 0x64], 0x8389d0
// 005c2a00  c78184000000c0898300 mov dword ptr [ecx + 0x84], 0x8389c0
// 005c2a0a  c781a4000000b0898300 mov dword ptr [ecx + 0xa4], 0x8389b0
// 005c2a14  c781c4000000a0898300 mov dword ptr [ecx + 0xc4], 0x8389a0
// 005c2a1e  e91d7bf9ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
