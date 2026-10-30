// roc 2009-12 0083a260  unit: CXTPDockingPaneManager  size: 659 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083a260
//
// 0083a260  6aff                 push -1
// 0083a262  68e0c69500           push 0x95c6e0
// 0083a267  64a100000000         mov eax, dword ptr fs:[0]
// 0083a26d  50                   push eax
// 0083a26e  83ec08               sub esp, 8
// 0083a271  53                   push ebx
// 0083a272  56                   push esi
// 0083a273  57                   push edi
// 0083a274  a10052b600           mov eax, dword ptr [0xb65200]
// 0083a279  33c4                 xor eax, esp
// 0083a27b  50                   push eax
// 0083a27c  8d442418             lea eax, [esp + 0x18]
// 0083a280  64a300000000         mov dword ptr fs:[0], eax
// 0083a286  8bf1                 mov esi, ecx
// 0083a288  89742410             mov dword ptr [esp + 0x10], esi
// 0083a28c  e8b79efbff           call 0x7f4148
// 0083a291  8d5e54               lea ebx, [esi + 0x54]
// 0083a294  33ff                 xor edi, edi
// 0083a296  8bcb                 mov ecx, ebx
// 0083a298  897c2420             mov dword ptr [esp + 0x20], edi
// 0083a29c  e83f250000           call 0x83c7e0
// 0083a2a1  8d8e1c010000         lea ecx, [esi + 0x11c]
// 0083a2a7  c706ac7e9f00         mov dword ptr [esi], 0x9f7eac
// 0083a2ad  c7034c7e9f00         mov dword ptr [ebx], 0x9f7e4c
// 0083a2b3  ff1574de9800         call dword ptr [0x98de74]
// 0083a2b9  8d8e48010000         lea ecx, [esi + 0x148]
// 0083a2bf  ff1574de9800         call dword ptr [0x98de74]
// 0083a2c5  b303                 mov bl, 3
// 0083a2c7  57                   push edi
// 0083a2c8  8bce                 mov ecx, esi
// 0083a2ca  885c2424             mov byte ptr [esp + 0x24], bl
// 0083a2ce  89becc000000         mov dword ptr [esi + 0xcc], edi
// 0083a2d4  89bed0000000         mov dword ptr [esi + 0xd0], edi
// 0083a2da  c786b000000016000000 mov dword ptr [esi + 0xb0], 0x16
// 0083a2e4  89bedc000000         mov dword ptr [esi + 0xdc], edi
// 0083a2ea  89be14010000         mov dword ptr [esi + 0x114], edi
// 0083a2f0  89be3c010000         mov dword ptr [esi + 0x13c], edi
// 0083a2f6  89bee8000000         mov dword ptr [esi + 0xe8], edi
// 0083a2fc  c786ec00000001000000 mov dword ptr [esi + 0xec], 1
// 0083a306  89bed4000000         mov dword ptr [esi + 0xd4], edi
// 0083a30c  e8eff9ffff           call 0x839d00
// 0083a311  6a7c                 push 0x7c
// 0083a313  e84895fbff           call 0x7f3860
// 0083a318  83c404               add esp, 4
// 0083a31b  89442414             mov dword ptr [esp + 0x14], eax
// 0083a31f  c644242004           mov byte ptr [esp + 0x20], 4
// 0083a324  3bc7                 cmp eax, edi
// 0083a326  7409                 je 0x83a331
// 0083a328  8bc8                 mov ecx, eax
// 0083a32a  e8f124fdff           call 0x80c820
// 0083a32f  eb02                 jmp 0x83a333
// 0083a331  33c0                 xor eax, eax
// 0083a333  6890010000           push 0x190
// 0083a338  885c2424             mov byte ptr [esp + 0x24], bl
// 0083a33c  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 0083a342  89bef4000000         mov dword ptr [esi + 0xf4], edi
// 0083a348  89be04010000         mov dword ptr [esi + 0x104], edi
// 0083a34e  e80d95fbff           call 0x7f3860
// 0083a353  83c404               add esp, 4
// 0083a356  89442414             mov dword ptr [esp + 0x14], eax
// 0083a35a  c644242005           mov byte ptr [esp + 0x20], 5
// 0083a35f  3bc7                 cmp eax, edi
// 0083a361  7409                 je 0x83a36c
// 0083a363  8bc8                 mov ecx, eax
// 0083a365  e856360800           call 0x8bd9c0
// 0083a36a  eb02                 jmp 0x83a36e
// 0083a36c  33c0                 xor eax, eax
// 0083a36e  898624010000         mov dword ptr [esi + 0x124], eax
// 0083a374  89b01c010000         mov dword ptr [eax + 0x11c], esi
// 0083a37a  68a8000000           push 0xa8
// 0083a37f  885c2424             mov byte ptr [esp + 0x24], bl
// 0083a383  89bef8000000         mov dword ptr [esi + 0xf8], edi
// 0083a389  89befc000000         mov dword ptr [esi + 0xfc], edi
// 0083a38f  89be20010000         mov dword ptr [esi + 0x120], edi
// 0083a395  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 0083a39b  c786b800000001000000 mov dword ptr [esi + 0xb8], 1
// 0083a3a5  89be28010000         mov dword ptr [esi + 0x128], edi
// 0083a3ab  c7860801000001000000 mov dword ptr [esi + 0x108], 1
// 0083a3b5  89be18010000         mov dword ptr [esi + 0x118], edi
// 0083a3bb  e8a094fbff           call 0x7f3860
// 0083a3c0  83c404               add esp, 4
// 0083a3c3  89442414             mov dword ptr [esp + 0x14], eax
// 0083a3c7  c644242006           mov byte ptr [esp + 0x20], 6
// 0083a3cc  3bc7                 cmp eax, edi
// 0083a3ce  7409                 je 0x83a3d9
// 0083a3d0  8bc8                 mov ecx, eax
// 0083a3d2  e819760200           call 0x8619f0
// 0083a3d7  eb02                 jmp 0x83a3db
// 0083a3d9  33c0                 xor eax, eax
// 0083a3db  89862c010000         mov dword ptr [esi + 0x12c], eax
// 0083a3e1  b83c000000           mov eax, 0x3c
// 0083a3e6  8bc8                 mov ecx, eax
// 0083a3e8  6874299f00           push 0x9f2974
// 0083a3ed  885c2424             mov byte ptr [esp + 0x24], bl
// 0083a3f1  89bed8000000         mov dword ptr [esi + 0xd8], edi
// 0083a3f7  89bef0000000         mov dword ptr [esi + 0xf0], edi
// 0083a3fd  89be40010000         mov dword ptr [esi + 0x140], edi
// 0083a403  89be00010000         mov dword ptr [esi + 0x100], edi
// 0083a409  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 0083a40f  89be44010000         mov dword ptr [esi + 0x144], edi
// 0083a415  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0083a41b  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 0083a421  89be38010000         mov dword ptr [esi + 0x138], edi
// 0083a427  89bee0000000         mov dword ptr [esi + 0xe0], edi
// 0083a42d  c786c80000000f000000 mov dword ptr [esi + 0xc8], 0xf
// 0083a437  c7860c010000ff000000 mov dword ptr [esi + 0x10c], 0xff
// 0083a441  89be10010000         mov dword ptr [esi + 0x110], edi
// 0083a447  ff151cb29800         call dword ptr [0x98b21c]
// 0083a44d  3bc7                 cmp eax, edi
// 0083a44f  7412                 je 0x83a463
// 0083a451  6858299f00           push 0x9f2958
// 0083a456  50                   push eax
// 0083a457  ff1520b29800         call dword ptr [0x98b220]
// 0083a45d  898630010000         mov dword ptr [esi + 0x130], eax
// 0083a463  e8382e0100           call 0x84d2a0
// 0083a468  57                   push edi
// 0083a469  57                   push edi
// 0083a46a  68b8809f00           push 0x9f80b8
// 0083a46f  57                   push edi
// 0083a470  e89b1d0100           call 0x84c210
// 0083a475  e8262e0100           call 0x84d2a0
// 0083a47a  57                   push edi
// 0083a47b  6a08                 push 8
// 0083a47d  6898809f00           push 0x9f8098
// 0083a482  57                   push edi
// 0083a483  e8881d0100           call 0x84c210
// 0083a488  e8132e0100           call 0x84d2a0
// 0083a48d  57                   push edi
// 0083a48e  57                   push edi
// 0083a48f  6834809f00           push 0x9f8034
// 0083a494  57                   push edi
// 0083a495  e8761d0100           call 0x84c210
// 0083a49a  e8012e0100           call 0x84d2a0
// 0083a49f  57                   push edi
// 0083a4a0  57                   push edi
// 0083a4a1  687c809f00           push 0x9f807c
// 0083a4a6  57                   push edi
// 0083a4a7  e8641d0100           call 0x84c210
// 0083a4ac  83c440               add esp, 0x40
// 0083a4af  e8ec2d0100           call 0x84d2a0
// 0083a4b4  57                   push edi
// 0083a4b5  6a08                 push 8
// 0083a4b7  6864809f00           push 0x9f8064
// 0083a4bc  57                   push edi
// 0083a4bd  e84e1d0100           call 0x84c210
// 0083a4c2  83c410               add esp, 0x10
// 0083a4c5  e8361f0700           call 0x8ac400
// 0083a4ca  57                   push edi
// 0083a4cb  898634010000         mov dword ptr [esi + 0x134], eax
// 0083a4d1  ff15c4e09800         call dword ptr [0x98e0c4]
// 0083a4d7  8bce                 mov ecx, esi
// 0083a4d9  e86abf0e00           call 0x926448
// 0083a4de  8bc6                 mov eax, esi
// 0083a4e0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083a4e4  64890d00000000       mov dword ptr fs:[0], ecx
// 0083a4eb  59                   pop ecx
// 0083a4ec  5f                   pop edi
// 0083a4ed  5e                   pop esi
// 0083a4ee  5b                   pop ebx
// 0083a4ef  83c414               add esp, 0x14
// 0083a4f2  c3                   ret 
// copied from an identical function in another client (function ??0CXTPDockingPaneManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp