// roc 2011-06 0052ff90  unit: RBX::Network::ProfiledRakPeer  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052ff90
//
// 0052ff90  83ec14               sub esp, 0x14
// 0052ff93  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052ff97  53                   push ebx
// 0052ff98  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052ff9c  8b03                 mov eax, dword ptr [ebx]
// 0052ff9e  55                   push ebp
// 0052ff9f  8be9                 mov ebp, ecx
// 0052ffa1  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0052ffa4  57                   push edi
// 0052ffa5  8b7d04               mov edi, dword ptr [ebp + 4]
// 0052ffa8  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052ffac  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0052ffb0  89442410             mov dword ptr [esp + 0x10], eax
// 0052ffb4  8b02                 mov eax, dword ptr [edx]
// 0052ffb6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0052ffba  51                   push ecx
// 0052ffbb  8944241c             mov dword ptr [esp + 0x1c], eax
// 0052ffbf  52                   push edx
// 0052ffc0  8d442418             lea eax, [esp + 0x18]
// 0052ffc4  50                   push eax
// 0052ffc5  8bcd                 mov ecx, ebp
// 0052ffc7  896c2418             mov dword ptr [esp + 0x18], ebp
// 0052ffcb  e880f4ffff           call 0x52f450
// 0052ffd0  85ff                 test edi, edi
// 0052ffd2  0f8483000000         je 0x53005b
// 0052ffd8  56                   push esi
// 0052ffd9  eb09                 jmp 0x52ffe4
// 0052ffdb  eb03                 jmp 0x52ffe0
// 0052ffdd  8d4900               lea ecx, [ecx]
// 0052ffe0  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0052ffe4  8b5500               mov edx, dword ptr [ebp]
// 0052ffe7  8d77ff               lea esi, [edi - 1]
// 0052ffea  d1ee                 shr esi, 1
// 0052ffec  8bce                 mov ecx, esi
// 0052ffee  c1e104               shl ecx, 4
// 0052fff1  8b440a04             mov eax, dword ptr [edx + ecx + 4]
// 0052fff5  3b4304               cmp eax, dword ptr [ebx + 4]
// 0052fff8  7260                 jb 0x53005a
// 0052fffa  7707                 ja 0x530003
// 0052fffc  8b040a               mov eax, dword ptr [edx + ecx]
// 0052ffff  3b03                 cmp eax, dword ptr [ebx]
// 00530001  7657                 jbe 0x53005a
// 00530003  c1e704               shl edi, 4
// 00530006  8b6c1708             mov ebp, dword ptr [edi + edx + 8]
// 0053000a  8b5c1704             mov ebx, dword ptr [edi + edx + 4]
// 0053000e  8d0417               lea eax, [edi + edx]
// 00530011  8b38                 mov edi, dword ptr [eax]
// 00530013  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00530017  8b680c               mov ebp, dword ptr [eax + 0xc]
// 0053001a  896c2420             mov dword ptr [esp + 0x20], ebp
// 0053001e  8b2c0a               mov ebp, dword ptr [edx + ecx]
// 00530021  8928                 mov dword ptr [eax], ebp
// 00530023  8b6c0a04             mov ebp, dword ptr [edx + ecx + 4]
// 00530027  896804               mov dword ptr [eax + 4], ebp
// 0053002a  8b6c0a08             mov ebp, dword ptr [edx + ecx + 8]
// 0053002e  896808               mov dword ptr [eax + 8], ebp
// 00530031  8b540a0c             mov edx, dword ptr [edx + ecx + 0xc]
// 00530035  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00530039  89500c               mov dword ptr [eax + 0xc], edx
// 0053003c  8b4500               mov eax, dword ptr [ebp]
// 0053003f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00530043  03c1                 add eax, ecx
// 00530045  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00530049  8938                 mov dword ptr [eax], edi
// 0053004b  895804               mov dword ptr [eax + 4], ebx
// 0053004e  894808               mov dword ptr [eax + 8], ecx
// 00530051  89500c               mov dword ptr [eax + 0xc], edx
// 00530054  8bfe                 mov edi, esi
// 00530056  85f6                 test esi, esi
// 00530058  7586                 jne 0x52ffe0
// 0053005a  5e                   pop esi
// 0053005b  5f                   pop edi
// 0053005c  5d                   pop ebp
// 0053005d  5b                   pop ebx
// 0053005e  83c414               add esp, 0x14
// 00530061  c21000               ret 0x10
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Push@?$Heap@_KPAUInternalPacket@RakNet@@$0A@@DataStructures@@QAEXAB_KABQAUInternalPacket@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
