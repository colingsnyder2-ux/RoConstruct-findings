// roc 2011-06 007a55c0  unit: RBX::Ball  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a55c0
//
// 007a55c0  83ec0c               sub esp, 0xc
// 007a55c3  56                   push esi
// 007a55c4  57                   push edi
// 007a55c5  8bf1                 mov esi, ecx
// 007a55c7  bf04000000           mov edi, 4
// 007a55cc  8d642400             lea esp, [esp]
// 007a55d0  d9442418             fld dword ptr [esp + 0x18]
// 007a55d4  51                   push ecx
// 007a55d5  d91c24               fstp dword ptr [esp]
// 007a55d8  8d44240c             lea eax, [esp + 0xc]
// 007a55dc  56                   push esi
// 007a55dd  50                   push eax
// 007a55de  e8ed91f2ff           call 0x6ce7d0
// 007a55e3  d900                 fld dword ptr [eax]
// 007a55e5  d91e                 fstp dword ptr [esi]
// 007a55e7  83c40c               add esp, 0xc
// 007a55ea  d94004               fld dword ptr [eax + 4]
// 007a55ed  83c60c               add esi, 0xc
// 007a55f0  83ef01               sub edi, 1
// 007a55f3  d95ef8               fstp dword ptr [esi - 8]
// 007a55f6  d94008               fld dword ptr [eax + 8]
// 007a55f9  d95efc               fstp dword ptr [esi - 4]
// 007a55fc  75d2                 jne 0x7a55d0
// 007a55fe  5f                   pop edi
// 007a55ff  5e                   pop esi
// 007a5600  83c40c               add esp, 0xc
// 007a5603  c20400               ret 4
// library rbxgs/util\Face.cpp (function ?snapToGrid@Face@RBX@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Face.cpp
