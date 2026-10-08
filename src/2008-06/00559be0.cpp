// roc 2008-06 00559be0  unit: RBX::VInstance::?$SignalDesc  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559be0
//
// 00559be0  6aff                 push -1
// 00559be2  6830a17d00           push 0x7da130
// 00559be7  64a100000000         mov eax, dword ptr fs:[0]
// 00559bed  50                   push eax
// 00559bee  64892500000000       mov dword ptr fs:[0], esp
// 00559bf5  83ec14               sub esp, 0x14
// 00559bf8  53                   push ebx
// 00559bf9  55                   push ebp
// 00559bfa  56                   push esi
// 00559bfb  8bf1                 mov esi, ecx
// 00559bfd  57                   push edi
// 00559bfe  89742410             mov dword ptr [esp + 0x10], esi
// 00559c02  e87911ebff           call 0x40ad80
// 00559c07  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00559c0b  51                   push ecx
// 00559c0c  50                   push eax
// 00559c0d  8bce                 mov ecx, esi
// 00559c0f  e89c1e0100           call 0x56bab0
// 00559c14  8b542438             mov edx, dword ptr [esp + 0x38]
// 00559c18  6aff                 push -1
// 00559c1a  52                   push edx
// 00559c1b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00559c23  c706b4d78200         mov dword ptr [esi], 0x82d7b4
// 00559c29  e862a3ffff           call 0x553f90
// 00559c2e  83c408               add esp, 8
// 00559c31  89442414             mov dword ptr [esp + 0x14], eax
// 00559c35  e836220100           call 0x56be70
// 00559c3a  8d4c241c             lea ecx, [esp + 0x1c]
// 00559c3e  89442418             mov dword ptr [esp + 0x18], eax
// 00559c42  e879ae0300           call 0x594ac0
// 00559c47  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 00559c4a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00559c4d  8d7e18               lea edi, [esi + 0x18]
// 00559c50  8d442414             lea eax, [esp + 0x14]
// 00559c54  50                   push eax
// 00559c55  51                   push ecx
// 00559c56  55                   push ebp
// 00559c57  8bcf                 mov ecx, edi
// 00559c59  c644243801           mov byte ptr [esp + 0x38], 1
// 00559c5e  e89de2ebff           call 0x417f00
// 00559c63  6a01                 push 1
// 00559c65  8bcf                 mov ecx, edi
// 00559c67  8bd8                 mov ebx, eax
// 00559c69  e852901200           call 0x682cc0
// 00559c6e  895d04               mov dword ptr [ebp + 4], ebx
// 00559c71  8b4304               mov eax, dword ptr [ebx + 4]
// 00559c74  8918                 mov dword ptr [eax], ebx
// 00559c76  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00559c7a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00559c7f  85c9                 test ecx, ecx
// 00559c81  7408                 je 0x559c8b
// 00559c83  8b11                 mov edx, dword ptr [ecx]
// 00559c85  8b02                 mov eax, dword ptr [edx]
// 00559c87  6a01                 push 1
// 00559c89  ffd0                 call eax
// 00559c8b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00559c8f  5f                   pop edi
// 00559c90  8bc6                 mov eax, esi
// 00559c92  5e                   pop esi
// 00559c93  5d                   pop ebp
// 00559c94  5b                   pop ebx
// 00559c95  64890d00000000       mov dword ptr fs:[0], ecx
// 00559c9c  83c420               add esp, 0x20
// 00559c9f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
