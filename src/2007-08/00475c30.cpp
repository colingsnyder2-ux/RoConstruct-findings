// roc 2007-08 00475c30  unit: CInstanceRecord::CNameItem  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475c30
//
// 00475c30  8b442404             mov eax, dword ptr [esp + 4]
// 00475c34  8b00                 mov eax, dword ptr [eax]
// 00475c36  81c184040000         add ecx, 0x484
// 00475c3c  3b01                 cmp eax, dword ptr [ecx]
// 00475c3e  7409                 je 0x475c49
// 00475c40  89442404             mov dword ptr [esp + 4], eax
// 00475c44  e927f3ffff           jmp 0x474f70
// 00475c49  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setObjectShader@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VObjectShader@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
