// roc 2010-06 007541c0  unit: RBX::Ball  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007541c0
//
// 007541c0  83ec0c               sub esp, 0xc
// 007541c3  56                   push esi
// 007541c4  57                   push edi
// 007541c5  8bf1                 mov esi, ecx
// 007541c7  bf04000000           mov edi, 4
// 007541cc  8d642400             lea esp, [esp]
// 007541d0  d9442418             fld dword ptr [esp + 0x18]
// 007541d4  51                   push ecx
// 007541d5  d91c24               fstp dword ptr [esp]
// 007541d8  8d44240c             lea eax, [esp + 0xc]
// 007541dc  56                   push esi
// 007541dd  50                   push eax
// 007541de  e87dc8f3ff           call 0x690a60
// 007541e3  d900                 fld dword ptr [eax]
// 007541e5  d91e                 fstp dword ptr [esi]
// 007541e7  83c40c               add esp, 0xc
// 007541ea  d94004               fld dword ptr [eax + 4]
// 007541ed  83c60c               add esi, 0xc
// 007541f0  83ef01               sub edi, 1
// 007541f3  d95ef8               fstp dword ptr [esi - 8]
// 007541f6  d94008               fld dword ptr [eax + 8]
// 007541f9  d95efc               fstp dword ptr [esi - 4]
// 007541fc  75d2                 jne 0x7541d0
// 007541fe  5f                   pop edi
// 007541ff  5e                   pop esi
// 00754200  83c40c               add esp, 0xc
// 00754203  c20400               ret 4
// library rbxgs/util\Face.cpp (function ?snapToGrid@Face@RBX@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Face.cpp
