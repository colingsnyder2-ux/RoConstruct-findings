// roc 2007-03 0047a010  unit: seg_00470000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a010
//
// 0047a010  51                   push ecx
// 0047a011  56                   push esi
// 0047a012  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047a016  68847b7900           push 0x797b84
// 0047a01b  8bce                 mov ecx, esi
// 0047a01d  c744240800000000     mov dword ptr [esp + 8], 0
// 0047a025  ff1578e77700         call dword ptr [0x77e778]
// 0047a02b  8bc6                 mov eax, esi
// 0047a02d  5e                   pop esi
// 0047a02e  59                   pop ecx
// 0047a02f  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?getAPIName@Win32Window@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
