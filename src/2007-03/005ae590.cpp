// roc 2007-03 005ae590  unit: seg_005a0000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae590
//
// 005ae590  8b442404             mov eax, dword ptr [esp + 4]
// 005ae594  d900                 fld dword ptr [eax]
// 005ae596  d95904               fstp dword ptr [ecx + 4]
// 005ae599  d94004               fld dword ptr [eax + 4]
// 005ae59c  d95908               fstp dword ptr [ecx + 8]
// 005ae59f  d94008               fld dword ptr [eax + 8]
// 005ae5a2  8b01                 mov eax, dword ptr [ecx]
// 005ae5a4  8b10                 mov edx, dword ptr [eax]
// 005ae5a6  d9590c               fstp dword ptr [ecx + 0xc]
// 005ae5a9  ffd2                 call edx
// 005ae5ab  c20400               ret 4
// library rbxgs/v8world\Primitive.cpp (function ?setGridSize@Geometry@RBX@@UAEXABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
