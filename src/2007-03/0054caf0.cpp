// roc 2007-03 0054caf0  unit: seg_00540000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054caf0
//
// 0054caf0  8b442404             mov eax, dword ptr [esp + 4]
// 0054caf4  89414c               mov dword ptr [ecx + 0x4c], eax
// 0054caf7  c20400               ret 4
// library rbxgs/v8world\Mechanism.cpp (function ?setMechanism@Assembly@RBX@@QAEXPAVMechanism@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Mechanism.cpp
