// roc 2012-06 00916160  unit: RBX::MegaClusterPoly  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00916160
//
// 00916160  83ec0c               sub esp, 0xc
// 00916163  56                   push esi
// 00916164  57                   push edi
// 00916165  8bf1                 mov esi, ecx
// 00916167  bf04000000           mov edi, 4
// 0091616c  8d642400             lea esp, [esp]
// 00916170  d9442418             fld dword ptr [esp + 0x18]
// 00916174  51                   push ecx
// 00916175  d91c24               fstp dword ptr [esp]
// 00916178  8d44240c             lea eax, [esp + 0xc]
// 0091617c  56                   push esi
// 0091617d  50                   push eax
// 0091617e  e8ad7feaff           call 0x7be130
// 00916183  d900                 fld dword ptr [eax]
// 00916185  d91e                 fstp dword ptr [esi]
// 00916187  83c40c               add esp, 0xc
// 0091618a  d94004               fld dword ptr [eax + 4]
// 0091618d  83c60c               add esi, 0xc
// 00916190  83ef01               sub edi, 1
// 00916193  d95ef8               fstp dword ptr [esi - 8]
// 00916196  d94008               fld dword ptr [eax + 8]
// 00916199  d95efc               fstp dword ptr [esi - 4]
// 0091619c  75d2                 jne 0x916170
// 0091619e  5f                   pop edi
// 0091619f  5e                   pop esi
// 009161a0  83c40c               add esp, 0xc
// 009161a3  c20400               ret 4
// library rbxgs/util\Face.cpp (function ?snapToGrid@Face@RBX@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Face.cpp
