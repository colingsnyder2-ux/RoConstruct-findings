// roc 2007-08 005cf0e0  unit: RBX::BlockBlockContact  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cf0e0
//
// 005cf0e0  8b442404             mov eax, dword ptr [esp + 4]
// 005cf0e4  85c0                 test eax, eax
// 005cf0e6  56                   push esi
// 005cf0e7  8bf1                 mov esi, ecx
// 005cf0e9  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 005cf0f0  c7060ca67b00         mov dword ptr [esi], 0x7ba60c
// 005cf0f6  c7460801000000       mov dword ptr [esi + 8], 1
// 005cf0fd  7505                 jne 0x5cf104
// 005cf0ff  e82c360100           call 0x5e2730
// 005cf104  d9ee                 fldz 
// 005cf106  89460c               mov dword ptr [esi + 0xc], eax
// 005cf109  d95610               fst dword ptr [esi + 0x10]
// 005cf10c  8bc6                 mov eax, esi
// 005cf10e  d95614               fst dword ptr [esi + 0x14]
// 005cf111  d95618               fst dword ptr [esi + 0x18]
// 005cf114  d9561c               fst dword ptr [esi + 0x1c]
// 005cf117  d95620               fst dword ptr [esi + 0x20]
// 005cf11a  d95624               fst dword ptr [esi + 0x24]
// 005cf11d  d95628               fst dword ptr [esi + 0x28]
// 005cf120  d9562c               fst dword ptr [esi + 0x2c]
// 005cf123  d95e30               fstp dword ptr [esi + 0x30]
// 005cf126  5e                   pop esi
// 005cf127  c20400               ret 4
// library openrbx-client/App\v8kernel\Point.cpp (function ??0Point@RBX@@IAE@PAVBody@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Point.cpp
