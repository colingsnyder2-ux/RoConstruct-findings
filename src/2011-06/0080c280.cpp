// roc 2011-06 0080c280  unit: boost::exception  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c280
//
// 0080c280  51                   push ecx
// 0080c281  56                   push esi
// 0080c282  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0080c286  83c150               add ecx, 0x50
// 0080c289  51                   push ecx
// 0080c28a  8bce                 mov ecx, esi
// 0080c28c  c744240800000000     mov dword ptr [esp + 8], 0
// 0080c294  ff15e42da400         call dword ptr [0xa42de4]
// 0080c29a  8bc6                 mov eax, esi
// 0080c29c  5e                   pop esi
// 0080c29d  59                   pop ecx
// 0080c29e  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
