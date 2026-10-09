// roc 2011-06 006de560  unit: RBX::VPhysicsService::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006de560
//
// 006de560  833900               cmp dword ptr [ecx], 0
// 006de563  0f95c0               setne al
// 006de566  c3                   ret 
// library openrbx-client/App\v8world\Mechanism.cpp (function ?tracking@MechanismTracker@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Mechanism.cpp
