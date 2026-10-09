// roc 2009-12 005e9540  unit: seg_005e0000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e9540
//
// 005e9540  83ec08               sub esp, 8
// 005e9543  53                   push ebx
// 005e9544  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e9548  55                   push ebp
// 005e9549  56                   push esi
// 005e954a  57                   push edi
// 005e954b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005e954f  8bcf                 mov ecx, edi
// 005e9551  2bcb                 sub ecx, ebx
// 005e9553  b867666666           mov eax, 0x66666667
// 005e9558  f7e9                 imul ecx
// 005e955a  c1fa05               sar edx, 5
// 005e955d  8bc2                 mov eax, edx
// 005e955f  c1e81f               shr eax, 0x1f
// 005e9562  03c2                 add eax, edx
// 005e9564  83f820               cmp eax, 0x20
// 005e9567  0f8eb3000000         jle 0x5e9620
// 005e956d  8b742424             mov esi, dword ptr [esp + 0x24]
// 005e9571  85f6                 test esi, esi
// 005e9573  0f8ec5000000         jle 0x5e963e
// 005e9579  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e957d  50                   push eax
// 005e957e  57                   push edi
// 005e957f  8d4c2418             lea ecx, [esp + 0x18]
// 005e9583  53                   push ebx
// 005e9584  51                   push ecx
// 005e9585  e8d6f1ffff           call 0x5e8760
// 005e958a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005e958e  8bc6                 mov eax, esi
// 005e9590  99                   cdq 
// 005e9591  2bc2                 sub eax, edx
// 005e9593  d1f8                 sar eax, 1
// 005e9595  8bf0                 mov esi, eax
// 005e9597  99                   cdq 
// 005e9598  2bc2                 sub eax, edx
// 005e959a  d1f8                 sar eax, 1
// 005e959c  03f0                 add esi, eax
// 005e959e  8bcf                 mov ecx, edi
// 005e95a0  2bcd                 sub ecx, ebp
// 005e95a2  b867666666           mov eax, 0x66666667
// 005e95a7  f7e9                 imul ecx
// 005e95a9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e95ad  c1fa05               sar edx, 5
// 005e95b0  8bc2                 mov eax, edx
// 005e95b2  c1e81f               shr eax, 0x1f
// 005e95b5  03c2                 add eax, edx
// 005e95b7  89442430             mov dword ptr [esp + 0x30], eax
// 005e95bb  2bcb                 sub ecx, ebx
// 005e95bd  b867666666           mov eax, 0x66666667
// 005e95c2  f7e9                 imul ecx
// 005e95c4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e95c8  c1fa05               sar edx, 5
// 005e95cb  8bc2                 mov eax, edx
// 005e95cd  c1e81f               shr eax, 0x1f
// 005e95d0  03c2                 add eax, edx
// 005e95d2  83c410               add esp, 0x10
// 005e95d5  3bc1                 cmp eax, ecx
// 005e95d7  7d15                 jge 0x5e95ee
// 005e95d9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e95dd  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e95e1  51                   push ecx
// 005e95e2  56                   push esi
// 005e95e3  52                   push edx
// 005e95e4  53                   push ebx
// 005e95e5  e856ffffff           call 0x5e9540
// 005e95ea  8bdd                 mov ebx, ebp
// 005e95ec  eb11                 jmp 0x5e95ff
// 005e95ee  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e95f2  50                   push eax
// 005e95f3  56                   push esi
// 005e95f4  57                   push edi
// 005e95f5  55                   push ebp
// 005e95f6  e845ffffff           call 0x5e9540
// 005e95fb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005e95ff  8bcf                 mov ecx, edi
// 005e9601  2bcb                 sub ecx, ebx
// 005e9603  b867666666           mov eax, 0x66666667
// 005e9608  f7e9                 imul ecx
// 005e960a  c1fa05               sar edx, 5
// 005e960d  8bc2                 mov eax, edx
// 005e960f  c1e81f               shr eax, 0x1f
// 005e9612  03c2                 add eax, edx
// 005e9614  83c410               add esp, 0x10
// 005e9617  83f820               cmp eax, 0x20
// 005e961a  0f8f51ffffff         jg 0x5e9571
// 005e9620  83f801               cmp eax, 1
// 005e9623  7e11                 jle 0x5e9636
// 005e9625  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e9629  6a00                 push 0
// 005e962b  51                   push ecx
// 005e962c  57                   push edi
// 005e962d  53                   push ebx
// 005e962e  e8edfaffff           call 0x5e9120
// 005e9633  83c410               add esp, 0x10
// 005e9636  5f                   pop edi
// 005e9637  5e                   pop esi
// 005e9638  5d                   pop ebp
// 005e9639  5b                   pop ebx
// 005e963a  83c408               add esp, 8
// 005e963d  c3                   ret 
// 005e963e  83f820               cmp eax, 0x20
// 005e9641  7edd                 jle 0x5e9620
// 005e9643  8bcf                 mov ecx, edi
// 005e9645  2bcb                 sub ecx, ebx
// 005e9647  b867666666           mov eax, 0x66666667
// 005e964c  f7e9                 imul ecx
// 005e964e  c1fa05               sar edx, 5
// 005e9651  8bca                 mov ecx, edx
// 005e9653  c1e91f               shr ecx, 0x1f
// 005e9656  03ca                 add ecx, edx
// 005e9658  83f901               cmp ecx, 1
// 005e965b  7e13                 jle 0x5e9670
// 005e965d  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e9661  6a00                 push 0
// 005e9663  6a00                 push 0
// 005e9665  52                   push edx
// 005e9666  57                   push edi
// 005e9667  53                   push ebx
// 005e9668  e8e3efffff           call 0x5e8650
// 005e966d  83c414               add esp, 0x14
// 005e9670  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e9674  50                   push eax
// 005e9675  57                   push edi
// 005e9676  53                   push ebx
// 005e9677  e824fdffff           call 0x5e93a0
// 005e967c  83c40c               add esp, 0xc
// 005e967f  5f                   pop edi
// 005e9680  5e                   pop esi
// 005e9681  5d                   pop ebp
// 005e9682  5b                   pop ebx
// 005e9683  83c408               add esp, 8
// 005e9686  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Sort@PAVGLight@G3D@@HP6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
