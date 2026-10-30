// roc 2010-06 0082c7b0  unit: CXTPRibbonTheme  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082c7b0
//
// 0082c7b0  83ec30               sub esp, 0x30
// 0082c7b3  53                   push ebx
// 0082c7b4  55                   push ebp
// 0082c7b5  56                   push esi
// 0082c7b6  8b742444             mov esi, dword ptr [esp + 0x44]
// 0082c7ba  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0082c7c0  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0082c7c6  57                   push edi
// 0082c7c7  8bbec8000000         mov edi, dword ptr [esi + 0xc8]
// 0082c7cd  89442420             mov dword ptr [esp + 0x20], eax
// 0082c7d1  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0082c7d7  689c58a600           push 0xa6589c
// 0082c7dc  89542428             mov dword ptr [esp + 0x28], edx
// 0082c7e0  89442430             mov dword ptr [esp + 0x30], eax
// 0082c7e4  e8175a0000           call 0x832200
// 0082c7e9  8be8                 mov ebp, eax
// 0082c7eb  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0082c7f1  83f8ff               cmp eax, -1
// 0082c7f4  7511                 jne 0x82c807
// 0082c7f6  8bb65c010000         mov esi, dword ptr [esi + 0x15c]
// 0082c7fc  85f6                 test esi, esi
// 0082c7fe  7407                 je 0x82c807
// 0082c800  8bce                 mov ecx, esi
// 0082c802  e889def7ff           call 0x7aa690
// 0082c807  33c9                 xor ecx, ecx
// 0082c809  85c0                 test eax, eax
// 0082c80b  0f94c1               sete cl
// 0082c80e  6a02                 push 2
// 0082c810  8d542414             lea edx, [esp + 0x14]
// 0082c814  51                   push ecx
// 0082c815  52                   push edx
// 0082c816  8bcd                 mov ecx, ebp
// 0082c818  e813830600           call 0x894b30
// 0082c81d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0082c821  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082c825  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0082c829  8d77f2               lea esi, [edi - 0xe]
// 0082c82c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0082c830  8bc7                 mov eax, edi
// 0082c832  2bc3                 sub eax, ebx
// 0082c834  0344242c             add eax, dword ptr [esp + 0x2c]
// 0082c838  68ff00ff00           push 0xff00ff
// 0082c83d  03442428             add eax, dword ptr [esp + 0x28]
// 0082c841  03ce                 add ecx, esi
// 0082c843  99                   cdq 
// 0082c844  2bc2                 sub eax, edx
// 0082c846  d1f8                 sar eax, 1
// 0082c848  89442438             mov dword ptr [esp + 0x38], eax
// 0082c84c  8bd3                 mov edx, ebx
// 0082c84e  2bd7                 sub edx, edi
// 0082c850  03c2                 add eax, edx
// 0082c852  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0082c856  89442440             mov dword ptr [esp + 0x40], eax
// 0082c85a  8d442424             lea eax, [esp + 0x24]
// 0082c85e  50                   push eax
// 0082c85f  83ec10               sub esp, 0x10
// 0082c862  8bc4                 mov eax, esp
// 0082c864  894c2450             mov dword ptr [esp + 0x50], ecx
// 0082c868  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0082c86c  8908                 mov dword ptr [eax], ecx
// 0082c86e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0082c872  897804               mov dword ptr [eax + 4], edi
// 0082c875  895008               mov dword ptr [eax + 8], edx
// 0082c878  89580c               mov dword ptr [eax + 0xc], ebx
// 0082c87b  8d442448             lea eax, [esp + 0x48]
// 0082c87f  50                   push eax
// 0082c880  51                   push ecx
// 0082c881  8bcd                 mov ecx, ebp
// 0082c883  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0082c88b  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0082c893  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0082c89b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0082c8a3  89742450             mov dword ptr [esp + 0x50], esi
// 0082c8a7  e8c4870600           call 0x895070
// 0082c8ac  5f                   pop edi
// 0082c8ad  5e                   pop esi
// 0082c8ae  5d                   pop ebp
// 0082c8af  5b                   pop ebx
// 0082c8b0  83c430               add esp, 0x30
// 0082c8b3  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlPopupGlyph@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
