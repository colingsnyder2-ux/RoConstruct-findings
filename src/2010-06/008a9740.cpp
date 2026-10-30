// roc 2010-06 008a9740  unit: CXTButtonThemeOfficeXP  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9740
//
// 008a9740  83ec10               sub esp, 0x10
// 008a9743  53                   push ebx
// 008a9744  55                   push ebp
// 008a9745  56                   push esi
// 008a9746  57                   push edi
// 008a9747  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008a974b  8b4718               mov eax, dword ptr [edi + 0x18]
// 008a974e  50                   push eax
// 008a974f  8bf1                 mov esi, ecx
// 008a9751  e816360d00           call 0x97cd6c
// 008a9756  8d4f1c               lea ecx, [edi + 0x1c]
// 008a9759  51                   push ecx
// 008a975a  8d542414             lea edx, [esp + 0x14]
// 008a975e  52                   push edx
// 008a975f  8bd8                 mov ebx, eax
// 008a9761  ff1548bc9e00         call dword ptr [0x9ebc48]
// 008a9767  8b7f10               mov edi, dword ptr [edi + 0x10]
// 008a976a  8b442428             mov eax, dword ptr [esp + 0x28]
// 008a976e  8b2d84bc9e00         mov ebp, dword ptr [0x9ebc84]
// 008a9774  83e701               and edi, 1
// 008a9777  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 008a977e  7556                 jne 0x8a97d6
// 008a9780  ffd5                 call ebp
// 008a9782  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a9786  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 008a9789  744b                 je 0x8a97d6
// 008a978b  85ff                 test edi, edi
// 008a978d  754b                 jne 0x8a97da
// 008a978f  8bd1                 mov edx, ecx
// 008a9791  397a7c               cmp dword ptr [edx + 0x7c], edi
// 008a9794  754c                 jne 0x8a97e2
// 008a9796  8b4628               mov eax, dword ptr [esi + 0x28]
// 008a9799  83f8ff               cmp eax, -1
// 008a979c  7503                 jne 0x8a97a1
// 008a979e  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a97a1  50                   push eax
// 008a97a2  8d442414             lea eax, [esp + 0x14]
// 008a97a6  50                   push eax
// 008a97a7  8bcb                 mov ecx, ebx
// 008a97a9  e890efefff           call 0x7a873e
// 008a97ae  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 008a97b5  0f8414010000         je 0x8a98cf
// 008a97bb  8b4658               mov eax, dword ptr [esi + 0x58]
// 008a97be  83f8ff               cmp eax, -1
// 008a97c1  7505                 jne 0x8a97c8
// 008a97c3  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008a97c6  eb02                 jmp 0x8a97ca
// 008a97c8  8bc8                 mov ecx, eax
// 008a97ca  83f8ff               cmp eax, -1
// 008a97cd  7503                 jne 0x8a97d2
// 008a97cf  8b4654               mov eax, dword ptr [esi + 0x54]
// 008a97d2  51                   push ecx
// 008a97d3  50                   push eax
// 008a97d4  eb70                 jmp 0x8a9846
// 008a97d6  85ff                 test edi, edi
// 008a97d8  7408                 je 0x8a97e2
// 008a97da  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008a97e0  eb34                 jmp 0x8a9816
// 008a97e2  8b442428             mov eax, dword ptr [esp + 0x28]
// 008a97e6  83787c00             cmp dword ptr [eax + 0x7c], 0
// 008a97ea  7424                 je 0x8a9810
// 008a97ec  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 008a97f3  750b                 jne 0x8a9800
// 008a97f5  ffd5                 call ebp
// 008a97f7  8b542428             mov edx, dword ptr [esp + 0x28]
// 008a97fb  3b4220               cmp eax, dword ptr [edx + 0x20]
// 008a97fe  7508                 jne 0x8a9808
// 008a9800  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008a9806  eb0e                 jmp 0x8a9816
// 008a9808  8d8ebc000000         lea ecx, [esi + 0xbc]
// 008a980e  eb06                 jmp 0x8a9816
// 008a9810  8d8e98000000         lea ecx, [esi + 0x98]
// 008a9816  8b4108               mov eax, dword ptr [ecx + 8]
// 008a9819  83f8ff               cmp eax, -1
// 008a981c  7503                 jne 0x8a9821
// 008a981e  8b4104               mov eax, dword ptr [ecx + 4]
// 008a9821  50                   push eax
// 008a9822  8d442414             lea eax, [esp + 0x14]
// 008a9826  50                   push eax
// 008a9827  8bcb                 mov ecx, ebx
// 008a9829  e810efefff           call 0x7a873e
// 008a982e  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008a9831  83f8ff               cmp eax, -1
// 008a9834  7503                 jne 0x8a9839
// 008a9836  8b4648               mov eax, dword ptr [esi + 0x48]
// 008a9839  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 008a983c  83f9ff               cmp ecx, -1
// 008a983f  7503                 jne 0x8a9844
// 008a9841  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 008a9844  50                   push eax
// 008a9845  51                   push ecx
// 008a9846  8d4c2418             lea ecx, [esp + 0x18]
// 008a984a  51                   push ecx
// 008a984b  8bcb                 mov ecx, ebx
// 008a984d  e8e6eeefff           call 0x7a8738
// 008a9852  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 008a9859  7474                 je 0x8a98cf
// 008a985b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a985f  e8acfffeff           call 0x899810
// 008a9864  3c01                 cmp al, 1
// 008a9866  7567                 jne 0x8a98cf
// 008a9868  e8b3a2f3ff           call 0x7e3b20
// 008a986d  6a0d                 push 0xd
// 008a986f  8bc8                 mov ecx, eax
// 008a9871  e83a9af3ff           call 0x7e32b0
// 008a9876  8bf0                 mov esi, eax
// 008a9878  e8a3a2f3ff           call 0x7e3b20
// 008a987d  6a0d                 push 0xd
// 008a987f  8bc8                 mov ecx, eax
// 008a9881  e82a9af3ff           call 0x7e32b0
// 008a9886  56                   push esi
// 008a9887  50                   push eax
// 008a9888  8d542418             lea edx, [esp + 0x18]
// 008a988c  52                   push edx
// 008a988d  8bcb                 mov ecx, ebx
// 008a988f  e8a4eeefff           call 0x7a8738
// 008a9894  6aff                 push -1
// 008a9896  6aff                 push -1
// 008a9898  8d442418             lea eax, [esp + 0x18]
// 008a989c  50                   push eax
// 008a989d  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 008a98a3  e878a2f3ff           call 0x7e3b20
// 008a98a8  6a0d                 push 0xd
// 008a98aa  8bc8                 mov ecx, eax
// 008a98ac  e8ff99f3ff           call 0x7e32b0
// 008a98b1  8bf0                 mov esi, eax
// 008a98b3  e868a2f3ff           call 0x7e3b20
// 008a98b8  6a0d                 push 0xd
// 008a98ba  8bc8                 mov ecx, eax
// 008a98bc  e8ef99f3ff           call 0x7e32b0
// 008a98c1  56                   push esi
// 008a98c2  50                   push eax
// 008a98c3  8d4c2418             lea ecx, [esp + 0x18]
// 008a98c7  51                   push ecx
// 008a98c8  8bcb                 mov ecx, ebx
// 008a98ca  e869eeefff           call 0x7a8738
// 008a98cf  5f                   pop edi
// 008a98d0  5e                   pop esi
// 008a98d1  5d                   pop ebp
// 008a98d2  b801000000           mov eax, 1
// 008a98d7  5b                   pop ebx
// 008a98d8  83c410               add esp, 0x10
// 008a98db  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonThemeBackground@CXTButtonThemeOfficeXP@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
