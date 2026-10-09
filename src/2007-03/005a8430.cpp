// roc 2007-03 005a8430  unit: seg_005a0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8430
//
// 005a8430  51                   push ecx
// 005a8431  56                   push esi
// 005a8432  8bf1                 mov esi, ecx
// 005a8434  8b06                 mov eax, dword ptr [esi]
// 005a8436  85c0                 test eax, eax
// 005a8438  741b                 je 0x5a8455
// 005a843a  8d4c2404             lea ecx, [esp + 4]
// 005a843e  51                   push ecx
// 005a843f  83c00c               add eax, 0xc
// 005a8442  50                   push eax
// 005a8443  8974240c             mov dword ptr [esp + 0xc], esi
// 005a8447  e824ffffff           call 0x5a8370
// 005a844c  83c408               add esp, 8
// 005a844f  c70600000000         mov dword ptr [esi], 0
// 005a8455  5e                   pop esi
// 005a8456  59                   pop ecx
// 005a8457  c3                   ret 
// library openrbx-client/App\v8world\Mechanism.cpp (function ?stopTracking@MechanismTracker@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Mechanism.cpp
