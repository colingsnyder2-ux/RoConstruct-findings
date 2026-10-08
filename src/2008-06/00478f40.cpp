// roc 2008-06 00478f40  unit: CInstanceRecord::CNameItem  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00478f40
//
// 00478f40  56                   push esi
// 00478f41  8bf1                 mov esi, ecx
// 00478f43  8b8680040000         mov eax, dword ptr [esi + 0x480]
// 00478f49  39860c010000         cmp dword ptr [esi + 0x10c], eax
// 00478f4f  57                   push edi
// 00478f50  8dbe0c010000         lea edi, [esi + 0x10c]
// 00478f56  7425                 je 0x478f7d
// 00478f58  ff466c               inc dword ptr [esi + 0x6c]
// 00478f5b  85c0                 test eax, eax
// 00478f5d  7503                 jne 0x478f62
// 00478f5f  50                   push eax
// 00478f60  eb07                 jmp 0x478f69
// 00478f62  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 00478f68  50                   push eax
// 00478f69  ff1538f99600         call dword ptr [0x96f938]
// 00478f6f  8b8e80040000         mov ecx, dword ptr [esi + 0x480]
// 00478f75  51                   push ecx
// 00478f76  8bcf                 mov ecx, edi
// 00478f78  e823001200           call 0x598fa0
// 00478f7d  5f                   pop edi
// 00478f7e  5e                   pop esi
// 00478f7f  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?forceVertexAndPixelShaderBind@RenderDevice@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
