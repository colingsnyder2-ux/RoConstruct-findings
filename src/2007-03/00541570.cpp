// roc 2007-03 00541570  unit: seg_00540000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00541570
//
// 00541570  6aff                 push -1
// 00541572  6820937500           push 0x759320
// 00541577  64a100000000         mov eax, dword ptr fs:[0]
// 0054157d  50                   push eax
// 0054157e  64892500000000       mov dword ptr fs:[0], esp
// 00541585  83ec14               sub esp, 0x14
// 00541588  53                   push ebx
// 00541589  55                   push ebp
// 0054158a  56                   push esi
// 0054158b  8bf1                 mov esi, ecx
// 0054158d  57                   push edi
// 0054158e  89742410             mov dword ptr [esp + 0x10], esi
// 00541592  e8c985edff           call 0x419b60
// 00541597  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0054159b  51                   push ecx
// 0054159c  50                   push eax
// 0054159d  8bce                 mov ecx, esi
// 0054159f  e88ced0200           call 0x570330
// 005415a4  8b542438             mov edx, dword ptr [esp + 0x38]
// 005415a8  6aff                 push -1
// 005415aa  52                   push edx
// 005415ab  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005415b3  c70658677a00         mov dword ptr [esi], 0x7a6758
// 005415b9  e822c3feff           call 0x52d8e0
// 005415be  83c408               add esp, 8
// 005415c1  89442414             mov dword ptr [esp + 0x14], eax
// 005415c5  e826bb0200           call 0x56d0f0
// 005415ca  8d4c241c             lea ecx, [esp + 0x1c]
// 005415ce  89442418             mov dword ptr [esp + 0x18], eax
// 005415d2  e879b80200           call 0x56ce50
// 005415d7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005415da  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005415dd  8d7e18               lea edi, [esi + 0x18]
// 005415e0  8d442414             lea eax, [esp + 0x14]
// 005415e4  50                   push eax
// 005415e5  51                   push ecx
// 005415e6  55                   push ebp
// 005415e7  8bcf                 mov ecx, edi
// 005415e9  c644243801           mov byte ptr [esp + 0x38], 1
// 005415ee  e8ad4cedff           call 0x4162a0
// 005415f3  6a01                 push 1
// 005415f5  8bcf                 mov ecx, edi
// 005415f7  8bd8                 mov ebx, eax
// 005415f9  e88240edff           call 0x415680
// 005415fe  895d04               mov dword ptr [ebp + 4], ebx
// 00541601  8b4304               mov eax, dword ptr [ebx + 4]
// 00541604  8918                 mov dword ptr [eax], ebx
// 00541606  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0054160a  85c9                 test ecx, ecx
// 0054160c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00541611  7408                 je 0x54161b
// 00541613  8b11                 mov edx, dword ptr [ecx]
// 00541615  8b02                 mov eax, dword ptr [edx]
// 00541617  6a01                 push 1
// 00541619  ffd0                 call eax
// 0054161b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054161f  5f                   pop edi
// 00541620  8bc6                 mov eax, esi
// 00541622  5e                   pop esi
// 00541623  5d                   pop ebp
// 00541624  5b                   pop ebx
// 00541625  64890d00000000       mov dword ptr fs:[0], ecx
// 0054162c  83c420               add esp, 0x20
// 0054162f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
