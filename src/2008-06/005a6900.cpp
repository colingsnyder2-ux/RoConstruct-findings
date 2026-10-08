// from server: 100% by auto
// roc 2008-06 005a6900  unit: RBX::Workspace  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a6900
//
// 005a6900  6aff                 push -1
// 005a6902  68d8dd7c00           push 0x7cddd8
// 005a6907  64a100000000         mov eax, dword ptr fs:[0]
// 005a690d  50                   push eax
// 005a690e  64892500000000       mov dword ptr fs:[0], esp
// 005a6915  83ec0c               sub esp, 0xc
// 005a6918  56                   push esi
// 005a6919  8bf1                 mov esi, ecx
// 005a691b  89742408             mov dword ptr [esp + 8], esi
// 005a691f  e8bce3feff           call 0x594ce0
// 005a6924  c644240c01           mov byte ptr [esp + 0xc], 1
// 005a6929  807e2400             cmp byte ptr [esi + 0x24], 0
// 005a692d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a6935  7536                 jne 0x5a696d
// 005a6937  57                   push edi
// 005a6938  8d7e08               lea edi, [esi + 8]
// 005a693b  eb03                 jmp 0x5a6940
// 005a693d  8d4900               lea ecx, [ecx]
// 005a6940  8bcf                 mov ecx, edi
// 005a6942  e889b40400           call 0x5f1dd0
// 005a6947  8d442408             lea eax, [esp + 8]
// 005a694b  50                   push eax
// 005a694c  8bce                 mov ecx, esi
// 005a694e  e8ede3feff           call 0x594d40
// 005a6953  8bcf                 mov ecx, edi
// 005a6955  e896b40400           call 0x5f1df0
// 005a695a  8d4c2408             lea ecx, [esp + 8]
// 005a695e  51                   push ecx
// 005a695f  8bce                 mov ecx, esi
// 005a6961  e8bae3feff           call 0x594d20
// 005a6966  807e2400             cmp byte ptr [esi + 0x24], 0
// 005a696a  74d4                 je 0x5a6940
// 005a696c  5f                   pop edi
// 005a696d  8bce                 mov ecx, esi
// 005a696f  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005a6977  e884e3feff           call 0x594d00
// 005a697c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a6980  5e                   pop esi
// 005a6981  64890d00000000       mov dword ptr fs:[0], ecx
// 005a6988  83c418               add esp, 0x18
// 005a698b  c3                   ret 
// library boost-1.34.1/libs\thread\src\thread.cpp (function ?wait@thread_param@?A0xa3d17fbe@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/thread.cpp
