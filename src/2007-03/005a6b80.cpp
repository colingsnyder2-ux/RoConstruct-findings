// roc 2007-03 005a6b80  unit: seg_005a0000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a6b80
//
// 005a6b80  8b442408             mov eax, dword ptr [esp + 8]
// 005a6b84  d94008               fld dword ptr [eax + 8]
// 005a6b87  56                   push esi
// 005a6b88  8b742408             mov esi, dword ptr [esp + 8]
// 005a6b8c  83ec24               sub esp, 0x24
// 005a6b8f  d95c2420             fstp dword ptr [esp + 0x20]
// 005a6b93  8bce                 mov ecx, esi
// 005a6b95  d9ee                 fldz 
// 005a6b97  d954241c             fst dword ptr [esp + 0x1c]
// 005a6b9b  d9542418             fst dword ptr [esp + 0x18]
// 005a6b9f  d9542414             fst dword ptr [esp + 0x14]
// 005a6ba3  d94004               fld dword ptr [eax + 4]
// 005a6ba6  d95c2410             fstp dword ptr [esp + 0x10]
// 005a6baa  d954240c             fst dword ptr [esp + 0xc]
// 005a6bae  d9542408             fst dword ptr [esp + 8]
// 005a6bb2  d95c2404             fstp dword ptr [esp + 4]
// 005a6bb6  d900                 fld dword ptr [eax]
// 005a6bb8  d91c24               fstp dword ptr [esp]
// 005a6bbb  e8f08af5ff           call 0x4ff6b0
// 005a6bc0  8bc6                 mov eax, esi
// 005a6bc2  5e                   pop esi
// 005a6bc3  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fromDiagonal@Math@RBX@@SA?AVMatrix3@G3D@@ABVVector3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
