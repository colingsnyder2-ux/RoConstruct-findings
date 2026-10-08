// roc 2007-08 005ba1c0  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ba1c0
//
// 005ba1c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ba1c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ba1c8  8b542404             mov edx, dword ptr [esp + 4]
// 005ba1cc  50                   push eax
// 005ba1cd  51                   push ecx
// 005ba1ce  52                   push edx
// 005ba1cf  e84cf9ffff           call 0x5b9b20
// 005ba1d4  83c40c               add esp, 0xc
// 005ba1d7  8bc2                 mov eax, edx
// 005ba1d9  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?mapToUvw_Legacy@RBX@@YA?AVVector3@G3D@@ABV23@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
