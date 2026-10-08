// roc 2007-08 005aed40  unit: RBX::VLighting::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aed40
//
// 005aed40  6aff                 push -1
// 005aed42  6890b87500           push 0x75b890
// 005aed47  64a100000000         mov eax, dword ptr fs:[0]
// 005aed4d  50                   push eax
// 005aed4e  64892500000000       mov dword ptr fs:[0], esp
// 005aed55  83ec14               sub esp, 0x14
// 005aed58  53                   push ebx
// 005aed59  55                   push ebp
// 005aed5a  56                   push esi
// 005aed5b  8bf1                 mov esi, ecx
// 005aed5d  57                   push edi
// 005aed5e  89742410             mov dword ptr [esp + 0x10], esi
// 005aed62  e8c9faffff           call 0x5ae830
// 005aed67  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005aed6b  51                   push ecx
// 005aed6c  50                   push eax
// 005aed6d  8bce                 mov ecx, esi
// 005aed6f  e89c16fcff           call 0x570410
// 005aed74  8b542438             mov edx, dword ptr [esp + 0x38]
// 005aed78  6aff                 push -1
// 005aed7a  52                   push edx
// 005aed7b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005aed83  c7062c5c7b00         mov dword ptr [esi], 0x7b5c2c
// 005aed89  e8b2dbf7ff           call 0x52c940
// 005aed8e  83c408               add esp, 8
// 005aed91  89442414             mov dword ptr [esp + 0x14], eax
// 005aed95  e8a6eafbff           call 0x56d840
// 005aed9a  8d4c241c             lea ecx, [esp + 0x1c]
// 005aed9e  89442418             mov dword ptr [esp + 0x18], eax
// 005aeda2  e819e6fbff           call 0x56d3c0
// 005aeda7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005aedaa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005aedad  8d7e18               lea edi, [esi + 0x18]
// 005aedb0  8d442414             lea eax, [esp + 0x14]
// 005aedb4  50                   push eax
// 005aedb5  51                   push ecx
// 005aedb6  55                   push ebp
// 005aedb7  8bcf                 mov ecx, edi
// 005aedb9  c644243801           mov byte ptr [esp + 0x38], 1
// 005aedbe  e87d64e6ff           call 0x415240
// 005aedc3  6a01                 push 1
// 005aedc5  8bcf                 mov ecx, edi
// 005aedc7  8bd8                 mov ebx, eax
// 005aedc9  e8a258e6ff           call 0x414670
// 005aedce  895d04               mov dword ptr [ebp + 4], ebx
// 005aedd1  8b4304               mov eax, dword ptr [ebx + 4]
// 005aedd4  8918                 mov dword ptr [eax], ebx
// 005aedd6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005aedda  85c9                 test ecx, ecx
// 005aeddc  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005aede1  7408                 je 0x5aedeb
// 005aede3  8b11                 mov edx, dword ptr [ecx]
// 005aede5  8b02                 mov eax, dword ptr [edx]
// 005aede7  6a01                 push 1
// 005aede9  ffd0                 call eax
// 005aedeb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005aedef  5f                   pop edi
// 005aedf0  8bc6                 mov eax, esi
// 005aedf2  5e                   pop esi
// 005aedf3  5d                   pop ebp
// 005aedf4  5b                   pop ebx
// 005aedf5  64890d00000000       mov dword ptr fs:[0], ecx
// 005aedfc  83c420               add esp, 0x20
// 005aedff  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
