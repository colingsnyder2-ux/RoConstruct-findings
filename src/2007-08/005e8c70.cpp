// roc 2007-08 005e8c70  unit: RBX::VExplosion::?$FactoryProduct  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e8c70
//
// 005e8c70  6aff                 push -1
// 005e8c72  6888af7500           push 0x75af88
// 005e8c77  64a100000000         mov eax, dword ptr fs:[0]
// 005e8c7d  50                   push eax
// 005e8c7e  64892500000000       mov dword ptr fs:[0], esp
// 005e8c85  83ec24               sub esp, 0x24
// 005e8c88  53                   push ebx
// 005e8c89  55                   push ebp
// 005e8c8a  56                   push esi
// 005e8c8b  57                   push edi
// 005e8c8c  8bf9                 mov edi, ecx
// 005e8c8e  897c2410             mov dword ptr [esp + 0x10], edi
// 005e8c92  e8e953faff           call 0x58e080
// 005e8c97  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005e8c9b  51                   push ecx
// 005e8c9c  50                   push eax
// 005e8c9d  8bcf                 mov ecx, edi
// 005e8c9f  e86c77f8ff           call 0x570410
// 005e8ca4  8b542448             mov edx, dword ptr [esp + 0x48]
// 005e8ca8  6aff                 push -1
// 005e8caa  52                   push edx
// 005e8cab  c744244400000000     mov dword ptr [esp + 0x44], 0
// 005e8cb3  c70744db7b00         mov dword ptr [edi], 0x7bdb44
// 005e8cb9  e8823cf4ff           call 0x52c940
// 005e8cbe  83c408               add esp, 8
// 005e8cc1  89442424             mov dword ptr [esp + 0x24], eax
// 005e8cc5  e8264af8ff           call 0x56d6f0
// 005e8cca  8d4c242c             lea ecx, [esp + 0x2c]
// 005e8cce  89442428             mov dword ptr [esp + 0x28], eax
// 005e8cd2  e8e946f8ff           call 0x56d3c0
// 005e8cd7  8b6f1c               mov ebp, dword ptr [edi + 0x1c]
// 005e8cda  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005e8cdd  8d7718               lea esi, [edi + 0x18]
// 005e8ce0  8d442424             lea eax, [esp + 0x24]
// 005e8ce4  50                   push eax
// 005e8ce5  51                   push ecx
// 005e8ce6  55                   push ebp
// 005e8ce7  8bce                 mov ecx, esi
// 005e8ce9  c644244801           mov byte ptr [esp + 0x48], 1
// 005e8cee  e84dc5e2ff           call 0x415240
// 005e8cf3  6a01                 push 1
// 005e8cf5  8bce                 mov ecx, esi
// 005e8cf7  8bd8                 mov ebx, eax
// 005e8cf9  e872b9e2ff           call 0x414670
// 005e8cfe  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005e8d02  895d04               mov dword ptr [ebp + 4], ebx
// 005e8d05  8b4304               mov eax, dword ptr [ebx + 4]
// 005e8d08  6aff                 push -1
// 005e8d0a  52                   push edx
// 005e8d0b  8918                 mov dword ptr [eax], ebx
// 005e8d0d  e82e3cf4ff           call 0x52c940
// 005e8d12  83c408               add esp, 8
// 005e8d15  89442414             mov dword ptr [esp + 0x14], eax
// 005e8d19  e8924bf8ff           call 0x56d8b0
// 005e8d1e  8d4c241c             lea ecx, [esp + 0x1c]
// 005e8d22  89442418             mov dword ptr [esp + 0x18], eax
// 005e8d26  e89546f8ff           call 0x56d3c0
// 005e8d2b  8b5e04               mov ebx, dword ptr [esi + 4]
// 005e8d2e  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005e8d31  8d442414             lea eax, [esp + 0x14]
// 005e8d35  50                   push eax
// 005e8d36  51                   push ecx
// 005e8d37  53                   push ebx
// 005e8d38  8bce                 mov ecx, esi
// 005e8d3a  c644244802           mov byte ptr [esp + 0x48], 2
// 005e8d3f  e8fcc4e2ff           call 0x415240
// 005e8d44  6a01                 push 1
// 005e8d46  8bce                 mov ecx, esi
// 005e8d48  8be8                 mov ebp, eax
// 005e8d4a  e821b9e2ff           call 0x414670
// 005e8d4f  896b04               mov dword ptr [ebx + 4], ebp
// 005e8d52  8b4504               mov eax, dword ptr [ebp + 4]
// 005e8d55  8928                 mov dword ptr [eax], ebp
// 005e8d57  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e8d5b  85c9                 test ecx, ecx
// 005e8d5d  c644243c01           mov byte ptr [esp + 0x3c], 1
// 005e8d62  7408                 je 0x5e8d6c
// 005e8d64  8b11                 mov edx, dword ptr [ecx]
// 005e8d66  8b02                 mov eax, dword ptr [edx]
// 005e8d68  6a01                 push 1
// 005e8d6a  ffd0                 call eax
// 005e8d6c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e8d70  85c9                 test ecx, ecx
// 005e8d72  c644243c00           mov byte ptr [esp + 0x3c], 0
// 005e8d77  7408                 je 0x5e8d81
// 005e8d79  8b11                 mov edx, dword ptr [ecx]
// 005e8d7b  8b02                 mov eax, dword ptr [edx]
// 005e8d7d  6a01                 push 1
// 005e8d7f  ffd0                 call eax
// 005e8d81  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e8d85  8bc7                 mov eax, edi
// 005e8d87  5f                   pop edi
// 005e8d88  5e                   pop esi
// 005e8d89  5d                   pop ebp
// 005e8d8a  5b                   pop ebx
// 005e8d8b  64890d00000000       mov dword ptr fs:[0], ecx
// 005e8d92  83c430               add esp, 0x30
// 005e8d95  c20c00               ret 0xc
// library rbxgs/v8datamodel\Explosion.cpp (function ??0?$SignalDesc@VExplosion@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@M@Z@Reflection@RBX@@QAE@PBD00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
