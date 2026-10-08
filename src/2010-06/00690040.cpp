// roc 2010-06 00690040  unit: RBX::Mechanism  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00690040
//
// 00690040  64a100000000         mov eax, dword ptr fs:[0]
// 00690046  6aff                 push -1
// 00690048  68de179a00           push 0x9a17de
// 0069004d  50                   push eax
// 0069004e  64892500000000       mov dword ptr fs:[0], esp
// 00690055  83ec24               sub esp, 0x24
// 00690058  f60598e2c10001       test byte ptr [0xc1e298], 1
// 0069005f  7555                 jne 0x6900b6
// 00690061  830d98e2c10001       or dword ptr [0xc1e298], 1
// 00690068  d9ee                 fldz 
// 0069006a  83ec24               sub esp, 0x24
// 0069006d  d9542420             fst dword ptr [esp + 0x20]
// 00690071  d954241c             fst dword ptr [esp + 0x1c]
// 00690075  b974e2c100           mov ecx, 0xc1e274
// 0069007a  d90510c6a000         fld dword ptr [0xa0c610]
// 00690080  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00690088  d95c2418             fstp dword ptr [esp + 0x18]
// 0069008c  d9542414             fst dword ptr [esp + 0x14]
// 00690090  d9e8                 fld1 
// 00690092  d9542410             fst dword ptr [esp + 0x10]
// 00690096  d9c9                 fxch st(1)
// 00690098  d954240c             fst dword ptr [esp + 0xc]
// 0069009c  d9c9                 fxch st(1)
// 0069009e  d95c2408             fstp dword ptr [esp + 8]
// 006900a2  d9542404             fst dword ptr [esp + 4]
// 006900a6  d91c24               fstp dword ptr [esp]
// 006900a9  e8326fecff           call 0x556fe0
// 006900ae  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 006900b6  55                   push ebp
// 006900b7  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 006900bb  85ed                 test ebp, ebp
// 006900bd  7e2a                 jle 0x6900e9
// 006900bf  53                   push ebx
// 006900c0  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 006900c4  56                   push esi
// 006900c5  57                   push edi
// 006900c6  53                   push ebx
// 006900c7  8d442414             lea eax, [esp + 0x14]
// 006900cb  50                   push eax
// 006900cc  b974e2c100           mov ecx, 0xc1e274
// 006900d1  e85a61ecff           call 0x556230
// 006900d6  83ed01               sub ebp, 1
// 006900d9  b909000000           mov ecx, 9
// 006900de  8bf0                 mov esi, eax
// 006900e0  8bfb                 mov edi, ebx
// 006900e2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006900e4  75e0                 jne 0x6900c6
// 006900e6  5f                   pop edi
// 006900e7  5e                   pop esi
// 006900e8  5b                   pop ebx
// 006900e9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006900ed  5d                   pop ebp
// 006900ee  64890d00000000       mov dword ptr fs:[0], ecx
// 006900f5  83c430               add esp, 0x30
// 006900f8  c3                   ret 
// library rbxgs/util\Math.cpp (function ?rotateMatrixAboutY90@Math@RBX@@SAXAAVMatrix3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
