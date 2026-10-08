// roc 2008-06 00478f20  unit: CInstanceRecord::CNameItem  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00478f20
//
// 00478f20  ff4174               inc dword ptr [ecx + 0x74]
// 00478f23  8b442404             mov eax, dword ptr [esp + 4]
// 00478f27  8b00                 mov eax, dword ptr [eax]
// 00478f29  81c188040000         add ecx, 0x488
// 00478f2f  3b01                 cmp eax, dword ptr [ecx]
// 00478f31  7409                 je 0x478f3c
// 00478f33  89442404             mov dword ptr [esp + 4], eax
// 00478f37  e964001200           jmp 0x598fa0
// 00478f3c  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setShader@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VShader@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
