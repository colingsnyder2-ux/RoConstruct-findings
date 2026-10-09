// roc 2008-06 006293a0  unit: seg_00620000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006293a0
//
// 006293a0  56                   push esi
// 006293a1  8bf1                 mov esi, ecx
// 006293a3  e83824f3ff           call 0x55b7e0
// 006293a8  c706f4588400         mov dword ptr [esi], 0x8458f4
// 006293ae  c74610e4588400       mov dword ptr [esi + 0x10], 0x8458e4
// 006293b5  c74614dc588400       mov dword ptr [esi + 0x14], 0x8458dc
// 006293bc  c74620d4588400       mov dword ptr [esi + 0x20], 0x8458d4
// 006293c3  c74624c4588400       mov dword ptr [esi + 0x24], 0x8458c4
// 006293ca  c74644b4588400       mov dword ptr [esi + 0x44], 0x8458b4
// 006293d1  c74664a4588400       mov dword ptr [esi + 0x64], 0x8458a4
// 006293d8  c7868400000094588400 mov dword ptr [esi + 0x84], 0x845894
// 006293e2  c786a400000084588400 mov dword ptr [esi + 0xa4], 0x845884
// 006293ec  c786c400000074588400 mov dword ptr [esi + 0xc4], 0x845874
// 006293f6  8bc6                 mov eax, esi
// 006293f8  5e                   pop esi
// 006293f9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
