// roc 2008-06 0057ce40  unit: RBX::VInstance::?$SignalDesc  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057ce40
//
// 0057ce40  64a100000000         mov eax, dword ptr fs:[0]
// 0057ce46  6aff                 push -1
// 0057ce48  68980e7d00           push 0x7d0e98
// 0057ce4d  50                   push eax
// 0057ce4e  64892500000000       mov dword ptr fs:[0], esp
// 0057ce55  83ec14               sub esp, 0x14
// 0057ce58  53                   push ebx
// 0057ce59  55                   push ebp
// 0057ce5a  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0057ce5e  56                   push esi
// 0057ce5f  55                   push ebp
// 0057ce60  8bf1                 mov esi, ecx
// 0057ce62  e809f4ffff           call 0x57c270
// 0057ce67  8bd8                 mov ebx, eax
// 0057ce69  85f6                 test esi, esi
// 0057ce6b  7506                 jne 0x57ce73
// 0057ce6d  ff1590288000         call dword ptr [0x802890]
// 0057ce73  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057ce76  57                   push edi
// 0057ce77  8b3e                 mov edi, dword ptr [esi]
// 0057ce79  89442414             mov dword ptr [esp + 0x14], eax
// 0057ce7d  85ff                 test edi, edi
// 0057ce7f  7404                 je 0x57ce85
// 0057ce81  3bff                 cmp edi, edi
// 0057ce83  7406                 je 0x57ce8b
// 0057ce85  ff1590288000         call dword ptr [0x802890]
// 0057ce8b  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 0057ce8f  740f                 je 0x57cea0
// 0057ce91  8d4b0c               lea ecx, [ebx + 0xc]
// 0057ce94  51                   push ecx
// 0057ce95  8bcd                 mov ecx, ebp
// 0057ce97  e8447f0100           call 0x594de0
// 0057ce9c  84c0                 test al, al
// 0057ce9e  747d                 je 0x57cf1d
// 0057cea0  8b5500               mov edx, dword ptr [ebp]
// 0057cea3  8b6d04               mov ebp, dword ptr [ebp + 4]
// 0057cea6  33c0                 xor eax, eax
// 0057cea8  89542418             mov dword ptr [esp + 0x18], edx
// 0057ceac  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0057ceb0  3be8                 cmp ebp, eax
// 0057ceb2  740d                 je 0x57cec1
// 0057ceb4  83c504               add ebp, 4
// 0057ceb7  b901000000           mov ecx, 1
// 0057cebc  f00fc14d00           lock xadd dword ptr [ebp], ecx
// 0057cec1  89442420             mov dword ptr [esp + 0x20], eax
// 0057cec5  8d542418             lea edx, [esp + 0x18]
// 0057cec9  52                   push edx
// 0057ceca  53                   push ebx
// 0057cecb  89442434             mov dword ptr [esp + 0x34], eax
// 0057cecf  57                   push edi
// 0057ced0  8d44241c             lea eax, [esp + 0x1c]
// 0057ced4  50                   push eax
// 0057ced5  8bce                 mov ecx, esi
// 0057ced7  e844fdffff           call 0x57cc20
// 0057cedc  8b38                 mov edi, dword ptr [eax]
// 0057cede  8b5804               mov ebx, dword ptr [eax + 4]
// 0057cee1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057cee5  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0057ceed  85c0                 test eax, eax
// 0057ceef  742c                 je 0x57cf1d
// 0057cef1  8bf0                 mov esi, eax
// 0057cef3  83c004               add eax, 4
// 0057cef6  83c9ff               or ecx, 0xffffffff
// 0057cef9  f00fc108             lock xadd dword ptr [eax], ecx
// 0057cefd  751e                 jne 0x57cf1d
// 0057ceff  8b16                 mov edx, dword ptr [esi]
// 0057cf01  8b4204               mov eax, dword ptr [edx + 4]
// 0057cf04  8bce                 mov ecx, esi
// 0057cf06  ffd0                 call eax
// 0057cf08  8d4e08               lea ecx, [esi + 8]
// 0057cf0b  83caff               or edx, 0xffffffff
// 0057cf0e  f00fc111             lock xadd dword ptr [ecx], edx
// 0057cf12  7509                 jne 0x57cf1d
// 0057cf14  8b06                 mov eax, dword ptr [esi]
// 0057cf16  8b5008               mov edx, dword ptr [eax + 8]
// 0057cf19  8bce                 mov ecx, esi
// 0057cf1b  ffd2                 call edx
// 0057cf1d  85ff                 test edi, edi
// 0057cf1f  7529                 jne 0x57cf4a
// 0057cf21  ff1590288000         call dword ptr [0x802890]
// 0057cf27  3b5f18               cmp ebx, dword ptr [edi + 0x18]
// 0057cf2a  5f                   pop edi
// 0057cf2b  7506                 jne 0x57cf33
// 0057cf2d  ff1590288000         call dword ptr [0x802890]
// 0057cf33  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057cf37  5e                   pop esi
// 0057cf38  5d                   pop ebp
// 0057cf39  8d4314               lea eax, [ebx + 0x14]
// 0057cf3c  5b                   pop ebx
// 0057cf3d  64890d00000000       mov dword ptr fs:[0], ecx
// 0057cf44  83c420               add esp, 0x20
// 0057cf47  c20400               ret 4
// 0057cf4a  8b3f                 mov edi, dword ptr [edi]
// 0057cf4c  ebd9                 jmp 0x57cf27
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??A?$map@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@@std@@QAEAAHABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
