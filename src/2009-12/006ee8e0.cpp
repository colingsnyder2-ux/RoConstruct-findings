// roc 2009-12 006ee8e0  unit: RBX::Primitive  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ee8e0
//
// 006ee8e0  8b442408             mov eax, dword ptr [esp + 8]
// 006ee8e4  d94008               fld dword ptr [eax + 8]
// 006ee8e7  56                   push esi
// 006ee8e8  8b742408             mov esi, dword ptr [esp + 8]
// 006ee8ec  83ec24               sub esp, 0x24
// 006ee8ef  d95c2420             fstp dword ptr [esp + 0x20]
// 006ee8f3  8bce                 mov ecx, esi
// 006ee8f5  d9ee                 fldz 
// 006ee8f7  d954241c             fst dword ptr [esp + 0x1c]
// 006ee8fb  d9542418             fst dword ptr [esp + 0x18]
// 006ee8ff  d9542414             fst dword ptr [esp + 0x14]
// 006ee903  d94004               fld dword ptr [eax + 4]
// 006ee906  d95c2410             fstp dword ptr [esp + 0x10]
// 006ee90a  d954240c             fst dword ptr [esp + 0xc]
// 006ee90e  d9542408             fst dword ptr [esp + 8]
// 006ee912  d95c2404             fstp dword ptr [esp + 4]
// 006ee916  d900                 fld dword ptr [eax]
// 006ee918  d91c24               fstp dword ptr [esp]
// 006ee91b  e8505df0ff           call 0x5f4670
// 006ee920  8bc6                 mov eax, esi
// 006ee922  5e                   pop esi
// 006ee923  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fromDiagonal@Math@RBX@@SA?AVMatrix3@G3D@@ABVVector3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
