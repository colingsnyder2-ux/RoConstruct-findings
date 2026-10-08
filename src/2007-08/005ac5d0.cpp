// roc 2007-08 005ac5d0  unit: RBX::World  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ac5d0
//
// 005ac5d0  833900               cmp dword ptr [ecx], 0
// 005ac5d3  0f95c0               setne al
// 005ac5d6  c3                   ret 
// library openrbx-client/App\v8world\Mechanism.cpp (function ?tracking@MechanismTracker@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Mechanism.cpp
