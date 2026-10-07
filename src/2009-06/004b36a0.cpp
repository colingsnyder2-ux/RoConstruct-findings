// roc 2009-06 004b36a0  unit: G3D::GWindow  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b36a0
//
// 004b36a0  83ec0c               sub esp, 0xc
// 004b36a3  56                   push esi
// 004b36a4  8b742414             mov esi, dword ptr [esp + 0x14]
// 004b36a8  8d442404             lea eax, [esp + 4]
// 004b36ac  50                   push eax
// 004b36ad  83c104               add ecx, 4
// 004b36b0  89742408             mov dword ptr [esp + 8], esi
// 004b36b4  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004b36bc  c644241001           mov byte ptr [esp + 0x10], 1
// 004b36c1  e8aa74ffff           call 0x4aab70
// 004b36c6  8b16                 mov edx, dword ptr [esi]
// 004b36c8  8b4224               mov eax, dword ptr [edx + 0x24]
// 004b36cb  8bce                 mov ecx, esi
// 004b36cd  ffd0                 call eax
// 004b36cf  5e                   pop esi
// 004b36d0  83c40c               add esp, 0xc
// 004b36d3  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?pushLoopBody@GWindow@G3D@@UAEXPAVGApplet@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
