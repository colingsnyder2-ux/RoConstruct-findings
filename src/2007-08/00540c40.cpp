// roc 2007-08 00540c40  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540c40
//
// 00540c40  6aff                 push -1
// 00540c42  6890b87500           push 0x75b890
// 00540c47  64a100000000         mov eax, dword ptr fs:[0]
// 00540c4d  50                   push eax
// 00540c4e  64892500000000       mov dword ptr fs:[0], esp
// 00540c55  83ec14               sub esp, 0x14
// 00540c58  53                   push ebx
// 00540c59  55                   push ebp
// 00540c5a  56                   push esi
// 00540c5b  8bf1                 mov esi, ecx
// 00540c5d  57                   push edi
// 00540c5e  89742410             mov dword ptr [esp + 0x10], esi
// 00540c62  e8297aedff           call 0x418690
// 00540c67  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00540c6b  51                   push ecx
// 00540c6c  50                   push eax
// 00540c6d  8bce                 mov ecx, esi
// 00540c6f  e89cf70200           call 0x570410
// 00540c74  8b542438             mov edx, dword ptr [esp + 0x38]
// 00540c78  6aff                 push -1
// 00540c7a  52                   push edx
// 00540c7b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00540c83  c70664667a00         mov dword ptr [esi], 0x7a6664
// 00540c89  e8b2bcfeff           call 0x52c940
// 00540c8e  83c408               add esp, 8
// 00540c91  89442414             mov dword ptr [esp + 0x14], eax
// 00540c95  e8e6630400           call 0x587080
// 00540c9a  8d4c241c             lea ecx, [esp + 0x1c]
// 00540c9e  89442418             mov dword ptr [esp + 0x18], eax
// 00540ca2  e819c70200           call 0x56d3c0
// 00540ca7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 00540caa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00540cad  8d7e18               lea edi, [esi + 0x18]
// 00540cb0  8d442414             lea eax, [esp + 0x14]
// 00540cb4  50                   push eax
// 00540cb5  51                   push ecx
// 00540cb6  55                   push ebp
// 00540cb7  8bcf                 mov ecx, edi
// 00540cb9  c644243801           mov byte ptr [esp + 0x38], 1
// 00540cbe  e87d45edff           call 0x415240
// 00540cc3  6a01                 push 1
// 00540cc5  8bcf                 mov ecx, edi
// 00540cc7  8bd8                 mov ebx, eax
// 00540cc9  e8a239edff           call 0x414670
// 00540cce  895d04               mov dword ptr [ebp + 4], ebx
// 00540cd1  8b4304               mov eax, dword ptr [ebx + 4]
// 00540cd4  8918                 mov dword ptr [eax], ebx
// 00540cd6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00540cda  85c9                 test ecx, ecx
// 00540cdc  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00540ce1  7408                 je 0x540ceb
// 00540ce3  8b11                 mov edx, dword ptr [ecx]
// 00540ce5  8b02                 mov eax, dword ptr [edx]
// 00540ce7  6a01                 push 1
// 00540ce9  ffd0                 call eax
// 00540ceb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00540cef  5f                   pop edi
// 00540cf0  8bc6                 mov eax, esi
// 00540cf2  5e                   pop esi
// 00540cf3  5d                   pop ebp
// 00540cf4  5b                   pop ebx
// 00540cf5  64890d00000000       mov dword ptr fs:[0], ecx
// 00540cfc  83c420               add esp, 0x20
// 00540cff  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
