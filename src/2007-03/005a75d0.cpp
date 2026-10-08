// roc 2007-03 005a75d0  unit: seg_005a0000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a75d0
//
// 005a75d0  64a100000000         mov eax, dword ptr fs:[0]
// 005a75d6  6aff                 push -1
// 005a75d8  687e947500           push 0x75947e
// 005a75dd  50                   push eax
// 005a75de  64892500000000       mov dword ptr fs:[0], esp
// 005a75e5  83ec24               sub esp, 0x24
// 005a75e8  f6053cf38b0001       test byte ptr [0x8bf33c], 1
// 005a75ef  7555                 jne 0x5a7646
// 005a75f1  830d3cf38b0001       or dword ptr [0x8bf33c], 1
// 005a75f8  d9ee                 fldz 
// 005a75fa  83ec24               sub esp, 0x24
// 005a75fd  d9542420             fst dword ptr [esp + 0x20]
// 005a7601  d954241c             fst dword ptr [esp + 0x1c]
// 005a7605  b918f38b00           mov ecx, 0x8bf318
// 005a760a  d90578587900         fld dword ptr [0x795878]
// 005a7610  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005a7618  d95c2418             fstp dword ptr [esp + 0x18]
// 005a761c  d9542414             fst dword ptr [esp + 0x14]
// 005a7620  d9e8                 fld1 
// 005a7622  d9542410             fst dword ptr [esp + 0x10]
// 005a7626  d9c9                 fxch st(1)
// 005a7628  d954240c             fst dword ptr [esp + 0xc]
// 005a762c  d9c9                 fxch st(1)
// 005a762e  d95c2408             fstp dword ptr [esp + 8]
// 005a7632  d9542404             fst dword ptr [esp + 4]
// 005a7636  d91c24               fstp dword ptr [esp]
// 005a7639  e87280f5ff           call 0x4ff6b0
// 005a763e  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005a7646  55                   push ebp
// 005a7647  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 005a764b  85ed                 test ebp, ebp
// 005a764d  7e2a                 jle 0x5a7679
// 005a764f  53                   push ebx
// 005a7650  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 005a7654  56                   push esi
// 005a7655  57                   push edi
// 005a7656  53                   push ebx
// 005a7657  8d442414             lea eax, [esp + 0x14]
// 005a765b  50                   push eax
// 005a765c  b918f38b00           mov ecx, 0x8bf318
// 005a7661  e89a74f5ff           call 0x4feb00
// 005a7666  83ed01               sub ebp, 1
// 005a7669  b909000000           mov ecx, 9
// 005a766e  8bf0                 mov esi, eax
// 005a7670  8bfb                 mov edi, ebx
// 005a7672  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005a7674  75e0                 jne 0x5a7656
// 005a7676  5f                   pop edi
// 005a7677  5e                   pop esi
// 005a7678  5b                   pop ebx
// 005a7679  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a767d  5d                   pop ebp
// 005a767e  64890d00000000       mov dword ptr fs:[0], ecx
// 005a7685  83c430               add esp, 0x30
// 005a7688  c3                   ret 
// library rbxgs/util\Math.cpp (function ?rotateMatrixAboutY90@Math@RBX@@SAXAAVMatrix3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
