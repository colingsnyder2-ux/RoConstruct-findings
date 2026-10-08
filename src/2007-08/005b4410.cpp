// roc 2007-08 005b4410  unit: RBX::MotorJoint  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4410
//
// 005b4410  56                   push esi
// 005b4411  57                   push edi
// 005b4412  8bf9                 mov edi, ecx
// 005b4414  8d474c               lea eax, [edi + 0x4c]
// 005b4417  50                   push eax
// 005b4418  e83381ffff           call 0x5ac550
// 005b441d  8bf0                 mov esi, eax
// 005b441f  83c77c               add edi, 0x7c
// 005b4422  57                   push edi
// 005b4423  81ee4786c861         sub esi, 0x61c88647
// 005b4429  e82281ffff           call 0x5ac550
// 005b442e  8bce                 mov ecx, esi
// 005b4430  8bd6                 mov edx, esi
// 005b4432  c1e106               shl ecx, 6
// 005b4435  c1ea02               shr edx, 2
// 005b4438  83c408               add esp, 8
// 005b443b  03ca                 add ecx, edx
// 005b443d  8d8408b979379e       lea eax, [eax + ecx - 0x61c88647]
// 005b4444  5f                   pop edi
// 005b4445  33c6                 xor eax, esi
// 005b4447  5e                   pop esi
// 005b4448  c3                   ret 
// library rbxgs/v8world\MotorJoint.cpp (function ?hashCode@MotorJoint@RBX@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MotorJoint.cpp
