// roc 2008-06 00636f80  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636f80
//
// 00636f80  6aff                 push -1
// 00636f82  6830a17d00           push 0x7da130
// 00636f87  64a100000000         mov eax, dword ptr fs:[0]
// 00636f8d  50                   push eax
// 00636f8e  64892500000000       mov dword ptr fs:[0], esp
// 00636f95  83ec14               sub esp, 0x14
// 00636f98  53                   push ebx
// 00636f99  55                   push ebp
// 00636f9a  56                   push esi
// 00636f9b  8bf1                 mov esi, ecx
// 00636f9d  57                   push edi
// 00636f9e  89742410             mov dword ptr [esp + 0x10], esi
// 00636fa2  e869ffffff           call 0x636f10
// 00636fa7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00636fab  51                   push ecx
// 00636fac  50                   push eax
// 00636fad  8bce                 mov ecx, esi
// 00636faf  e8fc4af3ff           call 0x56bab0
// 00636fb4  8b542438             mov edx, dword ptr [esp + 0x38]
// 00636fb8  6aff                 push -1
// 00636fba  52                   push edx
// 00636fbb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00636fc3  c706848b8400         mov dword ptr [esi], 0x848b84
// 00636fc9  e8c2cff1ff           call 0x553f90
// 00636fce  83c408               add esp, 8
// 00636fd1  89442414             mov dword ptr [esp + 0x14], eax
// 00636fd5  e8262af6ff           call 0x599a00
// 00636fda  8d4c241c             lea ecx, [esp + 0x1c]
// 00636fde  89442418             mov dword ptr [esp + 0x18], eax
// 00636fe2  e8d9daf5ff           call 0x594ac0
// 00636fe7  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 00636fea  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00636fed  8d7e18               lea edi, [esi + 0x18]
// 00636ff0  8d442414             lea eax, [esp + 0x14]
// 00636ff4  50                   push eax
// 00636ff5  51                   push ecx
// 00636ff6  55                   push ebp
// 00636ff7  8bcf                 mov ecx, edi
// 00636ff9  c644243801           mov byte ptr [esp + 0x38], 1
// 00636ffe  e8fd0edeff           call 0x417f00
// 00637003  6a01                 push 1
// 00637005  8bcf                 mov ecx, edi
// 00637007  8bd8                 mov ebx, eax
// 00637009  e8b2bc0400           call 0x682cc0
// 0063700e  895d04               mov dword ptr [ebp + 4], ebx
// 00637011  8b4304               mov eax, dword ptr [ebx + 4]
// 00637014  8918                 mov dword ptr [eax], ebx
// 00637016  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0063701a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063701f  85c9                 test ecx, ecx
// 00637021  7408                 je 0x63702b
// 00637023  8b11                 mov edx, dword ptr [ecx]
// 00637025  8b02                 mov eax, dword ptr [edx]
// 00637027  6a01                 push 1
// 00637029  ffd0                 call eax
// 0063702b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0063702f  5f                   pop edi
// 00637030  8bc6                 mov eax, esi
// 00637032  5e                   pop esi
// 00637033  5d                   pop ebp
// 00637034  5b                   pop ebx
// 00637035  64890d00000000       mov dword ptr fs:[0], ecx
// 0063703c  83c420               add esp, 0x20
// 0063703f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
