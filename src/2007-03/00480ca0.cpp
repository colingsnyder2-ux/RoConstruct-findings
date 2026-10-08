// roc 2007-03 00480ca0  unit: seg_00480000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480ca0
//
// 00480ca0  56                   push esi
// 00480ca1  57                   push edi
// 00480ca2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00480ca6  6850314700           push 0x473150
// 00480cab  6a04                 push 4
// 00480cad  6a10                 push 0x10
// 00480caf  8bf1                 mov esi, ecx
// 00480cb1  57                   push edi
// 00480cb2  56                   push esi
// 00480cb3  e89843ffff           call 0x475050
// 00480cb8  8d4e40               lea ecx, [esi + 0x40]
// 00480cbb  c70100000000         mov dword ptr [ecx], 0
// 00480cc1  8b4740               mov eax, dword ptr [edi + 0x40]
// 00480cc4  50                   push eax
// 00480cc5  e8c643ffff           call 0x475090
// 00480cca  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00480ccd  5f                   pop edi
// 00480cce  894e44               mov dword ptr [esi + 0x44], ecx
// 00480cd1  8bc6                 mov eax, esi
// 00480cd3  5e                   pop esi
// 00480cd4  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\GPUProgram.cpp (function ??0Arg@ArgList@GPUProgram@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GPUProgram.cpp
