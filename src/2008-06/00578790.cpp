// roc 2008-06 00578790  unit: RBX::VTool::?$FactoryProduct::Creator  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00578790
//
// 00578790  6aff                 push -1
// 00578792  6878787c00           push 0x7c7878
// 00578797  64a100000000         mov eax, dword ptr fs:[0]
// 0057879d  50                   push eax
// 0057879e  64892500000000       mov dword ptr fs:[0], esp
// 005787a5  83ec24               sub esp, 0x24
// 005787a8  53                   push ebx
// 005787a9  55                   push ebp
// 005787aa  56                   push esi
// 005787ab  57                   push edi
// 005787ac  8bf9                 mov edi, ecx
// 005787ae  897c2410             mov dword ptr [esp + 0x10], edi
// 005787b2  e8c925e9ff           call 0x40ad80
// 005787b7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005787bb  51                   push ecx
// 005787bc  50                   push eax
// 005787bd  8bcf                 mov ecx, edi
// 005787bf  e8ec32ffff           call 0x56bab0
// 005787c4  8b542448             mov edx, dword ptr [esp + 0x48]
// 005787c8  6aff                 push -1
// 005787ca  52                   push edx
// 005787cb  c744244400000000     mov dword ptr [esp + 0x44], 0
// 005787d3  c7074c008300         mov dword ptr [edi], 0x83004c
// 005787d9  e8b2b7fdff           call 0x553f90
// 005787de  83c408               add esp, 8
// 005787e1  89442424             mov dword ptr [esp + 0x24], eax
// 005787e5  e8f642ffff           call 0x56cae0
// 005787ea  8d4c242c             lea ecx, [esp + 0x2c]
// 005787ee  89442428             mov dword ptr [esp + 0x28], eax
// 005787f2  e8c9c20100           call 0x594ac0
// 005787f7  8b6f2c               mov ebp, dword ptr [edi + 0x2c]
// 005787fa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005787fd  8d7718               lea esi, [edi + 0x18]
// 00578800  8d442424             lea eax, [esp + 0x24]
// 00578804  50                   push eax
// 00578805  51                   push ecx
// 00578806  55                   push ebp
// 00578807  8bce                 mov ecx, esi
// 00578809  c644244801           mov byte ptr [esp + 0x48], 1
// 0057880e  e8edf6e9ff           call 0x417f00
// 00578813  6a01                 push 1
// 00578815  8bce                 mov ecx, esi
// 00578817  8bd8                 mov ebx, eax
// 00578819  e8a2a41000           call 0x682cc0
// 0057881e  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00578822  895d04               mov dword ptr [ebp + 4], ebx
// 00578825  8b4304               mov eax, dword ptr [ebx + 4]
// 00578828  6aff                 push -1
// 0057882a  52                   push edx
// 0057882b  8918                 mov dword ptr [eax], ebx
// 0057882d  e85eb7fdff           call 0x553f90
// 00578832  83c408               add esp, 8
// 00578835  89442414             mov dword ptr [esp + 0x14], eax
// 00578839  e83236ffff           call 0x56be70
// 0057883e  8d4c241c             lea ecx, [esp + 0x1c]
// 00578842  89442418             mov dword ptr [esp + 0x18], eax
// 00578846  e875c20100           call 0x594ac0
// 0057884b  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 0057884e  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00578851  8d442414             lea eax, [esp + 0x14]
// 00578855  50                   push eax
// 00578856  51                   push ecx
// 00578857  53                   push ebx
// 00578858  8bce                 mov ecx, esi
// 0057885a  c644244802           mov byte ptr [esp + 0x48], 2
// 0057885f  e89cf6e9ff           call 0x417f00
// 00578864  6a01                 push 1
// 00578866  8bce                 mov ecx, esi
// 00578868  8be8                 mov ebp, eax
// 0057886a  e851a41000           call 0x682cc0
// 0057886f  896b04               mov dword ptr [ebx + 4], ebp
// 00578872  8b4504               mov eax, dword ptr [ebp + 4]
// 00578875  8928                 mov dword ptr [eax], ebp
// 00578877  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057887b  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00578880  85c9                 test ecx, ecx
// 00578882  7408                 je 0x57888c
// 00578884  8b11                 mov edx, dword ptr [ecx]
// 00578886  8b02                 mov eax, dword ptr [edx]
// 00578888  6a01                 push 1
// 0057888a  ffd0                 call eax
// 0057888c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00578890  c644243c00           mov byte ptr [esp + 0x3c], 0
// 00578895  85c9                 test ecx, ecx
// 00578897  7408                 je 0x5788a1
// 00578899  8b11                 mov edx, dword ptr [ecx]
// 0057889b  8b02                 mov eax, dword ptr [edx]
// 0057889d  6a01                 push 1
// 0057889f  ffd0                 call eax
// 005788a1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005788a5  8bc7                 mov eax, edi
// 005788a7  5f                   pop edi
// 005788a8  5e                   pop esi
// 005788a9  5d                   pop ebp
// 005788aa  5b                   pop ebx
// 005788ab  64890d00000000       mov dword ptr fs:[0], ecx
// 005788b2  83c430               add esp, 0x30
// 005788b5  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXMM@Z@Reflection@RBX@@QAE@PBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
