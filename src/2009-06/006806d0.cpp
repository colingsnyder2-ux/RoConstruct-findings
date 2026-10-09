// roc 2009-06 006806d0  unit: RBX::Mechanism  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006806d0
//
// 006806d0  51                   push ecx
// 006806d1  56                   push esi
// 006806d2  8bf1                 mov esi, ecx
// 006806d4  8b06                 mov eax, dword ptr [esi]
// 006806d6  85c0                 test eax, eax
// 006806d8  741b                 je 0x6806f5
// 006806da  8d4c2404             lea ecx, [esp + 4]
// 006806de  51                   push ecx
// 006806df  83c00c               add eax, 0xc
// 006806e2  50                   push eax
// 006806e3  8974240c             mov dword ptr [esp + 0xc], esi
// 006806e7  e8c4feffff           call 0x6805b0
// 006806ec  83c408               add esp, 8
// 006806ef  c70600000000         mov dword ptr [esi], 0
// 006806f5  5e                   pop esi
// 006806f6  59                   pop ecx
// 006806f7  c3                   ret 
// library openrbx-client/App\v8world\Mechanism.cpp (function ?stopTracking@MechanismTracker@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Mechanism.cpp
