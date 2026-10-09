// roc 2008-06 0045b100  unit: CRobloxWnd  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b100
//
// 0045b100  56                   push esi
// 0045b101  8bf1                 mov esi, ecx
// 0045b103  e8d8061000           call 0x55b7e0
// 0045b108  c706fc978100         mov dword ptr [esi], 0x8197fc
// 0045b10e  c74610f0978100       mov dword ptr [esi + 0x10], 0x8197f0
// 0045b115  c74614e8978100       mov dword ptr [esi + 0x14], 0x8197e8
// 0045b11c  c74620e0978100       mov dword ptr [esi + 0x20], 0x8197e0
// 0045b123  c74624d0978100       mov dword ptr [esi + 0x24], 0x8197d0
// 0045b12a  c74644c0978100       mov dword ptr [esi + 0x44], 0x8197c0
// 0045b131  c74664b0978100       mov dword ptr [esi + 0x64], 0x8197b0
// 0045b138  c78684000000a0978100 mov dword ptr [esi + 0x84], 0x8197a0
// 0045b142  c786a400000090978100 mov dword ptr [esi + 0xa4], 0x819790
// 0045b14c  c786c400000080978100 mov dword ptr [esi + 0xc4], 0x819780
// 0045b156  8bc6                 mov eax, esi
// 0045b158  5e                   pop esi
// 0045b159  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
