// roc 2010-06 0069b7d0  unit: RBX::PolyContact  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069b7d0
//
// 0069b7d0  51                   push ecx
// 0069b7d1  56                   push esi
// 0069b7d2  8bf1                 mov esi, ecx
// 0069b7d4  8b06                 mov eax, dword ptr [esi]
// 0069b7d6  85c0                 test eax, eax
// 0069b7d8  741b                 je 0x69b7f5
// 0069b7da  8d4c2404             lea ecx, [esp + 4]
// 0069b7de  51                   push ecx
// 0069b7df  83c00c               add eax, 0xc
// 0069b7e2  50                   push eax
// 0069b7e3  8974240c             mov dword ptr [esp + 0xc], esi
// 0069b7e7  e8c4feffff           call 0x69b6b0
// 0069b7ec  83c408               add esp, 8
// 0069b7ef  c70600000000         mov dword ptr [esi], 0
// 0069b7f5  5e                   pop esi
// 0069b7f6  59                   pop ecx
// 0069b7f7  c3                   ret 
// library openrbx-client/App\v8world\Mechanism.cpp (function ?stopTracking@MechanismTracker@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Mechanism.cpp
