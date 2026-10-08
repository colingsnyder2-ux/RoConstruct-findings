// roc 2007-03 005e3840  unit: seg_005e0000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e3840
//
// 005e3840  6aff                 push -1
// 005e3842  6820937500           push 0x759320
// 005e3847  64a100000000         mov eax, dword ptr fs:[0]
// 005e384d  50                   push eax
// 005e384e  64892500000000       mov dword ptr fs:[0], esp
// 005e3855  83ec14               sub esp, 0x14
// 005e3858  53                   push ebx
// 005e3859  55                   push ebp
// 005e385a  56                   push esi
// 005e385b  8bf1                 mov esi, ecx
// 005e385d  57                   push edi
// 005e385e  89742410             mov dword ptr [esp + 0x10], esi
// 005e3862  e899e4ffff           call 0x5e1d00
// 005e3867  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e386b  51                   push ecx
// 005e386c  50                   push eax
// 005e386d  8bce                 mov ecx, esi
// 005e386f  e8bccaf8ff           call 0x570330
// 005e3874  8b542438             mov edx, dword ptr [esp + 0x38]
// 005e3878  6aff                 push -1
// 005e387a  52                   push edx
// 005e387b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e3883  c70628ec7b00         mov dword ptr [esi], 0x7bec28
// 005e3889  e852a0f4ff           call 0x52d8e0
// 005e388e  83c408               add esp, 8
// 005e3891  89442414             mov dword ptr [esp + 0x14], eax
// 005e3895  e8d69bf8ff           call 0x56d470
// 005e389a  8d4c241c             lea ecx, [esp + 0x1c]
// 005e389e  89442418             mov dword ptr [esp + 0x18], eax
// 005e38a2  e8a995f8ff           call 0x56ce50
// 005e38a7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005e38aa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005e38ad  8d7e18               lea edi, [esi + 0x18]
// 005e38b0  8d442414             lea eax, [esp + 0x14]
// 005e38b4  50                   push eax
// 005e38b5  51                   push ecx
// 005e38b6  55                   push ebp
// 005e38b7  8bcf                 mov ecx, edi
// 005e38b9  c644243801           mov byte ptr [esp + 0x38], 1
// 005e38be  e8dd29e3ff           call 0x4162a0
// 005e38c3  6a01                 push 1
// 005e38c5  8bcf                 mov ecx, edi
// 005e38c7  8bd8                 mov ebx, eax
// 005e38c9  e8b21de3ff           call 0x415680
// 005e38ce  895d04               mov dword ptr [ebp + 4], ebx
// 005e38d1  8b4304               mov eax, dword ptr [ebx + 4]
// 005e38d4  8918                 mov dword ptr [eax], ebx
// 005e38d6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e38da  85c9                 test ecx, ecx
// 005e38dc  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e38e1  7408                 je 0x5e38eb
// 005e38e3  8b11                 mov edx, dword ptr [ecx]
// 005e38e5  8b02                 mov eax, dword ptr [edx]
// 005e38e7  6a01                 push 1
// 005e38e9  ffd0                 call eax
// 005e38eb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e38ef  5f                   pop edi
// 005e38f0  8bc6                 mov eax, esi
// 005e38f2  5e                   pop esi
// 005e38f3  5d                   pop ebp
// 005e38f4  5b                   pop ebx
// 005e38f5  64890d00000000       mov dword ptr fs:[0], ecx
// 005e38fc  83c420               add esp, 0x20
// 005e38ff  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
