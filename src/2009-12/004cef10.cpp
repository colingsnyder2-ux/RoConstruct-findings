// roc 2009-12 004cef10  unit: G3D::PBVTextureFormat::?$Table  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cef10
//
// 004cef10  56                   push esi
// 004cef11  8bf1                 mov esi, ecx
// 004cef13  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 004cef19  57                   push edi
// 004cef1a  85c9                 test ecx, ecx
// 004cef1c  7416                 je 0x4cef34
// 004cef1e  c6861101000001       mov byte ptr [esi + 0x111], 1
// 004cef25  8b01                 mov eax, dword ptr [ecx]
// 004cef27  8b5010               mov edx, dword ptr [eax + 0x10]
// 004cef2a  56                   push esi
// 004cef2b  ffd2                 call edx
// 004cef2d  c6861101000000       mov byte ptr [esi + 0x111], 0
// 004cef34  8b8680040000         mov eax, dword ptr [esi + 0x480]
// 004cef3a  39860c010000         cmp dword ptr [esi + 0x10c], eax
// 004cef40  8dbe0c010000         lea edi, [esi + 0x10c]
// 004cef46  7425                 je 0x4cef6d
// 004cef48  ff466c               inc dword ptr [esi + 0x6c]
// 004cef4b  85c0                 test eax, eax
// 004cef4d  7503                 jne 0x4cef52
// 004cef4f  50                   push eax
// 004cef50  eb07                 jmp 0x4cef59
// 004cef52  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 004cef58  50                   push eax
// 004cef59  ff1548dab700         call dword ptr [0xb7da48]
// 004cef5f  8b8e80040000         mov ecx, dword ptr [esi + 0x480]
// 004cef65  51                   push ecx
// 004cef66  8bcf                 mov ecx, edi
// 004cef68  e803ccf7ff           call 0x44bb70
// 004cef6d  5f                   pop edi
// 004cef6e  5e                   pop esi
// 004cef6f  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beforePrimitive@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
