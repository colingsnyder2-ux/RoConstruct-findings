// roc 2008-06 006370c0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006370c0
//
// 006370c0  6aff                 push -1
// 006370c2  6830a17d00           push 0x7da130
// 006370c7  64a100000000         mov eax, dword ptr fs:[0]
// 006370cd  50                   push eax
// 006370ce  64892500000000       mov dword ptr fs:[0], esp
// 006370d5  83ec14               sub esp, 0x14
// 006370d8  53                   push ebx
// 006370d9  55                   push ebp
// 006370da  56                   push esi
// 006370db  8bf1                 mov esi, ecx
// 006370dd  57                   push edi
// 006370de  89742410             mov dword ptr [esp + 0x10], esi
// 006370e2  e869ffffff           call 0x637050
// 006370e7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006370eb  51                   push ecx
// 006370ec  50                   push eax
// 006370ed  8bce                 mov ecx, esi
// 006370ef  e8bc49f3ff           call 0x56bab0
// 006370f4  8b542438             mov edx, dword ptr [esp + 0x38]
// 006370f8  6aff                 push -1
// 006370fa  52                   push edx
// 006370fb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00637103  c706948b8400         mov dword ptr [esi], 0x848b94
// 00637109  e882cef1ff           call 0x553f90
// 0063710e  83c408               add esp, 8
// 00637111  89442414             mov dword ptr [esp + 0x14], eax
// 00637115  e8265ef3ff           call 0x56cf40
// 0063711a  8d4c241c             lea ecx, [esp + 0x1c]
// 0063711e  89442418             mov dword ptr [esp + 0x18], eax
// 00637122  e899d9f5ff           call 0x594ac0
// 00637127  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 0063712a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0063712d  8d7e18               lea edi, [esi + 0x18]
// 00637130  8d442414             lea eax, [esp + 0x14]
// 00637134  50                   push eax
// 00637135  51                   push ecx
// 00637136  55                   push ebp
// 00637137  8bcf                 mov ecx, edi
// 00637139  c644243801           mov byte ptr [esp + 0x38], 1
// 0063713e  e8bd0ddeff           call 0x417f00
// 00637143  6a01                 push 1
// 00637145  8bcf                 mov ecx, edi
// 00637147  8bd8                 mov ebx, eax
// 00637149  e872bb0400           call 0x682cc0
// 0063714e  895d04               mov dword ptr [ebp + 4], ebx
// 00637151  8b4304               mov eax, dword ptr [ebx + 4]
// 00637154  8918                 mov dword ptr [eax], ebx
// 00637156  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0063715a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063715f  85c9                 test ecx, ecx
// 00637161  7408                 je 0x63716b
// 00637163  8b11                 mov edx, dword ptr [ecx]
// 00637165  8b02                 mov eax, dword ptr [edx]
// 00637167  6a01                 push 1
// 00637169  ffd0                 call eax
// 0063716b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0063716f  5f                   pop edi
// 00637170  8bc6                 mov eax, esi
// 00637172  5e                   pop esi
// 00637173  5d                   pop ebp
// 00637174  5b                   pop ebx
// 00637175  64890d00000000       mov dword ptr fs:[0], ecx
// 0063717c  83c420               add esp, 0x20
// 0063717f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
