// roc 2007-03 0047e4c0  unit: seg_00470000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e4c0
//
// 0047e4c0  83ec0c               sub esp, 0xc
// 0047e4c3  56                   push esi
// 0047e4c4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0047e4c8  8d442404             lea eax, [esp + 4]
// 0047e4cc  50                   push eax
// 0047e4cd  83c104               add ecx, 4
// 0047e4d0  89742408             mov dword ptr [esp + 8], esi
// 0047e4d4  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0047e4dc  c644241001           mov byte ptr [esp + 0x10], 1
// 0047e4e1  e87a33feff           call 0x461860
// 0047e4e6  8b16                 mov edx, dword ptr [esi]
// 0047e4e8  8b4224               mov eax, dword ptr [edx + 0x24]
// 0047e4eb  8bce                 mov ecx, esi
// 0047e4ed  ffd0                 call eax
// 0047e4ef  5e                   pop esi
// 0047e4f0  83c40c               add esp, 0xc
// 0047e4f3  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\GWindow.cpp (function ?pushLoopBody@GWindow@G3D@@UAEXPAVGApplet@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GWindow.cpp
