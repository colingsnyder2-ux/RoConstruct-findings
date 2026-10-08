// roc 2008-06 005e9ec0  unit: RBX::PhysicsService  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9ec0
//
// 005e9ec0  6aff                 push -1
// 005e9ec2  68e8727d00           push 0x7d72e8
// 005e9ec7  64a100000000         mov eax, dword ptr fs:[0]
// 005e9ecd  50                   push eax
// 005e9ece  64892500000000       mov dword ptr fs:[0], esp
// 005e9ed5  51                   push ecx
// 005e9ed6  56                   push esi
// 005e9ed7  57                   push edi
// 005e9ed8  8bf9                 mov edi, ecx
// 005e9eda  6a04                 push 4
// 005e9edc  8d7704               lea esi, [edi + 4]
// 005e9edf  e83c6a0b00           call 0x6a0920
// 005e9ee4  33c9                 xor ecx, ecx
// 005e9ee6  83c404               add esp, 4
// 005e9ee9  3bc1                 cmp eax, ecx
// 005e9eeb  7404                 je 0x5e9ef1
// 005e9eed  8930                 mov dword ptr [eax], esi
// 005e9eef  eb02                 jmp 0x5e9ef3
// 005e9ef1  33c0                 xor eax, eax
// 005e9ef3  8906                 mov dword ptr [esi], eax
// 005e9ef5  894e0c               mov dword ptr [esi + 0xc], ecx
// 005e9ef8  894e10               mov dword ptr [esi + 0x10], ecx
// 005e9efb  894e14               mov dword ptr [esi + 0x14], ecx
// 005e9efe  894f1c               mov dword ptr [edi + 0x1c], ecx
// 005e9f01  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e9f05  8bc7                 mov eax, edi
// 005e9f07  5f                   pop edi
// 005e9f08  5e                   pop esi
// 005e9f09  64890d00000000       mov dword ptr fs:[0], ecx
// 005e9f10  83c410               add esp, 0x10
// 005e9f13  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??0?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
