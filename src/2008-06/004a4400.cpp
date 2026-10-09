// roc 2008-06 004a4400  unit: RBX::Network::VServer::?$FactoryProduct  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a4400
//
// 004a4400  6aff                 push -1
// 004a4402  6878787c00           push 0x7c7878
// 004a4407  64a100000000         mov eax, dword ptr fs:[0]
// 004a440d  50                   push eax
// 004a440e  64892500000000       mov dword ptr fs:[0], esp
// 004a4415  83ec24               sub esp, 0x24
// 004a4418  53                   push ebx
// 004a4419  55                   push ebp
// 004a441a  56                   push esi
// 004a441b  57                   push edi
// 004a441c  8bf9                 mov edi, ecx
// 004a441e  897c2410             mov dword ptr [esp + 0x10], edi
// 004a4422  e879a7ffff           call 0x49eba0
// 004a4427  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004a442b  51                   push ecx
// 004a442c  50                   push eax
// 004a442d  8bcf                 mov ecx, edi
// 004a442f  e87c760c00           call 0x56bab0
// 004a4434  8b542448             mov edx, dword ptr [esp + 0x48]
// 004a4438  6aff                 push -1
// 004a443a  52                   push edx
// 004a443b  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004a4443  c707c8398200         mov dword ptr [edi], 0x8239c8
// 004a4449  e842fb0a00           call 0x553f90
// 004a444e  83c408               add esp, 8
// 004a4451  89442424             mov dword ptr [esp + 0x24], eax
// 004a4455  e896890c00           call 0x56cdf0
// 004a445a  8d4c242c             lea ecx, [esp + 0x2c]
// 004a445e  89442428             mov dword ptr [esp + 0x28], eax
// 004a4462  e859060f00           call 0x594ac0
// 004a4467  8b6f2c               mov ebp, dword ptr [edi + 0x2c]
// 004a446a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 004a446d  8d7718               lea esi, [edi + 0x18]
// 004a4470  8d442424             lea eax, [esp + 0x24]
// 004a4474  50                   push eax
// 004a4475  51                   push ecx
// 004a4476  55                   push ebp
// 004a4477  8bce                 mov ecx, esi
// 004a4479  c644244801           mov byte ptr [esp + 0x48], 1
// 004a447e  e87d3af7ff           call 0x417f00
// 004a4483  6a01                 push 1
// 004a4485  8bce                 mov ecx, esi
// 004a4487  8bd8                 mov ebx, eax
// 004a4489  e832e81d00           call 0x682cc0
// 004a448e  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 004a4492  895d04               mov dword ptr [ebp + 4], ebx
// 004a4495  8b4304               mov eax, dword ptr [ebx + 4]
// 004a4498  6aff                 push -1
// 004a449a  52                   push edx
// 004a449b  8918                 mov dword ptr [eax], ebx
// 004a449d  e8eefa0a00           call 0x553f90
// 004a44a2  83c408               add esp, 8
// 004a44a5  89442414             mov dword ptr [esp + 0x14], eax
// 004a44a9  e832860c00           call 0x56cae0
// 004a44ae  8d4c241c             lea ecx, [esp + 0x1c]
// 004a44b2  89442418             mov dword ptr [esp + 0x18], eax
// 004a44b6  e805060f00           call 0x594ac0
// 004a44bb  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 004a44be  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004a44c1  8d442414             lea eax, [esp + 0x14]
// 004a44c5  50                   push eax
// 004a44c6  51                   push ecx
// 004a44c7  53                   push ebx
// 004a44c8  8bce                 mov ecx, esi
// 004a44ca  c644244802           mov byte ptr [esp + 0x48], 2
// 004a44cf  e82c3af7ff           call 0x417f00
// 004a44d4  6a01                 push 1
// 004a44d6  8bce                 mov ecx, esi
// 004a44d8  8be8                 mov ebp, eax
// 004a44da  e8e1e71d00           call 0x682cc0
// 004a44df  896b04               mov dword ptr [ebx + 4], ebp
// 004a44e2  8b4504               mov eax, dword ptr [ebp + 4]
// 004a44e5  8928                 mov dword ptr [eax], ebp
// 004a44e7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004a44eb  c644243c01           mov byte ptr [esp + 0x3c], 1
// 004a44f0  85c9                 test ecx, ecx
// 004a44f2  7408                 je 0x4a44fc
// 004a44f4  8b11                 mov edx, dword ptr [ecx]
// 004a44f6  8b02                 mov eax, dword ptr [edx]
// 004a44f8  6a01                 push 1
// 004a44fa  ffd0                 call eax
// 004a44fc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004a4500  c644243c00           mov byte ptr [esp + 0x3c], 0
// 004a4505  85c9                 test ecx, ecx
// 004a4507  7408                 je 0x4a4511
// 004a4509  8b11                 mov edx, dword ptr [ecx]
// 004a450b  8b02                 mov eax, dword ptr [edx]
// 004a450d  6a01                 push 1
// 004a450f  ffd0                 call eax
// 004a4511  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004a4515  8bc7                 mov eax, edi
// 004a4517  5f                   pop edi
// 004a4518  5e                   pop esi
// 004a4519  5d                   pop ebp
// 004a451a  5b                   pop ebx
// 004a451b  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4522  83c430               add esp, 0x30
// 004a4525  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXMM@Z@Reflection@RBX@@QAE@PBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
