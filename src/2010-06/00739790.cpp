// roc 2010-06 00739790  unit: seg_00730000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00739790
//
// 00739790  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00739794  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00739798  8b542404             mov edx, dword ptr [esp + 4]
// 0073979c  50                   push eax
// 0073979d  51                   push ecx
// 0073979e  52                   push edx
// 0073979f  e84cf8ffff           call 0x738ff0
// 007397a4  83c40c               add esp, 0xc
// 007397a7  8bc2                 mov eax, edx
// 007397a9  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?mapToUvw_Legacy@RBX@@YA?AVVector3@G3D@@ABV23@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
