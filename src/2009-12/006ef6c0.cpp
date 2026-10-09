// roc 2009-12 006ef6c0  unit: RBX::Primitive  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ef6c0
//
// 006ef6c0  64a100000000         mov eax, dword ptr fs:[0]
// 006ef6c6  6aff                 push -1
// 006ef6c8  686ebb9400           push 0x94bb6e
// 006ef6cd  50                   push eax
// 006ef6ce  64892500000000       mov dword ptr fs:[0], esp
// 006ef6d5  83ec24               sub esp, 0x24
// 006ef6d8  f6054840b90001       test byte ptr [0xb94048], 1
// 006ef6df  7555                 jne 0x6ef736
// 006ef6e1  830d4840b90001       or dword ptr [0xb94048], 1
// 006ef6e8  d9ee                 fldz 
// 006ef6ea  83ec24               sub esp, 0x24
// 006ef6ed  d9542420             fst dword ptr [esp + 0x20]
// 006ef6f1  d954241c             fst dword ptr [esp + 0x1c]
// 006ef6f5  b92440b900           mov ecx, 0xb94024
// 006ef6fa  d90504b89a00         fld dword ptr [0x9ab804]
// 006ef700  c744245000000000     mov dword ptr [esp + 0x50], 0
// 006ef708  d95c2418             fstp dword ptr [esp + 0x18]
// 006ef70c  d9542414             fst dword ptr [esp + 0x14]
// 006ef710  d9e8                 fld1 
// 006ef712  d9542410             fst dword ptr [esp + 0x10]
// 006ef716  d9c9                 fxch st(1)
// 006ef718  d954240c             fst dword ptr [esp + 0xc]
// 006ef71c  d9c9                 fxch st(1)
// 006ef71e  d95c2408             fstp dword ptr [esp + 8]
// 006ef722  d9542404             fst dword ptr [esp + 4]
// 006ef726  d91c24               fstp dword ptr [esp]
// 006ef729  e8424ff0ff           call 0x5f4670
// 006ef72e  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 006ef736  55                   push ebp
// 006ef737  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 006ef73b  85ed                 test ebp, ebp
// 006ef73d  7e2a                 jle 0x6ef769
// 006ef73f  53                   push ebx
// 006ef740  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 006ef744  56                   push esi
// 006ef745  57                   push edi
// 006ef746  53                   push ebx
// 006ef747  8d442414             lea eax, [esp + 0x14]
// 006ef74b  50                   push eax
// 006ef74c  b92440b900           mov ecx, 0xb94024
// 006ef751  e86a43f0ff           call 0x5f3ac0
// 006ef756  83ed01               sub ebp, 1
// 006ef759  b909000000           mov ecx, 9
// 006ef75e  8bf0                 mov esi, eax
// 006ef760  8bfb                 mov edi, ebx
// 006ef762  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006ef764  75e0                 jne 0x6ef746
// 006ef766  5f                   pop edi
// 006ef767  5e                   pop esi
// 006ef768  5b                   pop ebx
// 006ef769  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006ef76d  5d                   pop ebp
// 006ef76e  64890d00000000       mov dword ptr fs:[0], ecx
// 006ef775  83c430               add esp, 0x30
// 006ef778  c3                   ret 
// library rbxgs/util\Math.cpp (function ?rotateMatrixAboutY90@Math@RBX@@SAXAAVMatrix3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
