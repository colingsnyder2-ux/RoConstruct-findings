// roc 2007-03 005ae520  unit: seg_005a0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae520
//
// 005ae520  56                   push esi
// 005ae521  57                   push edi
// 005ae522  8bf9                 mov edi, ecx
// 005ae524  8d474c               lea eax, [edi + 0x4c]
// 005ae527  50                   push eax
// 005ae528  e8539bffff           call 0x5a8080
// 005ae52d  8bf0                 mov esi, eax
// 005ae52f  83c77c               add edi, 0x7c
// 005ae532  57                   push edi
// 005ae533  81ee4786c861         sub esi, 0x61c88647
// 005ae539  e8429bffff           call 0x5a8080
// 005ae53e  8bce                 mov ecx, esi
// 005ae540  8bd6                 mov edx, esi
// 005ae542  c1e106               shl ecx, 6
// 005ae545  c1ea02               shr edx, 2
// 005ae548  83c408               add esp, 8
// 005ae54b  03ca                 add ecx, edx
// 005ae54d  8d8408b979379e       lea eax, [eax + ecx - 0x61c88647]
// 005ae554  5f                   pop edi
// 005ae555  33c6                 xor eax, esi
// 005ae557  5e                   pop esi
// 005ae558  c3                   ret 
// library rbxgs/v8world\MotorJoint.cpp (function ?hashCode@MotorJoint@RBX@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MotorJoint.cpp
