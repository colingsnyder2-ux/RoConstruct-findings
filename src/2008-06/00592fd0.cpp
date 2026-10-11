// roc 2008-06 00592fd0  unit: ArchiveBinder  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00592fd0
//
// 00592fd0  6aff                 push -1
// 00592fd2  64a100000000         mov eax, dword ptr fs:[0]
// 00592fd8  68401d7d00           push 0x7d1d40
// 00592fdd  50                   push eax
// 00592fde  8b442410             mov eax, dword ptr [esp + 0x10]
// 00592fe2  64892500000000       mov dword ptr fs:[0], esp
// 00592fe9  83ec34               sub esp, 0x34
// 00592fec  53                   push ebx
// 00592fed  55                   push ebp
// 00592fee  56                   push esi
// 00592fef  57                   push edi
// 00592ff0  50                   push eax
// 00592ff1  8bf1                 mov esi, ecx
// 00592ff3  e8e8e7ffff           call 0x5917e0
// 00592ff8  33db                 xor ebx, ebx
// 00592ffa  8be8                 mov ebp, eax
// 00592ffc  3bf3                 cmp esi, ebx
// 00592ffe  7506                 jne 0x593006
// 00593000  ff1590288000         call dword ptr [0x802890]
// 00593006  8b3e                 mov edi, dword ptr [esi]
// 00593008  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0059300b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0059300f  3bfb                 cmp edi, ebx
// 00593011  7404                 je 0x593017
// 00593013  3bff                 cmp edi, edi
// 00593015  7406                 je 0x59301d
// 00593017  ff1590288000         call dword ptr [0x802890]
// 0059301d  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00593021  7416                 je 0x593039
// 00593023  8b442454             mov eax, dword ptr [esp + 0x54]
// 00593027  8d550c               lea edx, [ebp + 0xc]
// 0059302a  52                   push edx
// 0059302b  50                   push eax
// 0059302c  ff155c238000         call dword ptr [0x80235c]
// 00593032  83c408               add esp, 8
// 00593035  84c0                 test al, al
// 00593037  744d                 je 0x593086
// 00593039  895c2410             mov dword ptr [esp + 0x10], ebx
// 0059303d  895c2414             mov dword ptr [esp + 0x14], ebx
// 00593041  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00593045  51                   push ecx
// 00593046  8d4c2424             lea ecx, [esp + 0x24]
// 0059304a  895c2450             mov dword ptr [esp + 0x50], ebx
// 0059304e  ff155c248000         call dword ptr [0x80245c]
// 00593054  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00593058  895c2440             mov dword ptr [esp + 0x40], ebx
// 0059305c  8d542420             lea edx, [esp + 0x20]
// 00593060  52                   push edx
// 00593061  55                   push ebp
// 00593062  57                   push edi
// 00593063  8d442424             lea eax, [esp + 0x24]
// 00593067  50                   push eax
// 00593068  8bce                 mov ecx, esi
// 0059306a  c644245c01           mov byte ptr [esp + 0x5c], 1
// 0059306f  e81cfdffff           call 0x592d90
// 00593074  8b38                 mov edi, dword ptr [eax]
// 00593076  8b6804               mov ebp, dword ptr [eax + 4]
// 00593079  8d4c2420             lea ecx, [esp + 0x20]
// 0059307d  885c244c             mov byte ptr [esp + 0x4c], bl
// 00593081  e8ba36f0ff           call 0x496740
// 00593086  3bfb                 cmp edi, ebx
// 00593088  752b                 jne 0x5930b5
// 0059308a  ff1590288000         call dword ptr [0x802890]
// 00593090  33ff                 xor edi, edi
// 00593092  3b6f18               cmp ebp, dword ptr [edi + 0x18]
// 00593095  7506                 jne 0x59309d
// 00593097  ff1590288000         call dword ptr [0x802890]
// 0059309d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005930a1  5f                   pop edi
// 005930a2  5e                   pop esi
// 005930a3  8d4528               lea eax, [ebp + 0x28]
// 005930a6  5d                   pop ebp
// 005930a7  5b                   pop ebx
// 005930a8  64890d00000000       mov dword ptr fs:[0], ecx
// 005930af  83c440               add esp, 0x40
// 005930b2  c20400               ret 4
// 005930b5  8b3f                 mov edi, dword ptr [edi]
// 005930b7  ebd9                 jmp 0x593092
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??A?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@@std@@QAEAAVInstanceHandle@RBX@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
