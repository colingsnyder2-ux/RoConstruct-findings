// roc 2007-08 00475da0  unit: CInstanceRecord::CNameItem  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475da0
//
// 00475da0  53                   push ebx
// 00475da1  56                   push esi
// 00475da2  8bf1                 mov esi, ecx
// 00475da4  8b8e90040000         mov ecx, dword ptr [esi + 0x490]
// 00475daa  83467401             add dword ptr [esi + 0x74], 1
// 00475dae  8d9e90040000         lea ebx, [esi + 0x490]
// 00475db4  57                   push edi
// 00475db5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00475db9  390f                 cmp dword ptr [edi], ecx
// 00475dbb  742c                 je 0x475de9
// 00475dbd  85c9                 test ecx, ecx
// 00475dbf  0f95c0               setne al
// 00475dc2  84c0                 test al, al
// 00475dc4  7405                 je 0x475dcb
// 00475dc6  e8f5020100           call 0x4860c0
// 00475dcb  8b0f                 mov ecx, dword ptr [edi]
// 00475dcd  85c9                 test ecx, ecx
// 00475dcf  0f95c0               setne al
// 00475dd2  84c0                 test al, al
// 00475dd4  7405                 je 0x475ddb
// 00475dd6  e8e5030100           call 0x4861c0
// 00475ddb  83466c01             add dword ptr [esi + 0x6c], 1
// 00475ddf  8b07                 mov eax, dword ptr [edi]
// 00475de1  50                   push eax
// 00475de2  8bcb                 mov ecx, ebx
// 00475de4  e887f1ffff           call 0x474f70
// 00475de9  5f                   pop edi
// 00475dea  5e                   pop esi
// 00475deb  5b                   pop ebx
// 00475dec  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setPixelProgram@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VPixelProgram@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
