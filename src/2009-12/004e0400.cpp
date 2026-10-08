// roc 2009-12 004e0400  unit: G3D::GWindow  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004e0400
//
// 004e0400  83ec0c               sub esp, 0xc
// 004e0403  56                   push esi
// 004e0404  8b742414             mov esi, dword ptr [esp + 0x14]
// 004e0408  8d442404             lea eax, [esp + 4]
// 004e040c  50                   push eax
// 004e040d  83c104               add ecx, 4
// 004e0410  89742408             mov dword ptr [esp + 8], esi
// 004e0414  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004e041c  c644241001           mov byte ptr [esp + 0x10], 1
// 004e0421  e81a72ffff           call 0x4d7640
// 004e0426  8b16                 mov edx, dword ptr [esi]
// 004e0428  8b4224               mov eax, dword ptr [edx + 0x24]
// 004e042b  8bce                 mov ecx, esi
// 004e042d  ffd0                 call eax
// 004e042f  5e                   pop esi
// 004e0430  83c40c               add esp, 0xc
// 004e0433  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?pushLoopBody@GWindow@G3D@@UAEXPAVGApplet@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
