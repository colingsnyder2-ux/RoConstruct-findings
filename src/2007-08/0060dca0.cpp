// roc 2007-08 0060dca0  unit: RBX::Ball  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060dca0
//
// 0060dca0  83ec0c               sub esp, 0xc
// 0060dca3  56                   push esi
// 0060dca4  57                   push edi
// 0060dca5  8bf1                 mov esi, ecx
// 0060dca7  bf04000000           mov edi, 4
// 0060dcac  8d642400             lea esp, [esp]
// 0060dcb0  d9442418             fld dword ptr [esp + 0x18]
// 0060dcb4  51                   push ecx
// 0060dcb5  d91c24               fstp dword ptr [esp]
// 0060dcb8  8d44240c             lea eax, [esp + 0xc]
// 0060dcbc  56                   push esi
// 0060dcbd  50                   push eax
// 0060dcbe  e81de3f9ff           call 0x5abfe0
// 0060dcc3  d900                 fld dword ptr [eax]
// 0060dcc5  d91e                 fstp dword ptr [esi]
// 0060dcc7  83c40c               add esp, 0xc
// 0060dcca  d94004               fld dword ptr [eax + 4]
// 0060dccd  83c60c               add esi, 0xc
// 0060dcd0  83ef01               sub edi, 1
// 0060dcd3  d95ef8               fstp dword ptr [esi - 8]
// 0060dcd6  d94008               fld dword ptr [eax + 8]
// 0060dcd9  d95efc               fstp dword ptr [esi - 4]
// 0060dcdc  75d2                 jne 0x60dcb0
// 0060dcde  5f                   pop edi
// 0060dcdf  5e                   pop esi
// 0060dce0  83c40c               add esp, 0xc
// 0060dce3  c20400               ret 4
// library rbxgs/util\Face.cpp (function ?snapToGrid@Face@RBX@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Face.cpp
