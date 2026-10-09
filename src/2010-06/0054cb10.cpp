// roc 2010-06 0054cb10  unit: RBX::AggregateChunk  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054cb10
//
// 0054cb10  83ec08               sub esp, 8
// 0054cb13  53                   push ebx
// 0054cb14  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0054cb18  55                   push ebp
// 0054cb19  56                   push esi
// 0054cb1a  57                   push edi
// 0054cb1b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0054cb1f  8bcf                 mov ecx, edi
// 0054cb21  2bcb                 sub ecx, ebx
// 0054cb23  b867666666           mov eax, 0x66666667
// 0054cb28  f7e9                 imul ecx
// 0054cb2a  c1fa05               sar edx, 5
// 0054cb2d  8bc2                 mov eax, edx
// 0054cb2f  c1e81f               shr eax, 0x1f
// 0054cb32  03c2                 add eax, edx
// 0054cb34  83f820               cmp eax, 0x20
// 0054cb37  0f8eb3000000         jle 0x54cbf0
// 0054cb3d  8b742424             mov esi, dword ptr [esp + 0x24]
// 0054cb41  85f6                 test esi, esi
// 0054cb43  0f8ec5000000         jle 0x54cc0e
// 0054cb49  8b442428             mov eax, dword ptr [esp + 0x28]
// 0054cb4d  50                   push eax
// 0054cb4e  57                   push edi
// 0054cb4f  8d4c2418             lea ecx, [esp + 0x18]
// 0054cb53  53                   push ebx
// 0054cb54  51                   push ecx
// 0054cb55  e8d6f1ffff           call 0x54bd30
// 0054cb5a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0054cb5e  8bc6                 mov eax, esi
// 0054cb60  99                   cdq 
// 0054cb61  2bc2                 sub eax, edx
// 0054cb63  d1f8                 sar eax, 1
// 0054cb65  8bf0                 mov esi, eax
// 0054cb67  99                   cdq 
// 0054cb68  2bc2                 sub eax, edx
// 0054cb6a  d1f8                 sar eax, 1
// 0054cb6c  03f0                 add esi, eax
// 0054cb6e  8bcf                 mov ecx, edi
// 0054cb70  2bcd                 sub ecx, ebp
// 0054cb72  b867666666           mov eax, 0x66666667
// 0054cb77  f7e9                 imul ecx
// 0054cb79  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0054cb7d  c1fa05               sar edx, 5
// 0054cb80  8bc2                 mov eax, edx
// 0054cb82  c1e81f               shr eax, 0x1f
// 0054cb85  03c2                 add eax, edx
// 0054cb87  89442430             mov dword ptr [esp + 0x30], eax
// 0054cb8b  2bcb                 sub ecx, ebx
// 0054cb8d  b867666666           mov eax, 0x66666667
// 0054cb92  f7e9                 imul ecx
// 0054cb94  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0054cb98  c1fa05               sar edx, 5
// 0054cb9b  8bc2                 mov eax, edx
// 0054cb9d  c1e81f               shr eax, 0x1f
// 0054cba0  03c2                 add eax, edx
// 0054cba2  83c410               add esp, 0x10
// 0054cba5  3bc1                 cmp eax, ecx
// 0054cba7  7d15                 jge 0x54cbbe
// 0054cba9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0054cbad  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054cbb1  51                   push ecx
// 0054cbb2  56                   push esi
// 0054cbb3  52                   push edx
// 0054cbb4  53                   push ebx
// 0054cbb5  e856ffffff           call 0x54cb10
// 0054cbba  8bdd                 mov ebx, ebp
// 0054cbbc  eb11                 jmp 0x54cbcf
// 0054cbbe  8b442428             mov eax, dword ptr [esp + 0x28]
// 0054cbc2  50                   push eax
// 0054cbc3  56                   push esi
// 0054cbc4  57                   push edi
// 0054cbc5  55                   push ebp
// 0054cbc6  e845ffffff           call 0x54cb10
// 0054cbcb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0054cbcf  8bcf                 mov ecx, edi
// 0054cbd1  2bcb                 sub ecx, ebx
// 0054cbd3  b867666666           mov eax, 0x66666667
// 0054cbd8  f7e9                 imul ecx
// 0054cbda  c1fa05               sar edx, 5
// 0054cbdd  8bc2                 mov eax, edx
// 0054cbdf  c1e81f               shr eax, 0x1f
// 0054cbe2  03c2                 add eax, edx
// 0054cbe4  83c410               add esp, 0x10
// 0054cbe7  83f820               cmp eax, 0x20
// 0054cbea  0f8f51ffffff         jg 0x54cb41
// 0054cbf0  83f801               cmp eax, 1
// 0054cbf3  7e11                 jle 0x54cc06
// 0054cbf5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0054cbf9  6a00                 push 0
// 0054cbfb  51                   push ecx
// 0054cbfc  57                   push edi
// 0054cbfd  53                   push ebx
// 0054cbfe  e8edfaffff           call 0x54c6f0
// 0054cc03  83c410               add esp, 0x10
// 0054cc06  5f                   pop edi
// 0054cc07  5e                   pop esi
// 0054cc08  5d                   pop ebp
// 0054cc09  5b                   pop ebx
// 0054cc0a  83c408               add esp, 8
// 0054cc0d  c3                   ret 
// 0054cc0e  83f820               cmp eax, 0x20
// 0054cc11  7edd                 jle 0x54cbf0
// 0054cc13  8bcf                 mov ecx, edi
// 0054cc15  2bcb                 sub ecx, ebx
// 0054cc17  b867666666           mov eax, 0x66666667
// 0054cc1c  f7e9                 imul ecx
// 0054cc1e  c1fa05               sar edx, 5
// 0054cc21  8bca                 mov ecx, edx
// 0054cc23  c1e91f               shr ecx, 0x1f
// 0054cc26  03ca                 add ecx, edx
// 0054cc28  83f901               cmp ecx, 1
// 0054cc2b  7e13                 jle 0x54cc40
// 0054cc2d  8b542428             mov edx, dword ptr [esp + 0x28]
// 0054cc31  6a00                 push 0
// 0054cc33  6a00                 push 0
// 0054cc35  52                   push edx
// 0054cc36  57                   push edi
// 0054cc37  53                   push ebx
// 0054cc38  e8e3efffff           call 0x54bc20
// 0054cc3d  83c414               add esp, 0x14
// 0054cc40  8b442428             mov eax, dword ptr [esp + 0x28]
// 0054cc44  50                   push eax
// 0054cc45  57                   push edi
// 0054cc46  53                   push ebx
// 0054cc47  e824fdffff           call 0x54c970
// 0054cc4c  83c40c               add esp, 0xc
// 0054cc4f  5f                   pop edi
// 0054cc50  5e                   pop esi
// 0054cc51  5d                   pop ebp
// 0054cc52  5b                   pop ebx
// 0054cc53  83c408               add esp, 8
// 0054cc56  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Sort@PAVGLight@G3D@@HP6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
