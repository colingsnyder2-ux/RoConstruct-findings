// roc 2008-06 005e5fc0  unit: RBX::MotorJoint  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5fc0
//
// 005e5fc0  8b442404             mov eax, dword ptr [esp + 4]
// 005e5fc4  c70000000000         mov dword ptr [eax], 0
// 005e5fca  c7400401000000       mov dword ptr [eax + 4], 1
// 005e5fd1  c20400               ret 4
// library openrbx-client/App\v8world\Assembly2.cpp (function ?assemblyPrimEnd@Assembly@RBX@@QBE?AVPrimIterator@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp
