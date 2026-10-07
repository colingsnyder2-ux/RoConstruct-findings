// roc 2012-06 0059bb50  unit: VAuthoringSettings::?$FactoryProduct  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059bb50
//
// 0059bb50  53                   push ebx
// 0059bb51  55                   push ebp
// 0059bb52  56                   push esi
// 0059bb53  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059bb57  8b4608               mov eax, dword ptr [esi + 8]
// 0059bb5a  57                   push edi
// 0059bb5b  8bf9                 mov edi, ecx
// 0059bb5d  8d4801               lea ecx, [eax + 1]
// 0059bb60  bd01000000           mov ebp, 1
// 0059bb65  3b0e                 cmp ecx, dword ptr [esi]
// 0059bb67  771e                 ja 0x59bb87
// 0059bb69  8bc8                 mov ecx, eax
// 0059bb6b  83e107               and ecx, 7
// 0059bb6e  ba80000000           mov edx, 0x80
// 0059bb73  d3fa                 sar edx, cl
// 0059bb75  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059bb78  c1e803               shr eax, 3
// 0059bb7b  841408               test byte ptr [eax + ecx], dl
// 0059bb7e  0f95c2               setne dl
// 0059bb81  88570e               mov byte ptr [edi + 0xe], dl
// 0059bb84  016e08               add dword ptr [esi + 8], ebp
// 0059bb87  8b4608               mov eax, dword ptr [esi + 8]
// 0059bb8a  8d4801               lea ecx, [eax + 1]
// 0059bb8d  3b0e                 cmp ecx, dword ptr [esi]
// 0059bb8f  771e                 ja 0x59bbaf
// 0059bb91  8bc8                 mov ecx, eax
// 0059bb93  83e107               and ecx, 7
// 0059bb96  ba80000000           mov edx, 0x80
// 0059bb9b  d3fa                 sar edx, cl
// 0059bb9d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059bba0  c1e803               shr eax, 3
// 0059bba3  841408               test byte ptr [eax + ecx], dl
// 0059bba6  0f95c2               setne dl
// 0059bba9  885708               mov byte ptr [edi + 8], dl
// 0059bbac  016e08               add dword ptr [esi + 8], ebp
// 0059bbaf  32d2                 xor dl, dl
// 0059bbb1  385708               cmp byte ptr [edi + 8], dl
// 0059bbb4  745a                 je 0x59bc10
// 0059bbb6  885709               mov byte ptr [edi + 9], dl
// 0059bbb9  88570a               mov byte ptr [edi + 0xa], dl
// 0059bbbc  8b4608               mov eax, dword ptr [esi + 8]
// 0059bbbf  8d4801               lea ecx, [eax + 1]
// 0059bbc2  3b0e                 cmp ecx, dword ptr [esi]
// 0059bbc4  771e                 ja 0x59bbe4
// 0059bbc6  8bc8                 mov ecx, eax
// 0059bbc8  83e107               and ecx, 7
// 0059bbcb  bb80000000           mov ebx, 0x80
// 0059bbd0  d3fb                 sar ebx, cl
// 0059bbd2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059bbd5  c1e803               shr eax, 3
// 0059bbd8  841c08               test byte ptr [eax + ecx], bl
// 0059bbdb  0f95c0               setne al
// 0059bbde  88470b               mov byte ptr [edi + 0xb], al
// 0059bbe1  016e08               add dword ptr [esi + 8], ebp
// 0059bbe4  8b4608               mov eax, dword ptr [esi + 8]
// 0059bbe7  8d48ff               lea ecx, [eax - 1]
// 0059bbea  83e107               and ecx, 7
// 0059bbed  2bc1                 sub eax, ecx
// 0059bbef  83c007               add eax, 7
// 0059bbf2  894608               mov dword ptr [esi + 8], eax
// 0059bbf5  38570b               cmp byte ptr [edi + 0xb], dl
// 0059bbf8  0f8483000000         je 0x59bc81
// 0059bbfe  83c704               add edi, 4
// 0059bc01  57                   push edi
// 0059bc02  8bce                 mov ecx, esi
// 0059bc04  e81704fdff           call 0x56c020
// 0059bc09  5f                   pop edi
// 0059bc0a  5e                   pop esi
// 0059bc0b  5d                   pop ebp
// 0059bc0c  5b                   pop ebx
// 0059bc0d  c20400               ret 4
// 0059bc10  8b4608               mov eax, dword ptr [esi + 8]
// 0059bc13  8d4801               lea ecx, [eax + 1]
// 0059bc16  3b0e                 cmp ecx, dword ptr [esi]
// 0059bc18  771e                 ja 0x59bc38
// 0059bc1a  8bc8                 mov ecx, eax
// 0059bc1c  83e107               and ecx, 7
// 0059bc1f  bb80000000           mov ebx, 0x80
// 0059bc24  d3fb                 sar ebx, cl
// 0059bc26  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059bc29  c1e803               shr eax, 3
// 0059bc2c  841c08               test byte ptr [eax + ecx], bl
// 0059bc2f  0f95c0               setne al
// 0059bc32  884709               mov byte ptr [edi + 9], al
// 0059bc35  016e08               add dword ptr [esi + 8], ebp
// 0059bc38  385709               cmp byte ptr [edi + 9], dl
// 0059bc3b  740a                 je 0x59bc47
// 0059bc3d  88570a               mov byte ptr [edi + 0xa], dl
// 0059bc40  5f                   pop edi
// 0059bc41  5e                   pop esi
// 0059bc42  5d                   pop ebp
// 0059bc43  5b                   pop ebx
// 0059bc44  c20400               ret 4
// 0059bc47  8d4f0a               lea ecx, [edi + 0xa]
// 0059bc4a  51                   push ecx
// 0059bc4b  8bce                 mov ecx, esi
// 0059bc4d  e80eb9fcff           call 0x567560
// 0059bc52  8d570c               lea edx, [edi + 0xc]
// 0059bc55  52                   push edx
// 0059bc56  8bce                 mov ecx, esi
// 0059bc58  e803b9fcff           call 0x567560
// 0059bc5d  8d470d               lea eax, [edi + 0xd]
// 0059bc60  50                   push eax
// 0059bc61  8bce                 mov ecx, esi
// 0059bc63  e8f8b8fcff           call 0x567560
// 0059bc68  8b4608               mov eax, dword ptr [esi + 8]
// 0059bc6b  8d48ff               lea ecx, [eax - 1]
// 0059bc6e  83e107               and ecx, 7
// 0059bc71  2bc1                 sub eax, ecx
// 0059bc73  83c007               add eax, 7
// 0059bc76  57                   push edi
// 0059bc77  8bce                 mov ecx, esi
// 0059bc79  894608               mov dword ptr [esi + 8], eax
// 0059bc7c  e8efeeffff           call 0x59ab70
// 0059bc81  5f                   pop edi
// 0059bc82  5e                   pop esi
// 0059bc83  5d                   pop ebp
// 0059bc84  5b                   pop ebx
// 0059bc85  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Deserialize@DatagramHeaderFormat@@QAEXPAVBitStream@RakNet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
