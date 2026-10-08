// roc 2007-03 00475f00  unit: seg_00470000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475f00
//
// 00475f00  53                   push ebx
// 00475f01  56                   push esi
// 00475f02  8bf1                 mov esi, ecx
// 00475f04  8b8e90040000         mov ecx, dword ptr [esi + 0x490]
// 00475f0a  83467401             add dword ptr [esi + 0x74], 1
// 00475f0e  8d9e90040000         lea ebx, [esi + 0x490]
// 00475f14  57                   push edi
// 00475f15  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00475f19  390f                 cmp dword ptr [edi], ecx
// 00475f1b  742c                 je 0x475f49
// 00475f1d  85c9                 test ecx, ecx
// 00475f1f  0f95c0               setne al
// 00475f22  84c0                 test al, al
// 00475f24  7405                 je 0x475f2b
// 00475f26  e805e60000           call 0x484530
// 00475f2b  8b0f                 mov ecx, dword ptr [edi]
// 00475f2d  85c9                 test ecx, ecx
// 00475f2f  0f95c0               setne al
// 00475f32  84c0                 test al, al
// 00475f34  7405                 je 0x475f3b
// 00475f36  e8f5e60000           call 0x484630
// 00475f3b  83466c01             add dword ptr [esi + 0x6c], 1
// 00475f3f  8b07                 mov eax, dword ptr [edi]
// 00475f41  50                   push eax
// 00475f42  8bcb                 mov ecx, ebx
// 00475f44  e847f1ffff           call 0x475090
// 00475f49  5f                   pop edi
// 00475f4a  5e                   pop esi
// 00475f4b  5b                   pop ebx
// 00475f4c  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setPixelProgram@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VPixelProgram@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
