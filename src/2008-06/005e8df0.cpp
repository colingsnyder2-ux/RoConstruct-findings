// roc 2008-06 005e8df0  unit: RBX::Primitive  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e8df0
//
// 005e8df0  6aff                 push -1
// 005e8df2  6830a17d00           push 0x7da130
// 005e8df7  64a100000000         mov eax, dword ptr fs:[0]
// 005e8dfd  50                   push eax
// 005e8dfe  64892500000000       mov dword ptr fs:[0], esp
// 005e8e05  83ec14               sub esp, 0x14
// 005e8e08  53                   push ebx
// 005e8e09  55                   push ebp
// 005e8e0a  56                   push esi
// 005e8e0b  8bf1                 mov esi, ecx
// 005e8e0d  57                   push edi
// 005e8e0e  89742410             mov dword ptr [esp + 0x10], esi
// 005e8e12  e8e944eeff           call 0x4cd300
// 005e8e17  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e8e1b  51                   push ecx
// 005e8e1c  50                   push eax
// 005e8e1d  8bce                 mov ecx, esi
// 005e8e1f  e88c2cf8ff           call 0x56bab0
// 005e8e24  8b542438             mov edx, dword ptr [esp + 0x38]
// 005e8e28  6aff                 push -1
// 005e8e2a  52                   push edx
// 005e8e2b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e8e33  c7066cf88300         mov dword ptr [esi], 0x83f86c
// 005e8e39  e852b1f6ff           call 0x553f90
// 005e8e3e  83c408               add esp, 8
// 005e8e41  89442414             mov dword ptr [esp + 0x14], eax
// 005e8e45  e8963cf8ff           call 0x56cae0
// 005e8e4a  8d4c241c             lea ecx, [esp + 0x1c]
// 005e8e4e  89442418             mov dword ptr [esp + 0x18], eax
// 005e8e52  e869bcfaff           call 0x594ac0
// 005e8e57  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 005e8e5a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005e8e5d  8d7e18               lea edi, [esi + 0x18]
// 005e8e60  8d442414             lea eax, [esp + 0x14]
// 005e8e64  50                   push eax
// 005e8e65  51                   push ecx
// 005e8e66  55                   push ebp
// 005e8e67  8bcf                 mov ecx, edi
// 005e8e69  c644243801           mov byte ptr [esp + 0x38], 1
// 005e8e6e  e88df0e2ff           call 0x417f00
// 005e8e73  6a01                 push 1
// 005e8e75  8bcf                 mov ecx, edi
// 005e8e77  8bd8                 mov ebx, eax
// 005e8e79  e8429e0900           call 0x682cc0
// 005e8e7e  895d04               mov dword ptr [ebp + 4], ebx
// 005e8e81  8b4304               mov eax, dword ptr [ebx + 4]
// 005e8e84  8918                 mov dword ptr [eax], ebx
// 005e8e86  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e8e8a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e8e8f  85c9                 test ecx, ecx
// 005e8e91  7408                 je 0x5e8e9b
// 005e8e93  8b11                 mov edx, dword ptr [ecx]
// 005e8e95  8b02                 mov eax, dword ptr [edx]
// 005e8e97  6a01                 push 1
// 005e8e99  ffd0                 call eax
// 005e8e9b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e8e9f  5f                   pop edi
// 005e8ea0  8bc6                 mov eax, esi
// 005e8ea2  5e                   pop esi
// 005e8ea3  5d                   pop ebp
// 005e8ea4  5b                   pop ebx
// 005e8ea5  64890d00000000       mov dword ptr fs:[0], ecx
// 005e8eac  83c420               add esp, 0x20
// 005e8eaf  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
