// roc 2007-03 005e3910  unit: seg_005e0000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e3910
//
// 005e3910  6aff                 push -1
// 005e3912  6820937500           push 0x759320
// 005e3917  64a100000000         mov eax, dword ptr fs:[0]
// 005e391d  50                   push eax
// 005e391e  64892500000000       mov dword ptr fs:[0], esp
// 005e3925  83ec14               sub esp, 0x14
// 005e3928  53                   push ebx
// 005e3929  55                   push ebp
// 005e392a  56                   push esi
// 005e392b  8bf1                 mov esi, ecx
// 005e392d  57                   push edi
// 005e392e  89742410             mov dword ptr [esp + 0x10], esi
// 005e3932  e839e4ffff           call 0x5e1d70
// 005e3937  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e393b  51                   push ecx
// 005e393c  50                   push eax
// 005e393d  8bce                 mov ecx, esi
// 005e393f  e8ecc9f8ff           call 0x570330
// 005e3944  8b542438             mov edx, dword ptr [esp + 0x38]
// 005e3948  6aff                 push -1
// 005e394a  52                   push edx
// 005e394b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e3953  c70638ec7b00         mov dword ptr [esi], 0x7bec38
// 005e3959  e8829ff4ff           call 0x52d8e0
// 005e395e  83c408               add esp, 8
// 005e3961  89442414             mov dword ptr [esp + 0x14], eax
// 005e3965  e896f3f8ff           call 0x572d00
// 005e396a  8d4c241c             lea ecx, [esp + 0x1c]
// 005e396e  89442418             mov dword ptr [esp + 0x18], eax
// 005e3972  e8d994f8ff           call 0x56ce50
// 005e3977  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005e397a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005e397d  8d7e18               lea edi, [esi + 0x18]
// 005e3980  8d442414             lea eax, [esp + 0x14]
// 005e3984  50                   push eax
// 005e3985  51                   push ecx
// 005e3986  55                   push ebp
// 005e3987  8bcf                 mov ecx, edi
// 005e3989  c644243801           mov byte ptr [esp + 0x38], 1
// 005e398e  e80d29e3ff           call 0x4162a0
// 005e3993  6a01                 push 1
// 005e3995  8bcf                 mov ecx, edi
// 005e3997  8bd8                 mov ebx, eax
// 005e3999  e8e21ce3ff           call 0x415680
// 005e399e  895d04               mov dword ptr [ebp + 4], ebx
// 005e39a1  8b4304               mov eax, dword ptr [ebx + 4]
// 005e39a4  8918                 mov dword ptr [eax], ebx
// 005e39a6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e39aa  85c9                 test ecx, ecx
// 005e39ac  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e39b1  7408                 je 0x5e39bb
// 005e39b3  8b11                 mov edx, dword ptr [ecx]
// 005e39b5  8b02                 mov eax, dword ptr [edx]
// 005e39b7  6a01                 push 1
// 005e39b9  ffd0                 call eax
// 005e39bb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e39bf  5f                   pop edi
// 005e39c0  8bc6                 mov eax, esi
// 005e39c2  5e                   pop esi
// 005e39c3  5d                   pop ebp
// 005e39c4  5b                   pop ebx
// 005e39c5  64890d00000000       mov dword ptr fs:[0], ecx
// 005e39cc  83c420               add esp, 0x20
// 005e39cf  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
