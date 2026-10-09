// roc 2009-12 006ec030  unit: RBX::Geometry  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ec030
//
// 006ec030  8b442404             mov eax, dword ptr [esp + 4]
// 006ec034  d900                 fld dword ptr [eax]
// 006ec036  d95904               fstp dword ptr [ecx + 4]
// 006ec039  d94004               fld dword ptr [eax + 4]
// 006ec03c  d95908               fstp dword ptr [ecx + 8]
// 006ec03f  d94008               fld dword ptr [eax + 8]
// 006ec042  8b01                 mov eax, dword ptr [ecx]
// 006ec044  8b10                 mov edx, dword ptr [eax]
// 006ec046  d9590c               fstp dword ptr [ecx + 0xc]
// 006ec049  ffd2                 call edx
// 006ec04b  c20400               ret 4
// library rbxgs/v8world\Primitive.cpp (function ?setGridSize@Geometry@RBX@@UAEXABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
