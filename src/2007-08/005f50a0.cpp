// roc 2007-08 005f50a0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f50a0
//
// 005f50a0  6aff                 push -1
// 005f50a2  6890b87500           push 0x75b890
// 005f50a7  64a100000000         mov eax, dword ptr fs:[0]
// 005f50ad  50                   push eax
// 005f50ae  64892500000000       mov dword ptr fs:[0], esp
// 005f50b5  83ec14               sub esp, 0x14
// 005f50b8  53                   push ebx
// 005f50b9  55                   push ebp
// 005f50ba  56                   push esi
// 005f50bb  8bf1                 mov esi, ecx
// 005f50bd  57                   push edi
// 005f50be  89742410             mov dword ptr [esp + 0x10], esi
// 005f50c2  e849b5f9ff           call 0x590610
// 005f50c7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f50cb  51                   push ecx
// 005f50cc  50                   push eax
// 005f50cd  8bce                 mov ecx, esi
// 005f50cf  e83cb3f7ff           call 0x570410
// 005f50d4  8b542438             mov edx, dword ptr [esp + 0x38]
// 005f50d8  6aff                 push -1
// 005f50da  52                   push edx
// 005f50db  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005f50e3  c706b40e7c00         mov dword ptr [esi], 0x7c0eb4
// 005f50e9  e85278f3ff           call 0x52c940
// 005f50ee  83c408               add esp, 8
// 005f50f1  89442414             mov dword ptr [esp + 0x14], eax
// 005f50f5  e8f685f7ff           call 0x56d6f0
// 005f50fa  8d4c241c             lea ecx, [esp + 0x1c]
// 005f50fe  89442418             mov dword ptr [esp + 0x18], eax
// 005f5102  e8b982f7ff           call 0x56d3c0
// 005f5107  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005f510a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005f510d  8d7e18               lea edi, [esi + 0x18]
// 005f5110  8d442414             lea eax, [esp + 0x14]
// 005f5114  50                   push eax
// 005f5115  51                   push ecx
// 005f5116  55                   push ebp
// 005f5117  8bcf                 mov ecx, edi
// 005f5119  c644243801           mov byte ptr [esp + 0x38], 1
// 005f511e  e81d01e2ff           call 0x415240
// 005f5123  6a01                 push 1
// 005f5125  8bcf                 mov ecx, edi
// 005f5127  8bd8                 mov ebx, eax
// 005f5129  e842f5e1ff           call 0x414670
// 005f512e  895d04               mov dword ptr [ebp + 4], ebx
// 005f5131  8b4304               mov eax, dword ptr [ebx + 4]
// 005f5134  8918                 mov dword ptr [eax], ebx
// 005f5136  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f513a  85c9                 test ecx, ecx
// 005f513c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f5141  7408                 je 0x5f514b
// 005f5143  8b11                 mov edx, dword ptr [ecx]
// 005f5145  8b02                 mov eax, dword ptr [edx]
// 005f5147  6a01                 push 1
// 005f5149  ffd0                 call eax
// 005f514b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f514f  5f                   pop edi
// 005f5150  8bc6                 mov eax, esi
// 005f5152  5e                   pop esi
// 005f5153  5d                   pop ebp
// 005f5154  5b                   pop ebx
// 005f5155  64890d00000000       mov dword ptr fs:[0], ecx
// 005f515c  83c420               add esp, 0x20
// 005f515f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
