// roc 2008-06 005e72a0  unit: RBX::Geometry  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e72a0
//
// 005e72a0  8b442404             mov eax, dword ptr [esp + 4]
// 005e72a4  d900                 fld dword ptr [eax]
// 005e72a6  d95904               fstp dword ptr [ecx + 4]
// 005e72a9  d94004               fld dword ptr [eax + 4]
// 005e72ac  d95908               fstp dword ptr [ecx + 8]
// 005e72af  d94008               fld dword ptr [eax + 8]
// 005e72b2  8b01                 mov eax, dword ptr [ecx]
// 005e72b4  8b10                 mov edx, dword ptr [eax]
// 005e72b6  d9590c               fstp dword ptr [ecx + 0xc]
// 005e72b9  ffd2                 call edx
// 005e72bb  c20400               ret 4
// library rbxgs/v8world\Primitive.cpp (function ?setGridSize@Geometry@RBX@@UAEXABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
