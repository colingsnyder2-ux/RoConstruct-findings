// roc 2007-03 00475d90  unit: seg_00470000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475d90
//
// 00475d90  8b442404             mov eax, dword ptr [esp + 4]
// 00475d94  8b00                 mov eax, dword ptr [eax]
// 00475d96  81c184040000         add ecx, 0x484
// 00475d9c  3b01                 cmp eax, dword ptr [ecx]
// 00475d9e  7409                 je 0x475da9
// 00475da0  89442404             mov dword ptr [esp + 4], eax
// 00475da4  e9e7f2ffff           jmp 0x475090
// 00475da9  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setObjectShader@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VObjectShader@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
