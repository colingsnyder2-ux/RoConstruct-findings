// roc 2010-06 0089a230  unit: CXTCaptionButton  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089a230
//
// 0089a230  6aff                 push -1
// 0089a232  68fabf9b00           push 0x9bbffa
// 0089a237  64a100000000         mov eax, dword ptr fs:[0]
// 0089a23d  50                   push eax
// 0089a23e  83ec0c               sub esp, 0xc
// 0089a241  56                   push esi
// 0089a242  57                   push edi
// 0089a243  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0089a248  33c4                 xor eax, esp
// 0089a24a  50                   push eax
// 0089a24b  8d442418             lea eax, [esp + 0x18]
// 0089a24f  64a300000000         mov dword ptr fs:[0], eax
// 0089a255  8bf9                 mov edi, ecx
// 0089a257  837c242800           cmp dword ptr [esp + 0x28], 0
// 0089a25c  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0089a264  7507                 jne 0x89a26d
// 0089a266  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0089a26b  7406                 je 0x89a273
// 0089a26d  8d442428             lea eax, [esp + 0x28]
// 0089a271  eb0e                 jmp 0x89a281
// 0089a273  8d442410             lea eax, [esp + 0x10]
// 0089a277  50                   push eax
// 0089a278  8d4c2434             lea ecx, [esp + 0x34]
// 0089a27c  e82f30f2ff           call 0x7bd2b0
// 0089a281  8b08                 mov ecx, dword ptr [eax]
// 0089a283  894c2428             mov dword ptr [esp + 0x28], ecx
// 0089a287  8b5004               mov edx, dword ptr [eax + 4]
// 0089a28a  6858010000           push 0x158
// 0089a28f  89542430             mov dword ptr [esp + 0x30], edx
// 0089a293  e808d7f0ff           call 0x7a79a0
// 0089a298  83c404               add esp, 4
// 0089a29b  8944240c             mov dword ptr [esp + 0xc], eax
// 0089a29f  c644242002           mov byte ptr [esp + 0x20], 2
// 0089a2a4  85c0                 test eax, eax
// 0089a2a6  7419                 je 0x89a2c1
// 0089a2a8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089a2ac  8b542428             mov edx, dword ptr [esp + 0x28]
// 0089a2b0  6a00                 push 0
// 0089a2b2  51                   push ecx
// 0089a2b3  52                   push edx
// 0089a2b4  6a00                 push 0
// 0089a2b6  8bc8                 mov ecx, eax
// 0089a2b8  e8a36ef2ff           call 0x7c1160
// 0089a2bd  8bf0                 mov esi, eax
// 0089a2bf  eb02                 jmp 0x89a2c3
// 0089a2c1  33f6                 xor esi, esi
// 0089a2c3  83ec24               sub esp, 0x24
// 0089a2c6  8d442454             lea eax, [esp + 0x54]
// 0089a2ca  8bcc                 mov ecx, esp
// 0089a2cc  89642430             mov dword ptr [esp + 0x30], esp
// 0089a2d0  50                   push eax
// 0089a2d1  c644244801           mov byte ptr [esp + 0x48], 1
// 0089a2d6  e8b546f2ff           call 0x7be990
// 0089a2db  8bce                 mov ecx, esi
// 0089a2dd  e8ae7af2ff           call 0x7c1d90
// 0089a2e2  8d4c2454             lea ecx, [esp + 0x54]
// 0089a2e6  e80547f2ff           call 0x7be9f0
// 0089a2eb  85c0                 test eax, eax
// 0089a2ed  751a                 jne 0x89a309
// 0089a2ef  83ec24               sub esp, 0x24
// 0089a2f2  8d542478             lea edx, [esp + 0x78]
// 0089a2f6  8bcc                 mov ecx, esp
// 0089a2f8  89642430             mov dword ptr [esp + 0x30], esp
// 0089a2fc  52                   push edx
// 0089a2fd  e88e46f2ff           call 0x7be990
// 0089a302  8bce                 mov ecx, esi
// 0089a304  e8277bf2ff           call 0x7c1e30
// 0089a309  8b442478             mov eax, dword ptr [esp + 0x78]
// 0089a30d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089a311  8b542428             mov edx, dword ptr [esp + 0x28]
// 0089a315  50                   push eax
// 0089a316  56                   push esi
// 0089a317  51                   push ecx
// 0089a318  52                   push edx
// 0089a319  8bcf                 mov ecx, edi
// 0089a31b  e8a0feffff           call 0x89a1c0
// 0089a320  8d4c2430             lea ecx, [esp + 0x30]
// 0089a324  8bf0                 mov esi, eax
// 0089a326  c644242000           mov byte ptr [esp + 0x20], 0
// 0089a32b  e8506bf2ff           call 0x7c0e80
// 0089a330  8d4c2454             lea ecx, [esp + 0x54]
// 0089a334  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0089a33c  e83f6bf2ff           call 0x7c0e80
// 0089a341  8bc6                 mov eax, esi
// 0089a343  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089a347  64890d00000000       mov dword ptr fs:[0], ecx
// 0089a34e  59                   pop ecx
// 0089a34f  5f                   pop edi
// 0089a350  5e                   pop esi
// 0089a351  83c418               add esp, 0x18
// 0089a354  c25400               ret 0x54
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@VCXTPImageManagerIconHandle@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp