// roc 2008-06 00489720  unit: G3D::GWindow  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489720
//
// 00489720  83ec0c               sub esp, 0xc
// 00489723  56                   push esi
// 00489724  8b742414             mov esi, dword ptr [esp + 0x14]
// 00489728  8d442404             lea eax, [esp + 4]
// 0048972c  50                   push eax
// 0048972d  83c104               add ecx, 4
// 00489730  89742408             mov dword ptr [esp + 8], esi
// 00489734  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0048973c  c644241001           mov byte ptr [esp + 0x10], 1
// 00489741  e80a75ffff           call 0x480c50
// 00489746  8b16                 mov edx, dword ptr [esi]
// 00489748  8b4224               mov eax, dword ptr [edx + 0x24]
// 0048974b  8bce                 mov ecx, esi
// 0048974d  ffd0                 call eax
// 0048974f  5e                   pop esi
// 00489750  83c40c               add esp, 0xc
// 00489753  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?pushLoopBody@GWindow@G3D@@UAEXPAVGApplet@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
