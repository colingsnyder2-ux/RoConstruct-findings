// roc 2007-03 00475d70  unit: seg_00470000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475d70
//
// 00475d70  83417401             add dword ptr [ecx + 0x74], 1
// 00475d74  8b442404             mov eax, dword ptr [esp + 4]
// 00475d78  8b00                 mov eax, dword ptr [eax]
// 00475d7a  81c188040000         add ecx, 0x488
// 00475d80  3b01                 cmp eax, dword ptr [ecx]
// 00475d82  7409                 je 0x475d8d
// 00475d84  89442404             mov dword ptr [esp + 4], eax
// 00475d88  e903f3ffff           jmp 0x475090
// 00475d8d  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setShader@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VShader@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
