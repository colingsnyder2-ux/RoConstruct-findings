// roc 2008-06 00409960  unit: RBX::VSelection::?$FactoryProduct::Creator  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409960
//
// 00409960  56                   push esi
// 00409961  8bf1                 mov esi, ecx
// 00409963  e8781e1500           call 0x55b7e0
// 00409968  c706b4b78000         mov dword ptr [esi], 0x80b7b4
// 0040996e  c74610a8b78000       mov dword ptr [esi + 0x10], 0x80b7a8
// 00409975  c74614a0b78000       mov dword ptr [esi + 0x14], 0x80b7a0
// 0040997c  c7462098b78000       mov dword ptr [esi + 0x20], 0x80b798
// 00409983  c7462488b78000       mov dword ptr [esi + 0x24], 0x80b788
// 0040998a  c7464478b78000       mov dword ptr [esi + 0x44], 0x80b778
// 00409991  c7466468b78000       mov dword ptr [esi + 0x64], 0x80b768
// 00409998  c7868400000058b78000 mov dword ptr [esi + 0x84], 0x80b758
// 004099a2  c786a400000048b78000 mov dword ptr [esi + 0xa4], 0x80b748
// 004099ac  c786c400000038b78000 mov dword ptr [esi + 0xc4], 0x80b738
// 004099b6  8bc6                 mov eax, esi
// 004099b8  5e                   pop esi
// 004099b9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
