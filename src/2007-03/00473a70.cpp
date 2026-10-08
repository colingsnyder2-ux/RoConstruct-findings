// roc 2007-03 00473a70  unit: seg_00470000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473a70
//
// 00473a70  56                   push esi
// 00473a71  8bf1                 mov esi, ecx
// 00473a73  b801000000           mov eax, 1
// 00473a78  014678               add dword ptr [esi + 0x78], eax
// 00473a7b  80bee003000000       cmp byte ptr [esi + 0x3e0], 0
// 00473a82  740e                 je 0x473a92
// 00473a84  014670               add dword ptr [esi + 0x70], eax
// 00473a87  68110c0000           push 0xc11
// 00473a8c  ff1574eb7700         call dword ptr [0x77eb74]
// 00473a92  c686e003000000       mov byte ptr [esi + 0x3e0], 0
// 00473a99  5e                   pop esi
// 00473a9a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?disableClip2D@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
