// roc 2008-06 00568d70  unit: RBX::ServiceProvider  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568d70
//
// 00568d70  56                   push esi
// 00568d71  8bf1                 mov esi, ecx
// 00568d73  e878feffff           call 0x568bf0
// 00568d78  c706bcf28200         mov dword ptr [esi], 0x82f2bc
// 00568d7e  c74610b0f28200       mov dword ptr [esi + 0x10], 0x82f2b0
// 00568d85  c74614a8f28200       mov dword ptr [esi + 0x14], 0x82f2a8
// 00568d8c  c74620a0f28200       mov dword ptr [esi + 0x20], 0x82f2a0
// 00568d93  c7462490f28200       mov dword ptr [esi + 0x24], 0x82f290
// 00568d9a  c7464480f28200       mov dword ptr [esi + 0x44], 0x82f280
// 00568da1  c7466470f28200       mov dword ptr [esi + 0x64], 0x82f270
// 00568da8  c7868400000060f28200 mov dword ptr [esi + 0x84], 0x82f260
// 00568db2  c786a400000050f28200 mov dword ptr [esi + 0xa4], 0x82f250
// 00568dbc  c786c400000040f28200 mov dword ptr [esi + 0xc4], 0x82f240
// 00568dc6  c7863001000030f28200 mov dword ptr [esi + 0x130], 0x82f230
// 00568dd0  c7865001000020f28200 mov dword ptr [esi + 0x150], 0x82f220
// 00568dda  c7867001000010f28200 mov dword ptr [esi + 0x170], 0x82f210
// 00568de4  8bc6                 mov eax, esi
// 00568de6  5e                   pop esi
// 00568de7  c3                   ret 
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??0?$NonFactoryProduct@VServiceProvider@RBX@@$1?sGlobalSettings@2@3QBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/GlobalSettings.cpp
