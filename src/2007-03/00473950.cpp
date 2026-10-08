// roc 2007-03 00473950  unit: seg_00470000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473950
//
// 00473950  56                   push esi
// 00473951  8bf1                 mov esi, ecx
// 00473953  57                   push edi
// 00473954  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00473958  b801000000           mov eax, 1
// 0047395d  014678               add dword ptr [esi + 0x78], eax
// 00473960  39be24040000         cmp dword ptr [esi + 0x424], edi
// 00473966  7410                 je 0x473978
// 00473968  014670               add dword ptr [esi + 0x70], eax
// 0047396b  57                   push edi
// 0047396c  ff15d8eb7700         call dword ptr [0x77ebd8]
// 00473972  89be24040000         mov dword ptr [esi + 0x424], edi
// 00473978  5f                   pop edi
// 00473979  5e                   pop esi
// 0047397a  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilClearValue@RenderDevice@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
