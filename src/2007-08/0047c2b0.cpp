// roc 2007-08 0047c2b0  unit: G3D::GWindow  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c2b0
//
// 0047c2b0  6aff                 push -1
// 0047c2b2  6818587400           push 0x745818
// 0047c2b7  64a100000000         mov eax, dword ptr fs:[0]
// 0047c2bd  50                   push eax
// 0047c2be  83ec14               sub esp, 0x14
// 0047c2c1  56                   push esi
// 0047c2c2  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047c2c7  33c4                 xor eax, esp
// 0047c2c9  50                   push eax
// 0047c2ca  8d44241c             lea eax, [esp + 0x1c]
// 0047c2ce  64a300000000         mov dword ptr fs:[0], eax
// 0047c2d4  8bf1                 mov esi, ecx
// 0047c2d6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0047c2da  6a08                 push 8
// 0047c2dc  50                   push eax
// 0047c2dd  8d4c2410             lea ecx, [esp + 0x10]
// 0047c2e1  e8daa60800           call 0x5069c0
// 0047c2e6  8b16                 mov edx, dword ptr [esi]
// 0047c2e8  50                   push eax
// 0047c2e9  8b423c               mov eax, dword ptr [edx + 0x3c]
// 0047c2ec  8bce                 mov ecx, esi
// 0047c2ee  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0047c2f6  ffd0                 call eax
// 0047c2f8  8d4c2408             lea ecx, [esp + 8]
// 0047c2fc  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0047c304  e8b7900800           call 0x5053c0
// 0047c309  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047c30d  64890d00000000       mov dword ptr fs:[0], ecx
// 0047c314  59                   pop ecx
// 0047c315  5e                   pop esi
// 0047c316  83c420               add esp, 0x20
// 0047c319  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?setIcon@GWindow@G3D@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
