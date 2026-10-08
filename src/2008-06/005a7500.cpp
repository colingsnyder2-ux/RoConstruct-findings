// from server: 100% by auto
// roc 2008-06 005a7500  unit: RBX::Log  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a7500
//
// 005a7500  6aff                 push -1
// 005a7502  68d8dd7c00           push 0x7cddd8
// 005a7507  64a100000000         mov eax, dword ptr fs:[0]
// 005a750d  50                   push eax
// 005a750e  64892500000000       mov dword ptr fs:[0], esp
// 005a7515  83ec08               sub esp, 8
// 005a7518  8b0d586b9700         mov ecx, dword ptr [0x976b58]
// 005a751e  890c24               mov dword ptr [esp], ecx
// 005a7521  e8bad7feff           call 0x594ce0
// 005a7526  c644240401           mov byte ptr [esp + 4], 1
// 005a752b  8d0424               lea eax, [esp]
// 005a752e  50                   push eax
// 005a752f  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a7537  e884fbffff           call 0x5a70c0
// 005a753c  83c404               add esp, 4
// 005a753f  807c240400           cmp byte ptr [esp + 4], 0
// 005a7544  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005a754c  7408                 je 0x5a7556
// 005a754e  8b0c24               mov ecx, dword ptr [esp]
// 005a7551  e8aad7feff           call 0x594d00
// 005a7556  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a755a  64890d00000000       mov dword ptr fs:[0], ecx
// 005a7561  83c414               add esp, 0x14
// 005a7564  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss.cpp (function ??1tss@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss.cpp
