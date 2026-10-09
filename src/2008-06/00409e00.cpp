// roc 2008-06 00409e00  unit: RBX::VInstance::?$NonFactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409e00
//
// 00409e00  56                   push esi
// 00409e01  8bf1                 mov esi, ecx
// 00409e03  e858fbffff           call 0x409960
// 00409e08  c70684b88000         mov dword ptr [esi], 0x80b884
// 00409e0e  c7461074b88000       mov dword ptr [esi + 0x10], 0x80b874
// 00409e15  c746146cb88000       mov dword ptr [esi + 0x14], 0x80b86c
// 00409e1c  c7462064b88000       mov dword ptr [esi + 0x20], 0x80b864
// 00409e23  c7462454b88000       mov dword ptr [esi + 0x24], 0x80b854
// 00409e2a  c7464444b88000       mov dword ptr [esi + 0x44], 0x80b844
// 00409e31  c7466434b88000       mov dword ptr [esi + 0x64], 0x80b834
// 00409e38  c7868400000024b88000 mov dword ptr [esi + 0x84], 0x80b824
// 00409e42  c786a400000014b88000 mov dword ptr [esi + 0xa4], 0x80b814
// 00409e4c  c786c400000004b88000 mov dword ptr [esi + 0xc4], 0x80b804
// 00409e56  8bc6                 mov eax, esi
// 00409e58  5e                   pop esi
// 00409e59  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
