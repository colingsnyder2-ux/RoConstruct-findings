// roc 2007-03 005e39e0  unit: seg_005e0000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e39e0
//
// 005e39e0  6aff                 push -1
// 005e39e2  6820937500           push 0x759320
// 005e39e7  64a100000000         mov eax, dword ptr fs:[0]
// 005e39ed  50                   push eax
// 005e39ee  64892500000000       mov dword ptr fs:[0], esp
// 005e39f5  83ec14               sub esp, 0x14
// 005e39f8  53                   push ebx
// 005e39f9  55                   push ebp
// 005e39fa  56                   push esi
// 005e39fb  8bf1                 mov esi, ecx
// 005e39fd  57                   push edi
// 005e39fe  89742410             mov dword ptr [esp + 0x10], esi
// 005e3a02  e8d9e3ffff           call 0x5e1de0
// 005e3a07  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e3a0b  51                   push ecx
// 005e3a0c  50                   push eax
// 005e3a0d  8bce                 mov ecx, esi
// 005e3a0f  e81cc9f8ff           call 0x570330
// 005e3a14  8b542438             mov edx, dword ptr [esp + 0x38]
// 005e3a18  6aff                 push -1
// 005e3a1a  52                   push edx
// 005e3a1b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e3a23  c70648ec7b00         mov dword ptr [esi], 0x7bec48
// 005e3a29  e8b29ef4ff           call 0x52d8e0
// 005e3a2e  83c408               add esp, 8
// 005e3a31  89442414             mov dword ptr [esp + 0x14], eax
// 005e3a35  e8169bf8ff           call 0x56d550
// 005e3a3a  8d4c241c             lea ecx, [esp + 0x1c]
// 005e3a3e  89442418             mov dword ptr [esp + 0x18], eax
// 005e3a42  e80994f8ff           call 0x56ce50
// 005e3a47  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005e3a4a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005e3a4d  8d7e18               lea edi, [esi + 0x18]
// 005e3a50  8d442414             lea eax, [esp + 0x14]
// 005e3a54  50                   push eax
// 005e3a55  51                   push ecx
// 005e3a56  55                   push ebp
// 005e3a57  8bcf                 mov ecx, edi
// 005e3a59  c644243801           mov byte ptr [esp + 0x38], 1
// 005e3a5e  e83d28e3ff           call 0x4162a0
// 005e3a63  6a01                 push 1
// 005e3a65  8bcf                 mov ecx, edi
// 005e3a67  8bd8                 mov ebx, eax
// 005e3a69  e8121ce3ff           call 0x415680
// 005e3a6e  895d04               mov dword ptr [ebp + 4], ebx
// 005e3a71  8b4304               mov eax, dword ptr [ebx + 4]
// 005e3a74  8918                 mov dword ptr [eax], ebx
// 005e3a76  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e3a7a  85c9                 test ecx, ecx
// 005e3a7c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e3a81  7408                 je 0x5e3a8b
// 005e3a83  8b11                 mov edx, dword ptr [ecx]
// 005e3a85  8b02                 mov eax, dword ptr [edx]
// 005e3a87  6a01                 push 1
// 005e3a89  ffd0                 call eax
// 005e3a8b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e3a8f  5f                   pop edi
// 005e3a90  8bc6                 mov eax, esi
// 005e3a92  5e                   pop esi
// 005e3a93  5d                   pop ebp
// 005e3a94  5b                   pop ebx
// 005e3a95  64890d00000000       mov dword ptr fs:[0], ecx
// 005e3a9c  83c420               add esp, 0x20
// 005e3a9f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
