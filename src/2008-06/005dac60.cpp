// roc 2008-06 005dac60  unit: RBX::VHumanoid::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dac60
//
// 005dac60  6aff                 push -1
// 005dac62  6830a17d00           push 0x7da130
// 005dac67  64a100000000         mov eax, dword ptr fs:[0]
// 005dac6d  50                   push eax
// 005dac6e  64892500000000       mov dword ptr fs:[0], esp
// 005dac75  83ec14               sub esp, 0x14
// 005dac78  53                   push ebx
// 005dac79  55                   push ebp
// 005dac7a  56                   push esi
// 005dac7b  8bf1                 mov esi, ecx
// 005dac7d  57                   push edi
// 005dac7e  89742410             mov dword ptr [esp + 0x10], esi
// 005dac82  e8d95bfeff           call 0x5c0860
// 005dac87  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005dac8b  51                   push ecx
// 005dac8c  50                   push eax
// 005dac8d  8bce                 mov ecx, esi
// 005dac8f  e81c0ef9ff           call 0x56bab0
// 005dac94  8b542438             mov edx, dword ptr [esp + 0x38]
// 005dac98  6aff                 push -1
// 005dac9a  52                   push edx
// 005dac9b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005daca3  c70690d78300         mov dword ptr [esi], 0x83d790
// 005daca9  e8e292f7ff           call 0x553f90
// 005dacae  83c408               add esp, 8
// 005dacb1  89442414             mov dword ptr [esp + 0x14], eax
// 005dacb5  e8e61ff9ff           call 0x56cca0
// 005dacba  8d4c241c             lea ecx, [esp + 0x1c]
// 005dacbe  89442418             mov dword ptr [esp + 0x18], eax
// 005dacc2  e8f99dfbff           call 0x594ac0
// 005dacc7  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 005dacca  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005daccd  8d7e18               lea edi, [esi + 0x18]
// 005dacd0  8d442414             lea eax, [esp + 0x14]
// 005dacd4  50                   push eax
// 005dacd5  51                   push ecx
// 005dacd6  55                   push ebp
// 005dacd7  8bcf                 mov ecx, edi
// 005dacd9  c644243801           mov byte ptr [esp + 0x38], 1
// 005dacde  e81dd2e3ff           call 0x417f00
// 005dace3  6a01                 push 1
// 005dace5  8bcf                 mov ecx, edi
// 005dace7  8bd8                 mov ebx, eax
// 005dace9  e8d27f0a00           call 0x682cc0
// 005dacee  895d04               mov dword ptr [ebp + 4], ebx
// 005dacf1  8b4304               mov eax, dword ptr [ebx + 4]
// 005dacf4  8918                 mov dword ptr [eax], ebx
// 005dacf6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005dacfa  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005dacff  85c9                 test ecx, ecx
// 005dad01  7408                 je 0x5dad0b
// 005dad03  8b11                 mov edx, dword ptr [ecx]
// 005dad05  8b02                 mov eax, dword ptr [edx]
// 005dad07  6a01                 push 1
// 005dad09  ffd0                 call eax
// 005dad0b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005dad0f  5f                   pop edi
// 005dad10  8bc6                 mov eax, esi
// 005dad12  5e                   pop esi
// 005dad13  5d                   pop ebp
// 005dad14  5b                   pop ebx
// 005dad15  64890d00000000       mov dword ptr fs:[0], ecx
// 005dad1c  83c420               add esp, 0x20
// 005dad1f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
