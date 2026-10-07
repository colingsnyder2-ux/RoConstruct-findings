// roc 2012-06 0059acd0  unit: VAuthoringSettings::?$FactoryProduct  size: 343 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059acd0
//
// 0059acd0  53                   push ebx
// 0059acd1  55                   push ebp
// 0059acd2  56                   push esi
// 0059acd3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059acd7  8b06                 mov eax, dword ptr [esi]
// 0059acd9  8d48ff               lea ecx, [eax - 1]
// 0059acdc  8be8                 mov ebp, eax
// 0059acde  83e107               and ecx, 7
// 0059ace1  2bc1                 sub eax, ecx
// 0059ace3  83c007               add eax, 7
// 0059ace6  57                   push edi
// 0059ace7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0059aceb  8906                 mov dword ptr [esi], eax
// 0059aced  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0059acf0  83f805               cmp eax, 5
// 0059acf3  7507                 jne 0x59acfc
// 0059acf5  c644241400           mov byte ptr [esp + 0x14], 0
// 0059acfa  eb1e                 jmp 0x59ad1a
// 0059acfc  83f806               cmp eax, 6
// 0059acff  7507                 jne 0x59ad08
// 0059ad01  c644241402           mov byte ptr [esp + 0x14], 2
// 0059ad06  eb12                 jmp 0x59ad1a
// 0059ad08  83f807               cmp eax, 7
// 0059ad0b  7507                 jne 0x59ad14
// 0059ad0d  c644241403           mov byte ptr [esp + 0x14], 3
// 0059ad12  eb06                 jmp 0x59ad1a
// 0059ad14  8ad0                 mov dl, al
// 0059ad16  88542414             mov byte ptr [esp + 0x14], dl
// 0059ad1a  6a01                 push 1
// 0059ad1c  6a03                 push 3
// 0059ad1e  8d44241c             lea eax, [esp + 0x1c]
// 0059ad22  50                   push eax
// 0059ad23  8bce                 mov ecx, esi
// 0059ad25  e866d0fcff           call 0x567d90
// 0059ad2a  837f1400             cmp dword ptr [edi + 0x14], 0
// 0059ad2e  8d5f14               lea ebx, [edi + 0x14]
// 0059ad31  8bce                 mov ecx, esi
// 0059ad33  7607                 jbe 0x59ad3c
// 0059ad35  e816d0fcff           call 0x567d50
// 0059ad3a  eb05                 jmp 0x59ad41
// 0059ad3c  e8efcffcff           call 0x567d30
// 0059ad41  8b06                 mov eax, dword ptr [esi]
// 0059ad43  8d48ff               lea ecx, [eax - 1]
// 0059ad46  83e107               and ecx, 7
// 0059ad49  2bc1                 sub eax, ecx
// 0059ad4b  83c007               add eax, 7
// 0059ad4e  8906                 mov dword ptr [esi], eax
// 0059ad50  0fb75718             movzx edx, word ptr [edi + 0x18]
// 0059ad54  8d442418             lea eax, [esp + 0x18]
// 0059ad58  50                   push eax
// 0059ad59  8bce                 mov ecx, esi
// 0059ad5b  8954241c             mov dword ptr [esp + 0x1c], edx
// 0059ad5f  e83cd4fcff           call 0x5681a0
// 0059ad64  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0059ad67  83f802               cmp eax, 2
// 0059ad6a  7414                 je 0x59ad80
// 0059ad6c  83f804               cmp eax, 4
// 0059ad6f  740f                 je 0x59ad80
// 0059ad71  83f803               cmp eax, 3
// 0059ad74  740a                 je 0x59ad80
// 0059ad76  83f806               cmp eax, 6
// 0059ad79  7405                 je 0x59ad80
// 0059ad7b  83f807               cmp eax, 7
// 0059ad7e  7508                 jne 0x59ad88
// 0059ad80  57                   push edi
// 0059ad81  8bce                 mov ecx, esi
// 0059ad83  e848fdffff           call 0x59aad0
// 0059ad88  8b06                 mov eax, dword ptr [esi]
// 0059ad8a  8d48ff               lea ecx, [eax - 1]
// 0059ad8d  83e107               and ecx, 7
// 0059ad90  2bc1                 sub eax, ecx
// 0059ad92  83c007               add eax, 7
// 0059ad95  8906                 mov dword ptr [esi], eax
// 0059ad97  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0059ad9a  83f801               cmp eax, 1
// 0059ad9d  7405                 je 0x59ada4
// 0059ad9f  83f804               cmp eax, 4
// 0059ada2  750b                 jne 0x59adaf
// 0059ada4  8d5708               lea edx, [edi + 8]
// 0059ada7  52                   push edx
// 0059ada8  8bce                 mov ecx, esi
// 0059adaa  e821fdffff           call 0x59aad0
// 0059adaf  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0059adb2  83f801               cmp eax, 1
// 0059adb5  740f                 je 0x59adc6
// 0059adb7  83f804               cmp eax, 4
// 0059adba  740a                 je 0x59adc6
// 0059adbc  83f803               cmp eax, 3
// 0059adbf  7405                 je 0x59adc6
// 0059adc1  83f807               cmp eax, 7
// 0059adc4  751e                 jne 0x59ade4
// 0059adc6  8d4704               lea eax, [edi + 4]
// 0059adc9  50                   push eax
// 0059adca  8bce                 mov ecx, esi
// 0059adcc  e8fffcffff           call 0x59aad0
// 0059add1  8a4f0c               mov cl, byte ptr [edi + 0xc]
// 0059add4  8d542414             lea edx, [esp + 0x14]
// 0059add8  884c2414             mov byte ptr [esp + 0x14], cl
// 0059addc  52                   push edx
// 0059addd  8bce                 mov ecx, esi
// 0059addf  e88ccdfcff           call 0x567b70
// 0059ade4  833b00               cmp dword ptr [ebx], 0
// 0059ade7  761e                 jbe 0x59ae07
// 0059ade9  53                   push ebx
// 0059adea  8bce                 mov ecx, esi
// 0059adec  e88fd4fcff           call 0x568280
// 0059adf1  8d470e               lea eax, [edi + 0xe]
// 0059adf4  50                   push eax
// 0059adf5  8bce                 mov ecx, esi
// 0059adf7  e8a4d3fcff           call 0x5681a0
// 0059adfc  8d4f10               lea ecx, [edi + 0x10]
// 0059adff  51                   push ecx
// 0059ae00  8bce                 mov ecx, esi
// 0059ae02  e879d4fcff           call 0x568280
// 0059ae07  8b5718               mov edx, dword ptr [edi + 0x18]
// 0059ae0a  8b473c               mov eax, dword ptr [edi + 0x3c]
// 0059ae0d  83c207               add edx, 7
// 0059ae10  c1ea03               shr edx, 3
// 0059ae13  52                   push edx
// 0059ae14  50                   push eax
// 0059ae15  8bce                 mov ecx, esi
// 0059ae17  e884d1fcff           call 0x567fa0
// 0059ae1c  8b06                 mov eax, dword ptr [esi]
// 0059ae1e  5f                   pop edi
// 0059ae1f  5e                   pop esi
// 0059ae20  2bc5                 sub eax, ebp
// 0059ae22  5d                   pop ebp
// 0059ae23  5b                   pop ebx
// 0059ae24  c21000               ret 0x10
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?WriteToBitStreamFromInternalPacket@ReliabilityLayer@RakNet@@AAEIPAVBitStream@2@QBUInternalPacket@2@_K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
