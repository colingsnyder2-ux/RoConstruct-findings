// roc 2008-06 0062c8f0  unit: RBX::VFlagStandService::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062c8f0
//
// 0062c8f0  6aff                 push -1
// 0062c8f2  6830a17d00           push 0x7da130
// 0062c8f7  64a100000000         mov eax, dword ptr fs:[0]
// 0062c8fd  50                   push eax
// 0062c8fe  64892500000000       mov dword ptr fs:[0], esp
// 0062c905  83ec14               sub esp, 0x14
// 0062c908  53                   push ebx
// 0062c909  55                   push ebp
// 0062c90a  56                   push esi
// 0062c90b  8bf1                 mov esi, ecx
// 0062c90d  57                   push edi
// 0062c90e  89742410             mov dword ptr [esp + 0x10], esi
// 0062c912  e8d96ff9ff           call 0x5c38f0
// 0062c917  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0062c91b  51                   push ecx
// 0062c91c  50                   push eax
// 0062c91d  8bce                 mov ecx, esi
// 0062c91f  e88cf1f3ff           call 0x56bab0
// 0062c924  8b542438             mov edx, dword ptr [esp + 0x38]
// 0062c928  6aff                 push -1
// 0062c92a  52                   push edx
// 0062c92b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0062c933  c70680648400         mov dword ptr [esi], 0x846480
// 0062c939  e85276f2ff           call 0x553f90
// 0062c93e  83c408               add esp, 8
// 0062c941  89442414             mov dword ptr [esp + 0x14], eax
// 0062c945  e89601f4ff           call 0x56cae0
// 0062c94a  8d4c241c             lea ecx, [esp + 0x1c]
// 0062c94e  89442418             mov dword ptr [esp + 0x18], eax
// 0062c952  e86981f6ff           call 0x594ac0
// 0062c957  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 0062c95a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0062c95d  8d7e18               lea edi, [esi + 0x18]
// 0062c960  8d442414             lea eax, [esp + 0x14]
// 0062c964  50                   push eax
// 0062c965  51                   push ecx
// 0062c966  55                   push ebp
// 0062c967  8bcf                 mov ecx, edi
// 0062c969  c644243801           mov byte ptr [esp + 0x38], 1
// 0062c96e  e88db5deff           call 0x417f00
// 0062c973  6a01                 push 1
// 0062c975  8bcf                 mov ecx, edi
// 0062c977  8bd8                 mov ebx, eax
// 0062c979  e842630500           call 0x682cc0
// 0062c97e  895d04               mov dword ptr [ebp + 4], ebx
// 0062c981  8b4304               mov eax, dword ptr [ebx + 4]
// 0062c984  8918                 mov dword ptr [eax], ebx
// 0062c986  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0062c98a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0062c98f  85c9                 test ecx, ecx
// 0062c991  7408                 je 0x62c99b
// 0062c993  8b11                 mov edx, dword ptr [ecx]
// 0062c995  8b02                 mov eax, dword ptr [edx]
// 0062c997  6a01                 push 1
// 0062c999  ffd0                 call eax
// 0062c99b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0062c99f  5f                   pop edi
// 0062c9a0  8bc6                 mov eax, esi
// 0062c9a2  5e                   pop esi
// 0062c9a3  5d                   pop ebp
// 0062c9a4  5b                   pop ebx
// 0062c9a5  64890d00000000       mov dword ptr fs:[0], ecx
// 0062c9ac  83c420               add esp, 0x20
// 0062c9af  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
