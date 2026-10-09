// roc 2011-06 006de650  unit: RBX::VPhysicsService::?$EventDesc  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006de650
//
// 006de650  51                   push ecx
// 006de651  56                   push esi
// 006de652  8bf1                 mov esi, ecx
// 006de654  8b06                 mov eax, dword ptr [esi]
// 006de656  85c0                 test eax, eax
// 006de658  741b                 je 0x6de675
// 006de65a  8d4c2404             lea ecx, [esp + 4]
// 006de65e  51                   push ecx
// 006de65f  83c00c               add eax, 0xc
// 006de662  50                   push eax
// 006de663  8974240c             mov dword ptr [esp + 0xc], esi
// 006de667  e854ffffff           call 0x6de5c0
// 006de66c  83c408               add esp, 8
// 006de66f  c70600000000         mov dword ptr [esi], 0
// 006de675  5e                   pop esi
// 006de676  59                   pop ecx
// 006de677  c3                   ret 
// library openrbx-client/App\v8world\Mechanism.cpp (function ?stopTracking@MechanismTracker@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Mechanism.cpp
