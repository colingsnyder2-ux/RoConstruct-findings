// roc 2009-06 004a24e0  unit: G3D::PBVTextureFormat::?$Table  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a24e0
//
// 004a24e0  56                   push esi
// 004a24e1  8bf1                 mov esi, ecx
// 004a24e3  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 004a24e9  57                   push edi
// 004a24ea  85c9                 test ecx, ecx
// 004a24ec  7416                 je 0x4a2504
// 004a24ee  c6861101000001       mov byte ptr [esi + 0x111], 1
// 004a24f5  8b01                 mov eax, dword ptr [ecx]
// 004a24f7  8b5010               mov edx, dword ptr [eax + 0x10]
// 004a24fa  56                   push esi
// 004a24fb  ffd2                 call edx
// 004a24fd  c6861101000000       mov byte ptr [esi + 0x111], 0
// 004a2504  8b8680040000         mov eax, dword ptr [esi + 0x480]
// 004a250a  39860c010000         cmp dword ptr [esi + 0x10c], eax
// 004a2510  8dbe0c010000         lea edi, [esi + 0x10c]
// 004a2516  7425                 je 0x4a253d
// 004a2518  ff466c               inc dword ptr [esi + 0x6c]
// 004a251b  85c0                 test eax, eax
// 004a251d  7503                 jne 0x4a2522
// 004a251f  50                   push eax
// 004a2520  eb07                 jmp 0x4a2529
// 004a2522  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 004a2528  50                   push eax
// 004a2529  ff1598d2a300         call dword ptr [0xa3d298]
// 004a252f  8b8e80040000         mov ecx, dword ptr [esi + 0x480]
// 004a2535  51                   push ecx
// 004a2536  8bcf                 mov ecx, edi
// 004a2538  e823d3ffff           call 0x49f860
// 004a253d  5f                   pop edi
// 004a253e  5e                   pop esi
// 004a253f  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beforePrimitive@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
