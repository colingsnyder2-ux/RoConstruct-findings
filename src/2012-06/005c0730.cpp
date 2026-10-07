// roc 2012-06 005c0730  unit: RakNet::RakPeer  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c0730
//
// 005c0730  837c240400           cmp dword ptr [esp + 4], 0
// 005c0735  53                   push ebx
// 005c0736  55                   push ebp
// 005c0737  56                   push esi
// 005c0738  57                   push edi
// 005c0739  8bf9                 mov edi, ecx
// 005c073b  0f8484000000         je 0x5c07c5
// 005c0741  837c241800           cmp dword ptr [esp + 0x18], 0
// 005c0746  747d                 je 0x5c07c5
// 005c0748  83bf2c02000000       cmp dword ptr [edi + 0x22c], 0
// 005c074f  7474                 je 0x5c07c5
// 005c0751  8a4704               mov al, byte ptr [edi + 4]
// 005c0754  3c01                 cmp al, 1
// 005c0756  746d                 je 0x5c07c5
// 005c0758  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005c075c  85ed                 test ebp, ebp
// 005c075e  7465                 je 0x5c07c5
// 005c0760  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 005c0764  84db                 test bl, bl
// 005c0766  750d                 jne 0x5c0775
// 005c0768  8d4c242c             lea ecx, [esp + 0x2c]
// 005c076c  e81f9effff           call 0x5ba590
// 005c0771  84c0                 test al, al
// 005c0773  7550                 jne 0x5c07c5
// 005c0775  8b742458             mov esi, dword ptr [esp + 0x58]
// 005c0779  85f6                 test esi, esi
// 005c077b  750b                 jne 0x5c0788
// 005c077d  8b17                 mov edx, dword ptr [edi]
// 005c077f  8b4248               mov eax, dword ptr [edx + 0x48]
// 005c0782  8bcf                 mov ecx, edi
// 005c0784  ffd0                 call eax
// 005c0786  8bf0                 mov esi, eax
// 005c0788  56                   push esi
// 005c0789  6a00                 push 0
// 005c078b  53                   push ebx
// 005c078c  83ec28               sub esp, 0x28
// 005c078f  8d542460             lea edx, [esp + 0x60]
// 005c0793  8bcc                 mov ecx, esp
// 005c0795  52                   push edx
// 005c0796  e8559dffff           call 0x5ba4f0
// 005c079b  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005c079f  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005c07a3  8b542454             mov edx, dword ptr [esp + 0x54]
// 005c07a7  50                   push eax
// 005c07a8  8b442450             mov eax, dword ptr [esp + 0x50]
// 005c07ac  51                   push ecx
// 005c07ad  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005c07b1  52                   push edx
// 005c07b2  55                   push ebp
// 005c07b3  50                   push eax
// 005c07b4  51                   push ecx
// 005c07b5  8bcf                 mov ecx, edi
// 005c07b7  e854f7ffff           call 0x5bff10
// 005c07bc  8bc6                 mov eax, esi
// 005c07be  5f                   pop edi
// 005c07bf  5e                   pop esi
// 005c07c0  5d                   pop ebp
// 005c07c1  5b                   pop ebx
// 005c07c2  c24800               ret 0x48
// 005c07c5  5f                   pop edi
// 005c07c6  5e                   pop esi
// 005c07c7  5d                   pop ebp
// 005c07c8  33c0                 xor eax, eax
// 005c07ca  5b                   pop ebx
// 005c07cb  c24800               ret 0x48
// library rbx2016-raknet/RakPeer.cpp (function ?SendList@RakPeer@RakNet@@UAEIPAPBDPBHHW4PacketPriority@@W4PacketReliability@@DUAddressOrGUID@2@_NI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
