// roc 2007-03 005f6a60  unit: seg_005f0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f6a60
//
// 005f6a60  83ec0c               sub esp, 0xc
// 005f6a63  56                   push esi
// 005f6a64  57                   push edi
// 005f6a65  8bf1                 mov esi, ecx
// 005f6a67  bf04000000           mov edi, 4
// 005f6a6c  8d642400             lea esp, [esp]
// 005f6a70  d9442418             fld dword ptr [esp + 0x18]
// 005f6a74  51                   push ecx
// 005f6a75  d91c24               fstp dword ptr [esp]
// 005f6a78  8d44240c             lea eax, [esp + 0xc]
// 005f6a7c  56                   push esi
// 005f6a7d  50                   push eax
// 005f6a7e  e88d10fbff           call 0x5a7b10
// 005f6a83  d900                 fld dword ptr [eax]
// 005f6a85  d91e                 fstp dword ptr [esi]
// 005f6a87  83c40c               add esp, 0xc
// 005f6a8a  d94004               fld dword ptr [eax + 4]
// 005f6a8d  83c60c               add esi, 0xc
// 005f6a90  83ef01               sub edi, 1
// 005f6a93  d95ef8               fstp dword ptr [esi - 8]
// 005f6a96  d94008               fld dword ptr [eax + 8]
// 005f6a99  d95efc               fstp dword ptr [esi - 4]
// 005f6a9c  75d2                 jne 0x5f6a70
// 005f6a9e  5f                   pop edi
// 005f6a9f  5e                   pop esi
// 005f6aa0  83c40c               add esp, 0xc
// 005f6aa3  c20400               ret 4
// library rbxgs/util\Face.cpp (function ?snapToGrid@Face@RBX@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Face.cpp
