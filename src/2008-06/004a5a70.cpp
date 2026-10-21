// from server: 100% by EspClaude
// roc 2008-06 004a5a70  unit: RBX::VHint::?$FactoryProduct::Creator  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5a70
//
// 004a5a70  6aff                 push -1
// 004a5a72  68b9fe7c00           push 0x7cfeb9
// 004a5a77  64a100000000         mov eax, dword ptr fs:[0]
// 004a5a7d  50                   push eax
// 004a5a7e  64892500000000       mov dword ptr fs:[0], esp
// 004a5a85  83ec44               sub esp, 0x44
// 004a5a88  56                   push esi
// 004a5a89  57                   push edi
// 004a5a8a  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004a5a8e  8b37                 mov esi, dword ptr [edi]
// 004a5a90  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 004a5a98  8b4618               mov eax, dword ptr [esi + 0x18]
// 004a5a9b  8b402c               mov eax, dword ptr [eax + 0x2c]
// 004a5a9e  6a01                 push 1
// 004a5aa0  40                   inc eax
// 004a5aa1  50                   push eax
// 004a5aa2  8d4c2464             lea ecx, [esp + 0x64]
// 004a5aa6  51                   push ecx
// 004a5aa7  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 004a5aab  e860f7ffff           call 0x4a5210
// 004a5ab0  84c0                 test al, al
// 004a5ab2  7534                 jne 0x4a5ae8
// 004a5ab4  68343c8200           push 0x823c34
// 004a5ab9  8d4c240c             lea ecx, [esp + 0xc]
// 004a5abd  ff1558248000         call dword ptr [0x802458]
// 004a5ac3  8d542408           