// roc 2007-03 005e34c0  unit: seg_005e0000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e34c0
//
// 005e34c0  6aff                 push -1
// 005e34c2  6820937500           push 0x759320
// 005e34c7  64a100000000         mov eax, dword ptr fs:[0]
// 005e34cd  50                   push eax
// 005e34ce  64892500000000       mov dword ptr fs:[0], esp
// 005e34d5  83ec14               sub esp, 0x14
// 005e34d8  53                   push ebx
// 005e34d9  55                   push ebp
// 005e34da  56                   push esi
// 005e34db  8bf1                 mov esi, ecx
// 005e34dd  57                   push edi
// 005e34de  89742410             mov dword ptr [esp + 0x10], esi
// 005e34e2  e859e6ffff           call 0x5e1b40
// 005e34e7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e34eb  51                   push ecx
// 005e34ec  50                   push eax
// 005e34ed  8bce                 mov ecx, esi
// 005e34ef  e83ccef8ff           call 0x570330
// 005e34f4  8b542438             mov edx, dword ptr [esp + 0x38]
// 005e34f8  6aff                 push -1
// 005e34fa  52                   push edx
// 005e34fb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e3503  c706e8eb7b00         mov dword ptr [esi], 0x7bebe8
// 005e3509  e8d2a3f4ff           call 0x52d8e0
// 005e350e  83c408               add esp, 8
// 005e3511  89442414             mov dword ptr [esp + 0x14], eax
// 005e3515  e8b69cf8ff           call 0x56d1d0
// 005e351a  8d4c241c             lea ecx, [esp + 0x1c]
// 005e351e  89442418             mov dword ptr [esp + 0x18], eax
// 005e3522  e82999f8ff           call 0x56ce50
// 005e3527  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005e352a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005e352d  8d7e18               lea edi, [esi + 0x18]
// 005e3530  8d442414             lea eax, [esp + 0x14]
// 005e3534  50                   push eax
// 005e3535  51                   push ecx
// 005e3536  55                   push ebp
// 005e3537  8bcf                 mov ecx, edi
// 005e3539  c644243801           mov byte ptr [esp + 0x38], 1
// 005e353e  e85d2de3ff           call 0x4162a0
// 005e3543  6a01                 push 1
// 005e3545  8bcf                 mov ecx, edi
// 005e3547  8bd8                 mov ebx, eax
// 005e3549  e83221e3ff           call 0x415680
// 005e354e  895d04               mov dword ptr [ebp + 4], ebx
// 005e3551  8b4304               mov eax, dword ptr [ebx + 4]
// 005e3554  8918                 mov dword ptr [eax], ebx
// 005e3556  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e355a  85c9                 test ecx, ecx
// 005e355c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e3561  7408                 je 0x5e356b
// 005e3563  8b11                 mov edx, dword ptr [ecx]
// 005e3565  8b02                 mov eax, dword ptr [edx]
// 005e3567  6a01                 push 1
// 005e3569  ffd0                 call eax
// 005e356b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e356f  5f                   pop edi
// 005e3570  8bc6                 mov eax, esi
// 005e3572  5e                   pop esi
// 005e3573  5d                   pop ebp
// 005e3574  5b                   pop ebx
// 005e3575  64890d00000000       mov dword ptr fs:[0], ecx
// 005e357c  83c420               add esp, 0x20
// 005e357f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
