// roc 2007-03 00475e80  unit: seg_00470000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475e80
//
// 00475e80  56                   push esi
// 00475e81  57                   push edi
// 00475e82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00475e86  57                   push edi
// 00475e87  8bf1                 mov esi, ecx
// 00475e89  e872ffffff           call 0x475e00
// 00475e8e  8b0f                 mov ecx, dword ptr [edi]
// 00475e90  85c9                 test ecx, ecx
// 00475e92  740b                 je 0x475e9f
// 00475e94  8b442410             mov eax, dword ptr [esp + 0x10]
// 00475e98  50                   push eax
// 00475e99  56                   push esi
// 00475e9a  e8b1b70000           call 0x481650
// 00475e9f  5f                   pop edi
// 00475ea0  5e                   pop esi
// 00475ea1  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setVertexAndPixelShader@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@2@ABVArgList@VertexAndPixelShader@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
