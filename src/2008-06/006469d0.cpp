// roc 2008-06 006469d0  unit: RBX::Clump  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006469d0
//
// 006469d0  8b442404             mov eax, dword ptr [esp + 4]
// 006469d4  8b84818c000000       mov eax, dword ptr [ecx + eax*4 + 0x8c]
// 006469db  c20400               ret 4
// library rbxgs/v8datamodel\Surface.cpp (function ?getSurfaceType@Primitive@RBX@@QBE?AW4SurfaceType@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Surface.cpp
