// roc 2008-06 00636940  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636940
//
// 00636940  6aff                 push -1
// 00636942  6830a17d00           push 0x7da130
// 00636947  64a100000000         mov eax, dword ptr fs:[0]
// 0063694d  50                   push eax
// 0063694e  64892500000000       mov dword ptr fs:[0], esp
// 00636955  83ec14               sub esp, 0x14
// 00636958  53                   push ebx
// 00636959  55                   push ebp
// 0063695a  56                   push esi
// 0063695b  8bf1                 mov esi, ecx
// 0063695d  57                   push edi
// 0063695e  89742410             mov dword ptr [esp + 0x10], esi
// 00636962  e869ffffff           call 0x6368d0
// 00636967  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0063696b  51                   push ecx
// 0063696c  50                   push eax
// 0063696d  8bce                 mov ecx, esi
// 0063696f  e83c51f3ff           call 0x56bab0
// 00636974  8b542438             mov edx, dword ptr [esp + 0x38]
// 00636978  6aff                 push -1
// 0063697a  52                   push edx
// 0063697b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00636983  c706348b8400         mov dword ptr [esi], 0x848b34
// 00636989  e802d6f1ff           call 0x553f90
// 0063698e  83c408               add esp, 8
// 00636991  89442414             mov dword ptr [esp + 0x14], eax
// 00636995  e82662f3ff           call 0x56cbc0
// 0063699a  8d4c241c             lea ecx, [esp + 0x1c]
// 0063699e  89442418             mov dword ptr [esp + 0x18], eax
// 006369a2  e819e1f5ff           call 0x594ac0
// 006369a7  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 006369aa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 006369ad  8d7e18               lea edi, [esi + 0x18]
// 006369b0  8d442414             lea eax, [esp + 0x14]
// 006369b4  50                   push eax
// 006369b5  51                   push ecx
// 006369b6  55                   push ebp
// 006369b7  8bcf                 mov ecx, edi
// 006369b9  c644243801           mov byte ptr [esp + 0x38], 1
// 006369be  e83d15deff           call 0x417f00
// 006369c3  6a01                 push 1
// 006369c5  8bcf                 mov ecx, edi
// 006369c7  8bd8                 mov ebx, eax
// 006369c9  e8f2c20400           call 0x682cc0
// 006369ce  895d04               mov dword ptr [ebp + 4], ebx
// 006369d1  8b4304               mov eax, dword ptr [ebx + 4]
// 006369d4  8918                 mov dword ptr [eax], ebx
// 006369d6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006369da  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006369df  85c9                 test ecx, ecx
// 006369e1  7408                 je 0x6369eb
// 006369e3  8b11                 mov edx, dword ptr [ecx]
// 006369e5  8b02                 mov eax, dword ptr [edx]
// 006369e7  6a01                 push 1
// 006369e9  ffd0                 call eax
// 006369eb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006369ef  5f                   pop edi
// 006369f0  8bc6                 mov eax, esi
// 006369f2  5e                   pop esi
// 006369f3  5d                   pop ebp
// 006369f4  5b                   pop ebx
// 006369f5  64890d00000000       mov dword ptr fs:[0], ecx
// 006369fc  83c420               add esp, 0x20
// 006369ff  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
