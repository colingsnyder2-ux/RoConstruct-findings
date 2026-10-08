// roc 2007-08 005eaad0  unit: RBX::VFlagStandService::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eaad0
//
// 005eaad0  6aff                 push -1
// 005eaad2  6890b87500           push 0x75b890
// 005eaad7  64a100000000         mov eax, dword ptr fs:[0]
// 005eaadd  50                   push eax
// 005eaade  64892500000000       mov dword ptr fs:[0], esp
// 005eaae5  83ec14               sub esp, 0x14
// 005eaae8  53                   push ebx
// 005eaae9  55                   push ebp
// 005eaaea  56                   push esi
// 005eaaeb  8bf1                 mov esi, ecx
// 005eaaed  57                   push edi
// 005eaaee  89742410             mov dword ptr [esp + 0x10], esi
// 005eaaf2  e8a967faff           call 0x5912a0
// 005eaaf7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005eaafb  51                   push ecx
// 005eaafc  50                   push eax
// 005eaafd  8bce                 mov ecx, esi
// 005eaaff  e80c59f8ff           call 0x570410
// 005eab04  8b542438             mov edx, dword ptr [esp + 0x38]
// 005eab08  6aff                 push -1
// 005eab0a  52                   push edx
// 005eab0b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005eab13  c7069ce37b00         mov dword ptr [esi], 0x7be39c
// 005eab19  e8221ef4ff           call 0x52c940
// 005eab1e  83c408               add esp, 8
// 005eab21  89442414             mov dword ptr [esp + 0x14], eax
// 005eab25  e8c62bf8ff           call 0x56d6f0
// 005eab2a  8d4c241c             lea ecx, [esp + 0x1c]
// 005eab2e  89442418             mov dword ptr [esp + 0x18], eax
// 005eab32  e88928f8ff           call 0x56d3c0
// 005eab37  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005eab3a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005eab3d  8d7e18               lea edi, [esi + 0x18]
// 005eab40  8d442414             lea eax, [esp + 0x14]
// 005eab44  50                   push eax
// 005eab45  51                   push ecx
// 005eab46  55                   push ebp
// 005eab47  8bcf                 mov ecx, edi
// 005eab49  c644243801           mov byte ptr [esp + 0x38], 1
// 005eab4e  e8eda6e2ff           call 0x415240
// 005eab53  6a01                 push 1
// 005eab55  8bcf                 mov ecx, edi
// 005eab57  8bd8                 mov ebx, eax
// 005eab59  e8129be2ff           call 0x414670
// 005eab5e  895d04               mov dword ptr [ebp + 4], ebx
// 005eab61  8b4304               mov eax, dword ptr [ebx + 4]
// 005eab64  8918                 mov dword ptr [eax], ebx
// 005eab66  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005eab6a  85c9                 test ecx, ecx
// 005eab6c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005eab71  7408                 je 0x5eab7b
// 005eab73  8b11                 mov edx, dword ptr [ecx]
// 005eab75  8b02                 mov eax, dword ptr [edx]
// 005eab77  6a01                 push 1
// 005eab79  ffd0                 call eax
// 005eab7b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005eab7f  5f                   pop edi
// 005eab80  8bc6                 mov eax, esi
// 005eab82  5e                   pop esi
// 005eab83  5d                   pop ebp
// 005eab84  5b                   pop ebx
// 005eab85  64890d00000000       mov dword ptr fs:[0], ecx
// 005eab8c  83c420               add esp, 0x20
// 005eab8f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
