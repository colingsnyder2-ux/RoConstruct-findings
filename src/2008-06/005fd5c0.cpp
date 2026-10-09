// roc 2008-06 005fd5c0  unit: RBX::Tool  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd5c0
//
// 005fd5c0  56                   push esi
// 005fd5c1  8bf1                 mov esi, ecx
// 005fd5c3  e818e2f5ff           call 0x55b7e0
// 005fd5c8  c7067c178400         mov dword ptr [esi], 0x84177c
// 005fd5ce  c7461070178400       mov dword ptr [esi + 0x10], 0x841770
// 005fd5d5  c7461468178400       mov dword ptr [esi + 0x14], 0x841768
// 005fd5dc  c7462060178400       mov dword ptr [esi + 0x20], 0x841760
// 005fd5e3  c7462450178400       mov dword ptr [esi + 0x24], 0x841750
// 005fd5ea  c7464440178400       mov dword ptr [esi + 0x44], 0x841740
// 005fd5f1  c7466430178400       mov dword ptr [esi + 0x64], 0x841730
// 005fd5f8  c7868400000020178400 mov dword ptr [esi + 0x84], 0x841720
// 005fd602  c786a400000010178400 mov dword ptr [esi + 0xa4], 0x841710
// 005fd60c  c786c400000000178400 mov dword ptr [esi + 0xc4], 0x841700
// 005fd616  8bc6                 mov eax, esi
// 005fd618  5e                   pop esi
// 005fd619  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
