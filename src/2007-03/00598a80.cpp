// roc 2007-03 00598a80  unit: seg_00590000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00598a80
//
// 00598a80  6aff                 push -1
// 00598a82  6820937500           push 0x759320
// 00598a87  64a100000000         mov eax, dword ptr fs:[0]
// 00598a8d  50                   push eax
// 00598a8e  64892500000000       mov dword ptr fs:[0], esp
// 00598a95  83ec14               sub esp, 0x14
// 00598a98  53                   push ebx
// 00598a99  55                   push ebp
// 00598a9a  56                   push esi
// 00598a9b  8bf1                 mov esi, ecx
// 00598a9d  57                   push edi
// 00598a9e  89742410             mov dword ptr [esp + 0x10], esi
// 00598aa2  e859efffff           call 0x597a00
// 00598aa7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00598aab  51                   push ecx
// 00598aac  50                   push eax
// 00598aad  8bce                 mov ecx, esi
// 00598aaf  e87c78fdff           call 0x570330
// 00598ab4  8b542438             mov edx, dword ptr [esp + 0x38]
// 00598ab8  6aff                 push -1
// 00598aba  52                   push edx
// 00598abb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00598ac3  c706281d7b00         mov dword ptr [esi], 0x7b1d28
// 00598ac9  e8124ef9ff           call 0x52d8e0
// 00598ace  83c408               add esp, 8
// 00598ad1  89442414             mov dword ptr [esp + 0x14], eax
// 00598ad5  e86647fdff           call 0x56d240
// 00598ada  8d4c241c             lea ecx, [esp + 0x1c]
// 00598ade  89442418             mov dword ptr [esp + 0x18], eax
// 00598ae2  e86943fdff           call 0x56ce50
// 00598ae7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 00598aea  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00598aed  8d7e18               lea edi, [esi + 0x18]
// 00598af0  8d442414             lea eax, [esp + 0x14]
// 00598af4  50                   push eax
// 00598af5  51                   push ecx
// 00598af6  55                   push ebp
// 00598af7  8bcf                 mov ecx, edi
// 00598af9  c644243801           mov byte ptr [esp + 0x38], 1
// 00598afe  e89dd7e7ff           call 0x4162a0
// 00598b03  6a01                 push 1
// 00598b05  8bcf                 mov ecx, edi
// 00598b07  8bd8                 mov ebx, eax
// 00598b09  e872cbe7ff           call 0x415680
// 00598b0e  895d04               mov dword ptr [ebp + 4], ebx
// 00598b11  8b4304               mov eax, dword ptr [ebx + 4]
// 00598b14  8918                 mov dword ptr [eax], ebx
// 00598b16  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00598b1a  85c9                 test ecx, ecx
// 00598b1c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00598b21  7408                 je 0x598b2b
// 00598b23  8b11                 mov edx, dword ptr [ecx]
// 00598b25  8b02                 mov eax, dword ptr [edx]
// 00598b27  6a01                 push 1
// 00598b29  ffd0                 call eax
// 00598b2b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00598b2f  5f                   pop edi
// 00598b30  8bc6                 mov eax, esi
// 00598b32  5e                   pop esi
// 00598b33  5d                   pop ebp
// 00598b34  5b                   pop ebx
// 00598b35  64890d00000000       mov dword ptr fs:[0], ecx
// 00598b3c  83c420               add esp, 0x20
// 00598b3f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
