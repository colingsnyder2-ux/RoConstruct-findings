// roc 2011-06 006cde40  unit: RBX::Mechanism  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006cde40
//
// 006cde40  64a100000000         mov eax, dword ptr fs:[0]
// 006cde46  6aff                 push -1
// 006cde48  688e2d9f00           push 0x9f2d8e
// 006cde4d  50                   push eax
// 006cde4e  64892500000000       mov dword ptr fs:[0], esp
// 006cde55  83ec24               sub esp, 0x24
// 006cde58  f6059012cd0001       test byte ptr [0xcd1290], 1
// 006cde5f  7555                 jne 0x6cdeb6
// 006cde61  830d9012cd0001       or dword ptr [0xcd1290], 1
// 006cde68  d9ee                 fldz 
// 006cde6a  83ec24               sub esp, 0x24
// 006cde6d  d9542420             fst dword ptr [esp + 0x20]
// 006cde71  d954241c             fst dword ptr [esp + 0x1c]
// 006cde75  b96c12cd00           mov ecx, 0xcd126c
// 006cde7a  d90530eca600         fld dword ptr [0xa6ec30]
// 006cde80  c744245000000000     mov dword ptr [esp + 0x50], 0
// 006cde88  d95c2418             fstp dword ptr [esp + 0x18]
// 006cde8c  d9542414             fst dword ptr [esp + 0x14]
// 006cde90  d9e8                 fld1 
// 006cde92  d9542410             fst dword ptr [esp + 0x10]
// 006cde96  d9c9                 fxch st(1)
// 006cde98  d954240c             fst dword ptr [esp + 0xc]
// 006cde9c  d9c9                 fxch st(1)
// 006cde9e  d95c2408             fstp dword ptr [esp + 8]
// 006cdea2  d9542404             fst dword ptr [esp + 4]
// 006cdea6  d91c24               fstp dword ptr [esp]
// 006cdea9  e86232e7ff           call 0x541110
// 006cdeae  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 006cdeb6  55                   push ebp
// 006cdeb7  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 006cdebb  85ed                 test ebp, ebp
// 006cdebd  7e2a                 jle 0x6cdee9
// 006cdebf  53                   push ebx
// 006cdec0  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 006cdec4  56                   push esi
// 006cdec5  57                   push edi
// 006cdec6  53                   push ebx
// 006cdec7  8d442414             lea eax, [esp + 0x14]
// 006cdecb  50                   push eax
// 006cdecc  b96c12cd00           mov ecx, 0xcd126c
// 006cded1  e83a23e7ff           call 0x540210
// 006cded6  83ed01               sub ebp, 1
// 006cded9  b909000000           mov ecx, 9
// 006cdede  8bf0                 mov esi, eax
// 006cdee0  8bfb                 mov edi, ebx
// 006cdee2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006cdee4  75e0                 jne 0x6cdec6
// 006cdee6  5f                   pop edi
// 006cdee7  5e                   pop esi
// 006cdee8  5b                   pop ebx
// 006cdee9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006cdeed  5d                   pop ebp
// 006cdeee  64890d00000000       mov dword ptr fs:[0], ecx
// 006cdef5  83c430               add esp, 0x30
// 006cdef8  c3                   ret 
// library rbxgs/util\Math.cpp (function ?rotateMatrixAboutY90@Math@RBX@@SAXAAVMatrix3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
