// roc 2008-06 00492d30  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00492d30
//
// 00492d30  6aff                 push -1
// 00492d32  6830a17d00           push 0x7da130
// 00492d37  64a100000000         mov eax, dword ptr fs:[0]
// 00492d3d  50                   push eax
// 00492d3e  64892500000000       mov dword ptr fs:[0], esp
// 00492d45  83ec14               sub esp, 0x14
// 00492d48  53                   push ebx
// 00492d49  55                   push ebp
// 00492d4a  56                   push esi
// 00492d4b  8bf1                 mov esi, ecx
// 00492d4d  57                   push edi
// 00492d4e  89742410             mov dword ptr [esp + 0x10], esi
// 00492d52  e809e6ffff           call 0x491360
// 00492d57  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00492d5b  51                   push ecx
// 00492d5c  50                   push eax
// 00492d5d  8bce                 mov ecx, esi
// 00492d5f  e84c8d0d00           call 0x56bab0
// 00492d64  8b542438             mov edx, dword ptr [esp + 0x38]
// 00492d68  6aff                 push -1
// 00492d6a  52                   push edx
// 00492d6b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00492d73  c706d81d8200         mov dword ptr [esi], 0x821dd8
// 00492d79  e812120c00           call 0x553f90
// 00492d7e  83c408               add esp, 8
// 00492d81  89442414             mov dword ptr [esp + 0x14], eax
// 00492d85  e8169f0d00           call 0x56cca0
// 00492d8a  8d4c241c             lea ecx, [esp + 0x1c]
// 00492d8e  89442418             mov dword ptr [esp + 0x18], eax
// 00492d92  e8291d1000           call 0x594ac0
// 00492d97  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 00492d9a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00492d9d  8d7e18               lea edi, [esi + 0x18]
// 00492da0  8d442414             lea eax, [esp + 0x14]
// 00492da4  50                   push eax
// 00492da5  51                   push ecx
// 00492da6  55                   push ebp
// 00492da7  8bcf                 mov ecx, edi
// 00492da9  c644243801           mov byte ptr [esp + 0x38], 1
// 00492dae  e84d51f8ff           call 0x417f00
// 00492db3  6a01                 push 1
// 00492db5  8bcf                 mov ecx, edi
// 00492db7  8bd8                 mov ebx, eax
// 00492db9  e802ff1e00           call 0x682cc0
// 00492dbe  895d04               mov dword ptr [ebp + 4], ebx
// 00492dc1  8b4304               mov eax, dword ptr [ebx + 4]
// 00492dc4  8918                 mov dword ptr [eax], ebx
// 00492dc6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00492dca  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00492dcf  85c9                 test ecx, ecx
// 00492dd1  7408                 je 0x492ddb
// 00492dd3  8b11                 mov edx, dword ptr [ecx]
// 00492dd5  8b02                 mov eax, dword ptr [edx]
// 00492dd7  6a01                 push 1
// 00492dd9  ffd0                 call eax
// 00492ddb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00492ddf  5f                   pop edi
// 00492de0  8bc6                 mov eax, esi
// 00492de2  5e                   pop esi
// 00492de3  5d                   pop ebp
// 00492de4  5b                   pop ebx
// 00492de5  64890d00000000       mov dword ptr fs:[0], ecx
// 00492dec  83c420               add esp, 0x20
// 00492def  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
