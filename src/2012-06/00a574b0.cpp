// roc 2012-06 00a574b0  unit: VCEdit::?$CXTMaskEditT  size: 718 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a574b0
//
// 00a574b0  53                   push ebx
// 00a574b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00a574b5  56                   push esi
// 00a574b6  57                   push edi
// 00a574b7  8bf1                 mov esi, ecx
// 00a574b9  85db                 test ebx, ebx
// 00a574bb  0f8cc4000000         jl 0xa57585
// 00a574c1  8d7e70               lea edi, [esi + 0x70]
// 00a574c4  8bcf                 mov ecx, edi
// 00a574c6  ff155846b200         call dword ptr [0xb24658]
// 00a574cc  3bd8                 cmp ebx, eax
// 00a574ce  0f8db1000000         jge 0xa57585
// 00a574d4  53                   push ebx
// 00a574d5  8bcf                 mov ecx, edi
// 00a574d7  ff151849b200         call dword ptr [0xb24918]
// 00a574dd  0fbec0               movsx eax, al
// 00a574e0  83c0dd               add eax, -0x23
// 00a574e3  83f841               cmp eax, 0x41
// 00a574e6  0f8799000000         ja 0xa57585
// 00a574ec  0fb6803c77a500       movzx eax, byte ptr [eax + 0xa5773c]
// 00a574f3  ff24850477a500       jmp dword ptr [eax*4 + 0xa57704]
// 00a574fa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a574fe  0fbe11               movsx edx, byte ptr [ecx]
// 00a57501  52                   push edx
// 00a57502  ff157c2ab200         call dword ptr [0xb22a7c]
// 00a57508  83c404               add esp, 4
// 00a5750b  5f                   pop edi
// 00a5750c  5e                   pop esi
// 00a5750d  5b                   pop ebx
// 00a5750e  c20800               ret 8
// 00a57511  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a57515  0fbe06               movsx eax, byte ptr [esi]
// 00a57518  50                   push eax
// 00a57519  ff157c2ab200         call dword ptr [0xb22a7c]
// 00a5751f  83c404               add esp, 4
// 00a57522  85c0                 test eax, eax
// 00a57524  0f85ad010000         jne 0xa576d7
// 00a5752a  0fbe0e               movsx ecx, byte ptr [esi]
// 00a5752d  51                   push ecx
// 00a5752e  ff15782ab200         call dword ptr [0xb22a78]
// 00a57534  83c404               add esp, 4
// 00a57537  85c0                 test eax, eax
// 00a57539  0f8598010000         jne 0xa576d7
// 00a5753f  5f                   pop edi
// 00a57540  5e                   pop esi
// 00a57541  5b                   pop ebx
// 00a57542  c20800               ret 8
// 00a57545  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a57549  0fbe16               movsx edx, byte ptr [esi]
// 00a5754c  52                   push edx
// 00a5754d  ff157c2ab200         call dword ptr [0xb22a7c]
// 00a57553  83c404               add esp, 4
// 00a57556  85c0                 test eax, eax
// 00a57558  0f8579010000         jne 0xa576d7
// 00a5755e  0fbe06               movsx eax, byte ptr [esi]
// 00a57561  50                   push eax
// 00a57562  ff15782ab200         call dword ptr [0xb22a78]
// 00a57568  83c404               add esp, 4
// 00a5756b  85c0                 test eax, eax
// 00a5756d  0f8564010000         jne 0xa576d7
// 00a57573  8a06                 mov al, byte ptr [esi]
// 00a57575  3c2d                 cmp al, 0x2d
// 00a57577  0f845a010000         je 0xa576d7
// 00a5757d  3c2b                 cmp al, 0x2b
// 00a5757f  0f8452010000         je 0xa576d7
// 00a57585  5f                   pop edi
// 00a57586  5e                   pop esi
// 00a57587  33c0                 xor eax, eax
// 00a57589  5b                   pop ebx
// 00a5758a  c20800               ret 8
// 00a5758d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a57591  0fbe0e               movsx ecx, byte ptr [esi]
// 00a57594  51                   push ecx
// 00a57595  ff157c2ab200         call dword ptr [0xb22a7c]
// 00a5759b  83c404               add esp, 4
// 00a5759e  85c0                 test eax, eax
// 00a575a0  0f8531010000         jne 0xa576d7
// 00a575a6  0fbe16               movsx edx, byte ptr [esi]
// 00a575a9  52                   push edx
// 00a575aa  ff15782ab200         call dword ptr [0xb22a78]
// 00a575b0  83c404               add esp, 4
// 00a575b3  85c0                 test eax, eax
// 00a575b5  0f851c010000         jne 0xa576d7
// 00a575bb  8a06                 mov al, byte ptr [esi]
// 00a575bd  3c2d                 cmp al, 0x2d
// 00a575bf  0f8412010000         je 0xa576d7
// 00a575c5  3c2b                 cmp al, 0x2b
// 00a575c7  0f840a010000         je 0xa576d7
// 00a575cd  3c2e                 cmp al, 0x2e
// 00a575cf  0f8402010000         je 0xa576d7
// 00a575d5  3c2c                 cmp al, 0x2c
// 00a575d7  eba6                 jmp 0xa5757f
// 00a575d9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a575dd  0fb611               movzx edx, byte ptr [ecx]
// 00a575e0  8b06                 mov eax, dword ptr [esi]
// 00a575e2  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00a575e8  52                   push edx
// 00a575e9  8bce                 mov ecx, esi
// 00a575eb  ffd0                 call eax
// 00a575ed  5f                   pop edi
// 00a575ee  5e                   pop esi
// 00a575ef  5b                   pop ebx
// 00a575f0  c20800               ret 8
// 00a575f3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a575f7  0fb607               movzx eax, byte ptr [edi]
// 00a575fa  8b16                 mov edx, dword ptr [esi]
// 00a575fc  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 00a57602  50                   push eax
// 00a57603  8bce                 mov ecx, esi
// 00a57605  ffd2                 call edx
// 00a57607  85c0                 test eax, eax
// 00a57609  0f85c8000000         jne 0xa576d7
// 00a5760f  0fbe07               movsx eax, byte ptr [edi]
// 00a57612  50                   push eax
// 00a57613  e916ffffff           jmp 0xa5752e
// 00a57618  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a5761c  0fbe0f               movsx ecx, byte ptr [edi]
// 00a5761f  51                   push ecx
// 00a57620  ff15742ab200         call dword ptr [0xb22a74]
// 00a57626  83c404               add esp, 4
// 00a57629  85c0                 test eax, eax
// 00a5762b  0f85a6000000         jne 0xa576d7
// 00a57631  0fb607               movzx eax, byte ptr [edi]
// 00a57634  8b16                 mov edx, dword ptr [esi]
// 00a57636  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 00a5763c  50                   push eax
// 00a5763d  8bce                 mov ecx, esi
// 00a5763f  ffd2                 call edx
// 00a57641  e9f1feffff           jmp 0xa57537
// 00a57646  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a5764a  0fbe07               movsx eax, byte ptr [edi]
// 00a5764d  50                   push eax
// 00a5764e  ff15742ab200         call dword ptr [0xb22a74]
// 00a57654  83c404               add esp, 4
// 00a57657  85c0                 test eax, eax
// 00a57659  757c                 jne 0xa576d7
// 00a5765b  eb9a                 jmp 0xa575f7
// 00a5765d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a57661  0fb608               movzx ecx, byte ptr [eax]
// 00a57664  8b16                 mov edx, dword ptr [esi]
// 00a57666  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 00a5766c  51                   push ecx
// 00a5766d  8bce                 mov ecx, esi
// 00a5766f  ffd2                 call edx
// 00a57671  5f                   pop edi
// 00a57672  5e                   pop esi
// 00a57673  5b                   pop ebx
// 00a57674  c20800               ret 8
// 00a57677  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5767b  0fbe08               movsx ecx, byte ptr [eax]
// 00a5767e  51                   push ecx
// 00a5767f  ff153828b200         call dword ptr [0xb22838]
// 00a57685  83c404               add esp, 4
// 00a57688  5f                   pop edi
// 00a57689  5e                   pop esi
// 00a5768a  5b                   pop ebx
// 00a5768b  c20800               ret 8
// 00a5768e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a57692  0fbe16               movsx edx, byte ptr [esi]
// 00a57695  52                   push edx
// 00a57696  ff153828b200         call dword ptr [0xb22838]
// 00a5769c  83c404               add esp, 4
// 00a5769f  85c0                 test eax, eax
// 00a576a1  7534                 jne 0xa576d7
// 00a576a3  0fbe06               movsx eax, byte ptr [esi]
// 00a576a6  50                   push eax
// 00a576a7  e982feffff           jmp 0xa5752e
// 00a576ac  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a576b0  0fb607               movzx eax, byte ptr [edi]
// 00a576b3  8b16                 mov edx, dword ptr [esi]
// 00a576b5  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 00a576bb  50                   push eax
// 00a576bc  8bce                 mov ecx, esi
// 00a576be  ffd2                 call edx
// 00a576c0  85c0                 test eax, eax
// 00a576c2  0f84bdfeffff         je 0xa57585
// 00a576c8  6a01                 push 1
// 00a576ca  0fb607               movzx eax, byte ptr [edi]
// 00a576cd  50                   push eax
// 00a576ce  8bce                 mov ecx, esi
// 00a576d0  e8dbf6ffff           call 0xa56db0
// 00a576d5  8807                 mov byte ptr [edi], al
// 00a576d7  5f                   pop edi
// 00a576d8  5e                   pop esi
// 00a576d9  b801000000           mov eax, 1
// 00a576de  5b                   pop ebx
// 00a576df  c20800               ret 8
// 00a576e2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a576e6  0fb607               movzx eax, byte ptr [edi]
// 00a576e9  8b16                 mov edx, dword ptr [esi]
// 00a576eb  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 00a576f1  50                   push eax
// 00a576f2  8bce                 mov ecx, esi
// 00a576f4  ffd2                 call edx
// 00a576f6  85c0                 test eax, eax
// 00a576f8  0f8487feffff         je 0xa57585
// 00a576fe  6a00                 push 0
// 00a57700  ebc8                 jmp 0xa576ca
// 00a57702  8bff                 mov edi, edi
// 00a57704  45                   inc ebp
// 00a57705  75a5                 jne 0xa576ac
// 00a57707  005d76               add byte ptr [ebp + 0x76], bl
// 00a5770a  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a5770b  00fa                 add dl, bh
// 00a5770d  74a5                 je 0xa576b4
// 00a5770f  0011                 add byte ptr [ecx], dl
// 00a57711  75a5                 jne 0xa576b8
// 00a57713  00e2                 add dl, ah
// 00a57715  76a5                 jbe 0xa576bc
// 00a57717  00ac76a500f375       add byte ptr [esi + esi*2 + 0x75f300a5], ch
// 00a5771e  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a5771f  0018                 add byte ptr [eax], bl
// 00a57721  76a5                 jbe 0xa576c8
// 00a57723  007776               add byte ptr [edi + 0x76], dh
// 00a57726  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a57727  00d9                 add cl, bl
// 00a57729  75a5                 jne 0xa576d0
// 00a5772b  008e76a50046         add byte ptr [esi + 0x4600a576], cl
// 00a57731  76a5                 jbe 0xa576d8
// 00a57733  008d75a50085         add byte ptr [ebp - 0x7aff5a8b], cl
// 00a57739  75a5                 jne 0xa576e0
// 00a5773b  0000                 add byte ptr [eax], al
// 00a5773d  0d0d010d0d           or eax, 0xd0d010d
// 00a57742  0d0d0d0d0d           or eax, 0xd0d0d0d
// 00a57747  0d0d020d0d           or eax, 0xd0d020d
// 00a5774c  0d0d0d0d0d           or eax, 0xd0d0d0d
// 00a57751  0d030d0d04           or eax, 0x40d0d03
// 00a57756  0d05060d07           or eax, 0x70d0605
// 00a5775b  0d0d0d0d0d           or eax, 0xd0d0d0d
// 00a57760  0d080d0d0d           or eax, 0xd0d0d08
// 00a57765  090d0d0d0d0d         or dword ptr [0xd0d0d0d], ecx
// 00a5776b  0d0d0d0d0d           or eax, 0xd0d0d0d
// 00a57770  0d0a0d0d0d           or eax, 0xd0d0d0a
// 00a57775  0d0d0d0d0d           or eax, 0xd0d0d0d
// copied from an identical function in another client (function ?ProcessMask@?$CXTMaskEditT@VCEdit@@@@UAEHAADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp