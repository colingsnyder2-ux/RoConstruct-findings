// roc 2010-06 00504360  unit: RBX::Network::ClientReplicator  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00504360
//
// 00504360  83ec10               sub esp, 0x10
// 00504363  53                   push ebx
// 00504364  56                   push esi
// 00504365  8bf1                 mov esi, ecx
// 00504367  57                   push edi
// 00504368  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0050436b  33db                 xor ebx, ebx
// 0050436d  3bfb                 cmp edi, ebx
// 0050436f  750b                 jne 0x50437c
// 00504371  5f                   pop edi
// 00504372  5e                   pop esi
// 00504373  32c0                 xor al, al
// 00504375  5b                   pop ebx
// 00504376  83c410               add esp, 0x10
// 00504379  c20800               ret 8
// 0050437c  895c2418             mov dword ptr [esp + 0x18], ebx
// 00504380  885c240f             mov byte ptr [esp + 0xf], bl
// 00504384  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 00504387  7554                 jne 0x5043dd
// 00504389  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050438d  8d442420             lea eax, [esp + 0x20]
// 00504391  50                   push eax
// 00504392  57                   push edi
// 00504393  51                   push ecx
// 00504394  8bce                 mov ecx, esi
// 00504396  e815daffff           call 0x501db0
// 0050439b  84c0                 test al, al
// 0050439d  74d2                 je 0x504371
// 0050439f  8b442420             mov eax, dword ptr [esp + 0x20]
// 005043a3  8b948788000000       mov edx, dword ptr [edi + eax*4 + 0x88]
// 005043aa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005043ae  8911                 mov dword ptr [ecx], edx
// 005043b0  8b5614               mov edx, dword ptr [esi + 0x14]
// 005043b3  52                   push edx
// 005043b4  50                   push eax
// 005043b5  8bce                 mov ecx, esi
// 005043b7  e874d9ffff           call 0x501d30
// 005043bc  8b4614               mov eax, dword ptr [esi + 0x14]
// 005043bf  395804               cmp dword ptr [eax + 4], ebx
// 005043c2  7560                 jne 0x504424
// 005043c4  50                   push eax
// 005043c5  8bce                 mov ecx, esi
// 005043c7  e874e6ffff           call 0x502a40
// 005043cc  5f                   pop edi
// 005043cd  895e14               mov dword ptr [esi + 0x14], ebx
// 005043d0  895e18               mov dword ptr [esi + 0x18], ebx
// 005043d3  5e                   pop esi
// 005043d4  b001                 mov al, 1
// 005043d6  5b                   pop ebx
// 005043d7  83c410               add esp, 0x10
// 005043da  c20800               ret 8
// 005043dd  8b442424             mov eax, dword ptr [esp + 0x24]
// 005043e1  8b5708               mov edx, dword ptr [edi + 8]
// 005043e4  50                   push eax
// 005043e5  8d4c2414             lea ecx, [esp + 0x14]
// 005043e9  51                   push ecx
// 005043ea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005043ee  52                   push edx
// 005043ef  8d44241b             lea eax, [esp + 0x1b]
// 005043f3  50                   push eax
// 005043f4  57                   push edi
// 005043f5  51                   push ecx
// 005043f6  8bce                 mov ecx, esi
// 005043f8  e8a3f8ffff           call 0x503ca0
// 005043fd  84c0                 test al, al
// 005043ff  0f846cffffff         je 0x504371
// 00504405  385c240f             cmp byte ptr [esp + 0xf], bl
// 00504409  7419                 je 0x504424
// 0050440b  8b4614               mov eax, dword ptr [esi + 0x14]
// 0050440e  395804               cmp dword ptr [eax + 4], ebx
// 00504411  7511                 jne 0x504424
// 00504413  8b9010010000         mov edx, dword ptr [eax + 0x110]
// 00504419  50                   push eax
// 0050441a  8bce                 mov ecx, esi
// 0050441c  895614               mov dword ptr [esi + 0x14], edx
// 0050441f  e81ce6ffff           call 0x502a40
// 00504424  5f                   pop edi
// 00504425  5e                   pop esi
// 00504426  b001                 mov al, 1
// 00504428  5b                   pop ebx
// 00504429  83c410               add esp, 0x10
// 0050442c  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Delete@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@QAE_NIAAPAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
