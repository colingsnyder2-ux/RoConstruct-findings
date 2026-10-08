// roc 2007-08 00473850  unit: G3D::VARArea  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473850
//
// 00473850  56                   push esi
// 00473851  8bf1                 mov esi, ecx
// 00473853  57                   push edi
// 00473854  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00473858  b801000000           mov eax, 1
// 0047385d  014678               add dword ptr [esi + 0x78], eax
// 00473860  39be24040000         cmp dword ptr [esi + 0x424], edi
// 00473866  7410                 je 0x473878
// 00473868  014670               add dword ptr [esi + 0x70], eax
// 0047386b  57                   push edi
// 0047386c  ff15e4ea7700         call dword ptr [0x77eae4]
// 00473872  89be24040000         mov dword ptr [esi + 0x424], edi
// 00473878  5f                   pop edi
// 00473879  5e                   pop esi
// 0047387a  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilClearValue@RenderDevice@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
