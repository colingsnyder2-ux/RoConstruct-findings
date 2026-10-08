// roc 2008-06 00636d00  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636d00
//
// 00636d00  6aff                 push -1
// 00636d02  6830a17d00           push 0x7da130
// 00636d07  64a100000000         mov eax, dword ptr fs:[0]
// 00636d0d  50                   push eax
// 00636d0e  64892500000000       mov dword ptr fs:[0], esp
// 00636d15  83ec14               sub esp, 0x14
// 00636d18  53                   push ebx
// 00636d19  55                   push ebp
// 00636d1a  56                   push esi
// 00636d1b  8bf1                 mov esi, ecx
// 00636d1d  57                   push edi
// 00636d1e  89742410             mov dword ptr [esp + 0x10], esi
// 00636d22  e869ffffff           call 0x636c90
// 00636d27  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00636d2b  51                   push ecx
// 00636d2c  50                   push eax
// 00636d2d  8bce                 mov ecx, esi
// 00636d2f  e87c4df3ff           call 0x56bab0
// 00636d34  8b542438             mov edx, dword ptr [esp + 0x38]
// 00636d38  6aff                 push -1
// 00636d3a  52                   push edx
// 00636d3b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00636d43  c706648b8400         mov dword ptr [esi], 0x848b64
// 00636d49  e842d2f1ff           call 0x553f90
// 00636d4e  83c408               add esp, 8
// 00636d51  89442414             mov dword ptr [esp + 0x14], eax
// 00636d55  e89660f3ff           call 0x56cdf0
// 00636d5a  8d4c241c             lea ecx, [esp + 0x1c]
// 00636d5e  89442418             mov dword ptr [esp + 0x18], eax
// 00636d62  e859ddf5ff           call 0x594ac0
// 00636d67  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 00636d6a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00636d6d  8d7e18               lea edi, [esi + 0x18]
// 00636d70  8d442414             lea eax, [esp + 0x14]
// 00636d74  50                   push eax
// 00636d75  51                   push ecx
// 00636d76  55                   push ebp
// 00636d77  8bcf                 mov ecx, edi
// 00636d79  c644243801           mov byte ptr [esp + 0x38], 1
// 00636d7e  e87d11deff           call 0x417f00
// 00636d83  6a01                 push 1
// 00636d85  8bcf                 mov ecx, edi
// 00636d87  8bd8                 mov ebx, eax
// 00636d89  e832bf0400           call 0x682cc0
// 00636d8e  895d04               mov dword ptr [ebp + 4], ebx
// 00636d91  8b4304               mov eax, dword ptr [ebx + 4]
// 00636d94  8918                 mov dword ptr [eax], ebx
// 00636d96  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00636d9a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00636d9f  85c9                 test ecx, ecx
// 00636da1  7408                 je 0x636dab
// 00636da3  8b11                 mov edx, dword ptr [ecx]
// 00636da5  8b02                 mov eax, dword ptr [edx]
// 00636da7  6a01                 push 1
// 00636da9  ffd0                 call eax
// 00636dab  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00636daf  5f                   pop edi
// 00636db0  8bc6                 mov eax, esi
// 00636db2  5e                   pop esi
// 00636db3  5d                   pop ebp
// 00636db4  5b                   pop ebx
// 00636db5  64890d00000000       mov dword ptr fs:[0], ecx
// 00636dbc  83c420               add esp, 0x20
// 00636dbf  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
