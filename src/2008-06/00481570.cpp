// roc 2008-06 00481570  unit: G3D::GWindow  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00481570
//
// 00481570  83ec0c               sub esp, 0xc
// 00481573  8b442410             mov eax, dword ptr [esp + 0x10]
// 00481577  8b542414             mov edx, dword ptr [esp + 0x14]
// 0048157b  890424               mov dword ptr [esp], eax
// 0048157e  8d0424               lea eax, [esp]
// 00481581  50                   push eax
// 00481582  83c104               add ecx, 4
// 00481585  89542408             mov dword ptr [esp + 8], edx
// 00481589  c644240c00           mov byte ptr [esp + 0xc], 0
// 0048158e  e8bdf6ffff           call 0x480c50
// 00481593  83c40c               add esp, 0xc
// 00481596  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?pushLoopBody@GWindow@G3D@@UAEXP6AXPAX@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
