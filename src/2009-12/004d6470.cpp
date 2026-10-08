// roc 2009-12 004d6470  unit: G3D::GWindow  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d6470
//
// 004d6470  6aff                 push -1
// 004d6472  68a8e39300           push 0x93e3a8
// 004d6477  64a100000000         mov eax, dword ptr fs:[0]
// 004d647d  50                   push eax
// 004d647e  64892500000000       mov dword ptr fs:[0], esp
// 004d6485  83ec14               sub esp, 0x14
// 004d6488  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d648c  56                   push esi
// 004d648d  6a08                 push 8
// 004d648f  8bf1                 mov esi, ecx
// 004d6491  50                   push eax
// 004d6492  8d4c240c             lea ecx, [esp + 0xc]
// 004d6496  e8e5b91100           call 0x5f1e80
// 004d649b  8b16                 mov edx, dword ptr [esi]
// 004d649d  50                   push eax
// 004d649e  8b423c               mov eax, dword ptr [edx + 0x3c]
// 004d64a1  8bce                 mov ecx, esi
// 004d64a3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004d64ab  ffd0                 call eax
// 004d64ad  8d4c2404             lea ecx, [esp + 4]
// 004d64b1  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004d64b9  e822961100           call 0x5efae0
// 004d64be  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d64c2  5e                   pop esi
// 004d64c3  64890d00000000       mov dword ptr fs:[0], ecx
// 004d64ca  83c420               add esp, 0x20
// 004d64cd  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?setIcon@GWindow@G3D@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
