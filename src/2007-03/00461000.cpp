// roc 2007-03 00461000  unit: seg_00460000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00461000
//
// 00461000  6aff                 push -1
// 00461002  68284f7400           push 0x744f28
// 00461007  64a100000000         mov eax, dword ptr fs:[0]
// 0046100d  50                   push eax
// 0046100e  83ec14               sub esp, 0x14
// 00461011  56                   push esi
// 00461012  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00461017  33c4                 xor eax, esp
// 00461019  50                   push eax
// 0046101a  8d44241c             lea eax, [esp + 0x1c]
// 0046101e  64a300000000         mov dword ptr fs:[0], eax
// 00461024  8bf1                 mov esi, ecx
// 00461026  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0046102a  6a08                 push 8
// 0046102c  50                   push eax
// 0046102d  8d4c2410             lea ecx, [esp + 0x10]
// 00461031  e83aa90900           call 0x4fb970
// 00461036  8b16                 mov edx, dword ptr [esi]
// 00461038  50                   push eax
// 00461039  8b423c               mov eax, dword ptr [edx + 0x3c]
// 0046103c  8bce                 mov ecx, esi
// 0046103e  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00461046  ffd0                 call eax
// 00461048  8d4c2408             lea ecx, [esp + 8]
// 0046104c  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00461054  e8578d0900           call 0x4f9db0
// 00461059  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046105d  64890d00000000       mov dword ptr fs:[0], ecx
// 00461064  59                   pop ecx
// 00461065  5e                   pop esi
// 00461066  83c420               add esp, 0x20
// 00461069  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?setIcon@GWindow@G3D@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
