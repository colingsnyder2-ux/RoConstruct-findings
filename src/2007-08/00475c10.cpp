// roc 2007-08 00475c10  unit: CInstanceRecord::CNameItem  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475c10
//
// 00475c10  83417401             add dword ptr [ecx + 0x74], 1
// 00475c14  8b442404             mov eax, dword ptr [esp + 4]
// 00475c18  8b00                 mov eax, dword ptr [eax]
// 00475c1a  81c188040000         add ecx, 0x488
// 00475c20  3b01                 cmp eax, dword ptr [ecx]
// 00475c22  7409                 je 0x475c2d
// 00475c24  89442404             mov dword ptr [esp + 4], eax
// 00475c28  e943f3ffff           jmp 0x474f70
// 00475c2d  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setShader@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VShader@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
