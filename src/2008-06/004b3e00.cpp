// roc 2008-06 004b3e00  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b3e00
//
// 004b3e00  6aff                 push -1
// 004b3e02  6878787c00           push 0x7c7878
// 004b3e07  64a100000000         mov eax, dword ptr fs:[0]
// 004b3e0d  50                   push eax
// 004b3e0e  64892500000000       mov dword ptr fs:[0], esp
// 004b3e15  83ec24               sub esp, 0x24
// 004b3e18  53                   push ebx
// 004b3e19  55                   push ebp
// 004b3e1a  56                   push esi
// 004b3e1b  57                   push edi
// 004b3e1c  8bf9                 mov edi, ecx
// 004b3e1e  897c2410             mov dword ptr [esp + 0x10], edi
// 004b3e22  e8d9f9ffff           call 0x4b3800
// 004b3e27  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004b3e2b  51                   push ecx
// 004b3e2c  50                   push eax
// 004b3e2d  8bcf                 mov ecx, edi
// 004b3e2f  e87c7c0b00           call 0x56bab0
// 004b3e34  8b542448             mov edx, dword ptr [esp + 0x48]
// 004b3e38  6aff                 push -1
// 004b3e3a  52                   push edx
// 004b3e3b  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004b3e43  c707984c8200         mov dword ptr [edi], 0x824c98
// 004b3e49  e842010a00           call 0x553f90
// 004b3e4e  83c408               add esp, 8
// 004b3e51  89442424             mov dword ptr [esp + 0x24], eax
// 004b3e55  e8968f0b00           call 0x56cdf0
// 004b3e5a  8d4c242c             lea ecx, [esp + 0x2c]
// 004b3e5e  89442428             mov dword ptr [esp + 0x28], eax
// 004b3e62  e8590c0e00           call 0x594ac0
// 004b3e67  8b6f2c               mov ebp, dword ptr [edi + 0x2c]
// 004b3e6a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 004b3e6d  8d7718               lea esi, [edi + 0x18]
// 004b3e70  8d442424             lea eax, [esp + 0x24]
// 004b3e74  50                   push eax
// 004b3e75  51                   push ecx
// 004b3e76  55                   push ebp
// 004b3e77  8bce                 mov ecx, esi
// 004b3e79  c644244801           mov byte ptr [esp + 0x48], 1
// 004b3e7e  e87d40f6ff           call 0x417f00
// 004b3e83  6a01                 push 1
// 004b3e85  8bce                 mov ecx, esi
// 004b3e87  8bd8                 mov ebx, eax
// 004b3e89  e832ee1c00           call 0x682cc0
// 004b3e8e  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 004b3e92  895d04               mov dword ptr [ebp + 4], ebx
// 004b3e95  8b4304               mov eax, dword ptr [ebx + 4]
// 004b3e98  6aff                 push -1
// 004b3e9a  52                   push edx
// 004b3e9b  8918                 mov dword ptr [eax], ebx
// 004b3e9d  e8ee000a00           call 0x553f90
// 004b3ea2  83c408               add esp, 8
// 004b3ea5  89442414             mov dword ptr [esp + 0x14], eax
// 004b3ea9  e8828d0b00           call 0x56cc30
// 004b3eae  8d4c241c             lea ecx, [esp + 0x1c]
// 004b3eb2  89442418             mov dword ptr [esp + 0x18], eax
// 004b3eb6  e8050c0e00           call 0x594ac0
// 004b3ebb  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 004b3ebe  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004b3ec1  8d442414             lea eax, [esp + 0x14]
// 004b3ec5  50                   push eax
// 004b3ec6  51                   push ecx
// 004b3ec7  53                   push ebx
// 004b3ec8  8bce                 mov ecx, esi
// 004b3eca  c644244802           mov byte ptr [esp + 0x48], 2
// 004b3ecf  e82c40f6ff           call 0x417f00
// 004b3ed4  6a01                 push 1
// 004b3ed6  8bce                 mov ecx, esi
// 004b3ed8  8be8                 mov ebp, eax
// 004b3eda  e8e1ed1c00           call 0x682cc0
// 004b3edf  896b04               mov dword ptr [ebx + 4], ebp
// 004b3ee2  8b4504               mov eax, dword ptr [ebp + 4]
// 004b3ee5  8928                 mov dword ptr [eax], ebp
// 004b3ee7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004b3eeb  c644243c01           mov byte ptr [esp + 0x3c], 1
// 004b3ef0  85c9                 test ecx, ecx
// 004b3ef2  7408                 je 0x4b3efc
// 004b3ef4  8b11                 mov edx, dword ptr [ecx]
// 004b3ef6  8b02                 mov eax, dword ptr [edx]
// 004b3ef8  6a01                 push 1
// 004b3efa  ffd0                 call eax
// 004b3efc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004b3f00  c644243c00           mov byte ptr [esp + 0x3c], 0
// 004b3f05  85c9                 test ecx, ecx
// 004b3f07  7408                 je 0x4b3f11
// 004b3f09  8b11                 mov edx, dword ptr [ecx]
// 004b3f0b  8b02                 mov eax, dword ptr [edx]
// 004b3f0d  6a01                 push 1
// 004b3f0f  ffd0                 call eax
// 004b3f11  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004b3f15  8bc7                 mov eax, edi
// 004b3f17  5f                   pop edi
// 004b3f18  5e                   pop esi
// 004b3f19  5d                   pop ebp
// 004b3f1a  5b                   pop ebx
// 004b3f1b  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3f22  83c430               add esp, 0x30
// 004b3f25  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXMM@Z@Reflection@RBX@@QAE@PBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
