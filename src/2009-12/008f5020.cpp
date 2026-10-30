// roc 2009-12 008f5020  unit: CXTButtonTheme  size: 561 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f5020
//
// 008f5020  83ec18               sub esp, 0x18
// 008f5023  53                   push ebx
// 008f5024  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008f5028  8b4318               mov eax, dword ptr [ebx + 0x18]
// 008f502b  55                   push ebp
// 008f502c  56                   push esi
// 008f502d  57                   push edi
// 008f502e  50                   push eax
// 008f502f  8bf1                 mov esi, ecx
// 008f5031  e8fa130300           call 0x926430
// 008f5036  8d4b1c               lea ecx, [ebx + 0x1c]
// 008f5039  51                   push ecx
// 008f503a  8d54241c             lea edx, [esp + 0x1c]
// 008f503e  52                   push edx
// 008f503f  89442434             mov dword ptr [esp + 0x34], eax
// 008f5043  ff1564cc9800         call dword ptr [0x98cc64]
// 008f5049  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008f504d  837f7c00             cmp dword ptr [edi + 0x7c], 0
// 008f5051  750a                 jne 0x8f505d
// 008f5053  f6431001             test byte ptr [ebx + 0x10], 1
// 008f5057  7504                 jne 0x8f505d
// 008f5059  33ed                 xor ebp, ebp
// 008f505b  eb05                 jmp 0x8f5062
// 008f505d  bd01000000           mov ebp, 1
// 008f5062  57                   push edi
// 008f5063  8d4c2414             lea ecx, [esp + 0x14]
// 008f5067  e8a461f5ff           call 0x84b210
// 008f506c  8b4628               mov eax, dword ptr [esi + 0x28]
// 008f506f  83f8ff               cmp eax, -1
// 008f5072  7503                 jne 0x8f5077
// 008f5074  8b4624               mov eax, dword ptr [esi + 0x24]
// 008f5077  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f507b  50                   push eax
// 008f507c  8d44241c             lea eax, [esp + 0x1c]
// 008f5080  50                   push eax
// 008f5081  e878f5efff           call 0x7f45fe
// 008f5086  8b17                 mov edx, dword ptr [edi]
// 008f5088  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 008f508e  8bcf                 mov ecx, edi
// 008f5090  ffd0                 call eax
// 008f5092  8bd8                 mov ebx, eax
// 008f5094  f6c320               test bl, 0x20
// 008f5097  7432                 je 0x8f50cb
// 008f5099  837f7c00             cmp dword ptr [edi + 0x7c], 0
// 008f509d  7419                 je 0x8f50b8
// 008f509f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f50a3  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f50a7  51                   push ecx
// 008f50a8  52                   push edx
// 008f50a9  8d442420             lea eax, [esp + 0x20]
// 008f50ad  50                   push eax
// 008f50ae  ff155cca9800         call dword ptr [0x98ca5c]
// 008f50b4  85c0                 test eax, eax
// 008f50b6  7404                 je 0x8f50bc
// 008f50b8  85ed                 test ebp, ebp
// 008f50ba  740f                 je 0x8f50cb
// 008f50bc  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008f50c0  8d4c2418             lea ecx, [esp + 0x18]
// 008f50c4  51                   push ecx
// 008f50c5  52                   push edx
// 008f50c6  e8c52df2ff           call 0x817e90
// 008f50cb  f6c301               test bl, 1
// 008f50ce  7458                 je 0x8f5128
// 008f50d0  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 008f50d7  7515                 jne 0x8f50ee
// 008f50d9  ff1528cc9800         call dword ptr [0x98cc28]
// 008f50df  3b4720               cmp eax, dword ptr [edi + 0x20]
// 008f50e2  740a                 je 0x8f50ee
// 008f50e4  85ed                 test ebp, ebp
// 008f50e6  0f8456010000         je 0x8f5242
// 008f50ec  eb04                 jmp 0x8f50f2
// 008f50ee  85ed                 test ebp, ebp
// 008f50f0  740c                 je 0x8f50fe
// 008f50f2  8d4e5c               lea ecx, [esi + 0x5c]
// 008f50f5  85ed                 test ebp, ebp
// 008f50f7  7408                 je 0x8f5101
// 008f50f9  83c650               add esi, 0x50
// 008f50fc  eb06                 jmp 0x8f5104
// 008f50fe  8d4e50               lea ecx, [esi + 0x50]
// 008f5101  83c65c               add esi, 0x5c
// 008f5104  8b4108               mov eax, dword ptr [ecx + 8]
// 008f5107  83f8ff               cmp eax, -1
// 008f510a  7505                 jne 0x8f5111
// 008f510c  8b4904               mov ecx, dword ptr [ecx + 4]
// 008f510f  eb02                 jmp 0x8f5113
// 008f5111  8bc8                 mov ecx, eax
// 008f5113  8b4608               mov eax, dword ptr [esi + 8]
// 008f5116  83f8ff               cmp eax, -1
// 008f5119  7503                 jne 0x8f511e
// 008f511b  8b4604               mov eax, dword ptr [esi + 4]
// 008f511e  51                   push ecx
// 008f511f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008f5123  e90f010000           jmp 0x8f5237
// 008f5128  f6c302               test bl, 2
// 008f512b  744b                 je 0x8f5178
// 008f512d  85ed                 test ebp, ebp
// 008f512f  7408                 je 0x8f5139
// 008f5131  8d4e5c               lea ecx, [esi + 0x5c]
// 008f5134  83c650               add esi, 0x50
// 008f5137  eb06                 jmp 0x8f513f
// 008f5139  8d4e50               lea ecx, [esi + 0x50]
// 008f513c  83c65c               add esi, 0x5c
// 008f513f  8b4108               mov eax, dword ptr [ecx + 8]
// 008f5142  83f8ff               cmp eax, -1
// 008f5145  7505                 jne 0x8f514c
// 008f5147  8b4904               mov ecx, dword ptr [ecx + 4]
// 008f514a  eb02                 jmp 0x8f514e
// 008f514c  8bc8                 mov ecx, eax
// 008f514e  8b4608               mov eax, dword ptr [esi + 8]
// 008f5151  83f8ff               cmp eax, -1
// 008f5154  7503                 jne 0x8f5159
// 008f5156  8b4604               mov eax, dword ptr [esi + 4]
// 008f5159  51                   push ecx
// 008f515a  50                   push eax
// 008f515b  8d4c2420             lea ecx, [esp + 0x20]
// 008f515f  51                   push ecx
// 008f5160  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008f5164  e88ff4efff           call 0x7f45f8
// 008f5169  5f                   pop edi
// 008f516a  5e                   pop esi
// 008f516b  5d                   pop ebp
// 008f516c  b801000000           mov eax, 1
// 008f5171  5b                   pop ebx
// 008f5172  83c418               add esp, 0x18
// 008f5175  c20800               ret 8
// 008f5178  8bcf                 mov ecx, edi
// 008f517a  e88103ffff           call 0x8e5500
// 008f517f  8b3d58ca9800         mov edi, dword ptr [0x98ca58]
// 008f5185  3c01                 cmp al, 1
// 008f5187  7536                 jne 0x8f51bf
// 008f5189  8b4670               mov eax, dword ptr [esi + 0x70]
// 008f518c  83f8ff               cmp eax, -1
// 008f518f  7505                 jne 0x8f5196
// 008f5191  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008f5194  eb02                 jmp 0x8f5198
// 008f5196  8bc8                 mov ecx, eax
// 008f5198  83f8ff               cmp eax, -1
// 008f519b  7503                 jne 0x8f51a0
// 008f519d  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008f51a0  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008f51a4  51                   push ecx
// 008f51a5  50                   push eax
// 008f51a6  8d542420             lea edx, [esp + 0x20]
// 008f51aa  52                   push edx
// 008f51ab  8bcb                 mov ecx, ebx
// 008f51ad  e846f4efff           call 0x7f45f8
// 008f51b2  6aff                 push -1
// 008f51b4  6aff                 push -1
// 008f51b6  8d442420             lea eax, [esp + 0x20]
// 008f51ba  50                   push eax
// 008f51bb  ffd7                 call edi
// 008f51bd  eb04                 jmp 0x8f51c3
// 008f51bf  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008f51c3  85ed                 test ebp, ebp
// 008f51c5  7408                 je 0x8f51cf
// 008f51c7  8d4e5c               lea ecx, [esi + 0x5c]
// 008f51ca  8d5668               lea edx, [esi + 0x68]
// 008f51cd  eb06                 jmp 0x8f51d5
// 008f51cf  8d4e68               lea ecx, [esi + 0x68]
// 008f51d2  8d565c               lea edx, [esi + 0x5c]
// 008f51d5  8b4108               mov eax, dword ptr [ecx + 8]
// 008f51d8  83f8ff               cmp eax, -1
// 008f51db  7505                 jne 0x8f51e2
// 008f51dd  8b4904               mov ecx, dword ptr [ecx + 4]
// 008f51e0  eb02                 jmp 0x8f51e4
// 008f51e2  8bc8                 mov ecx, eax
// 008f51e4  8b4208               mov eax, dword ptr [edx + 8]
// 008f51e7  83f8ff               cmp eax, -1
// 008f51ea  7503                 jne 0x8f51ef
// 008f51ec  8b4204               mov eax, dword ptr [edx + 4]
// 008f51ef  51                   push ecx
// 008f51f0  50                   push eax
// 008f51f1  8d4c2420             lea ecx, [esp + 0x20]
// 008f51f5  51                   push ecx
// 008f51f6  8bcb                 mov ecx, ebx
// 008f51f8  e8fbf3efff           call 0x7f45f8
// 008f51fd  6aff                 push -1
// 008f51ff  6aff                 push -1
// 008f5201  8d542420             lea edx, [esp + 0x20]
// 008f5205  52                   push edx
// 008f5206  ffd7                 call edi
// 008f5208  85ed                 test ebp, ebp
// 008f520a  7408                 je 0x8f5214
// 008f520c  8d4e44               lea ecx, [esi + 0x44]
// 008f520f  83c650               add esi, 0x50
// 008f5212  eb06                 jmp 0x8f521a
// 008f5214  8d4e50               lea ecx, [esi + 0x50]
// 008f5217  83c644               add esi, 0x44
// 008f521a  8b4108               mov eax, dword ptr [ecx + 8]
// 008f521d  83f8ff               cmp eax, -1
// 008f5220  7505                 jne 0x8f5227
// 008f5222  8b4904               mov ecx, dword ptr [ecx + 4]
// 008f5225  eb02                 jmp 0x8f5229
// 008f5227  8bc8                 mov ecx, eax
// 008f5229  8b4608               mov eax, dword ptr [esi + 8]
// 008f522c  83f8ff               cmp eax, -1
// 008f522f  7503                 jne 0x8f5234
// 008f5231  8b4604               mov eax, dword ptr [esi + 4]
// 008f5234  51                   push ecx
// 008f5235  8bcb                 mov ecx, ebx
// 008f5237  50                   push eax
// 008f5238  8d442420             lea eax, [esp + 0x20]
// 008f523c  50                   push eax
// 008f523d  e8b6f3efff           call 0x7f45f8
// 008f5242  5f                   pop edi
// 008f5243  5e                   pop esi
// 008f5244  5d                   pop ebp
// 008f5245  b801000000           mov eax, 1
// 008f524a  5b                   pop ebx
// 008f524b  83c418               add esp, 0x18
// 008f524e  c20800               ret 8
// copied from an identical function in another client (function ?DrawButtonThemeBackground@CXTButtonTheme@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTButtonTheme.cpp