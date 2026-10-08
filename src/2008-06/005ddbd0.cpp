// roc 2008-06 005ddbd0  unit: RBX::Message  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ddbd0
//
// 005ddbd0  8b442408             mov eax, dword ptr [esp + 8]
// 005ddbd4  d94008               fld dword ptr [eax + 8]
// 005ddbd7  56                   push esi
// 005ddbd8  8b742408             mov esi, dword ptr [esp + 8]
// 005ddbdc  83ec24               sub esp, 0x24
// 005ddbdf  d95c2420             fstp dword ptr [esp + 0x20]
// 005ddbe3  8bce                 mov ecx, esi
// 005ddbe5  d9ee                 fldz 
// 005ddbe7  d954241c             fst dword ptr [esp + 0x1c]
// 005ddbeb  d9542418             fst dword ptr [esp + 0x18]
// 005ddbef  d9542414             fst dword ptr [esp + 0x14]
// 005ddbf3  d94004               fld dword ptr [eax + 4]
// 005ddbf6  d95c2410             fstp dword ptr [esp + 0x10]
// 005ddbfa  d954240c             fst dword ptr [esp + 0xc]
// 005ddbfe  d9542408             fst dword ptr [esp + 8]
// 005ddc02  d95c2404             fstp dword ptr [esp + 4]
// 005ddc06  d900                 fld dword ptr [eax]
// 005ddc08  d91c24               fstp dword ptr [esp]
// 005ddc0b  e8605ff3ff           call 0x513b70
// 005ddc10  8bc6                 mov eax, esi
// 005ddc12  5e                   pop esi
// 005ddc13  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fromDiagonal@Math@RBX@@SA?AVMatrix3@G3D@@ABVVector3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
