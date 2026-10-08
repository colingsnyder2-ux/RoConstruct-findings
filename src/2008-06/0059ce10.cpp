// roc 2008-06 0059ce10  unit: RBX::PartInstance  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ce10
//
// 0059ce10  6aff                 push -1
// 0059ce12  6830a17d00           push 0x7da130
// 0059ce17  64a100000000         mov eax, dword ptr fs:[0]
// 0059ce1d  50                   push eax
// 0059ce1e  64892500000000       mov dword ptr fs:[0], esp
// 0059ce25  83ec14               sub esp, 0x14
// 0059ce28  53                   push ebx
// 0059ce29  55                   push ebp
// 0059ce2a  56                   push esi
// 0059ce2b  8bf1                 mov esi, ecx
// 0059ce2d  57                   push edi
// 0059ce2e  89742410             mov dword ptr [esp + 0x10], esi
// 0059ce32  e8b9f9ffff           call 0x59c7f0
// 0059ce37  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059ce3b  51                   push ecx
// 0059ce3c  50                   push eax
// 0059ce3d  8bce                 mov ecx, esi
// 0059ce3f  e86cecfcff           call 0x56bab0
// 0059ce44  8b542438             mov edx, dword ptr [esp + 0x38]
// 0059ce48  6aff                 push -1
// 0059ce4a  52                   push edx
// 0059ce4b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0059ce53  c706382f8300         mov dword ptr [esi], 0x832f38
// 0059ce59  e83271fbff           call 0x553f90
// 0059ce5e  83c408               add esp, 8
// 0059ce61  89442414             mov dword ptr [esp + 0x14], eax
// 0059ce65  e876fcfcff           call 0x56cae0
// 0059ce6a  8d4c241c             lea ecx, [esp + 0x1c]
// 0059ce6e  89442418             mov dword ptr [esp + 0x18], eax
// 0059ce72  e8497cffff           call 0x594ac0
// 0059ce77  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 0059ce7a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0059ce7d  8d7e18               lea edi, [esi + 0x18]
// 0059ce80  8d442414             lea eax, [esp + 0x14]
// 0059ce84  50                   push eax
// 0059ce85  51                   push ecx
// 0059ce86  55                   push ebp
// 0059ce87  8bcf                 mov ecx, edi
// 0059ce89  c644243801           mov byte ptr [esp + 0x38], 1
// 0059ce8e  e86db0e7ff           call 0x417f00
// 0059ce93  6a01                 push 1
// 0059ce95  8bcf                 mov ecx, edi
// 0059ce97  8bd8                 mov ebx, eax
// 0059ce99  e8225e0e00           call 0x682cc0
// 0059ce9e  895d04               mov dword ptr [ebp + 4], ebx
// 0059cea1  8b4304               mov eax, dword ptr [ebx + 4]
// 0059cea4  8918                 mov dword ptr [eax], ebx
// 0059cea6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059ceaa  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0059ceaf  85c9                 test ecx, ecx
// 0059ceb1  7408                 je 0x59cebb
// 0059ceb3  8b11                 mov edx, dword ptr [ecx]
// 0059ceb5  8b02                 mov eax, dword ptr [edx]
// 0059ceb7  6a01                 push 1
// 0059ceb9  ffd0                 call eax
// 0059cebb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059cebf  5f                   pop edi
// 0059cec0  8bc6                 mov eax, esi
// 0059cec2  5e                   pop esi
// 0059cec3  5d                   pop ebp
// 0059cec4  5b                   pop ebx
// 0059cec5  64890d00000000       mov dword ptr fs:[0], ecx
// 0059cecc  83c420               add esp, 0x20
// 0059cecf  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
