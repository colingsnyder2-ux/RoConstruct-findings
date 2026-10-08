// roc 2011-06 00889840  unit: CXTPRibbonTheme  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00889840
//
// 00889840  83ec30               sub esp, 0x30
// 00889843  53                   push ebx
// 00889844  55                   push ebp
// 00889845  56                   push esi
// 00889846  8b742444             mov esi, dword ptr [esp + 0x44]
// 0088984a  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00889850  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00889856  57                   push edi
// 00889857  8bbec8000000         mov edi, dword ptr [esi + 0xc8]
// 0088985d  89442420             mov dword ptr [esp + 0x20], eax
// 00889861  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00889867  68bc02ad00           push 0xad02bc
// 0088986c  89542428             mov dword ptr [esp + 0x28], edx
// 00889870  89442430             mov dword ptr [esp + 0x30], eax
// 00889874  e8175a0000           call 0x88f290
// 00889879  8be8                 mov ebp, eax
// 0088987b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00889881  83f8ff               cmp eax, -1
// 00889884  7511                 jne 0x889897
// 00889886  8bb65c010000         mov esi, dword ptr [esi + 0x15c]
// 0088988c  85f6                 test esi, esi
// 0088988e  7407                 je 0x889897
// 00889890  8bce                 mov ecx, esi
// 00889892  e8c933f8ff           call 0x80cc60
// 00889897  33c9                 xor ecx, ecx
// 00889899  85c0                 test eax, eax
// 0088989b  0f94c1               sete cl
// 0088989e  6a02                 push 2
// 008898a0  8d542414             lea edx, [esp + 0x14]
// 008898a4  51                   push ecx
// 008898a5  52                   push edx
// 008898a6  8bcd                 mov ecx, ebp
// 008898a8  e8633e0600           call 0x8ed710
// 008898ad  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008898b1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008898b5  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 008898b9  8d77f2               lea esi, [edi - 0xe]
// 008898bc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008898c0  8bc7                 mov eax, edi
// 008898c2  2bc3                 sub eax, ebx
// 008898c4  0344242c             add eax, dword ptr [esp + 0x2c]
// 008898c8  68ff00ff00           push 0xff00ff
// 008898cd  03442428             add eax, dword ptr [esp + 0x28]
// 008898d1  03ce                 add ecx, esi
// 008898d3  99                   cdq 
// 008898d4  2bc2                 sub eax, edx
// 008898d6  d1f8                 sar eax, 1
// 008898d8  89442438             mov dword ptr [esp + 0x38], eax
// 008898dc  8bd3                 mov edx, ebx
// 008898de  2bd7                 sub edx, edi
// 008898e0  03c2                 add eax, edx
// 008898e2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008898e6  89442440             mov dword ptr [esp + 0x40], eax
// 008898ea  8d442424             lea eax, [esp + 0x24]
// 008898ee  50                   push eax
// 008898ef  83ec10               sub esp, 0x10
// 008898f2  8bc4                 mov eax, esp
// 008898f4  894c2450             mov dword ptr [esp + 0x50], ecx
// 008898f8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008898fc  8908                 mov dword ptr [eax], ecx
// 008898fe  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00889902  897804               mov dword ptr [eax + 4], edi
// 00889905  895008               mov dword ptr [eax + 8], edx
// 00889908  89580c               mov dword ptr [eax + 0xc], ebx
// 0088990b  8d442448             lea eax, [esp + 0x48]
// 0088990f  50                   push eax
// 00889910  51                   push ecx
// 00889911  8bcd                 mov ecx, ebp
// 00889913  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0088991b  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00889923  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0088992b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00889933  89742450             mov dword ptr [esp + 0x50], esi
// 00889937  e814430600           call 0x8edc50
// 0088993c  5f                   pop edi
// 0088993d  5e                   pop esi
// 0088993e  5d                   pop ebp
// 0088993f  5b                   pop ebx
// 00889940  83c430               add esp, 0x30
// 00889943  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlPopupGlyph@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
