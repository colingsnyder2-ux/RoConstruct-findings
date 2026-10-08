// roc 2010-06 00493720  unit: seg_00490000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00493720
//
// 00493720  56                   push esi
// 00493721  8bf1                 mov esi, ecx
// 00493723  8b8680040000         mov eax, dword ptr [esi + 0x480]
// 00493729  39860c010000         cmp dword ptr [esi + 0x10c], eax
// 0049372f  57                   push edi
// 00493730  8dbe0c010000         lea edi, [esi + 0x10c]
// 00493736  7425                 je 0x49375d
// 00493738  ff466c               inc dword ptr [esi + 0x6c]
// 0049373b  85c0                 test eax, eax
// 0049373d  7503                 jne 0x493742
// 0049373f  50                   push eax
// 00493740  eb07                 jmp 0x493749
// 00493742  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 00493748  50                   push eax
// 00493749  ff15d83ac000         call dword ptr [0xc03ad8]
// 0049374f  8b8e80040000         mov ecx, dword ptr [esi + 0x480]
// 00493755  51                   push ecx
// 00493756  8bcf                 mov ecx, edi
// 00493758  e8c335ffff           call 0x486d20
// 0049375d  5f                   pop edi
// 0049375e  5e                   pop esi
// 0049375f  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?forceVertexAndPixelShaderBind@RenderDevice@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
