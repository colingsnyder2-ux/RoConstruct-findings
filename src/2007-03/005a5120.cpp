// roc 2007-03 005a5120  unit: seg_005a0000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a5120
//
// 005a5120  6aff                 push -1
// 005a5122  6820937500           push 0x759320
// 005a5127  64a100000000         mov eax, dword ptr fs:[0]
// 005a512d  50                   push eax
// 005a512e  64892500000000       mov dword ptr fs:[0], esp
// 005a5135  83ec14               sub esp, 0x14
// 005a5138  53                   push ebx
// 005a5139  55                   push ebp
// 005a513a  56                   push esi
// 005a513b  8bf1                 mov esi, ecx
// 005a513d  57                   push edi
// 005a513e  89742410             mov dword ptr [esp + 0x10], esi
// 005a5142  e88932feff           call 0x5883d0
// 005a5147  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a514b  51                   push ecx
// 005a514c  50                   push eax
// 005a514d  8bce                 mov ecx, esi
// 005a514f  e8dcb1fcff           call 0x570330
// 005a5154  8b542438             mov edx, dword ptr [esp + 0x38]
// 005a5158  6aff                 push -1
// 005a515a  52                   push edx
// 005a515b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005a5163  c70680587b00         mov dword ptr [esi], 0x7b5880
// 005a5169  e87287f8ff           call 0x52d8e0
// 005a516e  83c408               add esp, 8
// 005a5171  89442414             mov dword ptr [esp + 0x14], eax
// 005a5175  e83681fcff           call 0x56d2b0
// 005a517a  8d4c241c             lea ecx, [esp + 0x1c]
// 005a517e  89442418             mov dword ptr [esp + 0x18], eax
// 005a5182  e8c97cfcff           call 0x56ce50
// 005a5187  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005a518a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005a518d  8d7e18               lea edi, [esi + 0x18]
// 005a5190  8d442414             lea eax, [esp + 0x14]
// 005a5194  50                   push eax
// 005a5195  51                   push ecx
// 005a5196  55                   push ebp
// 005a5197  8bcf                 mov ecx, edi
// 005a5199  c644243801           mov byte ptr [esp + 0x38], 1
// 005a519e  e8fd10e7ff           call 0x4162a0
// 005a51a3  6a01                 push 1
// 005a51a5  8bcf                 mov ecx, edi
// 005a51a7  8bd8                 mov ebx, eax
// 005a51a9  e8d204e7ff           call 0x415680
// 005a51ae  895d04               mov dword ptr [ebp + 4], ebx
// 005a51b1  8b4304               mov eax, dword ptr [ebx + 4]
// 005a51b4  8918                 mov dword ptr [eax], ebx
// 005a51b6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a51ba  85c9                 test ecx, ecx
// 005a51bc  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005a51c1  7408                 je 0x5a51cb
// 005a51c3  8b11                 mov edx, dword ptr [ecx]
// 005a51c5  8b02                 mov eax, dword ptr [edx]
// 005a51c7  6a01                 push 1
// 005a51c9  ffd0                 call eax
// 005a51cb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a51cf  5f                   pop edi
// 005a51d0  8bc6                 mov eax, esi
// 005a51d2  5e                   pop esi
// 005a51d3  5d                   pop ebp
// 005a51d4  5b                   pop ebx
// 005a51d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005a51dc  83c420               add esp, 0x20
// 005a51df  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
