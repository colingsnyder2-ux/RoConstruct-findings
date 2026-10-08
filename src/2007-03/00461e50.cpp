// roc 2007-03 00461e50  unit: seg_00460000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00461e50
//
// 00461e50  83ec0c               sub esp, 0xc
// 00461e53  8b442410             mov eax, dword ptr [esp + 0x10]
// 00461e57  8b542414             mov edx, dword ptr [esp + 0x14]
// 00461e5b  890424               mov dword ptr [esp], eax
// 00461e5e  8d0424               lea eax, [esp]
// 00461e61  50                   push eax
// 00461e62  83c104               add ecx, 4
// 00461e65  89542408             mov dword ptr [esp + 8], edx
// 00461e69  c644240c00           mov byte ptr [esp + 0xc], 0
// 00461e6e  e8edf9ffff           call 0x461860
// 00461e73  83c40c               add esp, 0xc
// 00461e76  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\SDLWindow.cpp (function ?pushLoopBody@GWindow@G3D@@UAEXP6AXPAX@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/SDLWindow.cpp
