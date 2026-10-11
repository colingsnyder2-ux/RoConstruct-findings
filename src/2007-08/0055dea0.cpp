// roc 2007-08 0055dea0  unit: RBX::DataModel  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055dea0
//
// 0055dea0  64a100000000         mov eax, dword ptr fs:[0]
// 0055dea6  6aff                 push -1
// 0055dea8  68083c7500           push 0x753c08
// 0055dead  50                   push eax
// 0055deae  64892500000000       mov dword ptr fs:[0], esp
// 0055deb5  83ec14               sub esp, 0x14
// 0055deb8  53                   push ebx
// 0055deb9  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0055debd  56                   push esi
// 0055debe  57                   push edi
// 0055debf  53                   push ebx
// 0055dec0  8bf1                 mov esi, ecx
// 0055dec2  e8a9f4ffff           call 0x55d370
// 0055dec7  85f6                 test esi, esi
// 0055dec9  8bf8                 mov edi, eax
// 0055decb  7506                 jne 0x55ded3
// 0055decd  ff15d8e67700         call dword ptr [0x77e6d8]
// 0055ded3  3b7e04               cmp edi, dword ptr [esi + 4]
// 0055ded6  7413                 je 0x55deeb
// 0055ded8  8d470c               lea eax, [edi + 0xc]
// 0055dedb  50                   push eax
// 0055dedc  8bcb                 mov ecx, ebx
// 0055dede  e82df80200           call 0x58d710
// 0055dee3  84c0                 test al, al
// 0055dee5  0f8481000000         je 0x55df6c
// 0055deeb  8b0b                 mov ecx, dword ptr [ebx]
// 0055deed  8b5b04               mov ebx, dword ptr [ebx + 4]
// 0055def0  85db                 test ebx, ebx
// 0055def2  894c2414             mov dword ptr [esp + 0x14], ecx
// 0055def6  895c2418             mov dword ptr [esp + 0x18], ebx
// 0055defa  740c                 je 0x55df08
// 0055defc  83c304               add ebx, 4
// 0055deff  ba01000000           mov edx, 1
// 0055df04  f00fc113             lock xadd dword ptr [ebx], edx
// 0055df08  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0055df10  8d442414             lea eax, [esp + 0x14]
// 0055df14  50                   push eax
// 0055df15  57                   push edi
// 0055df16  56                   push esi
// 0055df17  8d4c2418             lea ecx, [esp + 0x18]
// 0055df1b  51                   push ecx
// 0055df1c  8bce                 mov ecx, esi
// 0055df1e  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0055df26  e875fdffff           call 0x55dca0
// 0055df2b  8b30                 mov esi, dword ptr [eax]
// 0055df2d  8b7804               mov edi, dword ptr [eax + 4]
// 0055df30  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055df34  85c0                 test eax, eax
// 0055df36  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0055df3e  742c                 je 0x55df6c
// 0055df40  8bd8                 mov ebx, eax
// 0055df42  83c004               add eax, 4
// 0055df45  83caff               or edx, 0xffffffff
// 0055df48  f00fc110             lock xadd dword ptr [eax], edx
// 0055df4c  751e                 jne 0x55df6c
// 0055df4e  8b03                 mov eax, dword ptr [ebx]
// 0055df50  8b5004               mov edx, dword ptr [eax + 4]
// 0055df53  8bcb                 mov ecx, ebx
// 0055df55  ffd2                 call edx
// 0055df57  8d4308               lea eax, [ebx + 8]
// 0055df5a  83c9ff               or ecx, 0xffffffff
// 0055df5d  f00fc108             lock xadd dword ptr [eax], ecx
// 0055df61  7509                 jne 0x55df6c
// 0055df63  8b13                 mov edx, dword ptr [ebx]
// 0055df65  8b4208               mov eax, dword ptr [edx + 8]
// 0055df68  8bcb                 mov ecx, ebx
// 0055df6a  ffd0                 call eax
// 0055df6c  85f6                 test esi, esi
// 0055df6e  7506                 jne 0x55df76
// 0055df70  ff15d8e67700         call dword ptr [0x77e6d8]
// 0055df76  3b7e04               cmp edi, dword ptr [esi + 4]
// 0055df79  7506                 jne 0x55df81
// 0055df7b  ff15d8e67700         call dword ptr [0x77e6d8]
// 0055df81  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055df85  8d4714               lea eax, [edi + 0x14]
// 0055df88  5f                   pop edi
// 0055df89  5e                   pop esi
// 0055df8a  5b                   pop ebx
// 0055df8b  64890d00000000       mov dword ptr fs:[0], ecx
// 0055df92  83c420               add esp, 0x20
// 0055df95  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??A?$map@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@@std@@QAEAAHABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
