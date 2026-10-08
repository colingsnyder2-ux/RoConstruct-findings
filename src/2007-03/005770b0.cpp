// roc 2007-03 005770b0  unit: seg_00570000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005770b0
//
// 005770b0  6aff                 push -1
// 005770b2  6820937500           push 0x759320
// 005770b7  64a100000000         mov eax, dword ptr fs:[0]
// 005770bd  50                   push eax
// 005770be  64892500000000       mov dword ptr fs:[0], esp
// 005770c5  83ec14               sub esp, 0x14
// 005770c8  53                   push ebx
// 005770c9  55                   push ebp
// 005770ca  56                   push esi
// 005770cb  8bf1                 mov esi, ecx
// 005770cd  57                   push edi
// 005770ce  89742410             mov dword ptr [esp + 0x10], esi
// 005770d2  e829e8ffff           call 0x575900
// 005770d7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005770db  51                   push ecx
// 005770dc  50                   push eax
// 005770dd  8bce                 mov ecx, esi
// 005770df  e84c92ffff           call 0x570330
// 005770e4  8b542438             mov edx, dword ptr [esp + 0x38]
// 005770e8  6aff                 push -1
// 005770ea  52                   push edx
// 005770eb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005770f3  c70640c57a00         mov dword ptr [esi], 0x7ac540
// 005770f9  e8e267fbff           call 0x52d8e0
// 005770fe  83c408               add esp, 8
// 00577101  89442414             mov dword ptr [esp + 0x14], eax
// 00577105  e8e65fffff           call 0x56d0f0
// 0057710a  8d4c241c             lea ecx, [esp + 0x1c]
// 0057710e  89442418             mov dword ptr [esp + 0x18], eax
// 00577112  e8395dffff           call 0x56ce50
// 00577117  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0057711a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0057711d  8d7e18               lea edi, [esi + 0x18]
// 00577120  8d442414             lea eax, [esp + 0x14]
// 00577124  50                   push eax
// 00577125  51                   push ecx
// 00577126  55                   push ebp
// 00577127  8bcf                 mov ecx, edi
// 00577129  c644243801           mov byte ptr [esp + 0x38], 1
// 0057712e  e86df1e9ff           call 0x4162a0
// 00577133  6a01                 push 1
// 00577135  8bcf                 mov ecx, edi
// 00577137  8bd8                 mov ebx, eax
// 00577139  e842e5e9ff           call 0x415680
// 0057713e  895d04               mov dword ptr [ebp + 4], ebx
// 00577141  8b4304               mov eax, dword ptr [ebx + 4]
// 00577144  8918                 mov dword ptr [eax], ebx
// 00577146  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057714a  85c9                 test ecx, ecx
// 0057714c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00577151  7408                 je 0x57715b
// 00577153  8b11                 mov edx, dword ptr [ecx]
// 00577155  8b02                 mov eax, dword ptr [edx]
// 00577157  6a01                 push 1
// 00577159  ffd0                 call eax
// 0057715b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057715f  5f                   pop edi
// 00577160  8bc6                 mov eax, esi
// 00577162  5e                   pop esi
// 00577163  5d                   pop ebp
// 00577164  5b                   pop ebx
// 00577165  64890d00000000       mov dword ptr fs:[0], ecx
// 0057716c  83c420               add esp, 0x20
// 0057716f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
