// roc 2008-06 00636190  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636190
//
// 00636190  56                   push esi
// 00636191  8bf1                 mov esi, ecx
// 00636193  e84856f2ff           call 0x55b7e0
// 00636198  c706cc8a8400         mov dword ptr [esi], 0x848acc
// 0063619e  c74610bc8a8400       mov dword ptr [esi + 0x10], 0x848abc
// 006361a5  c74614b48a8400       mov dword ptr [esi + 0x14], 0x848ab4
// 006361ac  c74620ac8a8400       mov dword ptr [esi + 0x20], 0x848aac
// 006361b3  c746249c8a8400       mov dword ptr [esi + 0x24], 0x848a9c
// 006361ba  c746448c8a8400       mov dword ptr [esi + 0x44], 0x848a8c
// 006361c1  c746647c8a8400       mov dword ptr [esi + 0x64], 0x848a7c
// 006361c8  c786840000006c8a8400 mov dword ptr [esi + 0x84], 0x848a6c
// 006361d2  c786a40000005c8a8400 mov dword ptr [esi + 0xa4], 0x848a5c
// 006361dc  c786c40000004c8a8400 mov dword ptr [esi + 0xc4], 0x848a4c
// 006361e6  8bc6                 mov eax, esi
// 006361e8  5e                   pop esi
// 006361e9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
