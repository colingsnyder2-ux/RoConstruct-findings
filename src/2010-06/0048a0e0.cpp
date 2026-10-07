// roc 2010-06 0048a0e0  unit: G3D::GWindow  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048a0e0
//
// 0048a0e0  83ec0c               sub esp, 0xc
// 0048a0e3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0048a0e7  8b542414             mov edx, dword ptr [esp + 0x14]
// 0048a0eb  890424               mov dword ptr [esp], eax
// 0048a0ee  8d0424               lea eax, [esp]
// 0048a0f1  50                   push eax
// 0048a0f2  83c104               add ecx, 4
// 0048a0f5  89542408             mov dword ptr [esp + 8], edx
// 0048a0f9  c644240c00           mov byte ptr [esp + 0xc], 0
// 0048a0fe  e8cdf6ffff           call 0x4897d0
// 0048a103  83c40c               add esp, 0xc
// 0048a106  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?pushLoopBody@GWindow@G3D@@UAEXP6AXPAX@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
