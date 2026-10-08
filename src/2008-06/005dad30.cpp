// roc 2008-06 005dad30  unit: RBX::VHumanoid::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dad30
//
// 005dad30  6aff                 push -1
// 005dad32  6830a17d00           push 0x7da130
// 005dad37  64a100000000         mov eax, dword ptr fs:[0]
// 005dad3d  50                   push eax
// 005dad3e  64892500000000       mov dword ptr fs:[0], esp
// 005dad45  83ec14               sub esp, 0x14
// 005dad48  53                   push ebx
// 005dad49  55                   push ebp
// 005dad4a  56                   push esi
// 005dad4b  8bf1                 mov esi, ecx
// 005dad4d  57                   push edi
// 005dad4e  89742410             mov dword ptr [esp + 0x10], esi
// 005dad52  e8095bfeff           call 0x5c0860
// 005dad57  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005dad5b  51                   push ecx
// 005dad5c  50                   push eax
// 005dad5d  8bce                 mov ecx, esi
// 005dad5f  e84c0df9ff           call 0x56bab0
// 005dad64  8b542438             mov edx, dword ptr [esp + 0x38]
// 005dad68  6aff                 push -1
// 005dad6a  52                   push edx
// 005dad6b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005dad73  c706a0d78300         mov dword ptr [esi], 0x83d7a0
// 005dad79  e81292f7ff           call 0x553f90
// 005dad7e  83c408               add esp, 8
// 005dad81  89442414             mov dword ptr [esp + 0x14], eax
// 005dad85  e8a61ef9ff           call 0x56cc30
// 005dad8a  8d4c241c             lea ecx, [esp + 0x1c]
// 005dad8e  89442418             mov dword ptr [esp + 0x18], eax
// 005dad92  e8299dfbff           call 0x594ac0
// 005dad97  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 005dad9a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005dad9d  8d7e18               lea edi, [esi + 0x18]
// 005dada0  8d442414             lea eax, [esp + 0x14]
// 005dada4  50                   push eax
// 005dada5  51                   push ecx
// 005dada6  55                   push ebp
// 005dada7  8bcf                 mov ecx, edi
// 005dada9  c644243801           mov byte ptr [esp + 0x38], 1
// 005dadae  e84dd1e3ff           call 0x417f00
// 005dadb3  6a01                 push 1
// 005dadb5  8bcf                 mov ecx, edi
// 005dadb7  8bd8                 mov ebx, eax
// 005dadb9  e8027f0a00           call 0x682cc0
// 005dadbe  895d04               mov dword ptr [ebp + 4], ebx
// 005dadc1  8b4304               mov eax, dword ptr [ebx + 4]
// 005dadc4  8918                 mov dword ptr [eax], ebx
// 005dadc6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005dadca  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005dadcf  85c9                 test ecx, ecx
// 005dadd1  7408                 je 0x5daddb
// 005dadd3  8b11                 mov edx, dword ptr [ecx]
// 005dadd5  8b02                 mov eax, dword ptr [edx]
// 005dadd7  6a01                 push 1
// 005dadd9  ffd0                 call eax
// 005daddb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005daddf  5f                   pop edi
// 005dade0  8bc6                 mov eax, esi
// 005dade2  5e                   pop esi
// 005dade3  5d                   pop ebp
// 005dade4  5b                   pop ebx
// 005dade5  64890d00000000       mov dword ptr fs:[0], ecx
// 005dadec  83c420               add esp, 0x20
// 005dadef  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
