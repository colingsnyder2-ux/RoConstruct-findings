// from server: 87% by EspClaude
// roc 2008-06 004b34c0  unit: RBX::VMotor::?$FactoryProduct::Creator  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b34c0
//
// 004b34c0  6aff                 push -1
// 004b34c2  68b05e7d00           push 0x7d5eb0
// 004b34c7  64a100000000         mov eax, dword ptr fs:[0]
// 004b34cd  50                   push eax
// 004b34ce  64892500000000       mov dword ptr fs:[0], esp
// 004b34d5  51                   push ecx
// 004b34d6  56                   push esi
// 004b34d7  57                   push edi
// 004b34d8  6894149700           push 0x971494
// 004b34dd  6810c64a00           push 0x4ac610
// 004b34e2  8bf1                 mov esi, ecx
// 004b34e4  e8473e0a00           call 0x557330
// 004b34e9  83c408               add esp, 8
// 004b34ec  e8df7fffff           call 0x4ab4d0
// 004b34f1  8bf8                 mov edi, eax
// 004b34f3  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 004b34f9  2b869c010000         sub eax, dword ptr [esi + 0x19c]
// 004b34ff  81c690010000         add esi, 0x190
// 004b3505  8d4f01               lea ecx, [edi + 1]
// 004b3508  c1f803               sar eax, 3
// 0