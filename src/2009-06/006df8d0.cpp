// roc 2009-06 006df8d0  unit: RBX::BallBallContact  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006df8d0
//
// 006df8d0  8b442404             mov eax, dword ptr [esp + 4]
// 006df8d4  56                   push esi
// 006df8d5  8bf1                 mov esi, ecx
// 006df8d7  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 006df8de  c70644d48e00         mov dword ptr [esi], 0x8ed444
// 006df8e4  c7460801000000       mov dword ptr [esi + 8], 1
// 006df8eb  85c0                 test eax, eax
// 006df8ed  7505                 jne 0x6df8f4
// 006df8ef  e8bc54ffff           call 0x6d4db0
// 006df8f4  d9ee                 fldz 
// 006df8f6  89460c               mov dword ptr [esi + 0xc], eax
// 006df8f9  d95610               fst dword ptr [esi + 0x10]
// 006df8fc  8bc6                 mov eax, esi
// 006df8fe  d95614               fst dword ptr [esi + 0x14]
// 006df901  d95618               fst dword ptr [esi + 0x18]
// 006df904  d9561c               fst dword ptr [esi + 0x1c]
// 006df907  d95620               fst dword ptr [esi + 0x20]
// 006df90a  d95624               fst dword ptr [esi + 0x24]
// 006df90d  d95628               fst dword ptr [esi + 0x28]
// 006df910  d9562c               fst dword ptr [esi + 0x2c]
// 006df913  d95e30               fstp dword ptr [esi + 0x30]
// 006df916  5e                   pop esi
// 006df917  c20400               ret 4
// library openrbx-client/App\v8kernel\Point.cpp (function ??0Point@RBX@@IAE@PAVBody@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Point.cpp
