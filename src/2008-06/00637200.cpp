// roc 2008-06 00637200  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637200
//
// 00637200  6aff                 push -1
// 00637202  6830a17d00           push 0x7da130
// 00637207  64a100000000         mov eax, dword ptr fs:[0]
// 0063720d  50                   push eax
// 0063720e  64892500000000       mov dword ptr fs:[0], esp
// 00637215  83ec14               sub esp, 0x14
// 00637218  53                   push ebx
// 00637219  55                   push ebp
// 0063721a  56                   push esi
// 0063721b  8bf1                 mov esi, ecx
// 0063721d  57                   push edi
// 0063721e  89742410             mov dword ptr [esp + 0x10], esi
// 00637222  e869ffffff           call 0x637190
// 00637227  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0063722b  51                   push ecx
// 0063722c  50                   push eax
// 0063722d  8bce                 mov ecx, esi
// 0063722f  e87c48f3ff           call 0x56bab0
// 00637234  8b542438             mov edx, dword ptr [esp + 0x38]
// 00637238  6aff                 push -1
// 0063723a  52                   push edx
// 0063723b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00637243  c706a48b8400         mov dword ptr [esi], 0x848ba4
// 00637249  e842cdf1ff           call 0x553f90
// 0063724e  83c408               add esp, 8
// 00637251  89442414             mov dword ptr [esp + 0x14], eax
// 00637255  e8c65ef3ff           call 0x56d120
// 0063725a  8d4c241c             lea ecx, [esp + 0x1c]
// 0063725e  89442418             mov dword ptr [esp + 0x18], eax
// 00637262  e859d8f5ff           call 0x594ac0
// 00637267  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 0063726a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0063726d  8d7e18               lea edi, [esi + 0x18]
// 00637270  8d442414             lea eax, [esp + 0x14]
// 00637274  50                   push eax
// 00637275  51                   push ecx
// 00637276  55                   push ebp
// 00637277  8bcf                 mov ecx, edi
// 00637279  c644243801           mov byte ptr [esp + 0x38], 1
// 0063727e  e87d0cdeff           call 0x417f00
// 00637283  6a01                 push 1
// 00637285  8bcf                 mov ecx, edi
// 00637287  8bd8                 mov ebx, eax
// 00637289  e832ba0400           call 0x682cc0
// 0063728e  895d04               mov dword ptr [ebp + 4], ebx
// 00637291  8b4304               mov eax, dword ptr [ebx + 4]
// 00637294  8918                 mov dword ptr [eax], ebx
// 00637296  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0063729a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063729f  85c9                 test ecx, ecx
// 006372a1  7408                 je 0x6372ab
// 006372a3  8b11                 mov edx, dword ptr [ecx]
// 006372a5  8b02                 mov eax, dword ptr [edx]
// 006372a7  6a01                 push 1
// 006372a9  ffd0                 call eax
// 006372ab  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006372af  5f                   pop edi
// 006372b0  8bc6                 mov eax, esi
// 006372b2  5e                   pop esi
// 006372b3  5d                   pop ebp
// 006372b4  5b                   pop ebx
// 006372b5  64890d00000000       mov dword ptr fs:[0], ecx
// 006372bc  83c420               add esp, 0x20
// 006372bf  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
