// roc 2012-06 00984510  unit: boost::exception  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00984510
//
// 00984510  51                   push ecx
// 00984511  56                   push esi
// 00984512  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00984516  83c150               add ecx, 0x50
// 00984519  51                   push ecx
// 0098451a  8bce                 mov ecx, esi
// 0098451c  c744240800000000     mov dword ptr [esp + 8], 0
// 00984524  ff158047b200         call dword ptr [0xb24780]
// 0098452a  8bc6                 mov eax, esi
// 0098452c  5e                   pop esi
// 0098452d  59                   pop ecx
// 0098452e  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
