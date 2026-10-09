// roc 2008-06 005a8970  unit: RBX::ScriptContext  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8970
//
// 005a8970  56                   push esi
// 005a8971  8bf1                 mov esi, ecx
// 005a8973  e8682efbff           call 0x55b7e0
// 005a8978  c7060c448300         mov dword ptr [esi], 0x83440c
// 005a897e  c7461000448300       mov dword ptr [esi + 0x10], 0x834400
// 005a8985  c74614f8438300       mov dword ptr [esi + 0x14], 0x8343f8
// 005a898c  c74620f0438300       mov dword ptr [esi + 0x20], 0x8343f0
// 005a8993  c74624e0438300       mov dword ptr [esi + 0x24], 0x8343e0
// 005a899a  c74644d0438300       mov dword ptr [esi + 0x44], 0x8343d0
// 005a89a1  c74664c0438300       mov dword ptr [esi + 0x64], 0x8343c0
// 005a89a8  c78684000000b0438300 mov dword ptr [esi + 0x84], 0x8343b0
// 005a89b2  c786a4000000a0438300 mov dword ptr [esi + 0xa4], 0x8343a0
// 005a89bc  c786c400000090438300 mov dword ptr [esi + 0xc4], 0x834390
// 005a89c6  8bc6                 mov eax, esi
// 005a89c8  5e                   pop esi
// 005a89c9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
