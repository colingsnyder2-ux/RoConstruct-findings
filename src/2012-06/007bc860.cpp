// roc 2012-06 007bc860  unit: RBX::Geometry  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007bc860
//
// 007bc860  8b442408             mov eax, dword ptr [esp + 8]
// 007bc864  d94008               fld dword ptr [eax + 8]
// 007bc867  56                   push esi
// 007bc868  8b742408             mov esi, dword ptr [esp + 8]
// 007bc86c  83ec24               sub esp, 0x24
// 007bc86f  d95c2420             fstp dword ptr [esp + 0x20]
// 007bc873  8bce                 mov ecx, esi
// 007bc875  d9ee                 fldz 
// 007bc877  d954241c             fst dword ptr [esp + 0x1c]
// 007bc87b  d9542418             fst dword ptr [esp + 0x18]
// 007bc87f  d9542414             fst dword ptr [esp + 0x14]
// 007bc883  d94004               fld dword ptr [eax + 4]
// 007bc886  d95c2410             fstp dword ptr [esp + 0x10]
// 007bc88a  d954240c             fst dword ptr [esp + 0xc]
// 007bc88e  d9542408             fst dword ptr [esp + 8]
// 007bc892  d95c2404             fstp dword ptr [esp + 4]
// 007bc896  d900                 fld dword ptr [eax]
// 007bc898  d91c24               fstp dword ptr [esp]
// 007bc89b  e8100be7ff           call 0x62d3b0
// 007bc8a0  8bc6                 mov eax, esi
// 007bc8a2  5e                   pop esi
// 007bc8a3  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fromDiagonal@Math@RBX@@SA?AVMatrix3@G3D@@ABVVector3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
