// roc 2008-06 007b29c0  unit: RBX::RenderNew::TextureProxy  size: 680 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b29c0
//
// 007b29c0  6aff                 push -1
// 007b29c2  6879e07e00           push 0x7ee079
// 007b29c7  64a100000000         mov eax, dword ptr fs:[0]
// 007b29cd  50                   push eax
// 007b29ce  64892500000000       mov dword ptr fs:[0], esp
// 007b29d5  83ec7c               sub esp, 0x7c
// 007b29d8  53                   push ebx
// 007b29d9  55                   push ebp
// 007b29da  33ed                 xor ebp, ebp
// 007b29dc  56                   push esi
// 007b29dd  8bf1                 mov esi, ecx
// 007b29df  896c2410             mov dword ptr [esp + 0x10], ebp
// 007b29e3  89742414             mov dword ptr [esp + 0x14], esi
// 007b29e7  892e                 mov dword ptr [esi], ebp
// 007b29e9  68702a5000           push 0x502a70
// 007b29ee  6810084f00           push 0x4f0810
// 007b29f3  6a02                 push 2
// 007b29f5  6a04                 push 4
// 007b29f7  8d4608               lea eax, [esi + 8]
// 007b29fa  50                   push eax
// 007b29fb  89ac24a4000000       mov dword ptr [esp + 0xa4], ebp
// 007b2a02  e891ebeeff           call 0x6a1598
// 007b2a07  896e10               mov dword ptr [esi + 0x10], ebp
// 007b2a0a  bb01000000           mov ebx, 1
// 007b2a0f  c6461401             mov byte ptr [esi + 0x14], 1
// 007b2a13  c684249000000002     mov byte ptr [esp + 0x90], 2
// 007b2a1b  391d30bf9600         cmp dword ptr [0x96bf30], ebx
// 007b2a21  0f85ff010000         jne 0x7b2c26
// 007b2a27  803d78ee960000       cmp byte ptr [0x96ee78], 0
// 007b2a2e  892d30bf9600         mov dword ptr [0x96bf30], ebp
// 007b2a34  0f8414020000         je 0x7b2c4e
// 007b2a3a  e8f129cdff           call 0x485430
// 007b2a3f  84c0                 test al, al
// 007b2a41  740f                 je 0x7b2a52
// 007b2a43  c70530bf960004000000 mov dword ptr [0x96bf30], 4
// 007b2a4d  e9dc010000           jmp 0x7b2c2e
// 007b2a52  6870598700           push 0x875970
// 007b2a57  8d4c2470             lea ecx, [esp + 0x70]
// 007b2a5b  ff1558248000         call dword ptr [0x802458]
// 007b2a61  8d4c246c             lea ecx, [esp + 0x6c]
// 007b2a65  51                   push ecx
// 007b2a66  c684249400000003     mov byte ptr [esp + 0x94], 3
// 007b2a6e  895c2414             mov dword ptr [esp + 0x14], ebx
// 007b2a72  e8e9e5cbff           call 0x471060
// 007b2a77  83c404               add esp, 4
// 007b2a7a  84c0                 test al, al
// 007b2a7c  0f84aa000000         je 0x7b2b2c
// 007b2a82  68ace48100           push 0x81e4ac
// 007b2a87  8d4c2454             lea ecx, [esp + 0x54]
// 007b2a8b  ff1558248000         call dword ptr [0x802458]
// 007b2a91  8d542450             lea edx, [esp + 0x50]
// 007b2a95  bb03000000           mov ebx, 3
// 007b2a9a  52                   push edx
// 007b2a9b  c784249400000004000000 mov dword ptr [esp + 0x94], 4
// 007b2aa6  895c2414             mov dword ptr [esp + 0x14], ebx
// 007b2aaa  e8b1e5cbff           call 0x471060
// 007b2aaf  83c404               add esp, 4
// 007b2ab2  84c0                 test al, al
// 007b2ab4  7476                 je 0x7b2b2c
// 007b2ab6  68c8e48100           push 0x81e4c8
// 007b2abb  8d4c2438             lea ecx, [esp + 0x38]
// 007b2abf  ff1558248000         call dword ptr [0x802458]
// 007b2ac5  8d442434             lea eax, [esp + 0x34]
// 007b2ac9  bb07000000           mov ebx, 7
// 007b2ace  50                   push eax
// 007b2acf  c784249400000005000000 mov dword ptr [esp + 0x94], 5
// 007b2ada  895c2414             mov dword ptr [esp + 0x14], ebx
// 007b2ade  e87de5cbff           call 0x471060
// 007b2ae3  83c404               add esp, 4
// 007b2ae6  84c0                 test al, al
// 007b2ae8  7442                 je 0x7b2b2c
// 007b2aea  6858598700           push 0x875958
// 007b2aef  8d4c241c             lea ecx, [esp + 0x1c]
// 007b2af3  ff1558248000         call dword ptr [0x802458]
// 007b2af9  8d4c2418             lea ecx, [esp + 0x18]
// 007b2afd  bb0f000000           mov ebx, 0xf
// 007b2b02  51                   push ecx
// 007b2b03  c784249400000006000000 mov dword ptr [esp + 0x94], 6
// 007b2b0e  895c2414             mov dword ptr [esp + 0x14], ebx
// 007b2b12  e849e5cbff           call 0x471060
// 007b2b17  83c404               add esp, 4
// 007b2b1a  84c0                 test al, al
// 007b2b1c  740e                 je 0x7b2b2c
// 007b2b1e  833d70ee960004       cmp dword ptr [0x96ee70], 4
// 007b2b25  c644240f01           mov byte ptr [esp + 0xf], 1
// 007b2b2a  7d05                 jge 0x7b2b31
// 007b2b2c  c644240f00           mov byte ptr [esp + 0xf], 0
// 007b2b31  c784249000000005000000 mov dword ptr [esp + 0x90], 5
// 007b2b3c  f6c308               test bl, 8
// 007b2b3f  7411                 je 0x7b2b52
// 007b2b41  83e3f7               and ebx, 0xfffffff7
// 007b2b44  8d4c2418             lea ecx, [esp + 0x18]
// 007b2b48  895c2410             mov dword ptr [esp + 0x10], ebx
// 007b2b4c  ff1568248000         call dword ptr [0x802468]
// 007b2b52  c784249000000004000000 mov dword ptr [esp + 0x90], 4
// 007b2b5d  f6c304               test bl, 4
// 007b2b60  7411                 je 0x7b2b73
// 007b2b62  83e3fb               and ebx, 0xfffffffb
// 007b2b65  8d4c2434             lea ecx, [esp + 0x34]
// 007b2b69  895c2410             mov dword ptr [esp + 0x10], ebx
// 007b2b6d  ff1568248000         call dword ptr [0x802468]
// 007b2b73  c784249000000003000000 mov dword ptr [esp + 0x90], 3
// 007b2b7e  f6c302               test bl, 2
// 007b2b81  7411                 je 0x7b2b94
// 007b2b83  83e3fd               and ebx, 0xfffffffd
// 007b2b86  8d4c2450             lea ecx, [esp + 0x50]
// 007b2b8a  895c2410             mov dword ptr [esp + 0x10], ebx
// 007b2b8e  ff1568248000         call dword ptr [0x802468]
// 007b2b94  c784249000000002000000 mov dword ptr [esp + 0x90], 2
// 007b2b9f  f6c301               test bl, 1
// 007b2ba2  740d                 je 0x7b2bb1
// 007b2ba4  8d4c246c             lea ecx, [esp + 0x6c]
// 007b2ba8  83e3fe               and ebx, 0xfffffffe
// 007b2bab  ff1568248000         call dword ptr [0x802468]
// 007b2bb1  807c240f00           cmp byte ptr [esp + 0xf], 0
// 007b2bb6  740b                 je 0x7b2bc3
// 007b2bb8  892d30bf9600         mov dword ptr [0x96bf30], ebp
// 007b2bbe  e98b000000           jmp 0x7b2c4e
// 007b2bc3  68e8728200           push 0x8272e8
// 007b2bc8  8d4c2470             lea ecx, [esp + 0x70]
// 007b2bcc  ff1558248000         call dword ptr [0x802458]
// 007b2bd2  8d54246c             lea edx, [esp + 0x6c]
// 007b2bd6  83cb10               or ebx, 0x10
// 007b2bd9  52                   push edx
// 007b2bda  c684249400000007     mov byte ptr [esp + 0x94], 7
// 007b2be2  895c2414             mov dword ptr [esp + 0x14], ebx
// 007b2be6  e875e4cbff           call 0x471060
// 007b2beb  83c404               add esp, 4
// 007b2bee  84c0                 test al, al
// 007b2bf0  740e                 je 0x7b2c00
// 007b2bf2  833d70ee960004       cmp dword ptr [0x96ee70], 4
// 007b2bf9  c644240f01           mov byte ptr [esp + 0xf], 1
// 007b2bfe  7d05                 jge 0x7b2c05
// 007b2c00  c644240f00           mov byte ptr [esp + 0xf], 0
// 007b2c05  c784249000000002000000 mov dword ptr [esp + 0x90], 2
// 007b2c10  f6c310               test bl, 0x10
// 007b2c13  740a                 je 0x7b2c1f
// 007b2c15  8d4c246c             lea ecx, [esp + 0x6c]
// 007b2c19  ff1568248000         call dword ptr [0x802468]
// 007b2c1f  807c240f00           cmp byte ptr [esp + 0xf], 0
// 007b2c24  7592                 jne 0x7b2bb8
// 007b2c26  392d30bf9600         cmp dword ptr [0x96bf30], ebp
// 007b2c2c  7420                 je 0x7b2c4e
// 007b2c2e  e88deaffff           call 0x7b16c0
// 007b2c33  a130bf9600           mov eax, dword ptr [0x96bf30]
// 007b2c38  83f804               cmp eax, 4
// 007b2c3b  7507                 jne 0x7b2c44
// 007b2c3d  e84efaffff           call 0x7b2690
// 007b2c42  eb0a                 jmp 0x7b2c4e
// 007b2c44  83f802               cmp eax, 2
// 007b2c47  7505                 jne 0x7b2c4e
// 007b2c49  e882e8ffff           call 0x7b14d0
// 007b2c4e  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007b2c55  8bc6                 mov eax, esi
// 007b2c57  5e                   pop esi
// 007b2c58  5d                   pop ebp
// 007b2c59  5b                   pop ebx
// 007b2c5a  64890d00000000       mov dword ptr fs:[0], ecx
// 007b2c61  81c488000000         add esp, 0x88
// 007b2c67  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??0ToneMap@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
