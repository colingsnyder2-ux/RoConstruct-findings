// roc 2007-08 005aad60  unit: RBX::World  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aad60
//
// 005aad60  8b442408             mov eax, dword ptr [esp + 8]
// 005aad64  d94008               fld dword ptr [eax + 8]
// 005aad67  56                   push esi
// 005aad68  8b742408             mov esi, dword ptr [esp + 8]
// 005aad6c  83ec24               sub esp, 0x24
// 005aad6f  d95c2420             fstp dword ptr [esp + 0x20]
// 005aad73  8bce                 mov ecx, esi
// 005aad75  d9ee                 fldz 
// 005aad77  d954241c             fst dword ptr [esp + 0x1c]
// 005aad7b  d9542418             fst dword ptr [esp + 0x18]
// 005aad7f  d9542414             fst dword ptr [esp + 0x14]
// 005aad83  d94004               fld dword ptr [eax + 4]
// 005aad86  d95c2410             fstp dword ptr [esp + 0x10]
// 005aad8a  d954240c             fst dword ptr [esp + 0xc]
// 005aad8e  d9542408             fst dword ptr [esp + 8]
// 005aad92  d95c2404             fstp dword ptr [esp + 4]
// 005aad96  d900                 fld dword ptr [eax]
// 005aad98  d91c24               fstp dword ptr [esp]
// 005aad9b  e890f3f5ff           call 0x50a130
// 005aada0  8bc6                 mov eax, esi
// 005aada2  5e                   pop esi
// 005aada3  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fromDiagonal@Math@RBX@@SA?AVMatrix3@G3D@@ABVVector3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
