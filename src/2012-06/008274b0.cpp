// roc 2012-06 008274b0  unit: RBX::$01::?$SurfaceDescriptor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008274b0
//
// 008274b0  8b442404             mov eax, dword ptr [esp + 4]
// 008274b4  83c003               add eax, 3
// 008274b7  99                   cdq 
// 008274b8  b906000000           mov ecx, 6
// 008274bd  f7f9                 idiv ecx
// 008274bf  8bc2                 mov eax, edx
// 008274c1  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?normalIdOpposite@RBX@@YA?AW4NormalId@1@W421@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
