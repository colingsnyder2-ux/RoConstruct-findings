// roc 2008-06 005a8790  unit: RBX::ScriptContext  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8790
//
// 005a8790  c7010c448300         mov dword ptr [ecx], 0x83440c
// 005a8796  c7411000448300       mov dword ptr [ecx + 0x10], 0x834400
// 005a879d  c74114f8438300       mov dword ptr [ecx + 0x14], 0x8343f8
// 005a87a4  c74120f0438300       mov dword ptr [ecx + 0x20], 0x8343f0
// 005a87ab  c74124e0438300       mov dword ptr [ecx + 0x24], 0x8343e0
// 005a87b2  c74144d0438300       mov dword ptr [ecx + 0x44], 0x8343d0
// 005a87b9  c74164c0438300       mov dword ptr [ecx + 0x64], 0x8343c0
// 005a87c0  c78184000000b0438300 mov dword ptr [ecx + 0x84], 0x8343b0
// 005a87ca  c781a4000000a0438300 mov dword ptr [ecx + 0xa4], 0x8343a0
// 005a87d4  c781c400000090438300 mov dword ptr [ecx + 0xc4], 0x834390
// 005a87de  e95d1dfbff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
