// roc 2008-06 00568520  unit: boost::thread_resource_error  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568520
//
// 00568520  56                   push esi
// 00568521  8bf1                 mov esi, ecx
// 00568523  e8b832ffff           call 0x55b7e0
// 00568528  c706e4ef8200         mov dword ptr [esi], 0x82efe4
// 0056852e  c74610d4ef8200       mov dword ptr [esi + 0x10], 0x82efd4
// 00568535  c74614ccef8200       mov dword ptr [esi + 0x14], 0x82efcc
// 0056853c  c74620c4ef8200       mov dword ptr [esi + 0x20], 0x82efc4
// 00568543  c74624b4ef8200       mov dword ptr [esi + 0x24], 0x82efb4
// 0056854a  c74644a4ef8200       mov dword ptr [esi + 0x44], 0x82efa4
// 00568551  c7466494ef8200       mov dword ptr [esi + 0x64], 0x82ef94
// 00568558  c7868400000084ef8200 mov dword ptr [esi + 0x84], 0x82ef84
// 00568562  c786a400000074ef8200 mov dword ptr [esi + 0xa4], 0x82ef74
// 0056856c  c786c400000064ef8200 mov dword ptr [esi + 0xc4], 0x82ef64
// 00568576  8bc6                 mov eax, esi
// 00568578  5e                   pop esi
// 00568579  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
