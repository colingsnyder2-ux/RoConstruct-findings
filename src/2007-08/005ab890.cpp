// roc 2007-08 005ab890  unit: RBX::World  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ab890
//
// 005ab890  64a100000000         mov eax, dword ptr fs:[0]
// 005ab896  6aff                 push -1
// 005ab898  685e877500           push 0x75875e
// 005ab89d  50                   push eax
// 005ab89e  64892500000000       mov dword ptr fs:[0], esp
// 005ab8a5  83ec24               sub esp, 0x24
// 005ab8a8  f605445a8c0001       test byte ptr [0x8c5a44], 1
// 005ab8af  7555                 jne 0x5ab906
// 005ab8b1  830d445a8c0001       or dword ptr [0x8c5a44], 1
// 005ab8b8  d9ee                 fldz 
// 005ab8ba  83ec24               sub esp, 0x24
// 005ab8bd  d9542420             fst dword ptr [esp + 0x20]
// 005ab8c1  d954241c             fst dword ptr [esp + 0x1c]
// 005ab8c5  b9205a8c00           mov ecx, 0x8c5a20
// 005ab8ca  d9056c647900         fld dword ptr [0x79646c]
// 005ab8d0  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005ab8d8  d95c2418             fstp dword ptr [esp + 0x18]
// 005ab8dc  d9542414             fst dword ptr [esp + 0x14]
// 005ab8e0  d9e8                 fld1 
// 005ab8e2  d9542410             fst dword ptr [esp + 0x10]
// 005ab8e6  d9c9                 fxch st(1)
// 005ab8e8  d954240c             fst dword ptr [esp + 0xc]
// 005ab8ec  d9c9                 fxch st(1)
// 005ab8ee  d95c2408             fstp dword ptr [esp + 8]
// 005ab8f2  d9542404             fst dword ptr [esp + 4]
// 005ab8f6  d91c24               fstp dword ptr [esp]
// 005ab8f9  e832e8f5ff           call 0x50a130
// 005ab8fe  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005ab906  55                   push ebp
// 005ab907  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 005ab90b  85ed                 test ebp, ebp
// 005ab90d  7e2a                 jle 0x5ab939
// 005ab90f  53                   push ebx
// 005ab910  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 005ab914  56                   push esi
// 005ab915  57                   push edi
// 005ab916  53                   push ebx
// 005ab917  8d442414             lea eax, [esp + 0x14]
// 005ab91b  50                   push eax
// 005ab91c  b9205a8c00           mov ecx, 0x8c5a20
// 005ab921  e82adef5ff           call 0x509750
// 005ab926  83ed01               sub ebp, 1
// 005ab929  b909000000           mov ecx, 9
// 005ab92e  8bf0                 mov esi, eax
// 005ab930  8bfb                 mov edi, ebx
// 005ab932  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005ab934  75e0                 jne 0x5ab916
// 005ab936  5f                   pop edi
// 005ab937  5e                   pop esi
// 005ab938  5b                   pop ebx
// 005ab939  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ab93d  5d                   pop ebp
// 005ab93e  64890d00000000       mov dword ptr fs:[0], ecx
// 005ab945  83c430               add esp, 0x30
// 005ab948  c3                   ret 
// library rbxgs/util\Math.cpp (function ?rotateMatrixAboutY90@Math@RBX@@SAXAAVMatrix3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
