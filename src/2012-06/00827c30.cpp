// roc 2012-06 00827c30  unit: RBX::$01::?$SurfaceDescriptor  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00827c30
//
// 00827c30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00827c34  83ec0c               sub esp, 0xc
// 00827c37  6a02                 push 2
// 00827c39  8d442404             lea eax, [esp + 4]
// 00827c3d  50                   push eax
// 00827c3e  e89d46e0ff           call 0x62c2e0
// 00827c43  50                   push eax
// 00827c44  e847fdffff           call 0x827990
// 00827c49  83c410               add esp, 0x10
// 00827c4c  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?Matrix3ToNormalId@RBX@@YA?AW4NormalId@1@ABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
