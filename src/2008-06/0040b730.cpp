// roc 2008-06 0040b730  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b730
//
// 0040b730  56                   push esi
// 0040b731  8bf1                 mov esi, ecx
// 0040b733  e8a8001500           call 0x55b7e0
// 0040b738  c706ccbd8000         mov dword ptr [esi], 0x80bdcc
// 0040b73e  c74610bcbd8000       mov dword ptr [esi + 0x10], 0x80bdbc
// 0040b745  c74614b4bd8000       mov dword ptr [esi + 0x14], 0x80bdb4
// 0040b74c  c74620acbd8000       mov dword ptr [esi + 0x20], 0x80bdac
// 0040b753  c746249cbd8000       mov dword ptr [esi + 0x24], 0x80bd9c
// 0040b75a  c746448cbd8000       mov dword ptr [esi + 0x44], 0x80bd8c
// 0040b761  c746647cbd8000       mov dword ptr [esi + 0x64], 0x80bd7c
// 0040b768  c786840000006cbd8000 mov dword ptr [esi + 0x84], 0x80bd6c
// 0040b772  c786a40000005cbd8000 mov dword ptr [esi + 0xa4], 0x80bd5c
// 0040b77c  c786c40000004cbd8000 mov dword ptr [esi + 0xc4], 0x80bd4c
// 0040b786  8bc6                 mov eax, esi
// 0040b788  5e                   pop esi
// 0040b789  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
