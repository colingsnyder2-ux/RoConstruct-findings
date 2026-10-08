// roc 2007-03 00475db0  unit: seg_00470000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475db0
//
// 00475db0  56                   push esi
// 00475db1  8bf1                 mov esi, ecx
// 00475db3  8b8680040000         mov eax, dword ptr [esi + 0x480]
// 00475db9  39860c010000         cmp dword ptr [esi + 0x10c], eax
// 00475dbf  57                   push edi
// 00475dc0  8dbe0c010000         lea edi, [esi + 0x10c]
// 00475dc6  7426                 je 0x475dee
// 00475dc8  83466c01             add dword ptr [esi + 0x6c], 1
// 00475dcc  85c0                 test eax, eax
// 00475dce  7503                 jne 0x475dd3
// 00475dd0  50                   push eax
// 00475dd1  eb07                 jmp 0x475dda
// 00475dd3  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 00475dd9  50                   push eax
// 00475dda  ff15dc808b00         call dword ptr [0x8b80dc]
// 00475de0  8b8e80040000         mov ecx, dword ptr [esi + 0x480]
// 00475de6  51                   push ecx
// 00475de7  8bcf                 mov ecx, edi
// 00475de9  e8a2f2ffff           call 0x475090
// 00475dee  5f                   pop edi
// 00475def  5e                   pop esi
// 00475df0  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?forceVertexAndPixelShaderBind@RenderDevice@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
