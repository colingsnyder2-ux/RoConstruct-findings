// roc 2007-08 0060a430  unit: RBX::MultiJoint  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060a430
//
// 0060a430  8b442404             mov eax, dword ptr [esp + 4]
// 0060a434  8b84818c000000       mov eax, dword ptr [ecx + eax*4 + 0x8c]
// 0060a43b  c20400               ret 4
// library rbxgs/v8datamodel\Surface.cpp (function ?getSurfaceType@Primitive@RBX@@QBE?AW4SurfaceType@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Surface.cpp
