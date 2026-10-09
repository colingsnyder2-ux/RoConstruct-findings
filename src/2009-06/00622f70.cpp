// roc 2009-06 00622f70  unit: ArchiveBinder  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00622f70
//
// 00622f70  64a100000000         mov eax, dword ptr fs:[0]
// 00622f76  6aff                 push -1
// 00622f78  6868978600           push 0x869768
// 00622f7d  50                   push eax
// 00622f7e  64892500000000       mov dword ptr fs:[0], esp
// 00622f85  a130b0a400           mov eax, dword ptr [0xa4b030]
// 00622f8a  83ec18               sub esp, 0x18
// 00622f8d  53                   push ebx
// 00622f8e  55                   push ebp
// 00622f8f  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00622f93  56                   push esi
// 00622f94  57                   push edi
// 00622f95  50                   push eax
// 00622f96  8bcd                 mov ecx, ebp
// 00622f98  e8136bfeff           call 0x609ab0
// 00622f9d  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00622fa1  33db                 xor ebx, ebx
// 00622fa3  3bc3                 cmp eax, ebx
// 00622fa5  0f84c7000000         je 0x623072
// 00622fab  895c2410             mov dword ptr [esp + 0x10], ebx
// 00622faf  895c2414             mov dword ptr [esp + 0x14], ebx
// 00622fb3  8d4c2410             lea ecx, [esp + 0x10]
// 00622fb7  51                   push ecx
// 00622fb8  8d4808               lea ecx, [eax + 8]
// 00622fbb  895c2434             mov dword ptr [esp + 0x34], ebx
// 00622fbf  e80c6ffeff           call 0x609ed0
// 00622fc4  8d542420             lea edx, [esp + 0x20]
// 00622fc8  52                   push edx
// 00622fc9  8d4c2414             lea ecx, [esp + 0x14]
// 00622fcd  e89e7edfff           call 0x41ae70
// 00622fd2  8b00                 mov eax, dword ptr [eax]
// 00622fd4  89442438             mov dword ptr [esp + 0x38], eax
// 00622fd8  895c2418             mov dword ptr [esp + 0x18], ebx
// 00622fdc  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00622fe0  8d4c2438             lea ecx, [esp + 0x38]
// 00622fe4  51                   push ecx
// 00622fe5  8bcf                 mov ecx, edi
// 00622fe7  c644243402           mov byte ptr [esp + 0x34], 2
// 00622fec  e80ffeffff           call 0x622e00
// 00622ff1  8d54241c             lea edx, [esp + 0x1c]
// 00622ff5  52                   push edx
// 00622ff6  8d4804               lea ecx, [eax + 4]
// 00622ff9  8918                 mov dword ptr [eax], ebx
// 00622ffb  e800f5ddff           call 0x402500
// 00623000  8b442424             mov eax, dword ptr [esp + 0x24]
// 00623004  885c2430             mov byte ptr [esp + 0x30], bl
// 00623008  3bc3                 cmp eax, ebx
// 0062300a  742c                 je 0x623038
// 0062300c  8bf0                 mov esi, eax
// 0062300e  83c004               add eax, 4
// 00623011  83c9ff               or ecx, 0xffffffff
// 00623014  f00fc108             lock xadd dword ptr [eax], ecx
// 00623018  751e                 jne 0x623038
// 0062301a  8b16                 mov edx, dword ptr [esi]
// 0062301c  8b4204               mov eax, dword ptr [edx + 4]
// 0062301f  8bce                 mov ecx, esi
// 00623021  ffd0                 call eax
// 00623023  8d4e08               lea ecx, [esi + 8]
// 00623026  83caff               or edx, 0xffffffff
// 00623029  f00fc111             lock xadd dword ptr [ecx], edx
// 0062302d  7509                 jne 0x623038
// 0062302f  8b06                 mov eax, dword ptr [esi]
// 00623031  8b5008               mov edx, dword ptr [eax + 8]
// 00623034  8bce                 mov ecx, esi
// 00623036  ffd2                 call edx
// 00623038  8b742414             mov esi, dword ptr [esp + 0x14]
// 0062303c  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00623044  3bf3                 cmp esi, ebx
// 00623046  742a                 je 0x623072
// 00623048  8d4604               lea eax, [esi + 4]
// 0062304b  83c9ff               or ecx, 0xffffffff
// 0062304e  f00fc108             lock xadd dword ptr [eax], ecx
// 00623052  751e                 jne 0x623072
// 00623054  8b16                 mov edx, dword ptr [esi]
// 00623056  8b4204               mov eax, dword ptr [edx + 4]
// 00623059  8bce                 mov ecx, esi
// 0062305b  ffd0                 call eax
// 0062305d  8d4e08               lea ecx, [esi + 8]
// 00623060  83caff               or edx, 0xffffffff
// 00623063  f00fc111             lock xadd dword ptr [ecx], edx
// 00623067  7509                 jne 0x623072
// 00623069  8b06                 mov eax, dword ptr [esi]
// 0062306b  8b5008               mov edx, dword ptr [eax + 8]
// 0062306e  8bce                 mov ecx, esi
// 00623070  ffd2                 call edx
// 00623072  8b7504               mov esi, dword ptr [ebp + 4]
// 00623075  3bf3                 cmp esi, ebx
// 00623077  7417                 je 0x623090
// 00623079  8da42400000000       lea esp, [esp]
// 00623080  57                   push edi
// 00623081  56                   push esi
// 00623082  e8e9feffff           call 0x622f70
// 00623087  8b36                 mov esi, dword ptr [esi]
// 00623089  83c408               add esp, 8
// 0062308c  3bf3                 cmp esi, ebx
// 0062308e  75f0                 jne 0x623080
// 00623090  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00623094  5f                   pop edi
// 00623095  5e                   pop esi
// 00623096  5d                   pop ebp
// 00623097  5b                   pop ebx
// 00623098  64890d00000000       mov dword ptr fs:[0], ecx
// 0062309f  83c424               add esp, 0x24
// 006230a2  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?buildIsolationMap@@YAXPAVXmlElement@@AAV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
