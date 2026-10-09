// roc 2008-06 00556830  unit: RBX::VRunService::?$FactoryProduct  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00556830
//
// 00556830  6aff                 push -1
// 00556832  6878787c00           push 0x7c7878
// 00556837  64a100000000         mov eax, dword ptr fs:[0]
// 0055683d  50                   push eax
// 0055683e  64892500000000       mov dword ptr fs:[0], esp
// 00556845  83ec24               sub esp, 0x24
// 00556848  53                   push ebx
// 00556849  55                   push ebp
// 0055684a  56                   push esi
// 0055684b  57                   push edi
// 0055684c  8bf9                 mov edi, ecx
// 0055684e  897c2410             mov dword ptr [esp + 0x10], edi
// 00556852  e8d9fbffff           call 0x556430
// 00556857  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0055685b  51                   push ecx
// 0055685c  50                   push eax
// 0055685d  8bcf                 mov ecx, edi
// 0055685f  e84c520100           call 0x56bab0
// 00556864  8b542448             mov edx, dword ptr [esp + 0x48]
// 00556868  6aff                 push -1
// 0055686a  52                   push edx
// 0055686b  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00556873  c707f8d58200         mov dword ptr [edi], 0x82d5f8
// 00556879  e812d7ffff           call 0x553f90
// 0055687e  83c408               add esp, 8
// 00556881  89442424             mov dword ptr [esp + 0x24], eax
// 00556885  e816640100           call 0x56cca0
// 0055688a  8d4c242c             lea ecx, [esp + 0x2c]
// 0055688e  89442428             mov dword ptr [esp + 0x28], eax
// 00556892  e829e20300           call 0x594ac0
// 00556897  8b6f2c               mov ebp, dword ptr [edi + 0x2c]
// 0055689a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0055689d  8d7718               lea esi, [edi + 0x18]
// 005568a0  8d442424             lea eax, [esp + 0x24]
// 005568a4  50                   push eax
// 005568a5  51                   push ecx
// 005568a6  55                   push ebp
// 005568a7  8bce                 mov ecx, esi
// 005568a9  c644244801           mov byte ptr [esp + 0x48], 1
// 005568ae  e84d16ecff           call 0x417f00
// 005568b3  6a01                 push 1
// 005568b5  8bce                 mov ecx, esi
// 005568b7  8bd8                 mov ebx, eax
// 005568b9  e802c41200           call 0x682cc0
// 005568be  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005568c2  895d04               mov dword ptr [ebp + 4], ebx
// 005568c5  8b4304               mov eax, dword ptr [ebx + 4]
// 005568c8  6aff                 push -1
// 005568ca  52                   push edx
// 005568cb  8918                 mov dword ptr [eax], ebx
// 005568cd  e8bed6ffff           call 0x553f90
// 005568d2  83c408               add esp, 8
// 005568d5  89442414             mov dword ptr [esp + 0x14], eax
// 005568d9  e8c2630100           call 0x56cca0
// 005568de  8d4c241c             lea ecx, [esp + 0x1c]
// 005568e2  89442418             mov dword ptr [esp + 0x18], eax
// 005568e6  e8d5e10300           call 0x594ac0
// 005568eb  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 005568ee  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005568f1  8d442414             lea eax, [esp + 0x14]
// 005568f5  50                   push eax
// 005568f6  51                   push ecx
// 005568f7  53                   push ebx
// 005568f8  8bce                 mov ecx, esi
// 005568fa  c644244802           mov byte ptr [esp + 0x48], 2
// 005568ff  e8fc15ecff           call 0x417f00
// 00556904  6a01                 push 1
// 00556906  8bce                 mov ecx, esi
// 00556908  8be8                 mov ebp, eax
// 0055690a  e8b1c31200           call 0x682cc0
// 0055690f  896b04               mov dword ptr [ebx + 4], ebp
// 00556912  8b4504               mov eax, dword ptr [ebp + 4]
// 00556915  8928                 mov dword ptr [eax], ebp
// 00556917  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055691b  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00556920  85c9                 test ecx, ecx
// 00556922  7408                 je 0x55692c
// 00556924  8b11                 mov edx, dword ptr [ecx]
// 00556926  8b02                 mov eax, dword ptr [edx]
// 00556928  6a01                 push 1
// 0055692a  ffd0                 call eax
// 0055692c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00556930  c644243c00           mov byte ptr [esp + 0x3c], 0
// 00556935  85c9                 test ecx, ecx
// 00556937  7408                 je 0x556941
// 00556939  8b11                 mov edx, dword ptr [ecx]
// 0055693b  8b02                 mov eax, dword ptr [edx]
// 0055693d  6a01                 push 1
// 0055693f  ffd0                 call eax
// 00556941  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00556945  8bc7                 mov eax, edi
// 00556947  5f                   pop edi
// 00556948  5e                   pop esi
// 00556949  5d                   pop ebp
// 0055694a  5b                   pop ebx
// 0055694b  64890d00000000       mov dword ptr fs:[0], ecx
// 00556952  83c430               add esp, 0x30
// 00556955  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXMM@Z@Reflection@RBX@@QAE@PBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
