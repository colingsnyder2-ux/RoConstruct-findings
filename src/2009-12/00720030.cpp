// roc 2009-12 00720030  unit: RBX::VInstance::?$NonFactoryProduct  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00720030
//
// 00720030  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00720034  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00720038  8b542404             mov edx, dword ptr [esp + 4]
// 0072003c  50                   push eax
// 0072003d  51                   push ecx
// 0072003e  52                   push edx
// 0072003f  e84cf8ffff           call 0x71f890
// 00720044  83c40c               add esp, 0xc
// 00720047  8bc2                 mov eax, edx
// 00720049  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?mapToUvw_Legacy@RBX@@YA?AVVector3@G3D@@ABV23@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
