// roc 2008-06 0062d5f0  unit: RBX::ForceField  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062d5f0
//
// 0062d5f0  6aff                 push -1
// 0062d5f2  68b89a7d00           push 0x7d9ab8
// 0062d5f7  64a100000000         mov eax, dword ptr fs:[0]
// 0062d5fd  50                   push eax
// 0062d5fe  64892500000000       mov dword ptr fs:[0], esp
// 0062d605  51                   push ecx
// 0062d606  56                   push esi
// 0062d607  8bf1                 mov esi, ecx
// 0062d609  89742404             mov dword ptr [esp + 4], esi
// 0062d60d  e80efbffff           call 0x62d120
// 0062d612  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062d61a  e8e12df9ff           call 0x5c0400
// 0062d61f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062d623  89461c               mov dword ptr [esi + 0x1c], eax
// 0062d626  c70654678400         mov dword ptr [esi], 0x846754
// 0062d62c  c7461048678400       mov dword ptr [esi + 0x10], 0x846748
// 0062d633  c7461440678400       mov dword ptr [esi + 0x14], 0x846740
// 0062d63a  c7462038678400       mov dword ptr [esi + 0x20], 0x846738
// 0062d641  c7462428678400       mov dword ptr [esi + 0x24], 0x846728
// 0062d648  c7464418678400       mov dword ptr [esi + 0x44], 0x846718
// 0062d64f  c7466408678400       mov dword ptr [esi + 0x64], 0x846708
// 0062d656  c78684000000f8668400 mov dword ptr [esi + 0x84], 0x8466f8
// 0062d660  c786a4000000e8668400 mov dword ptr [esi + 0xa4], 0x8466e8
// 0062d66a  c786c4000000d8668400 mov dword ptr [esi + 0xc4], 0x8466d8
// 0062d674  8bc6                 mov eax, esi
// 0062d676  5e                   pop esi
// 0062d677  64890d00000000       mov dword ptr fs:[0], ecx
// 0062d67e  83c410               add esp, 0x10
// 0062d681  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
