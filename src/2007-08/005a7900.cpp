// roc 2007-08 005a7900  unit: RBX::VHumanoid::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a7900
//
// 005a7900  6aff                 push -1
// 005a7902  6890b87500           push 0x75b890
// 005a7907  64a100000000         mov eax, dword ptr fs:[0]
// 005a790d  50                   push eax
// 005a790e  64892500000000       mov dword ptr fs:[0], esp
// 005a7915  83ec14               sub esp, 0x14
// 005a7918  53                   push ebx
// 005a7919  55                   push ebp
// 005a791a  56                   push esi
// 005a791b  8bf1                 mov esi, ecx
// 005a791d  57                   push edi
// 005a791e  89742410             mov dword ptr [esp + 0x10], esi
// 005a7922  e8996cfeff           call 0x58e5c0
// 005a7927  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a792b  51                   push ecx
// 005a792c  50                   push eax
// 005a792d  8bce                 mov ecx, esi
// 005a792f  e8dc8afcff           call 0x570410
// 005a7934  8b542438             mov edx, dword ptr [esp + 0x38]
// 005a7938  6aff                 push -1
// 005a793a  52                   push edx
// 005a793b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005a7943  c7064c577b00         mov dword ptr [esi], 0x7b574c
// 005a7949  e8f24ff8ff           call 0x52c940
// 005a794e  83c408               add esp, 8
// 005a7951  89442414             mov dword ptr [esp + 0x14], eax
// 005a7955  e8e65efcff           call 0x56d840
// 005a795a  8d4c241c             lea ecx, [esp + 0x1c]
// 005a795e  89442418             mov dword ptr [esp + 0x18], eax
// 005a7962  e8595afcff           call 0x56d3c0
// 005a7967  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005a796a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005a796d  8d7e18               lea edi, [esi + 0x18]
// 005a7970  8d442414             lea eax, [esp + 0x14]
// 005a7974  50                   push eax
// 005a7975  51                   push ecx
// 005a7976  55                   push ebp
// 005a7977  8bcf                 mov ecx, edi
// 005a7979  c644243801           mov byte ptr [esp + 0x38], 1
// 005a797e  e8bdd8e6ff           call 0x415240
// 005a7983  6a01                 push 1
// 005a7985  8bcf                 mov ecx, edi
// 005a7987  8bd8                 mov ebx, eax
// 005a7989  e8e2cce6ff           call 0x414670
// 005a798e  895d04               mov dword ptr [ebp + 4], ebx
// 005a7991  8b4304               mov eax, dword ptr [ebx + 4]
// 005a7994  8918                 mov dword ptr [eax], ebx
// 005a7996  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a799a  85c9                 test ecx, ecx
// 005a799c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005a79a1  7408                 je 0x5a79ab
// 005a79a3  8b11                 mov edx, dword ptr [ecx]
// 005a79a5  8b02                 mov eax, dword ptr [edx]
// 005a79a7  6a01                 push 1
// 005a79a9  ffd0                 call eax
// 005a79ab  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a79af  5f                   pop edi
// 005a79b0  8bc6                 mov eax, esi
// 005a79b2  5e                   pop esi
// 005a79b3  5d                   pop ebp
// 005a79b4  5b                   pop ebx
// 005a79b5  64890d00000000       mov dword ptr fs:[0], ecx
// 005a79bc  83c420               add esp, 0x20
// 005a79bf  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
