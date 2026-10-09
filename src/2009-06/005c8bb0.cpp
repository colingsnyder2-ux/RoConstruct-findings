// roc 2009-06 005c8bb0  unit: seg_005c0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8bb0
//
// 005c8bb0  d9442404             fld dword ptr [esp + 4]
// 005c8bb4  d99990000000         fstp dword ptr [ecx + 0x90]
// 005c8bba  c20400               ret 4
// library openrbx-client/App\v8datamodel\Feature.cpp (function ?setMaxVelocity@MotorJoint@RBX@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
