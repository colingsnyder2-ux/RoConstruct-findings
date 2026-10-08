// roc 2008-06 004d1780  unit: RBX::Network::PhysicsSender  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d1780
//
// 004d1780  83ec10               sub esp, 0x10
// 004d1783  53                   push ebx
// 004d1784  56                   push esi
// 004d1785  8bf1                 mov esi, ecx
// 004d1787  57                   push edi
// 004d1788  8b7e14               mov edi, dword ptr [esi + 0x14]
// 004d178b  33db                 xor ebx, ebx
// 004d178d  3bfb                 cmp edi, ebx
// 004d178f  750b                 jne 0x4d179c
// 004d1791  5f                   pop edi
// 004d1792  5e                   pop esi
// 004d1793  32c0                 xor al, al
// 004d1795  5b                   pop ebx
// 004d1796  83c410               add esp, 0x10
// 004d1799  c20800               ret 8
// 004d179c  895c2418             mov dword ptr [esp + 0x18], ebx
// 004d17a0  885c240f             mov byte ptr [esp + 0xf], bl
// 004d17a4  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 004d17a7  7554                 jne 0x4d17fd
// 004d17a9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d17ad  8d442420             lea eax, [esp + 0x20]
// 004d17b1  50                   push eax
// 004d17b2  57                   push edi
// 004d17b3  51                   push ecx
// 004d17b4  8bce                 mov ecx, esi
// 004d17b6  e8c5daffff           call 0x4cf280
// 004d17bb  84c0                 test al, al
// 004d17bd  74d2                 je 0x4d1791
// 004d17bf  8b442420             mov eax, dword ptr [esp + 0x20]
// 004d17c3  8b948788000000       mov edx, dword ptr [edi + eax*4 + 0x88]
// 004d17ca  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004d17ce  8911                 mov dword ptr [ecx], edx
// 004d17d0  8b5614               mov edx, dword ptr [esi + 0x14]
// 004d17d3  52                   push edx
// 004d17d4  50                   push eax
// 004d17d5  8bce                 mov ecx, esi
// 004d17d7  e824daffff           call 0x4cf200
// 004d17dc  8b4614               mov eax, dword ptr [esi + 0x14]
// 004d17df  395804               cmp dword ptr [eax + 4], ebx
// 004d17e2  7560                 jne 0x4d1844
// 004d17e4  50                   push eax
// 004d17e5  8bce                 mov ecx, esi
// 004d17e7  e8c4e3ffff           call 0x4cfbb0
// 004d17ec  5f                   pop edi
// 004d17ed  895e14               mov dword ptr [esi + 0x14], ebx
// 004d17f0  895e18               mov dword ptr [esi + 0x18], ebx
// 004d17f3  5e                   pop esi
// 004d17f4  b001                 mov al, 1
// 004d17f6  5b                   pop ebx
// 004d17f7  83c410               add esp, 0x10
// 004d17fa  c20800               ret 8
// 004d17fd  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d1801  8b5708               mov edx, dword ptr [edi + 8]
// 004d1804  50                   push eax
// 004d1805  8d4c2414             lea ecx, [esp + 0x14]
// 004d1809  51                   push ecx
// 004d180a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d180e  52                   push edx
// 004d180f  8d44241b             lea eax, [esp + 0x1b]
// 004d1813  50                   push eax
// 004d1814  57                   push edi
// 004d1815  51                   push ecx
// 004d1816  8bce                 mov ecx, esi
// 004d1818  e8b3f7ffff           call 0x4d0fd0
// 004d181d  84c0                 test al, al
// 004d181f  0f846cffffff         je 0x4d1791
// 004d1825  385c240f             cmp byte ptr [esp + 0xf], bl
// 004d1829  7419                 je 0x4d1844
// 004d182b  8b4614               mov eax, dword ptr [esi + 0x14]
// 004d182e  395804               cmp dword ptr [eax + 4], ebx
// 004d1831  7511                 jne 0x4d1844
// 004d1833  8b9010010000         mov edx, dword ptr [eax + 0x110]
// 004d1839  50                   push eax
// 004d183a  8bce                 mov ecx, esi
// 004d183c  895614               mov dword ptr [esi + 0x14], edx
// 004d183f  e86ce3ffff           call 0x4cfbb0
// 004d1844  5f                   pop edi
// 004d1845  5e                   pop esi
// 004d1846  b001                 mov al, 1
// 004d1848  5b                   pop ebx
// 004d1849  83c410               add esp, 0x10
// 004d184c  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Delete@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@QAE_NIAAPAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
