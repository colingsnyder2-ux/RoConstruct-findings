// from server: 100% by auto
// roc 2010-06 00498030  unit: G3D::GWindow  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498030
//
// 00498030  83ec0c               sub esp, 0xc
// 00498033  56                   push esi
// 00498034  8b742414             mov esi, dword ptr [esp + 0x14]
// 00498038  8d442404             lea eax, [esp + 4]
// 0049803c  50                   push eax
// 0049803d  83c104               add ecx, 4
// 00498040  89742408             mov dword ptr [esp + 8], esi
// 00498044  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0049804c  c644241001           mov byte ptr [esp + 0x10], 1
// 00498051  e87a17ffff           call 0x4897d0
// 00498056  8b16                 mov edx, dword ptr [esi]
// 00498058  8b4224               mov eax, dword ptr [edx + 0x24]
// 0049805b  8bce                 mov ecx, esi
// 0049805d  ffd0                 call eax
// 0049805f  5e                   pop esi
// 00498060  83c40c               add esp, 0xc
// 00498063  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?pushLoopBody@GWindow@G3D@@UAEXPAVGApplet@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
