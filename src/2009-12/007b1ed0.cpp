// roc 2009-12 007b1ed0  unit: RBX::Body  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b1ed0
//
// 007b1ed0  83ec0c               sub esp, 0xc
// 007b1ed3  56                   push esi
// 007b1ed4  57                   push edi
// 007b1ed5  8bf1                 mov esi, ecx
// 007b1ed7  bf04000000           mov edi, 4
// 007b1edc  8d642400             lea esp, [esp]
// 007b1ee0  d9442418             fld dword ptr [esp + 0x18]
// 007b1ee4  51                   push ecx
// 007b1ee5  d91c24               fstp dword ptr [esp]
// 007b1ee8  8d44240c             lea eax, [esp + 0xc]
// 007b1eec  56                   push esi
// 007b1eed  50                   push eax
// 007b1eee  e8cde0f3ff           call 0x6effc0
// 007b1ef3  d900                 fld dword ptr [eax]
// 007b1ef5  d91e                 fstp dword ptr [esi]
// 007b1ef7  83c40c               add esp, 0xc
// 007b1efa  d94004               fld dword ptr [eax + 4]
// 007b1efd  83c60c               add esi, 0xc
// 007b1f00  83ef01               sub edi, 1
// 007b1f03  d95ef8               fstp dword ptr [esi - 8]
// 007b1f06  d94008               fld dword ptr [eax + 8]
// 007b1f09  d95efc               fstp dword ptr [esi - 4]
// 007b1f0c  75d2                 jne 0x7b1ee0
// 007b1f0e  5f                   pop edi
// 007b1f0f  5e                   pop esi
// 007b1f10  83c40c               add esp, 0xc
// 007b1f13  c20400               ret 4
// library rbxgs/util\Face.cpp (function ?snapToGrid@Face@RBX@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Face.cpp
