// roc 2008-06 00565ec0  unit: RBX::Team  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565ec0
//
// 00565ec0  56                   push esi
// 00565ec1  8bf1                 mov esi, ecx
// 00565ec3  e81859ffff           call 0x55b7e0
// 00565ec8  c70674e98200         mov dword ptr [esi], 0x82e974
// 00565ece  c7461064e98200       mov dword ptr [esi + 0x10], 0x82e964
// 00565ed5  c746145ce98200       mov dword ptr [esi + 0x14], 0x82e95c
// 00565edc  c7462054e98200       mov dword ptr [esi + 0x20], 0x82e954
// 00565ee3  c7462444e98200       mov dword ptr [esi + 0x24], 0x82e944
// 00565eea  c7464434e98200       mov dword ptr [esi + 0x44], 0x82e934
// 00565ef1  c7466424e98200       mov dword ptr [esi + 0x64], 0x82e924
// 00565ef8  c7868400000014e98200 mov dword ptr [esi + 0x84], 0x82e914
// 00565f02  c786a400000004e98200 mov dword ptr [esi + 0xa4], 0x82e904
// 00565f0c  c786c4000000f4e88200 mov dword ptr [esi + 0xc4], 0x82e8f4
// 00565f16  8bc6                 mov eax, esi
// 00565f18  5e                   pop esi
// 00565f19  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
