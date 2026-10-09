// roc 2008-06 00492890  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00492890
//
// 00492890  6aff                 push -1
// 00492892  6878787c00           push 0x7c7878
// 00492897  64a100000000         mov eax, dword ptr fs:[0]
// 0049289d  50                   push eax
// 0049289e  64892500000000       mov dword ptr fs:[0], esp
// 004928a5  83ec24               sub esp, 0x24
// 004928a8  53                   push ebx
// 004928a9  55                   push ebp
// 004928aa  56                   push esi
// 004928ab  57                   push edi
// 004928ac  8bf9                 mov edi, ecx
// 004928ae  897c2410             mov dword ptr [esp + 0x10], edi
// 004928b2  e8a9eaffff           call 0x491360
// 004928b7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004928bb  51                   push ecx
// 004928bc  50                   push eax
// 004928bd  8bcf                 mov ecx, edi
// 004928bf  e8ec910d00           call 0x56bab0
// 004928c4  8b542448             mov edx, dword ptr [esp + 0x48]
// 004928c8  6aff                 push -1
// 004928ca  52                   push edx
// 004928cb  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004928d3  c707b01d8200         mov dword ptr [edi], 0x821db0
// 004928d9  e8b2160c00           call 0x553f90
// 004928de  83c408               add esp, 8
// 004928e1  89442424             mov dword ptr [esp + 0x24], eax
// 004928e5  e806a50d00           call 0x56cdf0
// 004928ea  8d4c242c             lea ecx, [esp + 0x2c]
// 004928ee  89442428             mov dword ptr [esp + 0x28], eax
// 004928f2  e8c9211000           call 0x594ac0
// 004928f7  8b6f2c               mov ebp, dword ptr [edi + 0x2c]
// 004928fa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 004928fd  8d7718               lea esi, [edi + 0x18]
// 00492900  8d442424             lea eax, [esp + 0x24]
// 00492904  50                   push eax
// 00492905  51                   push ecx
// 00492906  55                   push ebp
// 00492907  8bce                 mov ecx, esi
// 00492909  c644244801           mov byte ptr [esp + 0x48], 1
// 0049290e  e8ed55f8ff           call 0x417f00
// 00492913  6a01                 push 1
// 00492915  8bce                 mov ecx, esi
// 00492917  8bd8                 mov ebx, eax
// 00492919  e8a2031f00           call 0x682cc0
// 0049291e  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00492922  895d04               mov dword ptr [ebp + 4], ebx
// 00492925  8b4304               mov eax, dword ptr [ebx + 4]
// 00492928  6aff                 push -1
// 0049292a  52                   push edx
// 0049292b  8918                 mov dword ptr [eax], ebx
// 0049292d  e85e160c00           call 0x553f90
// 00492932  83c408               add esp, 8
// 00492935  89442414             mov dword ptr [esp + 0x14], eax
// 00492939  e8a2a10d00           call 0x56cae0
// 0049293e  8d4c241c             lea ecx, [esp + 0x1c]
// 00492942  89442418             mov dword ptr [esp + 0x18], eax
// 00492946  e875211000           call 0x594ac0
// 0049294b  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 0049294e  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00492951  8d442414             lea eax, [esp + 0x14]
// 00492955  50                   push eax
// 00492956  51                   push ecx
// 00492957  53                   push ebx
// 00492958  8bce                 mov ecx, esi
// 0049295a  c644244802           mov byte ptr [esp + 0x48], 2
// 0049295f  e89c55f8ff           call 0x417f00
// 00492964  6a01                 push 1
// 00492966  8bce                 mov ecx, esi
// 00492968  8be8                 mov ebp, eax
// 0049296a  e851031f00           call 0x682cc0
// 0049296f  896b04               mov dword ptr [ebx + 4], ebp
// 00492972  8b4504               mov eax, dword ptr [ebp + 4]
// 00492975  8928                 mov dword ptr [eax], ebp
// 00492977  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049297b  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00492980  85c9                 test ecx, ecx
// 00492982  7408                 je 0x49298c
// 00492984  8b11                 mov edx, dword ptr [ecx]
// 00492986  8b02                 mov eax, dword ptr [edx]
// 00492988  6a01                 push 1
// 0049298a  ffd0                 call eax
// 0049298c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00492990  c644243c00           mov byte ptr [esp + 0x3c], 0
// 00492995  85c9                 test ecx, ecx
// 00492997  7408                 je 0x4929a1
// 00492999  8b11                 mov edx, dword ptr [ecx]
// 0049299b  8b02                 mov eax, dword ptr [edx]
// 0049299d  6a01                 push 1
// 0049299f  ffd0                 call eax
// 004929a1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004929a5  8bc7                 mov eax, edi
// 004929a7  5f                   pop edi
// 004929a8  5e                   pop esi
// 004929a9  5d                   pop ebp
// 004929aa  5b                   pop ebx
// 004929ab  64890d00000000       mov dword ptr fs:[0], ecx
// 004929b2  83c430               add esp, 0x30
// 004929b5  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXMM@Z@Reflection@RBX@@QAE@PBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
