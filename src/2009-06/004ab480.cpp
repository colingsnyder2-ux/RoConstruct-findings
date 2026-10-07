// roc 2009-06 004ab480  unit: G3D::GWindow  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ab480
//
// 004ab480  83ec0c               sub esp, 0xc
// 004ab483  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ab487  8b542414             mov edx, dword ptr [esp + 0x14]
// 004ab48b  890424               mov dword ptr [esp], eax
// 004ab48e  8d0424               lea eax, [esp]
// 004ab491  50                   push eax
// 004ab492  83c104               add ecx, 4
// 004ab495  89542408             mov dword ptr [esp + 8], edx
// 004ab499  c644240c00           mov byte ptr [esp + 0xc], 0
// 004ab49e  e8cdf6ffff           call 0x4aab70
// 004ab4a3  83c40c               add esp, 0xc
// 004ab4a6  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?pushLoopBody@GWindow@G3D@@UAEXP6AXPAX@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
