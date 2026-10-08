// roc 2007-08 005b4480  unit: RBX::Geometry  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4480
//
// 005b4480  8b442404             mov eax, dword ptr [esp + 4]
// 005b4484  d900                 fld dword ptr [eax]
// 005b4486  d95904               fstp dword ptr [ecx + 4]
// 005b4489  d94004               fld dword ptr [eax + 4]
// 005b448c  d95908               fstp dword ptr [ecx + 8]
// 005b448f  d94008               fld dword ptr [eax + 8]
// 005b4492  8b01                 mov eax, dword ptr [ecx]
// 005b4494  8b10                 mov edx, dword ptr [eax]
// 005b4496  d9590c               fstp dword ptr [ecx + 0xc]
// 005b4499  ffd2                 call edx
// 005b449b  c20400               ret 4
// library rbxgs/v8world\Primitive.cpp (function ?setGridSize@Geometry@RBX@@UAEXABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
