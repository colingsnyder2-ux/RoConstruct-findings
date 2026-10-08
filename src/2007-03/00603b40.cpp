// roc 2007-03 00603b40  unit: seg_00600000  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00603b40
//
// 00603b40  6aff                 push -1
// 00603b42  6828177500           push 0x751728
// 00603b47  64a100000000         mov eax, dword ptr fs:[0]
// 00603b4d  50                   push eax
// 00603b4e  64892500000000       mov dword ptr fs:[0], esp
// 00603b55  83ec24               sub esp, 0x24
// 00603b58  53                   push ebx
// 00603b59  55                   push ebp
// 00603b5a  56                   push esi
// 00603b5b  57                   push edi
// 00603b5c  8bf9                 mov edi, ecx
// 00603b5e  897c2410             mov dword ptr [esp + 0x10], edi
// 00603b62  e849f9ffff           call 0x6034b0
// 00603b67  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00603b6b  51                   push ecx
// 00603b6c  50                   push eax
// 00603b6d  8bcf                 mov ecx, edi
// 00603b6f  e8bcc7f6ff           call 0x570330
// 00603b74  8b542448             mov edx, dword ptr [esp + 0x48]
// 00603b78  6aff                 push -1
// 00603b7a  52                   push edx
// 00603b7b  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00603b83  c707a80d7c00         mov dword ptr [edi], 0x7c0da8
// 00603b89  e8529df2ff           call 0x52d8e0
// 00603b8e  83c408               add esp, 8
// 00603b91  89442424             mov dword ptr [esp + 0x24], eax
// 00603b95  e85695f6ff           call 0x56d0f0
// 00603b9a  8d4c242c             lea ecx, [esp + 0x2c]
// 00603b9e  89442428             mov dword ptr [esp + 0x28], eax
// 00603ba2  e8a992f6ff           call 0x56ce50
// 00603ba7  8b6f1c               mov ebp, dword ptr [edi + 0x1c]
// 00603baa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00603bad  8d7718               lea esi, [edi + 0x18]
// 00603bb0  8d442424             lea eax, [esp + 0x24]
// 00603bb4  50                   push eax
// 00603bb5  51                   push ecx
// 00603bb6  55                   push ebp
// 00603bb7  8bce                 mov ecx, esi
// 00603bb9  c644244801           mov byte ptr [esp + 0x48], 1
// 00603bbe  e8dd26e1ff           call 0x4162a0
// 00603bc3  6a01                 push 1
// 00603bc5  8bce                 mov ecx, esi
// 00603bc7  8bd8                 mov ebx, eax
// 00603bc9  e8b21ae1ff           call 0x415680
// 00603bce  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00603bd2  895d04               mov dword ptr [ebp + 4], ebx
// 00603bd5  8b4304               mov eax, dword ptr [ebx + 4]
// 00603bd8  6aff                 push -1
// 00603bda  52                   push edx
// 00603bdb  8918                 mov dword ptr [eax], ebx
// 00603bdd  e8fe9cf2ff           call 0x52d8e0
// 00603be2  83c408               add esp, 8
// 00603be5  89442414             mov dword ptr [esp + 0x14], eax
// 00603be9  e8c296f6ff           call 0x56d2b0
// 00603bee  8d4c241c             lea ecx, [esp + 0x1c]
// 00603bf2  89442418             mov dword ptr [esp + 0x18], eax
// 00603bf6  e85592f6ff           call 0x56ce50
// 00603bfb  8b5e04               mov ebx, dword ptr [esi + 4]
// 00603bfe  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00603c01  8d442414             lea eax, [esp + 0x14]
// 00603c05  50                   push eax
// 00603c06  51                   push ecx
// 00603c07  53                   push ebx
// 00603c08  8bce                 mov ecx, esi
// 00603c0a  c644244802           mov byte ptr [esp + 0x48], 2
// 00603c0f  e88c26e1ff           call 0x4162a0
// 00603c14  6a01                 push 1
// 00603c16  8bce                 mov ecx, esi
// 00603c18  8be8                 mov ebp, eax
// 00603c1a  e8611ae1ff           call 0x415680
// 00603c1f  896b04               mov dword ptr [ebx + 4], ebp
// 00603c22  8b4504               mov eax, dword ptr [ebp + 4]
// 00603c25  8928                 mov dword ptr [eax], ebp
// 00603c27  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00603c2b  85c9                 test ecx, ecx
// 00603c2d  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00603c32  7408                 je 0x603c3c
// 00603c34  8b11                 mov edx, dword ptr [ecx]
// 00603c36  8b02                 mov eax, dword ptr [edx]
// 00603c38  6a01                 push 1
// 00603c3a  ffd0                 call eax
// 00603c3c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00603c40  85c9                 test ecx, ecx
// 00603c42  c644243c00           mov byte ptr [esp + 0x3c], 0
// 00603c47  7408                 je 0x603c51
// 00603c49  8b11                 mov edx, dword ptr [ecx]
// 00603c4b  8b02                 mov eax, dword ptr [edx]
// 00603c4d  6a01                 push 1
// 00603c4f  ffd0                 call eax
// 00603c51  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00603c55  8bc7                 mov eax, edi
// 00603c57  5f                   pop edi
// 00603c58  5e                   pop esi
// 00603c59  5d                   pop ebp
// 00603c5a  5b                   pop ebx
// 00603c5b  64890d00000000       mov dword ptr fs:[0], ecx
// 00603c62  83c430               add esp, 0x30
// 00603c65  c20c00               ret 0xc
// library rbxgs/v8datamodel\Explosion.cpp (function ??0?$SignalDesc@VExplosion@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@M@Z@Reflection@RBX@@QAE@PBD00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
