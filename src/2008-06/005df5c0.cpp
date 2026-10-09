// roc 2008-06 005df5c0  unit: RBX::Lighting  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df5c0
//
// 005df5c0  56                   push esi
// 005df5c1  8bf1                 mov esi, ecx
// 005df5c3  e818c2f7ff           call 0x55b7e0
// 005df5c8  c706e4db8300         mov dword ptr [esi], 0x83dbe4
// 005df5ce  c74610d4db8300       mov dword ptr [esi + 0x10], 0x83dbd4
// 005df5d5  c74614ccdb8300       mov dword ptr [esi + 0x14], 0x83dbcc
// 005df5dc  c74620c4db8300       mov dword ptr [esi + 0x20], 0x83dbc4
// 005df5e3  c74624b4db8300       mov dword ptr [esi + 0x24], 0x83dbb4
// 005df5ea  c74644a4db8300       mov dword ptr [esi + 0x44], 0x83dba4
// 005df5f1  c7466494db8300       mov dword ptr [esi + 0x64], 0x83db94
// 005df5f8  c7868400000084db8300 mov dword ptr [esi + 0x84], 0x83db84
// 005df602  c786a400000074db8300 mov dword ptr [esi + 0xa4], 0x83db74
// 005df60c  c786c400000064db8300 mov dword ptr [esi + 0xc4], 0x83db64
// 005df616  8bc6                 mov eax, esi
// 005df618  5e                   pop esi
// 005df619  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
