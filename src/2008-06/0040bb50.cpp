// roc 2008-06 0040bb50  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040bb50
//
// 0040bb50  56                   push esi
// 0040bb51  8bf1                 mov esi, ecx
// 0040bb53  e888fc1400           call 0x55b7e0
// 0040bb58  c7066cbf8000         mov dword ptr [esi], 0x80bf6c
// 0040bb5e  c7461060bf8000       mov dword ptr [esi + 0x10], 0x80bf60
// 0040bb65  c7461458bf8000       mov dword ptr [esi + 0x14], 0x80bf58
// 0040bb6c  c7462050bf8000       mov dword ptr [esi + 0x20], 0x80bf50
// 0040bb73  c7462440bf8000       mov dword ptr [esi + 0x24], 0x80bf40
// 0040bb7a  c7464430bf8000       mov dword ptr [esi + 0x44], 0x80bf30
// 0040bb81  c7466420bf8000       mov dword ptr [esi + 0x64], 0x80bf20
// 0040bb88  c7868400000010bf8000 mov dword ptr [esi + 0x84], 0x80bf10
// 0040bb92  c786a400000000bf8000 mov dword ptr [esi + 0xa4], 0x80bf00
// 0040bb9c  c786c4000000f0be8000 mov dword ptr [esi + 0xc4], 0x80bef0
// 0040bba6  8bc6                 mov eax, esi
// 0040bba8  5e                   pop esi
// 0040bba9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
