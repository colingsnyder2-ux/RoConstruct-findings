// roc 2007-03 0047a0e0  unit: seg_00470000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a0e0
//
// 0047a0e0  51                   push ecx
// 0047a0e1  56                   push esi
// 0047a0e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047a0e6  81c188000000         add ecx, 0x88
// 0047a0ec  51                   push ecx
// 0047a0ed  8bce                 mov ecx, esi
// 0047a0ef  c744240800000000     mov dword ptr [esp + 8], 0
// 0047a0f7  ff157ce77700         call dword ptr [0x77e77c]
// 0047a0fd  8bc6                 mov eax, esi
// 0047a0ff  5e                   pop esi
// 0047a100  59                   pop ecx
// 0047a101  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?caption@Win32Window@G3D@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
