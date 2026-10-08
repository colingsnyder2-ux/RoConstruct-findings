// roc 2007-08 00578930  unit: RBX::VPartInstance::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578930
//
// 00578930  6aff                 push -1
// 00578932  6890b87500           push 0x75b890
// 00578937  64a100000000         mov eax, dword ptr fs:[0]
// 0057893d  50                   push eax
// 0057893e  64892500000000       mov dword ptr fs:[0], esp
// 00578945  83ec14               sub esp, 0x14
// 00578948  53                   push ebx
// 00578949  55                   push ebp
// 0057894a  56                   push esi
// 0057894b  8bf1                 mov esi, ecx
// 0057894d  57                   push edi
// 0057894e  89742410             mov dword ptr [esp + 0x10], esi
// 00578952  e8a9e7ffff           call 0x577100
// 00578957  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057895b  51                   push ecx
// 0057895c  50                   push eax
// 0057895d  8bce                 mov ecx, esi
// 0057895f  e8ac7affff           call 0x570410
// 00578964  8b542438             mov edx, dword ptr [esp + 0x38]
// 00578968  6aff                 push -1
// 0057896a  52                   push edx
// 0057896b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00578973  c70684ae7a00         mov dword ptr [esi], 0x7aae84
// 00578979  e8c23ffbff           call 0x52c940
// 0057897e  83c408               add esp, 8
// 00578981  89442414             mov dword ptr [esp + 0x14], eax
// 00578985  e8664dffff           call 0x56d6f0
// 0057898a  8d4c241c             lea ecx, [esp + 0x1c]
// 0057898e  89442418             mov dword ptr [esp + 0x18], eax
// 00578992  e8294affff           call 0x56d3c0
// 00578997  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0057899a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0057899d  8d7e18               lea edi, [esi + 0x18]
// 005789a0  8d442414             lea eax, [esp + 0x14]
// 005789a4  50                   push eax
// 005789a5  51                   push ecx
// 005789a6  55                   push ebp
// 005789a7  8bcf                 mov ecx, edi
// 005789a9  c644243801           mov byte ptr [esp + 0x38], 1
// 005789ae  e88dc8e9ff           call 0x415240
// 005789b3  6a01                 push 1
// 005789b5  8bcf                 mov ecx, edi
// 005789b7  8bd8                 mov ebx, eax
// 005789b9  e8b2bce9ff           call 0x414670
// 005789be  895d04               mov dword ptr [ebp + 4], ebx
// 005789c1  8b4304               mov eax, dword ptr [ebx + 4]
// 005789c4  8918                 mov dword ptr [eax], ebx
// 005789c6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005789ca  85c9                 test ecx, ecx
// 005789cc  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005789d1  7408                 je 0x5789db
// 005789d3  8b11                 mov edx, dword ptr [ecx]
// 005789d5  8b02                 mov eax, dword ptr [edx]
// 005789d7  6a01                 push 1
// 005789d9  ffd0                 call eax
// 005789db  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005789df  5f                   pop edi
// 005789e0  8bc6                 mov eax, esi
// 005789e2  5e                   pop esi
// 005789e3  5d                   pop ebp
// 005789e4  5b                   pop ebx
// 005789e5  64890d00000000       mov dword ptr fs:[0], ecx
// 005789ec  83c420               add esp, 0x20
// 005789ef  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
