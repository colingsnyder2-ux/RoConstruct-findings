// roc 2008-06 0041bd20  unit: VDHTMLWindowService::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041bd20
//
// 0041bd20  6aff                 push -1
// 0041bd22  6830a17d00           push 0x7da130
// 0041bd27  64a100000000         mov eax, dword ptr fs:[0]
// 0041bd2d  50                   push eax
// 0041bd2e  64892500000000       mov dword ptr fs:[0], esp
// 0041bd35  83ec14               sub esp, 0x14
// 0041bd38  53                   push ebx
// 0041bd39  55                   push ebp
// 0041bd3a  56                   push esi
// 0041bd3b  8bf1                 mov esi, ecx
// 0041bd3d  57                   push edi
// 0041bd3e  89742410             mov dword ptr [esp + 0x10], esi
// 0041bd42  e859fbffff           call 0x41b8a0
// 0041bd47  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0041bd4b  51                   push ecx
// 0041bd4c  50                   push eax
// 0041bd4d  8bce                 mov ecx, esi
// 0041bd4f  e85cfd1400           call 0x56bab0
// 0041bd54  8b542438             mov edx, dword ptr [esp + 0x38]
// 0041bd58  6aff                 push -1
// 0041bd5a  52                   push edx
// 0041bd5b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0041bd63  c70600ef8000         mov dword ptr [esi], 0x80ef00
// 0041bd69  e822821300           call 0x553f90
// 0041bd6e  83c408               add esp, 8
// 0041bd71  89442414             mov dword ptr [esp + 0x14], eax
// 0041bd75  e876101500           call 0x56cdf0
// 0041bd7a  8d4c241c             lea ecx, [esp + 0x1c]
// 0041bd7e  89442418             mov dword ptr [esp + 0x18], eax
// 0041bd82  e8398d1700           call 0x594ac0
// 0041bd87  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 0041bd8a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0041bd8d  8d7e18               lea edi, [esi + 0x18]
// 0041bd90  8d442414             lea eax, [esp + 0x14]
// 0041bd94  50                   push eax
// 0041bd95  51                   push ecx
// 0041bd96  55                   push ebp
// 0041bd97  8bcf                 mov ecx, edi
// 0041bd99  c644243801           mov byte ptr [esp + 0x38], 1
// 0041bd9e  e85dc1ffff           call 0x417f00
// 0041bda3  6a01                 push 1
// 0041bda5  8bcf                 mov ecx, edi
// 0041bda7  8bd8                 mov ebx, eax
// 0041bda9  e8126f2600           call 0x682cc0
// 0041bdae  895d04               mov dword ptr [ebp + 4], ebx
// 0041bdb1  8b4304               mov eax, dword ptr [ebx + 4]
// 0041bdb4  8918                 mov dword ptr [eax], ebx
// 0041bdb6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0041bdba  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0041bdbf  85c9                 test ecx, ecx
// 0041bdc1  7408                 je 0x41bdcb
// 0041bdc3  8b11                 mov edx, dword ptr [ecx]
// 0041bdc5  8b02                 mov eax, dword ptr [edx]
// 0041bdc7  6a01                 push 1
// 0041bdc9  ffd0                 call eax
// 0041bdcb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0041bdcf  5f                   pop edi
// 0041bdd0  8bc6                 mov eax, esi
// 0041bdd2  5e                   pop esi
// 0041bdd3  5d                   pop ebp
// 0041bdd4  5b                   pop ebx
// 0041bdd5  64890d00000000       mov dword ptr fs:[0], ecx
// 0041bddc  83c420               add esp, 0x20
// 0041bddf  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
