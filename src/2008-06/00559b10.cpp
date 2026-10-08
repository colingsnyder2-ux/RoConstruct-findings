// roc 2008-06 00559b10  unit: RBX::VInstance::?$SignalDesc  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559b10
//
// 00559b10  6aff                 push -1
// 00559b12  6830a17d00           push 0x7da130
// 00559b17  64a100000000         mov eax, dword ptr fs:[0]
// 00559b1d  50                   push eax
// 00559b1e  64892500000000       mov dword ptr fs:[0], esp
// 00559b25  83ec14               sub esp, 0x14
// 00559b28  53                   push ebx
// 00559b29  55                   push ebp
// 00559b2a  56                   push esi
// 00559b2b  8bf1                 mov esi, ecx
// 00559b2d  57                   push edi
// 00559b2e  89742410             mov dword ptr [esp + 0x10], esi
// 00559b32  e84912ebff           call 0x40ad80
// 00559b37  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00559b3b  51                   push ecx
// 00559b3c  50                   push eax
// 00559b3d  8bce                 mov ecx, esi
// 00559b3f  e86c1f0100           call 0x56bab0
// 00559b44  8b542438             mov edx, dword ptr [esp + 0x38]
// 00559b48  6aff                 push -1
// 00559b4a  52                   push edx
// 00559b4b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00559b53  c706a4d78200         mov dword ptr [esi], 0x82d7a4
// 00559b59  e832a4ffff           call 0x553f90
// 00559b5e  83c408               add esp, 8
// 00559b61  89442414             mov dword ptr [esp + 0x14], eax
// 00559b65  e8762f0100           call 0x56cae0
// 00559b6a  8d4c241c             lea ecx, [esp + 0x1c]
// 00559b6e  89442418             mov dword ptr [esp + 0x18], eax
// 00559b72  e849af0300           call 0x594ac0
// 00559b77  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 00559b7a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00559b7d  8d7e18               lea edi, [esi + 0x18]
// 00559b80  8d442414             lea eax, [esp + 0x14]
// 00559b84  50                   push eax
// 00559b85  51                   push ecx
// 00559b86  55                   push ebp
// 00559b87  8bcf                 mov ecx, edi
// 00559b89  c644243801           mov byte ptr [esp + 0x38], 1
// 00559b8e  e86de3ebff           call 0x417f00
// 00559b93  6a01                 push 1
// 00559b95  8bcf                 mov ecx, edi
// 00559b97  8bd8                 mov ebx, eax
// 00559b99  e822911200           call 0x682cc0
// 00559b9e  895d04               mov dword ptr [ebp + 4], ebx
// 00559ba1  8b4304               mov eax, dword ptr [ebx + 4]
// 00559ba4  8918                 mov dword ptr [eax], ebx
// 00559ba6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00559baa  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00559baf  85c9                 test ecx, ecx
// 00559bb1  7408                 je 0x559bbb
// 00559bb3  8b11                 mov edx, dword ptr [ecx]
// 00559bb5  8b02                 mov eax, dword ptr [edx]
// 00559bb7  6a01                 push 1
// 00559bb9  ffd0                 call eax
// 00559bbb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00559bbf  5f                   pop edi
// 00559bc0  8bc6                 mov eax, esi
// 00559bc2  5e                   pop esi
// 00559bc3  5d                   pop ebp
// 00559bc4  5b                   pop ebx
// 00559bc5  64890d00000000       mov dword ptr fs:[0], ecx
// 00559bcc  83c420               add esp, 0x20
// 00559bcf  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
