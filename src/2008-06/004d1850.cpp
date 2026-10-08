// roc 2008-06 004d1850  unit: RBX::Network::PhysicsSender  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d1850
//
// 004d1850  83ec10               sub esp, 0x10
// 004d1853  56                   push esi
// 004d1854  8bf1                 mov esi, ecx
// 004d1856  8b4614               mov eax, dword ptr [esi + 0x14]
// 004d1859  57                   push edi
// 004d185a  85c0                 test eax, eax
// 004d185c  7555                 jne 0x4d18b3
// 004d185e  e8ade2ffff           call 0x4cfb10
// 004d1863  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d1867  894614               mov dword ptr [esi + 0x14], eax
// 004d186a  c60001               mov byte ptr [eax], 1
// 004d186d  8b4614               mov eax, dword ptr [esi + 0x14]
// 004d1870  894618               mov dword ptr [esi + 0x18], eax
// 004d1873  c7400401000000       mov dword ptr [eax + 4], 1
// 004d187a  8b4614               mov eax, dword ptr [esi + 0x14]
// 004d187d  894808               mov dword ptr [eax + 8], ecx
// 004d1880  8b5614               mov edx, dword ptr [esi + 0x14]
// 004d1883  8b442420             mov eax, dword ptr [esp + 0x20]
// 004d1887  8b08                 mov ecx, dword ptr [eax]
// 004d1889  898a88000000         mov dword ptr [edx + 0x88], ecx
// 004d188f  8b5614               mov edx, dword ptr [esi + 0x14]
// 004d1892  c7820801000000000000 mov dword ptr [edx + 0x108], 0
// 004d189c  8b4614               mov eax, dword ptr [esi + 0x14]
// 004d189f  5f                   pop edi
// 004d18a0  c7800c01000000000000 mov dword ptr [eax + 0x10c], 0
// 004d18aa  b001                 mov al, 1
// 004d18ac  5e                   pop esi
// 004d18ad  83c410               add esp, 0x10
// 004d18b0  c20800               ret 8
// 004d18b3  8d4c240b             lea ecx, [esp + 0xb]
// 004d18b7  51                   push ecx
// 004d18b8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d18bc  8d542410             lea edx, [esp + 0x10]
// 004d18c0  52                   push edx
// 004d18c1  50                   push eax
// 004d18c2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004d18c6  50                   push eax
// 004d18c7  51                   push ecx
// 004d18c8  8bce                 mov ecx, esi
// 004d18ca  c644241f01           mov byte ptr [esp + 0x1f], 1
// 004d18cf  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004d18d7  e884f4ffff           call 0x4d0d60
// 004d18dc  807c240b00           cmp byte ptr [esp + 0xb], 0
// 004d18e1  8bf8                 mov edi, eax
// 004d18e3  750a                 jne 0x4d18ef
// 004d18e5  5f                   pop edi
// 004d18e6  32c0                 xor al, al
// 004d18e8  5e                   pop esi
// 004d18e9  83c410               add esp, 0x10
// 004d18ec  c20800               ret 8
// 004d18ef  85ff                 test edi, edi
// 004d18f1  7439                 je 0x4d192c
// 004d18f3  803f00               cmp byte ptr [edi], 0
// 004d18f6  55                   push ebp
// 004d18f7  7509                 jne 0x4d1902
// 004d18f9  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004d18fd  ff4f04               dec dword ptr [edi + 4]
// 004d1900  eb03                 jmp 0x4d1905
// 004d1902  8b6f08               mov ebp, dword ptr [edi + 8]
// 004d1905  8bce                 mov ecx, esi
// 004d1907  e804e2ffff           call 0x4cfb10
// 004d190c  896808               mov dword ptr [eax + 8], ebp
// 004d190f  c60000               mov byte ptr [eax], 0
// 004d1912  c7400401000000       mov dword ptr [eax + 4], 1
// 004d1919  8b5614               mov edx, dword ptr [esi + 0x14]
// 004d191c  899010010000         mov dword ptr [eax + 0x110], edx
// 004d1922  89b814010000         mov dword ptr [eax + 0x114], edi
// 004d1928  894614               mov dword ptr [esi + 0x14], eax
// 004d192b  5d                   pop ebp
// 004d192c  5f                   pop edi
// 004d192d  b001                 mov al, 1
// 004d192f  5e                   pop esi
// 004d1930  83c410               add esp, 0x10
// 004d1933  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Insert@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@QAE_NIABQAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
