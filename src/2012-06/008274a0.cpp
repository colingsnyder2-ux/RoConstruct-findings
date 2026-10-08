// roc 2012-06 008274a0  unit: RBX::$01::?$SurfaceDescriptor  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008274a0
//
// 008274a0  b805000000           mov eax, 5
// 008274a5  3b442404             cmp eax, dword ptr [esp + 4]
// 008274a9  1bc0                 sbb eax, eax
// 008274ab  40                   inc eax
// 008274ac  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?validNormalId@RBX@@YA_NW4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
