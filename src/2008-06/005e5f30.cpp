// roc 2008-06 005e5f30  unit: RBX::MotorJoint  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5f30
//
// 005e5f30  d9ee                 fldz 
// 005e5f32  8bc1                 mov eax, ecx
// 005e5f34  c70002000000         mov dword ptr [eax], 2
// 005e5f3a  c7400400000000       mov dword ptr [eax + 4], 0
// 005e5f41  d95008               fst dword ptr [eax + 8]
// 005e5f44  d9500c               fst dword ptr [eax + 0xc]
// 005e5f47  d95010               fst dword ptr [eax + 0x10]
// 005e5f4a  d95014               fst dword ptr [eax + 0x14]
// 005e5f4d  d95018               fst dword ptr [eax + 0x18]
// 005e5f50  d9581c               fstp dword ptr [eax + 0x1c]
// 005e5f53  d9e8                 fld1 
// 005e5f55  d95820               fstp dword ptr [eax + 0x20]
// 005e5f58  c3                   ret 
// library openrbx-client/App\v8world\Assembly2.cpp (function ??0SleepInfo@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp
