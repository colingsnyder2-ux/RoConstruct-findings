// roc 2008-06 005e4ee0  unit: RBX::VMotor::?$FactoryProduct  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4ee0
//
// 005e4ee0  6aff                 push -1
// 005e4ee2  688c677d00           push 0x7d678c
// 005e4ee7  64a100000000         mov eax, dword ptr fs:[0]
// 005e4eed  50                   push eax
// 005e4eee  64892500000000       mov dword ptr fs:[0], esp
// 005e4ef5  83ec24               sub esp, 0x24
// 005e4ef8  56                   push esi
// 005e4ef9  8bf1                 mov esi, ecx
// 005e4efb  6898000000           push 0x98
// 005e4f00  89742408             mov dword ptr [esp + 8], esi
// 005e4f04  e817ba0b00           call 0x6a0920
// 005e4f09  83c404               add esp, 4
// 005e4f0c  89442408             mov dword ptr [esp + 8], eax
// 005e4f10  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005e4f18  85c0                 test eax, eax
// 005e4f1a  7409                 je 0x5e4f25
// 005e4f1c  8bc8                 mov ecx, eax
// 005e4f1e  e8cd0c0000           call 0x5e5bf0
// 005e4f23  eb02                 jmp 0x5e4f27
// 005e4f25  33c0                 xor eax, eax
// 005e4f27  50                   push eax
// 005e4f28  8bce                 mov ecx, esi
// 005e4f2a  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 005e4f32  e869f4ffff           call 0x5e43a0
// 005e4f37  68ccf68300           push 0x83f6cc
// 005e4f3c  8d4c2410             lea ecx, [esp + 0x10]
// 005e4f40  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005e4f48  c7068cf68300         mov dword ptr [esi], 0x83f68c
// 005e4f4e  c7461080f68300       mov dword ptr [esi + 0x10], 0x83f680
// 005e4f55  c7461478f68300       mov dword ptr [esi + 0x14], 0x83f678
// 005e4f5c  c7462070f68300       mov dword ptr [esi + 0x20], 0x83f670
// 005e4f63  c7462460f68300       mov dword ptr [esi + 0x24], 0x83f660
// 005e4f6a  c7464450f68300       mov dword ptr [esi + 0x44], 0x83f650
// 005e4f71  c7466440f68300       mov dword ptr [esi + 0x64], 0x83f640
// 005e4f78  c7868400000030f68300 mov dword ptr [esi + 0x84], 0x83f630
// 005e4f82  c786a400000020f68300 mov dword ptr [esi + 0xa4], 0x83f620
// 005e4f8c  c786c400000010f68300 mov dword ptr [esi + 0xc4], 0x83f610
// 005e4f96  c78630010000f8f58300 mov dword ptr [esi + 0x130], 0x83f5f8
// 005e4fa0  ff1558248000         call dword ptr [0x802458]
// 005e4fa6  8d44240c             lea eax, [esp + 0xc]
// 005e4faa  50                   push eax
// 005e4fab  8bce                 mov ecx, esi
// 005e4fad  c644243402           mov byte ptr [esp + 0x34], 2
// 005e4fb2  e8d95ff7ff           call 0x55af90
// 005e4fb7  8d4c240c             lea ecx, [esp + 0xc]
// 005e4fbb  c644243001           mov byte ptr [esp + 0x30], 1
// 005e4fc0  ff1568248000         call dword ptr [0x802468]
// 005e4fc6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e4fca  8bc6                 mov eax, esi
// 005e4fcc  5e                   pop esi
// 005e4fcd  64890d00000000       mov dword ptr fs:[0], ecx
// 005e4fd4  83c430               add esp, 0x30
// 005e4fd7  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??0Motor@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
