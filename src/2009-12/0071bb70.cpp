// roc 2009-12 0071bb70  unit: RBX::VPhysicsService::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071bb70
//
// 0071bb70  833900               cmp dword ptr [ecx], 0
// 0071bb73  0f95c0               setne al
// 0071bb76  c3                   ret 
// library openrbx-client/App\v8world\Mechanism.cpp (function ?tracking@MechanismTracker@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Mechanism.cpp
