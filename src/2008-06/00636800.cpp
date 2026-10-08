// roc 2008-06 00636800  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636800
//
// 00636800  6aff                 push -1
// 00636802  6830a17d00           push 0x7da130
// 00636807  64a100000000         mov eax, dword ptr fs:[0]
// 0063680d  50                   push eax
// 0063680e  64892500000000       mov dword ptr fs:[0], esp
// 00636815  83ec14               sub esp, 0x14
// 00636818  53                   push ebx
// 00636819  55                   push ebp
// 0063681a  56                   push esi
// 0063681b  8bf1                 mov esi, ecx
// 0063681d  57                   push edi
// 0063681e  89742410             mov dword ptr [esp + 0x10], esi
// 00636822  e839c4f8ff           call 0x5c2c60
// 00636827  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0063682b  51                   push ecx
// 0063682c  50                   push eax
// 0063682d  8bce                 mov ecx, esi
// 0063682f  e87c52f3ff           call 0x56bab0
// 00636834  8b542438             mov edx, dword ptr [esp + 0x38]
// 00636838  6aff                 push -1
// 0063683a  52                   push edx
// 0063683b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00636843  c706248b8400         mov dword ptr [esi], 0x848b24
// 00636849  e842d7f1ff           call 0x553f90
// 0063684e  83c408               add esp, 8
// 00636851  89442414             mov dword ptr [esp + 0x14], eax
// 00636855  e88662f3ff           call 0x56cae0
// 0063685a  8d4c241c             lea ecx, [esp + 0x1c]
// 0063685e  89442418             mov dword ptr [esp + 0x18], eax
// 00636862  e859e2f5ff           call 0x594ac0
// 00636867  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 0063686a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0063686d  8d7e18               lea edi, [esi + 0x18]
// 00636870  8d442414             lea eax, [esp + 0x14]
// 00636874  50                   push eax
// 00636875  51                   push ecx
// 00636876  55                   push ebp
// 00636877  8bcf                 mov ecx, edi
// 00636879  c644243801           mov byte ptr [esp + 0x38], 1
// 0063687e  e87d16deff           call 0x417f00
// 00636883  6a01                 push 1
// 00636885  8bcf                 mov ecx, edi
// 00636887  8bd8                 mov ebx, eax
// 00636889  e832c40400           call 0x682cc0
// 0063688e  895d04               mov dword ptr [ebp + 4], ebx
// 00636891  8b4304               mov eax, dword ptr [ebx + 4]
// 00636894  8918                 mov dword ptr [eax], ebx
// 00636896  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0063689a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063689f  85c9                 test ecx, ecx
// 006368a1  7408                 je 0x6368ab
// 006368a3  8b11                 mov edx, dword ptr [ecx]
// 006368a5  8b02                 mov eax, dword ptr [edx]
// 006368a7  6a01                 push 1
// 006368a9  ffd0                 call eax
// 006368ab  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006368af  5f                   pop edi
// 006368b0  8bc6                 mov eax, esi
// 006368b2  5e                   pop esi
// 006368b3  5d                   pop ebp
// 006368b4  5b                   pop ebx
// 006368b5  64890d00000000       mov dword ptr fs:[0], ecx
// 006368bc  83c420               add esp, 0x20
// 006368bf  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
