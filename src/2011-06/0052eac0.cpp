// roc 2011-06 0052eac0  unit: RBX::Network::ProfiledRakPeer  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052eac0
//
// 0052eac0  83ec34               sub esp, 0x34
// 0052eac3  53                   push ebx
// 0052eac4  55                   push ebp
// 0052eac5  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0052eac9  56                   push esi
// 0052eaca  57                   push edi
// 0052eacb  8bf9                 mov edi, ecx
// 0052eacd  33db                 xor ebx, ebx
// 0052eacf  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052ead3  8d7710               lea esi, [edi + 0x10]
// 0052ead6  8b4604               mov eax, dword ptr [esi + 4]
// 0052ead9  3b4608               cmp eax, dword ptr [esi + 8]
// 0052eadc  742e                 je 0x52eb0c
// 0052eade  8d4c2414             lea ecx, [esp + 0x14]
// 0052eae2  51                   push ecx
// 0052eae3  8bce                 mov ecx, esi
// 0052eae5  83cb01               or ebx, 1
// 0052eae8  e8b3f9ffff           call 0x52e4a0
// 0052eaed  8b4808               mov ecx, dword ptr [eax + 8]
// 0052eaf0  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052eaf3  81c140420f00         add ecx, 0xf4240
// 0052eaf9  83d000               adc eax, 0
// 0052eafc  3bc5                 cmp eax, ebp
// 0052eafe  770c                 ja 0x52eb0c
// 0052eb00  7206                 jb 0x52eb08
// 0052eb02  3b4c2448             cmp ecx, dword ptr [esp + 0x48]
// 0052eb06  7304                 jae 0x52eb0c
// 0052eb08  b001                 mov al, 1
// 0052eb0a  eb02                 jmp 0x52eb0e
// 0052eb0c  32c0                 xor al, al
// 0052eb0e  f6c301               test bl, 1
// 0052eb11  7403                 je 0x52eb16
// 0052eb13  83e3fe               and ebx, 0xfffffffe
// 0052eb16  84c0                 test al, al
// 0052eb18  7425                 je 0x52eb3f
// 0052eb1a  8d542424             lea edx, [esp + 0x24]
// 0052eb1e  52                   push edx
// 0052eb1f  8bce                 mov ecx, esi
// 0052eb21  e87af9ffff           call 0x52e4a0
// 0052eb26  8b08                 mov ecx, dword ptr [eax]
// 0052eb28  294f08               sub dword ptr [edi + 8], ecx
// 0052eb2b  8b5004               mov edx, dword ptr [eax + 4]
// 0052eb2e  8d442434             lea eax, [esp + 0x34]
// 0052eb32  19570c               sbb dword ptr [edi + 0xc], edx
// 0052eb35  50                   push eax
// 0052eb36  8bce                 mov ecx, esi
// 0052eb38  e893f9ffff           call 0x52e4d0
// 0052eb3d  eb97                 jmp 0x52ead6
// 0052eb3f  5f                   pop edi
// 0052eb40  5e                   pop esi
// 0052eb41  5d                   pop ebp
// 0052eb42  5b                   pop ebx
// 0052eb43  83c434               add esp, 0x34
// 0052eb46  c20800               ret 8
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?ClearExpired1@BPSTracker@RakNet@@QAEX_K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
