// roc 2007-08 00540b70  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540b70
//
// 00540b70  6aff                 push -1
// 00540b72  6890b87500           push 0x75b890
// 00540b77  64a100000000         mov eax, dword ptr fs:[0]
// 00540b7d  50                   push eax
// 00540b7e  64892500000000       mov dword ptr fs:[0], esp
// 00540b85  83ec14               sub esp, 0x14
// 00540b88  53                   push ebx
// 00540b89  55                   push ebp
// 00540b8a  56                   push esi
// 00540b8b  8bf1                 mov esi, ecx
// 00540b8d  57                   push edi
// 00540b8e  89742410             mov dword ptr [esp + 0x10], esi
// 00540b92  e8f97aedff           call 0x418690
// 00540b97  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00540b9b  51                   push ecx
// 00540b9c  50                   push eax
// 00540b9d  8bce                 mov ecx, esi
// 00540b9f  e86cf80200           call 0x570410
// 00540ba4  8b542438             mov edx, dword ptr [esp + 0x38]
// 00540ba8  6aff                 push -1
// 00540baa  52                   push edx
// 00540bab  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00540bb3  c70654667a00         mov dword ptr [esi], 0x7a6654
// 00540bb9  e882bdfeff           call 0x52c940
// 00540bbe  83c408               add esp, 8
// 00540bc1  89442414             mov dword ptr [esp + 0x14], eax
// 00540bc5  e826cb0200           call 0x56d6f0
// 00540bca  8d4c241c             lea ecx, [esp + 0x1c]
// 00540bce  89442418             mov dword ptr [esp + 0x18], eax
// 00540bd2  e8e9c70200           call 0x56d3c0
// 00540bd7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 00540bda  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00540bdd  8d7e18               lea edi, [esi + 0x18]
// 00540be0  8d442414             lea eax, [esp + 0x14]
// 00540be4  50                   push eax
// 00540be5  51                   push ecx
// 00540be6  55                   push ebp
// 00540be7  8bcf                 mov ecx, edi
// 00540be9  c644243801           mov byte ptr [esp + 0x38], 1
// 00540bee  e84d46edff           call 0x415240
// 00540bf3  6a01                 push 1
// 00540bf5  8bcf                 mov ecx, edi
// 00540bf7  8bd8                 mov ebx, eax
// 00540bf9  e8723aedff           call 0x414670
// 00540bfe  895d04               mov dword ptr [ebp + 4], ebx
// 00540c01  8b4304               mov eax, dword ptr [ebx + 4]
// 00540c04  8918                 mov dword ptr [eax], ebx
// 00540c06  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00540c0a  85c9                 test ecx, ecx
// 00540c0c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00540c11  7408                 je 0x540c1b
// 00540c13  8b11                 mov edx, dword ptr [ecx]
// 00540c15  8b02                 mov eax, dword ptr [edx]
// 00540c17  6a01                 push 1
// 00540c19  ffd0                 call eax
// 00540c1b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00540c1f  5f                   pop edi
// 00540c20  8bc6                 mov eax, esi
// 00540c22  5e                   pop esi
// 00540c23  5d                   pop ebp
// 00540c24  5b                   pop ebx
// 00540c25  64890d00000000       mov dword ptr fs:[0], ecx
// 00540c2c  83c420               add esp, 0x20
// 00540c2f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
