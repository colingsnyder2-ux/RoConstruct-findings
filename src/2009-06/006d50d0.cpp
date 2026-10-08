// roc 2009-06 006d50d0  unit: RBX::Body  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d50d0
//
// 006d50d0  83ec0c               sub esp, 0xc
// 006d50d3  56                   push esi
// 006d50d4  57                   push edi
// 006d50d5  8bf1                 mov esi, ecx
// 006d50d7  bf04000000           mov edi, 4
// 006d50dc  8d642400             lea esp, [esp]
// 006d50e0  d9442418             fld dword ptr [esp + 0x18]
// 006d50e4  51                   push ecx
// 006d50e5  d91c24               fstp dword ptr [esp]
// 006d50e8  8d44240c             lea eax, [esp + 0xc]
// 006d50ec  56                   push esi
// 006d50ed  50                   push eax
// 006d50ee  e88d8ef9ff           call 0x66df80
// 006d50f3  d900                 fld dword ptr [eax]
// 006d50f5  d91e                 fstp dword ptr [esi]
// 006d50f7  83c40c               add esp, 0xc
// 006d50fa  d94004               fld dword ptr [eax + 4]
// 006d50fd  83c60c               add esi, 0xc
// 006d5100  83ef01               sub edi, 1
// 006d5103  d95ef8               fstp dword ptr [esi - 8]
// 006d5106  d94008               fld dword ptr [eax + 8]
// 006d5109  d95efc               fstp dword ptr [esi - 4]
// 006d510c  75d2                 jne 0x6d50e0
// 006d510e  5f                   pop edi
// 006d510f  5e                   pop esi
// 006d5110  83c40c               add esp, 0xc
// 006d5113  c20400               ret 4
// library rbxgs/util\Face.cpp (function ?snapToGrid@Face@RBX@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Face.cpp
