// roc 2007-08 00475d50  unit: CInstanceRecord::CNameItem  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475d50
//
// 00475d50  53                   push ebx
// 00475d51  56                   push esi
// 00475d52  8bf1                 mov esi, ecx
// 00475d54  8b8e8c040000         mov ecx, dword ptr [esi + 0x48c]
// 00475d5a  83467401             add dword ptr [esi + 0x74], 1
// 00475d5e  8d9e8c040000         lea ebx, [esi + 0x48c]
// 00475d64  57                   push edi
// 00475d65  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00475d69  390f                 cmp dword ptr [edi], ecx
// 00475d6b  742c                 je 0x475d99
// 00475d6d  85c9                 test ecx, ecx
// 00475d6f  0f95c0               setne al
// 00475d72  84c0                 test al, al
// 00475d74  7405                 je 0x475d7b
// 00475d76  e845030100           call 0x4860c0
// 00475d7b  83466c01             add dword ptr [esi + 0x6c], 1
// 00475d7f  8b0f                 mov ecx, dword ptr [edi]
// 00475d81  85c9                 test ecx, ecx
// 00475d83  0f95c0               setne al
// 00475d86  84c0                 test al, al
// 00475d88  7405                 je 0x475d8f
// 00475d8a  e831040100           call 0x4861c0
// 00475d8f  8b07                 mov eax, dword ptr [edi]
// 00475d91  50                   push eax
// 00475d92  8bcb                 mov ecx, ebx
// 00475d94  e8d7f1ffff           call 0x474f70
// 00475d99  5f                   pop edi
// 00475d9a  5e                   pop esi
// 00475d9b  5b                   pop ebx
// 00475d9c  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setVertexProgram@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VVertexProgram@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
