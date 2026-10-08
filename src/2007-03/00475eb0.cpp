// roc 2007-03 00475eb0  unit: seg_00470000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475eb0
//
// 00475eb0  53                   push ebx
// 00475eb1  56                   push esi
// 00475eb2  8bf1                 mov esi, ecx
// 00475eb4  8b8e8c040000         mov ecx, dword ptr [esi + 0x48c]
// 00475eba  83467401             add dword ptr [esi + 0x74], 1
// 00475ebe  8d9e8c040000         lea ebx, [esi + 0x48c]
// 00475ec4  57                   push edi
// 00475ec5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00475ec9  390f                 cmp dword ptr [edi], ecx
// 00475ecb  742c                 je 0x475ef9
// 00475ecd  85c9                 test ecx, ecx
// 00475ecf  0f95c0               setne al
// 00475ed2  84c0                 test al, al
// 00475ed4  7405                 je 0x475edb
// 00475ed6  e855e60000           call 0x484530
// 00475edb  83466c01             add dword ptr [esi + 0x6c], 1
// 00475edf  8b0f                 mov ecx, dword ptr [edi]
// 00475ee1  85c9                 test ecx, ecx
// 00475ee3  0f95c0               setne al
// 00475ee6  84c0                 test al, al
// 00475ee8  7405                 je 0x475eef
// 00475eea  e841e70000           call 0x484630
// 00475eef  8b07                 mov eax, dword ptr [edi]
// 00475ef1  50                   push eax
// 00475ef2  8bcb                 mov ecx, ebx
// 00475ef4  e897f1ffff           call 0x475090
// 00475ef9  5f                   pop edi
// 00475efa  5e                   pop esi
// 00475efb  5b                   pop ebx
// 00475efc  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setVertexProgram@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VVertexProgram@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
