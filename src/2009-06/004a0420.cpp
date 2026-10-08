// roc 2009-06 004a0420  unit: G3D::VARArea  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0420
//
// 004a0420  56                   push esi
// 004a0421  8bf1                 mov esi, ecx
// 004a0423  8b8680040000         mov eax, dword ptr [esi + 0x480]
// 004a0429  39860c010000         cmp dword ptr [esi + 0x10c], eax
// 004a042f  57                   push edi
// 004a0430  8dbe0c010000         lea edi, [esi + 0x10c]
// 004a0436  7425                 je 0x4a045d
// 004a0438  ff466c               inc dword ptr [esi + 0x6c]
// 004a043b  85c0                 test eax, eax
// 004a043d  7503                 jne 0x4a0442
// 004a043f  50                   push eax
// 004a0440  eb07                 jmp 0x4a0449
// 004a0442  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 004a0448  50                   push eax
// 004a0449  ff1598d2a300         call dword ptr [0xa3d298]
// 004a044f  8b8e80040000         mov ecx, dword ptr [esi + 0x480]
// 004a0455  51                   push ecx
// 004a0456  8bcf                 mov ecx, edi
// 004a0458  e803f4ffff           call 0x49f860
// 004a045d  5f                   pop edi
// 004a045e  5e                   pop esi
// 004a045f  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?forceVertexAndPixelShaderBind@RenderDevice@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
