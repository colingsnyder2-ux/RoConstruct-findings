// from server: 100% by auto
// roc 2007-08 0047dfe0  unit: G3D::GWindow  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047dfe0
//
// 0047dfe0  83ec0c               sub esp, 0xc
// 0047dfe3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047dfe7  8b542414             mov edx, dword ptr [esp + 0x14]
// 0047dfeb  890424               mov dword ptr [esp], eax
// 0047dfee  8d0424               lea eax, [esp]
// 0047dff1  50                   push eax
// 0047dff2  83c104               add ecx, 4
// 0047dff5  89542408             mov dword ptr [esp + 8], edx
// 0047dff9  c644240c00           mov byte ptr [esp + 0xc], 0
// 0047dffe  e87df6ffff           call 0x47d680
// 0047e003  83c40c               add esp, 0xc
// 0047e006  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?pushLoopBody@GWindow@G3D@@UAEXP6AXPAX@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
