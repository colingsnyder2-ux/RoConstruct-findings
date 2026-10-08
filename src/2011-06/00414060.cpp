// roc 2011-06 00414060  unit: ChatEnter  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00414060
//
// 00414060  51                   push ecx
// 00414061  56                   push esi
// 00414062  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00414066  83c150               add ecx, 0x50
// 00414069  51                   push ecx
// 0041406a  8bce                 mov ecx, esi
// 0041406c  c744240800000000     mov dword ptr [esp + 8], 0
// 00414074  ff15c804a400         call dword ptr [0xa404c8]
// 0041407a  8bc6                 mov eax, esi
// 0041407c  5e                   pop esi
// 0041407d  59                   pop ecx
// 0041407e  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
