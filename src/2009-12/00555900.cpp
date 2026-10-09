// roc 2009-12 00555900  unit: RBX::Network::ClientReplicator  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00555900
//
// 00555900  83ec10               sub esp, 0x10
// 00555903  53                   push ebx
// 00555904  56                   push esi
// 00555905  8bf1                 mov esi, ecx
// 00555907  57                   push edi
// 00555908  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0055590b  33db                 xor ebx, ebx
// 0055590d  3bfb                 cmp edi, ebx
// 0055590f  750b                 jne 0x55591c
// 00555911  5f                   pop edi
// 00555912  5e                   pop esi
// 00555913  32c0                 xor al, al
// 00555915  5b                   pop ebx
// 00555916  83c410               add esp, 0x10
// 00555919  c20800               ret 8
// 0055591c  895c2418             mov dword ptr [esp + 0x18], ebx
// 00555920  885c240f             mov byte ptr [esp + 0xf], bl
// 00555924  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 00555927  7554                 jne 0x55597d
// 00555929  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055592d  8d442420             lea eax, [esp + 0x20]
// 00555931  50                   push eax
// 00555932  57                   push edi
// 00555933  51                   push ecx
// 00555934  8bce                 mov ecx, esi
// 00555936  e8d5dbffff           call 0x553510
// 0055593b  84c0                 test al, al
// 0055593d  74d2                 je 0x555911
// 0055593f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00555943  8b948788000000       mov edx, dword ptr [edi + eax*4 + 0x88]
// 0055594a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0055594e  8911                 mov dword ptr [ecx], edx
// 00555950  8b5614               mov edx, dword ptr [esi + 0x14]
// 00555953  52                   push edx
// 00555954  50                   push eax
// 00555955  8bce                 mov ecx, esi
// 00555957  e834dbffff           call 0x553490
// 0055595c  8b4614               mov eax, dword ptr [esi + 0x14]
// 0055595f  395804               cmp dword ptr [eax + 4], ebx
// 00555962  7560                 jne 0x5559c4
// 00555964  50                   push eax
// 00555965  8bce                 mov ecx, esi
// 00555967  e824e7ffff           call 0x554090
// 0055596c  5f                   pop edi
// 0055596d  895e14               mov dword ptr [esi + 0x14], ebx
// 00555970  895e18               mov dword ptr [esi + 0x18], ebx
// 00555973  5e                   pop esi
// 00555974  b001                 mov al, 1
// 00555976  5b                   pop ebx
// 00555977  83c410               add esp, 0x10
// 0055597a  c20800               ret 8
// 0055597d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00555981  8b5708               mov edx, dword ptr [edi + 8]
// 00555984  50                   push eax
// 00555985  8d4c2414             lea ecx, [esp + 0x14]
// 00555989  51                   push ecx
// 0055598a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055598e  52                   push edx
// 0055598f  8d44241b             lea eax, [esp + 0x1b]
// 00555993  50                   push eax
// 00555994  57                   push edi
// 00555995  51                   push ecx
// 00555996  8bce                 mov ecx, esi
// 00555998  e8a3f8ffff           call 0x555240
// 0055599d  84c0                 test al, al
// 0055599f  0f846cffffff         je 0x555911
// 005559a5  385c240f             cmp byte ptr [esp + 0xf], bl
// 005559a9  7419                 je 0x5559c4
// 005559ab  8b4614               mov eax, dword ptr [esi + 0x14]
// 005559ae  395804               cmp dword ptr [eax + 4], ebx
// 005559b1  7511                 jne 0x5559c4
// 005559b3  8b9010010000         mov edx, dword ptr [eax + 0x110]
// 005559b9  50                   push eax
// 005559ba  8bce                 mov ecx, esi
// 005559bc  895614               mov dword ptr [esi + 0x14], edx
// 005559bf  e8cce6ffff           call 0x554090
// 005559c4  5f                   pop edi
// 005559c5  5e                   pop esi
// 005559c6  b001                 mov al, 1
// 005559c8  5b                   pop ebx
// 005559c9  83c410               add esp, 0x10
// 005559cc  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Delete@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@QAE_NIAAPAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
