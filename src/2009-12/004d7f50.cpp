// roc 2009-12 004d7f50  unit: G3D::GWindow  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d7f50
//
// 004d7f50  83ec0c               sub esp, 0xc
// 004d7f53  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d7f57  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d7f5b  890424               mov dword ptr [esp], eax
// 004d7f5e  8d0424               lea eax, [esp]
// 004d7f61  50                   push eax
// 004d7f62  83c104               add ecx, 4
// 004d7f65  89542408             mov dword ptr [esp + 8], edx
// 004d7f69  c644240c00           mov byte ptr [esp + 0xc], 0
// 004d7f6e  e8cdf6ffff           call 0x4d7640
// 004d7f73  83c40c               add esp, 0xc
// 004d7f76  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?pushLoopBody@GWindow@G3D@@UAEXP6AXPAX@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
