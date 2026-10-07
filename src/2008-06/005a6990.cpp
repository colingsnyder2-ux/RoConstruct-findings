// roc 2008-06 005a6990  unit: RBX::Workspace  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a6990
//
// 005a6990  6aff                 push -1
// 005a6992  68d8dd7c00           push 0x7cddd8
// 005a6997  64a100000000         mov eax, dword ptr fs:[0]
// 005a699d  50                   push eax
// 005a699e  64892500000000       mov dword ptr fs:[0], esp
// 005a69a5  83ec08               sub esp, 8
// 005a69a8  56                   push esi
// 005a69a9  8bf1                 mov esi, ecx
// 005a69ab  89742404             mov dword ptr [esp + 4], esi
// 005a69af  e82ce3feff           call 0x594ce0
// 005a69b4  b001                 mov al, 1
// 005a69b6  88442408             mov byte ptr [esp + 8], al
// 005a69ba  8d4e08               lea ecx, [esi + 8]
// 005a69bd  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a69c5  884624               mov byte ptr [esi + 0x24], al
// 005a69c8  e8c3b20400           call 0x5f1c90
// 005a69cd  8bce                 mov ecx, esi
// 005a69cf  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005a69d7  e824e3feff           call 0x594d00
// 005a69dc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a69e0  5e                   pop esi
// 005a69e1  64890d00000000       mov dword ptr fs:[0], ecx
// 005a69e8  83c414               add esp, 0x14
// 005a69eb  c3                   ret 
// library boost-1.34.1/libs\thread\src\thread.cpp (function ?started@thread_param@?A0xa3d17fbe@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/thread.cpp
