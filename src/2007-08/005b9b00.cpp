// roc 2007-08 005b9b00  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9b00
//
// 005b9b00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b9b04  83ec0c               sub esp, 0xc
// 005b9b07  6a02                 push 2
// 005b9b09  8d442404             lea eax, [esp + 4]
// 005b9b0d  50                   push eax
// 005b9b0e  e82dfbf4ff           call 0x509640
// 005b9b13  50                   push eax
// 005b9b14  e867ffffff           call 0x5b9a80
// 005b9b19  83c410               add esp, 0x10
// 005b9b1c  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?Matrix3ToNormalId@RBX@@YA?AW4NormalId@1@ABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
