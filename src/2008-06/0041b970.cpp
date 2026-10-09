// roc 2008-06 0041b970  unit: VDHTMLWindow::?$SignalDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b970
//
// 0041b970  56                   push esi
// 0041b971  8bf1                 mov esi, ecx
// 0041b973  e868fe1300           call 0x55b7e0
// 0041b978  c706cced8000         mov dword ptr [esi], 0x80edcc
// 0041b97e  c74610c0ed8000       mov dword ptr [esi + 0x10], 0x80edc0
// 0041b985  c74614b8ed8000       mov dword ptr [esi + 0x14], 0x80edb8
// 0041b98c  c74620b0ed8000       mov dword ptr [esi + 0x20], 0x80edb0
// 0041b993  c74624a0ed8000       mov dword ptr [esi + 0x24], 0x80eda0
// 0041b99a  c7464490ed8000       mov dword ptr [esi + 0x44], 0x80ed90
// 0041b9a1  c7466480ed8000       mov dword ptr [esi + 0x64], 0x80ed80
// 0041b9a8  c7868400000070ed8000 mov dword ptr [esi + 0x84], 0x80ed70
// 0041b9b2  c786a400000060ed8000 mov dword ptr [esi + 0xa4], 0x80ed60
// 0041b9bc  c786c400000050ed8000 mov dword ptr [esi + 0xc4], 0x80ed50
// 0041b9c6  8bc6                 mov eax, esi
// 0041b9c8  5e                   pop esi
// 0041b9c9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
