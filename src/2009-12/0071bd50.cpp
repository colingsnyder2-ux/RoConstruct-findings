// roc 2009-12 0071bd50  unit: RBX::VPhysicsService::?$EventDesc  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071bd50
//
// 0071bd50  51                   push ecx
// 0071bd51  56                   push esi
// 0071bd52  8bf1                 mov esi, ecx
// 0071bd54  8b06                 mov eax, dword ptr [esi]
// 0071bd56  85c0                 test eax, eax
// 0071bd58  741b                 je 0x71bd75
// 0071bd5a  8d4c2404             lea ecx, [esp + 4]
// 0071bd5e  51                   push ecx
// 0071bd5f  83c00c               add eax, 0xc
// 0071bd62  50                   push eax
// 0071bd63  8974240c             mov dword ptr [esp + 0xc], esi
// 0071bd67  e8c4feffff           call 0x71bc30
// 0071bd6c  83c408               add esp, 8
// 0071bd6f  c70600000000         mov dword ptr [esi], 0
// 0071bd75  5e                   pop esi
// 0071bd76  59                   pop ecx
// 0071bd77  c3                   ret 
// library openrbx-client/App\v8world\Mechanism.cpp (function ?stopTracking@MechanismTracker@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Mechanism.cpp
