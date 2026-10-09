// roc 2008-06 005e4600  unit: RBX::VSnap::?$FactoryProduct  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4600
//
// 005e4600  6aff                 push -1
// 005e4602  680c677d00           push 0x7d670c
// 005e4607  64a100000000         mov eax, dword ptr fs:[0]
// 005e460d  50                   push eax
// 005e460e  64892500000000       mov dword ptr fs:[0], esp
// 005e4615  83ec24               sub esp, 0x24
// 005e4618  56                   push esi
// 005e4619  57                   push edi
// 005e461a  8bf1                 mov esi, ecx
// 005e461c  6888000000           push 0x88
// 005e4621  8974240c             mov dword ptr [esp + 0xc], esi
// 005e4625  e8f6c20b00           call 0x6a0920
// 005e462a  8bf8                 mov edi, eax
// 005e462c  83c404               add esp, 4
// 005e462f  897c240c             mov dword ptr [esp + 0xc], edi
// 005e4633  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e463b  85ff                 test edi, edi
// 005e463d  740f                 je 0x5e464e
// 005e463f  8bcf                 mov ecx, edi
// 005e4641  e85a100600           call 0x6456a0
// 005e4646  c707fce08300         mov dword ptr [edi], 0x83e0fc
// 005e464c  eb02                 jmp 0x5e4650
// 005e464e  33ff                 xor edi, edi
// 005e4650  57                   push edi
// 005e4651  8bce                 mov ecx, esi
// 005e4653  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 005e465b  e800f8ffff           call 0x5e3e60
// 005e4660  68acf18300           push 0x83f1ac
// 005e4665  8d4c2414             lea ecx, [esp + 0x14]
// 005e4669  c744243801000000     mov dword ptr [esp + 0x38], 1
// 005e4671  c7066cf18300         mov dword ptr [esi], 0x83f16c
// 005e4677  c7461060f18300       mov dword ptr [esi + 0x10], 0x83f160
// 005e467e  c7461458f18300       mov dword ptr [esi + 0x14], 0x83f158
// 005e4685  c7462050f18300       mov dword ptr [esi + 0x20], 0x83f150
// 005e468c  c7462440f18300       mov dword ptr [esi + 0x24], 0x83f140
// 005e4693  c7464430f18300       mov dword ptr [esi + 0x44], 0x83f130
// 005e469a  c7466420f18300       mov dword ptr [esi + 0x64], 0x83f120
// 005e46a1  c7868400000010f18300 mov dword ptr [esi + 0x84], 0x83f110
// 005e46ab  c786a400000000f18300 mov dword ptr [esi + 0xa4], 0x83f100
// 005e46b5  c786c4000000f0f08300 mov dword ptr [esi + 0xc4], 0x83f0f0
// 005e46bf  c78630010000d8f08300 mov dword ptr [esi + 0x130], 0x83f0d8
// 005e46c9  ff1558248000         call dword ptr [0x802458]
// 005e46cf  8d442410             lea eax, [esp + 0x10]
// 005e46d3  50                   push eax
// 005e46d4  8bce                 mov ecx, esi
// 005e46d6  c644243802           mov byte ptr [esp + 0x38], 2
// 005e46db  e8b068f7ff           call 0x55af90
// 005e46e0  8d4c2410             lea ecx, [esp + 0x10]
// 005e46e4  c644243401           mov byte ptr [esp + 0x34], 1
// 005e46e9  ff1568248000         call dword ptr [0x802468]
// 005e46ef  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e46f3  5f                   pop edi
// 005e46f4  8bc6                 mov eax, esi
// 005e46f6  5e                   pop esi
// 005e46f7  64890d00000000       mov dword ptr fs:[0], ecx
// 005e46fe  83c430               add esp, 0x30
// 005e4701  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??0Snap@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
