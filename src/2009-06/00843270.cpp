// roc 2009-06 00843270  unit: Ogre::RbxSceneNode  size: 680 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00843270
//
// 00843270  6aff                 push -1
// 00843272  6879398800           push 0x883979
// 00843277  64a100000000         mov eax, dword ptr fs:[0]
// 0084327d  50                   push eax
// 0084327e  64892500000000       mov dword ptr fs:[0], esp
// 00843285  83ec7c               sub esp, 0x7c
// 00843288  53                   push ebx
// 00843289  55                   push ebp
// 0084328a  33ed                 xor ebp, ebp
// 0084328c  56                   push esi
// 0084328d  8bf1                 mov esi, ecx
// 0084328f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00843293  89742414             mov dword ptr [esp + 0x14], esi
// 00843297  892e                 mov dword ptr [esi], ebp
// 00843299  6860d14900           push 0x49d160
// 0084329e  6880ae4900           push 0x49ae80
// 008432a3  6a02                 push 2
// 008432a5  6a04                 push 4
// 008432a7  8d4608               lea eax, [esi + 8]
// 008432aa  50                   push eax
// 008432ab  89ac24a4000000       mov dword ptr [esp + 0xa4], ebp
// 008432b2  e8c969edff           call 0x719c80
// 008432b7  896e10               mov dword ptr [esi + 0x10], ebp
// 008432ba  bb01000000           mov ebx, 1
// 008432bf  c6461401             mov byte ptr [esi + 0x14], 1
// 008432c3  c684249000000002     mov byte ptr [esp + 0x90], 2
// 008432cb  391dc892a300         cmp dword ptr [0xa392c8], ebx
// 008432d1  0f85ff010000         jne 0x8434d6
// 008432d7  803d08c9a30000       cmp byte ptr [0xa3c908], 0
// 008432de  892dc892a300         mov dword ptr [0xa392c8], ebp
// 008432e4  0f8414020000         je 0x8434fe
// 008432ea  e831c0c6ff           call 0x4af320
// 008432ef  84c0                 test al, al
// 008432f1  740f                 je 0x843302
// 008432f3  c705c892a30004000000 mov dword ptr [0xa392c8], 4
// 008432fd  e9dc010000           jmp 0x8434de
// 00843302  68c8489200           push 0x9248c8
// 00843307  8d4c2470             lea ecx, [esp + 0x70]
// 0084330b  ff15b4e48900         call dword ptr [0x89e4b4]
// 00843311  8d4c246c             lea ecx, [esp + 0x6c]
// 00843315  51                   push ecx
// 00843316  c684249400000003     mov byte ptr [esp + 0x94], 3
// 0084331e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00843322  e82940c6ff           call 0x4a7350
// 00843327  83c404               add esp, 4
// 0084332a  84c0                 test al, al
// 0084332c  0f84aa000000         je 0x8433dc
// 00843332  685cff8b00           push 0x8bff5c
// 00843337  8d4c2454             lea ecx, [esp + 0x54]
// 0084333b  ff15b4e48900         call dword ptr [0x89e4b4]
// 00843341  8d542450             lea edx, [esp + 0x50]
// 00843345  bb03000000           mov ebx, 3
// 0084334a  52                   push edx
// 0084334b  c784249400000004000000 mov dword ptr [esp + 0x94], 4
// 00843356  895c2414             mov dword ptr [esp + 0x14], ebx
// 0084335a  e8f13fc6ff           call 0x4a7350
// 0084335f  83c404               add esp, 4
// 00843362  84c0                 test al, al
// 00843364  7476                 je 0x8433dc
// 00843366  6878ff8b00           push 0x8bff78
// 0084336b  8d4c2438             lea ecx, [esp + 0x38]
// 0084336f  ff15b4e48900         call dword ptr [0x89e4b4]
// 00843375  8d442434             lea eax, [esp + 0x34]
// 00843379  bb07000000           mov ebx, 7
// 0084337e  50                   push eax
// 0084337f  c784249400000005000000 mov dword ptr [esp + 0x94], 5
// 0084338a  895c2414             mov dword ptr [esp + 0x14], ebx
// 0084338e  e8bd3fc6ff           call 0x4a7350
// 00843393  83c404               add esp, 4
// 00843396  84c0                 test al, al
// 00843398  7442                 je 0x8433dc
// 0084339a  68b0489200           push 0x9248b0
// 0084339f  8d4c241c             lea ecx, [esp + 0x1c]
// 008433a3  ff15b4e48900         call dword ptr [0x89e4b4]
// 008433a9  8d4c2418             lea ecx, [esp + 0x18]
// 008433ad  bb0f000000           mov ebx, 0xf
// 008433b2  51                   push ecx
// 008433b3  c784249400000006000000 mov dword ptr [esp + 0x94], 6
// 008433be  895c2414             mov dword ptr [esp + 0x14], ebx
// 008433c2  e8893fc6ff           call 0x4a7350
// 008433c7  83c404               add esp, 4
// 008433ca  84c0                 test al, al
// 008433cc  740e                 je 0x8433dc
// 008433ce  833d00c9a30004       cmp dword ptr [0xa3c900], 4
// 008433d5  c644240f01           mov byte ptr [esp + 0xf], 1
// 008433da  7d05                 jge 0x8433e1
// 008433dc  c644240f00           mov byte ptr [esp + 0xf], 0
// 008433e1  c784249000000005000000 mov dword ptr [esp + 0x90], 5
// 008433ec  f6c308               test bl, 8
// 008433ef  7411                 je 0x843402
// 008433f1  83e3f7               and ebx, 0xfffffff7
// 008433f4  8d4c2418             lea ecx, [esp + 0x18]
// 008433f8  895c2410             mov dword ptr [esp + 0x10], ebx
// 008433fc  ff15c4e48900         call dword ptr [0x89e4c4]
// 00843402  c784249000000004000000 mov dword ptr [esp + 0x90], 4
// 0084340d  f6c304               test bl, 4
// 00843410  7411                 je 0x843423
// 00843412  83e3fb               and ebx, 0xfffffffb
// 00843415  8d4c2434             lea ecx, [esp + 0x34]
// 00843419  895c2410             mov dword ptr [esp + 0x10], ebx
// 0084341d  ff15c4e48900         call dword ptr [0x89e4c4]
// 00843423  c784249000000003000000 mov dword ptr [esp + 0x90], 3
// 0084342e  f6c302               test bl, 2
// 00843431  7411                 je 0x843444
// 00843433  83e3fd               and ebx, 0xfffffffd
// 00843436  8d4c2450             lea ecx, [esp + 0x50]
// 0084343a  895c2410             mov dword ptr [esp + 0x10], ebx
// 0084343e  ff15c4e48900         call dword ptr [0x89e4c4]
// 00843444  c784249000000002000000 mov dword ptr [esp + 0x90], 2
// 0084344f  f6c301               test bl, 1
// 00843452  740d                 je 0x843461
// 00843454  8d4c246c             lea ecx, [esp + 0x6c]
// 00843458  83e3fe               and ebx, 0xfffffffe
// 0084345b  ff15c4e48900         call dword ptr [0x89e4c4]
// 00843461  807c240f00           cmp byte ptr [esp + 0xf], 0
// 00843466  740b                 je 0x843473
// 00843468  892dc892a300         mov dword ptr [0xa392c8], ebp
// 0084346e  e98b000000           jmp 0x8434fe
// 00843473  6878a88c00           push 0x8ca878
// 00843478  8d4c2470             lea ecx, [esp + 0x70]
// 0084347c  ff15b4e48900         call dword ptr [0x89e4b4]
// 00843482  8d54246c             lea edx, [esp + 0x6c]
// 00843486  83cb10               or ebx, 0x10
// 00843489  52                   push edx
// 0084348a  c684249400000007     mov byte ptr [esp + 0x94], 7
// 00843492  895c2414             mov dword ptr [esp + 0x14], ebx
// 00843496  e8b53ec6ff           call 0x4a7350
// 0084349b  83c404               add esp, 4
// 0084349e  84c0                 test al, al
// 008434a0  740e                 je 0x8434b0
// 008434a2  833d00c9a30004       cmp dword ptr [0xa3c900], 4
// 008434a9  c644240f01           mov byte ptr [esp + 0xf], 1
// 008434ae  7d05                 jge 0x8434b5
// 008434b0  c644240f00           mov byte ptr [esp + 0xf], 0
// 008434b5  c784249000000002000000 mov dword ptr [esp + 0x90], 2
// 008434c0  f6c310               test bl, 0x10
// 008434c3  740a                 je 0x8434cf
// 008434c5  8d4c246c             lea ecx, [esp + 0x6c]
// 008434c9  ff15c4e48900         call dword ptr [0x89e4c4]
// 008434cf  807c240f00           cmp byte ptr [esp + 0xf], 0
// 008434d4  7592                 jne 0x843468
// 008434d6  392dc892a300         cmp dword ptr [0xa392c8], ebp
// 008434dc  7420                 je 0x8434fe
// 008434de  e88deaffff           call 0x841f70
// 008434e3  a1c892a300           mov eax, dword ptr [0xa392c8]
// 008434e8  83f804               cmp eax, 4
// 008434eb  7507                 jne 0x8434f4
// 008434ed  e84efaffff           call 0x842f40
// 008434f2  eb0a                 jmp 0x8434fe
// 008434f4  83f802               cmp eax, 2
// 008434f7  7505                 jne 0x8434fe
// 008434f9  e882e8ffff           call 0x841d80
// 008434fe  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00843505  8bc6                 mov eax, esi
// 00843507  5e                   pop esi
// 00843508  5d                   pop ebp
// 00843509  5b                   pop ebx
// 0084350a  64890d00000000       mov dword ptr fs:[0], ecx
// 00843511  81c488000000         add esp, 0x88
// 00843517  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??0ToneMap@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
