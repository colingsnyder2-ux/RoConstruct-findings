// roc 2007-03 0059edb0  unit: seg_00590000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059edb0
//
// 0059edb0  6aff                 push -1
// 0059edb2  6820937500           push 0x759320
// 0059edb7  64a100000000         mov eax, dword ptr fs:[0]
// 0059edbd  50                   push eax
// 0059edbe  64892500000000       mov dword ptr fs:[0], esp
// 0059edc5  83ec14               sub esp, 0x14
// 0059edc8  53                   push ebx
// 0059edc9  55                   push ebp
// 0059edca  56                   push esi
// 0059edcb  8bf1                 mov esi, ecx
// 0059edcd  57                   push edi
// 0059edce  89742410             mov dword ptr [esp + 0x10], esi
// 0059edd2  e8e9f3ffff           call 0x59e1c0
// 0059edd7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059eddb  51                   push ecx
// 0059eddc  50                   push eax
// 0059eddd  8bce                 mov ecx, esi
// 0059eddf  e84c15fdff           call 0x570330
// 0059ede4  8b542438             mov edx, dword ptr [esp + 0x38]
// 0059ede8  6aff                 push -1
// 0059edea  52                   push edx
// 0059edeb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0059edf3  c706802e7b00         mov dword ptr [esi], 0x7b2e80
// 0059edf9  e8e2eaf8ff           call 0x52d8e0
// 0059edfe  83c408               add esp, 8
// 0059ee01  89442414             mov dword ptr [esp + 0x14], eax
// 0059ee05  e8e6e2fcff           call 0x56d0f0
// 0059ee0a  8d4c241c             lea ecx, [esp + 0x1c]
// 0059ee0e  89442418             mov dword ptr [esp + 0x18], eax
// 0059ee12  e839e0fcff           call 0x56ce50
// 0059ee17  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0059ee1a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0059ee1d  8d7e18               lea edi, [esi + 0x18]
// 0059ee20  8d442414             lea eax, [esp + 0x14]
// 0059ee24  50                   push eax
// 0059ee25  51                   push ecx
// 0059ee26  55                   push ebp
// 0059ee27  8bcf                 mov ecx, edi
// 0059ee29  c644243801           mov byte ptr [esp + 0x38], 1
// 0059ee2e  e86d74e7ff           call 0x4162a0
// 0059ee33  6a01                 push 1
// 0059ee35  8bcf                 mov ecx, edi
// 0059ee37  8bd8                 mov ebx, eax
// 0059ee39  e84268e7ff           call 0x415680
// 0059ee3e  895d04               mov dword ptr [ebp + 4], ebx
// 0059ee41  8b4304               mov eax, dword ptr [ebx + 4]
// 0059ee44  8918                 mov dword ptr [eax], ebx
// 0059ee46  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059ee4a  85c9                 test ecx, ecx
// 0059ee4c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0059ee51  7408                 je 0x59ee5b
// 0059ee53  8b11                 mov edx, dword ptr [ecx]
// 0059ee55  8b02                 mov eax, dword ptr [edx]
// 0059ee57  6a01                 push 1
// 0059ee59  ffd0                 call eax
// 0059ee5b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059ee5f  5f                   pop edi
// 0059ee60  8bc6                 mov eax, esi
// 0059ee62  5e                   pop esi
// 0059ee63  5d                   pop ebp
// 0059ee64  5b                   pop ebx
// 0059ee65  64890d00000000       mov dword ptr fs:[0], ecx
// 0059ee6c  83c420               add esp, 0x20
// 0059ee6f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
