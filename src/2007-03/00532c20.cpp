// roc 2007-03 00532c20  unit: seg_00530000  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00532c20
//
// 00532c20  6aff                 push -1
// 00532c22  6828177500           push 0x751728
// 00532c27  64a100000000         mov eax, dword ptr fs:[0]
// 00532c2d  50                   push eax
// 00532c2e  64892500000000       mov dword ptr fs:[0], esp
// 00532c35  83ec24               sub esp, 0x24
// 00532c38  53                   push ebx
// 00532c39  55                   push ebp
// 00532c3a  56                   push esi
// 00532c3b  57                   push edi
// 00532c3c  8bf9                 mov edi, ecx
// 00532c3e  897c2410             mov dword ptr [esp + 0x10], edi
// 00532c42  e8d9f8ffff           call 0x532520
// 00532c47  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00532c4b  51                   push ecx
// 00532c4c  50                   push eax
// 00532c4d  8bcf                 mov ecx, edi
// 00532c4f  e8dcd60300           call 0x570330
// 00532c54  8b542448             mov edx, dword ptr [esp + 0x48]
// 00532c58  6aff                 push -1
// 00532c5a  52                   push edx
// 00532c5b  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00532c63  c707c04f7a00         mov dword ptr [edi], 0x7a4fc0
// 00532c69  e872acffff           call 0x52d8e0
// 00532c6e  83c408               add esp, 8
// 00532c71  89442424             mov dword ptr [esp + 0x24], eax
// 00532c75  e836a60300           call 0x56d2b0
// 00532c7a  8d4c242c             lea ecx, [esp + 0x2c]
// 00532c7e  89442428             mov dword ptr [esp + 0x28], eax
// 00532c82  e8c9a10300           call 0x56ce50
// 00532c87  8b6f1c               mov ebp, dword ptr [edi + 0x1c]
// 00532c8a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00532c8d  8d7718               lea esi, [edi + 0x18]
// 00532c90  8d442424             lea eax, [esp + 0x24]
// 00532c94  50                   push eax
// 00532c95  51                   push ecx
// 00532c96  55                   push ebp
// 00532c97  8bce                 mov ecx, esi
// 00532c99  c644244801           mov byte ptr [esp + 0x48], 1
// 00532c9e  e8fd35eeff           call 0x4162a0
// 00532ca3  6a01                 push 1
// 00532ca5  8bce                 mov ecx, esi
// 00532ca7  8bd8                 mov ebx, eax
// 00532ca9  e8d229eeff           call 0x415680
// 00532cae  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00532cb2  895d04               mov dword ptr [ebp + 4], ebx
// 00532cb5  8b4304               mov eax, dword ptr [ebx + 4]
// 00532cb8  6aff                 push -1
// 00532cba  52                   push edx
// 00532cbb  8918                 mov dword ptr [eax], ebx
// 00532cbd  e81eacffff           call 0x52d8e0
// 00532cc2  83c408               add esp, 8
// 00532cc5  89442414             mov dword ptr [esp + 0x14], eax
// 00532cc9  e8e2a50300           call 0x56d2b0
// 00532cce  8d4c241c             lea ecx, [esp + 0x1c]
// 00532cd2  89442418             mov dword ptr [esp + 0x18], eax
// 00532cd6  e875a10300           call 0x56ce50
// 00532cdb  8b5e04               mov ebx, dword ptr [esi + 4]
// 00532cde  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00532ce1  8d442414             lea eax, [esp + 0x14]
// 00532ce5  50                   push eax
// 00532ce6  51                   push ecx
// 00532ce7  53                   push ebx
// 00532ce8  8bce                 mov ecx, esi
// 00532cea  c644244802           mov byte ptr [esp + 0x48], 2
// 00532cef  e8ac35eeff           call 0x4162a0
// 00532cf4  6a01                 push 1
// 00532cf6  8bce                 mov ecx, esi
// 00532cf8  8be8                 mov ebp, eax
// 00532cfa  e88129eeff           call 0x415680
// 00532cff  896b04               mov dword ptr [ebx + 4], ebp
// 00532d02  8b4504               mov eax, dword ptr [ebp + 4]
// 00532d05  8928                 mov dword ptr [eax], ebp
// 00532d07  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00532d0b  85c9                 test ecx, ecx
// 00532d0d  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00532d12  7408                 je 0x532d1c
// 00532d14  8b11                 mov edx, dword ptr [ecx]
// 00532d16  8b02                 mov eax, dword ptr [edx]
// 00532d18  6a01                 push 1
// 00532d1a  ffd0                 call eax
// 00532d1c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00532d20  85c9                 test ecx, ecx
// 00532d22  c644243c00           mov byte ptr [esp + 0x3c], 0
// 00532d27  7408                 je 0x532d31
// 00532d29  8b11                 mov edx, dword ptr [ecx]
// 00532d2b  8b02                 mov eax, dword ptr [edx]
// 00532d2d  6a01                 push 1
// 00532d2f  ffd0                 call eax
// 00532d31  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00532d35  8bc7                 mov eax, edi
// 00532d37  5f                   pop edi
// 00532d38  5e                   pop esi
// 00532d39  5d                   pop ebp
// 00532d3a  5b                   pop ebx
// 00532d3b  64890d00000000       mov dword ptr fs:[0], ecx
// 00532d42  83c430               add esp, 0x30
// 00532d45  c20c00               ret 0xc
// library rbxgs/v8datamodel\Explosion.cpp (function ??0?$SignalDesc@VExplosion@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@M@Z@Reflection@RBX@@QAE@PBD00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
