// roc 2007-03 00479fe0  unit: seg_00470000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00479fe0
//
// 00479fe0  51                   push ecx
// 00479fe1  56                   push esi
// 00479fe2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00479fe6  68807b7900           push 0x797b80
// 00479feb  8bce                 mov ecx, esi
// 00479fed  c744240800000000     mov dword ptr [esp + 8], 0
// 00479ff5  ff1578e77700         call dword ptr [0x77e778]
// 00479ffb  8bc6                 mov eax, esi
// 00479ffd  5e                   pop esi
// 00479ffe  59                   pop ecx
// 00479fff  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?getAPIVersion@Win32Window@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
