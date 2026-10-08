// from server: 100% by auto
// roc 2010-06 004884b0  unit: G3D::GWindow  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004884b0
//
// 004884b0  6aff                 push -1
// 004884b2  6858029900           push 0x990258
// 004884b7  64a100000000         mov eax, dword ptr fs:[0]
// 004884bd  50                   push eax
// 004884be  64892500000000       mov dword ptr fs:[0], esp
// 004884c5  83ec14               sub esp, 0x14
// 004884c8  8b442424             mov eax, dword ptr [esp + 0x24]
// 004884cc  56                   push esi
// 004884cd  6a08                 push 8
// 004884cf  8bf1                 mov esi, ecx
// 004884d1  50                   push eax
// 004884d2  8d4c240c             lea ecx, [esp + 0xc]
// 004884d6  e8a5d80c00           call 0x555d80
// 004884db  8b16                 mov edx, dword ptr [esi]
// 004884dd  50                   push eax
// 004884de  8b423c               mov eax, dword ptr [edx + 0x3c]
// 004884e1  8bce                 mov ecx, esi
// 004884e3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004884eb  ffd0                 call eax
// 004884ed  8d4c2404             lea ecx, [esp + 4]
// 004884f1  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004884f9  e8e2b40c00           call 0x5539e0
// 004884fe  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00488502  5e                   pop esi
// 00488503  64890d00000000       mov dword ptr fs:[0], ecx
// 0048850a  83c420               add esp, 0x20
// 0048850d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?setIcon@GWindow@G3D@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
