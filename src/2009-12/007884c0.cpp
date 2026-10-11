// roc 2009-12 007884c0  unit: RBX::UniversalTool  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007884c0
//
// 007884c0  53                   push ebx
// 007884c1  8bd9                 mov ebx, ecx
// 007884c3  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 007884c6  8b00                 mov eax, dword ptr [eax]
// 007884c8  8b4b04               mov ecx, dword ptr [ebx + 4]
// 007884cb  56                   push esi
// 007884cc  57                   push edi
// 007884cd  8d7b24               lea edi, [ebx + 0x24]
// 007884d0  890f                 mov dword ptr [edi], ecx
// 007884d2  894704               mov dword ptr [edi + 4], eax
// 007884d5  8b07                 mov eax, dword ptr [edi]
// 007884d7  8b731c               mov esi, dword ptr [ebx + 0x1c]
// 007884da  8b4b04               mov ecx, dword ptr [ebx + 4]
// 007884dd  85c0                 test eax, eax
// 007884df  7404                 je 0x7884e5
// 007884e1  3bc1                 cmp eax, ecx
// 007884e3  7406                 je 0x7884eb
// 007884e5  ff1560b79800         call dword ptr [0x98b760]
// 007884eb  397704               cmp dword ptr [edi + 4], esi
// 007884ee  745c                 je 0x78854c
// 007884f0  8b07                 mov eax, dword ptr [edi]
// 007884f2  85c0                 test eax, eax
// 007884f4  750c                 jne 0x788502
// 007884f6  ff1560b79800         call dword ptr [0x98b760]
// 007884fc  8b07                 mov eax, dword ptr [edi]
// 007884fe  85c0                 test eax, eax
// 00788500  7404                 je 0x788506
// 00788502  8b00                 mov eax, dword ptr [eax]
// 00788504  eb02                 jmp 0x788508
// 00788506  33c0                 xor eax, eax
// 00788508  8b4f04               mov ecx, dword ptr [edi + 4]
// 0078850b  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 0078850e  7506                 jne 0x788516
// 00788510  ff1560b79800         call dword ptr [0x98b760]
// 00788516  8b5704               mov edx, dword ptr [edi + 4]
// 00788519  8b720c               mov esi, dword ptr [edx + 0xc]
// 0078851c  8b4608               mov eax, dword ptr [esi + 8]
// 0078851f  83f801               cmp eax, 1
// 00788522  7e0d                 jle 0x788531
// 00788524  48                   dec eax
// 00788525  8bcf                 mov ecx, edi
// 00788527  894608               mov dword ptr [esi + 8], eax
// 0078852a  e8511af9ff           call 0x719f80
// 0078852f  eba4                 jmp 0x7884d5
// 00788531  8b06                 mov eax, dword ptr [esi]
// 00788533  8b10                 mov edx, dword ptr [eax]
// 00788535  6a01                 push 1
// 00788537  8bce                 mov ecx, esi
// 00788539  c7460800000000       mov dword ptr [esi + 8], 0
// 00788540  ffd2                 call edx
// 00788542  56                   push esi
// 00788543  8bcb                 mov ecx, ebx
// 00788545  e8d6feffff           call 0x788420
// 0078854a  eb89                 jmp 0x7884d5
// 0078854c  5f                   pop edi
// 0078854d  5e                   pop esi
// 0078854e  5b                   pop ebx
// 0078854f  c3                   ret 
// library openrbx-client/App\v8world\IMoving.cpp (function ?onMovingHeartbeat@IMovingManager@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/IMoving.cpp
