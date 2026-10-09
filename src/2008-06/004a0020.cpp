// roc 2008-06 004a0020  unit: RBX::Network::VClient::?$FactoryProduct  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a0020
//
// 004a0020  6aff                 push -1
// 004a0022  6878787c00           push 0x7c7878
// 004a0027  64a100000000         mov eax, dword ptr fs:[0]
// 004a002d  50                   push eax
// 004a002e  64892500000000       mov dword ptr fs:[0], esp
// 004a0035  83ec24               sub esp, 0x24
// 004a0038  53                   push ebx
// 004a0039  55                   push ebp
// 004a003a  56                   push esi
// 004a003b  57                   push edi
// 004a003c  8bf9                 mov edi, ecx
// 004a003e  897c2410             mov dword ptr [esp + 0x10], edi
// 004a0042  e8e9eaffff           call 0x49eb30
// 004a0047  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004a004b  51                   push ecx
// 004a004c  50                   push eax
// 004a004d  8bcf                 mov ecx, edi
// 004a004f  e85cba0c00           call 0x56bab0
// 004a0054  8b542448             mov edx, dword ptr [esp + 0x48]
// 004a0058  6aff                 push -1
// 004a005a  52                   push edx
// 004a005b  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004a0063  c707b0308200         mov dword ptr [edi], 0x8230b0
// 004a0069  e8223f0b00           call 0x553f90
// 004a006e  83c408               add esp, 8
// 004a0071  89442424             mov dword ptr [esp + 0x24], eax
// 004a0075  e876cd0c00           call 0x56cdf0
// 004a007a  8d4c242c             lea ecx, [esp + 0x2c]
// 004a007e  89442428             mov dword ptr [esp + 0x28], eax
// 004a0082  e8394a0f00           call 0x594ac0
// 004a0087  8b6f2c               mov ebp, dword ptr [edi + 0x2c]
// 004a008a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 004a008d  8d7718               lea esi, [edi + 0x18]
// 004a0090  8d442424             lea eax, [esp + 0x24]
// 004a0094  50                   push eax
// 004a0095  51                   push ecx
// 004a0096  55                   push ebp
// 004a0097  8bce                 mov ecx, esi
// 004a0099  c644244801           mov byte ptr [esp + 0x48], 1
// 004a009e  e85d7ef7ff           call 0x417f00
// 004a00a3  6a01                 push 1
// 004a00a5  8bce                 mov ecx, esi
// 004a00a7  8bd8                 mov ebx, eax
// 004a00a9  e8122c1e00           call 0x682cc0
// 004a00ae  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 004a00b2  895d04               mov dword ptr [ebp + 4], ebx
// 004a00b5  8b4304               mov eax, dword ptr [ebx + 4]
// 004a00b8  6aff                 push -1
// 004a00ba  52                   push edx
// 004a00bb  8918                 mov dword ptr [eax], ebx
// 004a00bd  e8ce3e0b00           call 0x553f90
// 004a00c2  83c408               add esp, 8
// 004a00c5  89442414             mov dword ptr [esp + 0x14], eax
// 004a00c9  e812ca0c00           call 0x56cae0
// 004a00ce  8d4c241c             lea ecx, [esp + 0x1c]
// 004a00d2  89442418             mov dword ptr [esp + 0x18], eax
// 004a00d6  e8e5490f00           call 0x594ac0
// 004a00db  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 004a00de  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004a00e1  8d442414             lea eax, [esp + 0x14]
// 004a00e5  50                   push eax
// 004a00e6  51                   push ecx
// 004a00e7  53                   push ebx
// 004a00e8  8bce                 mov ecx, esi
// 004a00ea  c644244802           mov byte ptr [esp + 0x48], 2
// 004a00ef  e80c7ef7ff           call 0x417f00
// 004a00f4  6a01                 push 1
// 004a00f6  8bce                 mov ecx, esi
// 004a00f8  8be8                 mov ebp, eax
// 004a00fa  e8c12b1e00           call 0x682cc0
// 004a00ff  896b04               mov dword ptr [ebx + 4], ebp
// 004a0102  8b4504               mov eax, dword ptr [ebp + 4]
// 004a0105  8928                 mov dword ptr [eax], ebp
// 004a0107  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004a010b  c644243c01           mov byte ptr [esp + 0x3c], 1
// 004a0110  85c9                 test ecx, ecx
// 004a0112  7408                 je 0x4a011c
// 004a0114  8b11                 mov edx, dword ptr [ecx]
// 004a0116  8b02                 mov eax, dword ptr [edx]
// 004a0118  6a01                 push 1
// 004a011a  ffd0                 call eax
// 004a011c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004a0120  c644243c00           mov byte ptr [esp + 0x3c], 0
// 004a0125  85c9                 test ecx, ecx
// 004a0127  7408                 je 0x4a0131
// 004a0129  8b11                 mov edx, dword ptr [ecx]
// 004a012b  8b02                 mov eax, dword ptr [edx]
// 004a012d  6a01                 push 1
// 004a012f  ffd0                 call eax
// 004a0131  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004a0135  8bc7                 mov eax, edi
// 004a0137  5f                   pop edi
// 004a0138  5e                   pop esi
// 004a0139  5d                   pop ebp
// 004a013a  5b                   pop ebx
// 004a013b  64890d00000000       mov dword ptr fs:[0], ecx
// 004a0142  83c430               add esp, 0x30
// 004a0145  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXMM@Z@Reflection@RBX@@QAE@PBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
