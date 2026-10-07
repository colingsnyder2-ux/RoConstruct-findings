// roc 2009-06 004a9940  unit: G3D::GWindow  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9940
//
// 004a9940  6aff                 push -1
// 004a9942  68183e8800           push 0x883e18
// 004a9947  64a100000000         mov eax, dword ptr fs:[0]
// 004a994d  50                   push eax
// 004a994e  64892500000000       mov dword ptr fs:[0], esp
// 004a9955  83ec14               sub esp, 0x14
// 004a9958  8b442424             mov eax, dword ptr [esp + 0x24]
// 004a995c  56                   push esi
// 004a995d  6a08                 push 8
// 004a995f  8bf1                 mov esi, ecx
// 004a9961  50                   push eax
// 004a9962  8d4c240c             lea ecx, [esp + 0xc]
// 004a9966  e825940c00           call 0x572d90
// 004a996b  8b16                 mov edx, dword ptr [esi]
// 004a996d  50                   push eax
// 004a996e  8b423c               mov eax, dword ptr [edx + 0x3c]
// 004a9971  8bce                 mov ecx, esi
// 004a9973  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004a997b  ffd0                 call eax
// 004a997d  8d4c2404             lea ecx, [esp + 4]
// 004a9981  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004a9989  e882710c00           call 0x570b10
// 004a998e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004a9992  5e                   pop esi
// 004a9993  64890d00000000       mov dword ptr fs:[0], ecx
// 004a999a  83c420               add esp, 0x20
// 004a999d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?setIcon@GWindow@G3D@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
