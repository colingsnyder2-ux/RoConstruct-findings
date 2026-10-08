// roc 2009-06 0066f5e0  unit: RBX::Geometry  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f5e0
//
// 0066f5e0  8b442404             mov eax, dword ptr [esp + 4]
// 0066f5e4  d900                 fld dword ptr [eax]
// 0066f5e6  d95904               fstp dword ptr [ecx + 4]
// 0066f5e9  d94004               fld dword ptr [eax + 4]
// 0066f5ec  d95908               fstp dword ptr [ecx + 8]
// 0066f5ef  d94008               fld dword ptr [eax + 8]
// 0066f5f2  8b01                 mov eax, dword ptr [ecx]
// 0066f5f4  8b10                 mov edx, dword ptr [eax]
// 0066f5f6  d9590c               fstp dword ptr [ecx + 0xc]
// 0066f5f9  ffd2                 call edx
// 0066f5fb  c20400               ret 4
// library rbxgs/v8world\Primitive.cpp (function ?setGridSize@Geometry@RBX@@UAEXABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
