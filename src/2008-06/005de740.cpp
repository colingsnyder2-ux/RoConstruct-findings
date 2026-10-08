// roc 2008-06 005de740  unit: RBX::Message  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005de740
//
// 005de740  64a100000000         mov eax, dword ptr fs:[0]
// 005de746  6aff                 push -1
// 005de748  686e617d00           push 0x7d616e
// 005de74d  50                   push eax
// 005de74e  64892500000000       mov dword ptr fs:[0], esp
// 005de755  83ec24               sub esp, 0x24
// 005de758  f605b0a6970001       test byte ptr [0x97a6b0], 1
// 005de75f  7555                 jne 0x5de7b6
// 005de761  830db0a6970001       or dword ptr [0x97a6b0], 1
// 005de768  d9ee                 fldz 
// 005de76a  83ec24               sub esp, 0x24
// 005de76d  d9542420             fst dword ptr [esp + 0x20]
// 005de771  d954241c             fst dword ptr [esp + 0x1c]
// 005de775  b98ca69700           mov ecx, 0x97a68c
// 005de77a  d905b8c38100         fld dword ptr [0x81c3b8]
// 005de780  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005de788  d95c2418             fstp dword ptr [esp + 0x18]
// 005de78c  d9542414             fst dword ptr [esp + 0x14]
// 005de790  d9e8                 fld1 
// 005de792  d9542410             fst dword ptr [esp + 0x10]
// 005de796  d9c9                 fxch st(1)
// 005de798  d954240c             fst dword ptr [esp + 0xc]
// 005de79c  d9c9                 fxch st(1)
// 005de79e  d95c2408             fstp dword ptr [esp + 8]
// 005de7a2  d9542404             fst dword ptr [esp + 4]
// 005de7a6  d91c24               fstp dword ptr [esp]
// 005de7a9  e8c253f3ff           call 0x513b70
// 005de7ae  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005de7b6  55                   push ebp
// 005de7b7  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 005de7bb  85ed                 test ebp, ebp
// 005de7bd  7e2a                 jle 0x5de7e9
// 005de7bf  53                   push ebx
// 005de7c0  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 005de7c4  56                   push esi
// 005de7c5  57                   push edi
// 005de7c6  53                   push ebx
// 005de7c7  8d442414             lea eax, [esp + 0x14]
// 005de7cb  50                   push eax
// 005de7cc  b98ca69700           mov ecx, 0x97a68c
// 005de7d1  e87a4bf3ff           call 0x513350
// 005de7d6  83ed01               sub ebp, 1
// 005de7d9  b909000000           mov ecx, 9
// 005de7de  8bf0                 mov esi, eax
// 005de7e0  8bfb                 mov edi, ebx
// 005de7e2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005de7e4  75e0                 jne 0x5de7c6
// 005de7e6  5f                   pop edi
// 005de7e7  5e                   pop esi
// 005de7e8  5b                   pop ebx
// 005de7e9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005de7ed  5d                   pop ebp
// 005de7ee  64890d00000000       mov dword ptr fs:[0], ecx
// 005de7f5  83c430               add esp, 0x30
// 005de7f8  c3                   ret 
// library rbxgs/util\Math.cpp (function ?rotateMatrixAboutY90@Math@RBX@@SAXAAVMatrix3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
