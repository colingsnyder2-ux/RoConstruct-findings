// roc 2009-06 0066d7a0  unit: RBX::VHumanoid::?$EventDesc  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066d7a0
//
// 0066d7a0  64a100000000         mov eax, dword ptr fs:[0]
// 0066d7a6  6aff                 push -1
// 0066d7a8  68aec98600           push 0x86c9ae
// 0066d7ad  50                   push eax
// 0066d7ae  64892500000000       mov dword ptr fs:[0], esp
// 0066d7b5  83ec24               sub esp, 0x24
// 0066d7b8  f60534dba40001       test byte ptr [0xa4db34], 1
// 0066d7bf  7555                 jne 0x66d816
// 0066d7c1  830d34dba40001       or dword ptr [0xa4db34], 1
// 0066d7c8  d9ee                 fldz 
// 0066d7ca  83ec24               sub esp, 0x24
// 0066d7cd  d9542420             fst dword ptr [esp + 0x20]
// 0066d7d1  d954241c             fst dword ptr [esp + 0x1c]
// 0066d7d5  b910dba400           mov ecx, 0xa4db10
// 0066d7da  d90594758b00         fld dword ptr [0x8b7594]
// 0066d7e0  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0066d7e8  d95c2418             fstp dword ptr [esp + 0x18]
// 0066d7ec  d9542414             fst dword ptr [esp + 0x14]
// 0066d7f0  d9e8                 fld1 
// 0066d7f2  d9542410             fst dword ptr [esp + 0x10]
// 0066d7f6  d9c9                 fxch st(1)
// 0066d7f8  d954240c             fst dword ptr [esp + 0xc]
// 0066d7fc  d9c9                 fxch st(1)
// 0066d7fe  d95c2408             fstp dword ptr [esp + 8]
// 0066d802  d9542404             fst dword ptr [esp + 4]
// 0066d806  d91c24               fstp dword ptr [esp]
// 0066d809  e8d2acf0ff           call 0x5784e0
// 0066d80e  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0066d816  55                   push ebp
// 0066d817  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0066d81b  85ed                 test ebp, ebp
// 0066d81d  7e2a                 jle 0x66d849
// 0066d81f  53                   push ebx
// 0066d820  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0066d824  56                   push esi
// 0066d825  57                   push edi
// 0066d826  53                   push ebx
// 0066d827  8d442414             lea eax, [esp + 0x14]
// 0066d82b  50                   push eax
// 0066d82c  b910dba400           mov ecx, 0xa4db10
// 0066d831  e88aa4f0ff           call 0x577cc0
// 0066d836  83ed01               sub ebp, 1
// 0066d839  b909000000           mov ecx, 9
// 0066d83e  8bf0                 mov esi, eax
// 0066d840  8bfb                 mov edi, ebx
// 0066d842  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0066d844  75e0                 jne 0x66d826
// 0066d846  5f                   pop edi
// 0066d847  5e                   pop esi
// 0066d848  5b                   pop ebx
// 0066d849  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0066d84d  5d                   pop ebp
// 0066d84e  64890d00000000       mov dword ptr fs:[0], ecx
// 0066d855  83c430               add esp, 0x30
// 0066d858  c3                   ret 
// library rbxgs/util\Math.cpp (function ?rotateMatrixAboutY90@Math@RBX@@SAXAAVMatrix3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
