// roc 2008-06 0062d120  unit: RBX::ForceField  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062d120
//
// 0062d120  56                   push esi
// 0062d121  8bf1                 mov esi, ecx
// 0062d123  e8b8e6f2ff           call 0x55b7e0
// 0062d128  c70694668400         mov dword ptr [esi], 0x846694
// 0062d12e  c7461084668400       mov dword ptr [esi + 0x10], 0x846684
// 0062d135  c746147c668400       mov dword ptr [esi + 0x14], 0x84667c
// 0062d13c  c7462074668400       mov dword ptr [esi + 0x20], 0x846674
// 0062d143  c7462464668400       mov dword ptr [esi + 0x24], 0x846664
// 0062d14a  c7464454668400       mov dword ptr [esi + 0x44], 0x846654
// 0062d151  c7466444668400       mov dword ptr [esi + 0x64], 0x846644
// 0062d158  c7868400000034668400 mov dword ptr [esi + 0x84], 0x846634
// 0062d162  c786a400000024668400 mov dword ptr [esi + 0xa4], 0x846624
// 0062d16c  c786c400000014668400 mov dword ptr [esi + 0xc4], 0x846614
// 0062d176  8bc6                 mov eax, esi
// 0062d178  5e                   pop esi
// 0062d179  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
