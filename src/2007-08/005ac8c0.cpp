// roc 2007-08 005ac8c0  unit: RBX::World  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ac8c0
//
// 005ac8c0  51                   push ecx
// 005ac8c1  56                   push esi
// 005ac8c2  8bf1                 mov esi, ecx
// 005ac8c4  8b06                 mov eax, dword ptr [esi]
// 005ac8c6  85c0                 test eax, eax
// 005ac8c8  741b                 je 0x5ac8e5
// 005ac8ca  8d4c2404             lea ecx, [esp + 4]
// 005ac8ce  51                   push ecx
// 005ac8cf  83c00c               add eax, 0xc
// 005ac8d2  50                   push eax
// 005ac8d3  8974240c             mov dword ptr [esp + 0xc], esi
// 005ac8d7  e8f4feffff           call 0x5ac7d0
// 005ac8dc  83c408               add esp, 8
// 005ac8df  c70600000000         mov dword ptr [esi], 0
// 005ac8e5  5e                   pop esi
// 005ac8e6  59                   pop ecx
// 005ac8e7  c3                   ret 
// library openrbx-client/App\v8world\Mechanism.cpp (function ?stopTracking@MechanismTracker@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Mechanism.cpp
