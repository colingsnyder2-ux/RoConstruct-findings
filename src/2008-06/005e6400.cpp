// roc 2008-06 005e6400  unit: RBX::Clump  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6400
//
// 005e6400  8b442404             mov eax, dword ptr [esp + 4]
// 005e6404  8d542404             lea edx, [esp + 4]
// 005e6408  52                   push edx
// 005e6409  89442408             mov dword ptr [esp + 8], eax
// 005e640d  e84effffff           call 0x5e6360
// 005e6412  c20400               ret 4
// library openrbx-client/App\v8world\Assembly2.cpp (function ?getMotor@Assembly@RBX@@QAEPAVMotorJoint@2@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp
