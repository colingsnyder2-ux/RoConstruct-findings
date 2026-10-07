// roc 2012-06 0059c2f0  unit: VAuthoringSettings::?$FactoryProduct  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059c2f0
//
// 0059c2f0  83ec14               sub esp, 0x14
// 0059c2f3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0059c2f7  53                   push ebx
// 0059c2f8  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0059c2fc  8b03                 mov eax, dword ptr [ebx]
// 0059c2fe  55                   push ebp
// 0059c2ff  8be9                 mov ebp, ecx
// 0059c301  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0059c304  57                   push edi
// 0059c305  8b7d04               mov edi, dword ptr [ebp + 4]
// 0059c308  894c2414             mov dword ptr [esp + 0x14], ecx
// 0059c30c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059c310  89442410             mov dword ptr [esp + 0x10], eax
// 0059c314  8b02                 mov eax, dword ptr [edx]
// 0059c316  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059c31a  51                   push ecx
// 0059c31b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0059c31f  52                   push edx
// 0059c320  8d442418             lea eax, [esp + 0x18]
// 0059c324  50                   push eax
// 0059c325  8bcd                 mov ecx, ebp
// 0059c327  896c2418             mov dword ptr [esp + 0x18], ebp
// 0059c32b  e850f5ffff           call 0x59b880
// 0059c330  85ff                 test edi, edi
// 0059c332  0f8483000000         je 0x59c3bb
// 0059c338  56                   push esi
// 0059c339  eb09                 jmp 0x59c344
// 0059c33b  eb03                 jmp 0x59c340
// 0059c33d  8d4900               lea ecx, [ecx]
// 0059c340  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0059c344  8b5500               mov edx, dword ptr [ebp]
// 0059c347  8d77ff               lea esi, [edi - 1]
// 0059c34a  d1ee                 shr esi, 1
// 0059c34c  8bce                 mov ecx, esi
// 0059c34e  c1e104               shl ecx, 4
// 0059c351  8b440a04             mov eax, dword ptr [edx + ecx + 4]
// 0059c355  3b4304               cmp eax, dword ptr [ebx + 4]
// 0059c358  7260                 jb 0x59c3ba
// 0059c35a  7707                 ja 0x59c363
// 0059c35c  8b040a               mov eax, dword ptr [edx + ecx]
// 0059c35f  3b03                 cmp eax, dword ptr [ebx]
// 0059c361  7657                 jbe 0x59c3ba
// 0059c363  c1e704               shl edi, 4
// 0059c366  8b6c1708             mov ebp, dword ptr [edi + edx + 8]
// 0059c36a  8b5c1704             mov ebx, dword ptr [edi + edx + 4]
// 0059c36e  8d0417               lea eax, [edi + edx]
// 0059c371  8b38                 mov edi, dword ptr [eax]
// 0059c373  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0059c377  8b680c               mov ebp, dword ptr [eax + 0xc]
// 0059c37a  896c2420             mov dword ptr [esp + 0x20], ebp
// 0059c37e  8b2c0a               mov ebp, dword ptr [edx + ecx]
// 0059c381  8928                 mov dword ptr [eax], ebp
// 0059c383  8b6c0a04             mov ebp, dword ptr [edx + ecx + 4]
// 0059c387  896804               mov dword ptr [eax + 4], ebp
// 0059c38a  8b6c0a08             mov ebp, dword ptr [edx + ecx + 8]
// 0059c38e  896808               mov dword ptr [eax + 8], ebp
// 0059c391  8b540a0c             mov edx, dword ptr [edx + ecx + 0xc]
// 0059c395  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0059c399  89500c               mov dword ptr [eax + 0xc], edx
// 0059c39c  8b4500               mov eax, dword ptr [ebp]
// 0059c39f  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059c3a3  03c1                 add eax, ecx
// 0059c3a5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059c3a9  8938                 mov dword ptr [eax], edi
// 0059c3ab  895804               mov dword ptr [eax + 4], ebx
// 0059c3ae  894808               mov dword ptr [eax + 8], ecx
// 0059c3b1  89500c               mov dword ptr [eax + 0xc], edx
// 0059c3b4  8bfe                 mov edi, esi
// 0059c3b6  85f6                 test esi, esi
// 0059c3b8  7586                 jne 0x59c340
// 0059c3ba  5e                   pop esi
// 0059c3bb  5f                   pop edi
// 0059c3bc  5d                   pop ebp
// 0059c3bd  5b                   pop ebx
// 0059c3be  83c414               add esp, 0x14
// 0059c3c1  c21000               ret 0x10
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Push@?$Heap@_KPAUInternalPacket@RakNet@@$0A@@DataStructures@@QAEXAB_KABQAUInternalPacket@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
