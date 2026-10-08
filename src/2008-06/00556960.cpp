// roc 2008-06 00556960  unit: RBX::VRunService::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00556960
//
// 00556960  6aff                 push -1
// 00556962  6830a17d00           push 0x7da130
// 00556967  64a100000000         mov eax, dword ptr fs:[0]
// 0055696d  50                   push eax
// 0055696e  64892500000000       mov dword ptr fs:[0], esp
// 00556975  83ec14               sub esp, 0x14
// 00556978  53                   push ebx
// 00556979  55                   push ebp
// 0055697a  56                   push esi
// 0055697b  8bf1                 mov esi, ecx
// 0055697d  57                   push edi
// 0055697e  89742410             mov dword ptr [esp + 0x10], esi
// 00556982  e8a9faffff           call 0x556430
// 00556987  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0055698b  51                   push ecx
// 0055698c  50                   push eax
// 0055698d  8bce                 mov ecx, esi
// 0055698f  e81c510100           call 0x56bab0
// 00556994  8b542438             mov edx, dword ptr [esp + 0x38]
// 00556998  6aff                 push -1
// 0055699a  52                   push edx
// 0055699b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005569a3  c70608d68200         mov dword ptr [esi], 0x82d608
// 005569a9  e8e2d5ffff           call 0x553f90
// 005569ae  83c408               add esp, 8
// 005569b1  89442414             mov dword ptr [esp + 0x14], eax
// 005569b5  e8e6620100           call 0x56cca0
// 005569ba  8d4c241c             lea ecx, [esp + 0x1c]
// 005569be  89442418             mov dword ptr [esp + 0x18], eax
// 005569c2  e8f9e00300           call 0x594ac0
// 005569c7  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 005569ca  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005569cd  8d7e18               lea edi, [esi + 0x18]
// 005569d0  8d442414             lea eax, [esp + 0x14]
// 005569d4  50                   push eax
// 005569d5  51                   push ecx
// 005569d6  55                   push ebp
// 005569d7  8bcf                 mov ecx, edi
// 005569d9  c644243801           mov byte ptr [esp + 0x38], 1
// 005569de  e81d15ecff           call 0x417f00
// 005569e3  6a01                 push 1
// 005569e5  8bcf                 mov ecx, edi
// 005569e7  8bd8                 mov ebx, eax
// 005569e9  e8d2c21200           call 0x682cc0
// 005569ee  895d04               mov dword ptr [ebp + 4], ebx
// 005569f1  8b4304               mov eax, dword ptr [ebx + 4]
// 005569f4  8918                 mov dword ptr [eax], ebx
// 005569f6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005569fa  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005569ff  85c9                 test ecx, ecx
// 00556a01  7408                 je 0x556a0b
// 00556a03  8b11                 mov edx, dword ptr [ecx]
// 00556a05  8b02                 mov eax, dword ptr [edx]
// 00556a07  6a01                 push 1
// 00556a09  ffd0                 call eax
// 00556a0b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00556a0f  5f                   pop edi
// 00556a10  8bc6                 mov eax, esi
// 00556a12  5e                   pop esi
// 00556a13  5d                   pop ebp
// 00556a14  5b                   pop ebx
// 00556a15  64890d00000000       mov dword ptr fs:[0], ecx
// 00556a1c  83c420               add esp, 0x20
// 00556a1f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
