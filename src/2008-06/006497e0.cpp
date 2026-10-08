// roc 2008-06 006497e0  unit: RBX::Ball  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006497e0
//
// 006497e0  83ec0c               sub esp, 0xc
// 006497e3  56                   push esi
// 006497e4  57                   push edi
// 006497e5  8bf1                 mov esi, ecx
// 006497e7  bf04000000           mov edi, 4
// 006497ec  8d642400             lea esp, [esp]
// 006497f0  d9442418             fld dword ptr [esp + 0x18]
// 006497f4  51                   push ecx
// 006497f5  d91c24               fstp dword ptr [esp]
// 006497f8  8d44240c             lea eax, [esp + 0xc]
// 006497fc  56                   push esi
// 006497fd  50                   push eax
// 006497fe  e88d56f9ff           call 0x5dee90
// 00649803  d900                 fld dword ptr [eax]
// 00649805  d91e                 fstp dword ptr [esi]
// 00649807  83c40c               add esp, 0xc
// 0064980a  d94004               fld dword ptr [eax + 4]
// 0064980d  83c60c               add esi, 0xc
// 00649810  83ef01               sub edi, 1
// 00649813  d95ef8               fstp dword ptr [esi - 8]
// 00649816  d94008               fld dword ptr [eax + 8]
// 00649819  d95efc               fstp dword ptr [esi - 4]
// 0064981c  75d2                 jne 0x6497f0
// 0064981e  5f                   pop edi
// 0064981f  5e                   pop esi
// 00649820  83c40c               add esp, 0xc
// 00649823  c20400               ret 4
// library rbxgs/util\Face.cpp (function ?snapToGrid@Face@RBX@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Face.cpp
