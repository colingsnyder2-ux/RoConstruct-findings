// from server: 100% by auto
// roc 2007-08 00486700  unit: G3D::GWindow  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486700
//
// 00486700  83ec0c               sub esp, 0xc
// 00486703  56                   push esi
// 00486704  8b742414             mov esi, dword ptr [esp + 0x14]
// 00486708  8d442404             lea eax, [esp + 4]
// 0048670c  50                   push eax
// 0048670d  83c104               add ecx, 4
// 00486710  89742408             mov dword ptr [esp + 8], esi
// 00486714  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0048671c  c644241001           mov byte ptr [esp + 0x10], 1
// 00486721  e85a6fffff           call 0x47d680
// 00486726  8b16                 mov edx, dword ptr [esi]
// 00486728  8b4224               mov eax, dword ptr [edx + 0x24]
// 0048672b  8bce                 mov ecx, esi
// 0048672d  ffd0                 call eax
// 0048672f  5e                   pop esi
// 00486730  83c40c               add esp, 0xc
// 00486733  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?pushLoopBody@GWindow@G3D@@UAEXPAVGApplet@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
