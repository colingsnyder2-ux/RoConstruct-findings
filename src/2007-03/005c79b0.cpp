// roc 2007-03 005c79b0  unit: seg_005c0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c79b0
//
// 005c79b0  8b442404             mov eax, dword ptr [esp + 4]
// 005c79b4  85c0                 test eax, eax
// 005c79b6  56                   push esi
// 005c79b7  8bf1                 mov esi, ecx
// 005c79b9  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 005c79c0  c70668a67b00         mov dword ptr [esi], 0x7ba668
// 005c79c6  c7460801000000       mov dword ptr [esi + 8], 1
// 005c79cd  7505                 jne 0x5c79d4
// 005c79cf  e8dc8cfeff           call 0x5b06b0
// 005c79d4  d9ee                 fldz 
// 005c79d6  89460c               mov dword ptr [esi + 0xc], eax
// 005c79d9  d95610               fst dword ptr [esi + 0x10]
// 005c79dc  8bc6                 mov eax, esi
// 005c79de  d95614               fst dword ptr [esi + 0x14]
// 005c79e1  d95618               fst dword ptr [esi + 0x18]
// 005c79e4  d9561c               fst dword ptr [esi + 0x1c]
// 005c79e7  d95620               fst dword ptr [esi + 0x20]
// 005c79ea  d95624               fst dword ptr [esi + 0x24]
// 005c79ed  d95628               fst dword ptr [esi + 0x28]
// 005c79f0  d9562c               fst dword ptr [esi + 0x2c]
// 005c79f3  d95e30               fstp dword ptr [esi + 0x30]
// 005c79f6  5e                   pop esi
// 005c79f7  c20400               ret 4
// library openrbx-client/App\v8kernel\Point.cpp (function ??0Point@RBX@@IAE@PAVBody@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Point.cpp
