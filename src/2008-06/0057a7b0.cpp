// roc 2008-06 0057a7b0  unit: RBX::VDataModel::?$BoundFuncDesc  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057a7b0
//
// 0057a7b0  56                   push esi
// 0057a7b1  8bf1                 mov esi, ecx
// 0057a7b3  e838e4feff           call 0x568bf0
// 0057a7b8  c706bc018300         mov dword ptr [esi], 0x8301bc
// 0057a7be  c74610ac018300       mov dword ptr [esi + 0x10], 0x8301ac
// 0057a7c5  c74614a4018300       mov dword ptr [esi + 0x14], 0x8301a4
// 0057a7cc  c746209c018300       mov dword ptr [esi + 0x20], 0x83019c
// 0057a7d3  c746248c018300       mov dword ptr [esi + 0x24], 0x83018c
// 0057a7da  c746447c018300       mov dword ptr [esi + 0x44], 0x83017c
// 0057a7e1  c746646c018300       mov dword ptr [esi + 0x64], 0x83016c
// 0057a7e8  c786840000005c018300 mov dword ptr [esi + 0x84], 0x83015c
// 0057a7f2  c786a40000004c018300 mov dword ptr [esi + 0xa4], 0x83014c
// 0057a7fc  c786c40000003c018300 mov dword ptr [esi + 0xc4], 0x83013c
// 0057a806  c786300100002c018300 mov dword ptr [esi + 0x130], 0x83012c
// 0057a810  c786500100001c018300 mov dword ptr [esi + 0x150], 0x83011c
// 0057a81a  c786700100000c018300 mov dword ptr [esi + 0x170], 0x83010c
// 0057a824  8bc6                 mov eax, esi
// 0057a826  5e                   pop esi
// 0057a827  c3                   ret 
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??0?$NonFactoryProduct@VServiceProvider@RBX@@$1?sGlobalSettings@2@3QBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/GlobalSettings.cpp
