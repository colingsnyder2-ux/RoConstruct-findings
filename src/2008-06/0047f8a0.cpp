// from server: 100% by auto
// roc 2008-06 0047f8a0  unit: G3D::GWindow  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f8a0
//
// 0047f8a0  6aff                 push -1
// 0047f8a2  6828517c00           push 0x7c5128
// 0047f8a7  64a100000000         mov eax, dword ptr fs:[0]
// 0047f8ad  50                   push eax
// 0047f8ae  64892500000000       mov dword ptr fs:[0], esp
// 0047f8b5  83ec14               sub esp, 0x14
// 0047f8b8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0047f8bc  56                   push esi
// 0047f8bd  6a08                 push 8
// 0047f8bf  8bf1                 mov esi, ecx
// 0047f8c1  50                   push eax
// 0047f8c2  8d4c240c             lea ecx, [esp + 0xc]
// 0047f8c6  e8a50d0900           call 0x510670
// 0047f8cb  8b16                 mov edx, dword ptr [esi]
// 0047f8cd  50                   push eax
// 0047f8ce  8b423c               mov eax, dword ptr [edx + 0x3c]
// 0047f8d1  8bce                 mov ecx, esi
// 0047f8d3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0047f8db  ffd0                 call eax
// 0047f8dd  8d4c2404             lea ecx, [esp + 4]
// 0047f8e1  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0047f8e9  e842e90800           call 0x50e230
// 0047f8ee  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047f8f2  5e                   pop esi
// 0047f8f3  64890d00000000       mov dword ptr fs:[0], ecx
// 0047f8fa  83c420               add esp, 0x20
// 0047f8fd  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?setIcon@GWindow@G3D@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
