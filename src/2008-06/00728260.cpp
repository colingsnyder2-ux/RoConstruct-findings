// from server: 100% by auto
// roc 2008-06 00728260  unit: CXTPRibbonTheme  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00728260
//
// 00728260  83ec30               sub esp, 0x30
// 00728263  53                   push ebx
// 00728264  55                   push ebp
// 00728265  56                   push esi
// 00728266  8b742444             mov esi, dword ptr [esp + 0x44]
// 0072826a  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00728270  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00728276  57                   push edi
// 00728277  8bbec8000000         mov edi, dword ptr [esi + 0xc8]
// 0072827d  89442420             mov dword ptr [esp + 0x20], eax
// 00728281  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00728287  683c188600           push 0x86183c
// 0072828c  89542428             mov dword ptr [esp + 0x28], edx
// 00728290  89442430             mov dword ptr [esp + 0x30], eax
// 00728294  e857d40000           call 0x7356f0
// 00728299  8be8                 mov ebp, eax
// 0072829b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007282a1  83f8ff               cmp eax, -1
// 007282a4  7511                 jne 0x7282b7
// 007282a6  8bb65c010000         mov esi, dword ptr [esi + 0x15c]
// 007282ac  85f6                 test esi, esi
// 007282ae  7407                 je 0x7282b7
// 007282b0  8bce                 mov ecx, esi
// 007282b2  e80935f8ff           call 0x6ab7c0
// 007282b7  33c9                 xor ecx, ecx
// 007282b9  85c0                 test eax, eax
// 007282bb  0f94c1               sete cl
// 007282be  6a02                 push 2
// 007282c0  8d542414             lea edx, [esp + 0x14]
// 007282c4  51                   push ecx
// 007282c5  52                   push edx
// 007282c6  8bcd                 mov ecx, ebp
// 007282c8  e863540600           call 0x78d730
// 007282cd  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007282d1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007282d5  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 007282d9  8d77f2               lea esi, [edi - 0xe]
// 007282dc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007282e0  8bc7                 mov eax, edi
// 007282e2  2bc3                 sub eax, ebx
// 007282e4  0344242c             add eax, dword ptr [esp + 0x2c]
// 007282e8  68ff00ff00           push 0xff00ff
// 007282ed  03442428             add eax, dword ptr [esp + 0x28]
// 007282f1  03ce                 add ecx, esi
// 007282f3  99                   cdq 
// 007282f4  2bc2                 sub eax, edx
// 007282f6  d1f8                 sar eax, 1
// 007282f8  89442438             mov dword ptr [esp + 0x38], eax
// 007282fc  8bd3                 mov edx, ebx
// 007282fe  2bd7                 sub edx, edi
// 00728300  03c2                 add eax, edx
// 00728302  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00728306  89442440             mov dword ptr [esp + 0x40], eax
// 0072830a  8d442424             lea eax, [esp + 0x24]
// 0072830e  50                   push eax
// 0072830f  83ec10               sub esp, 0x10
// 00728312  8bc4                 mov eax, esp
// 00728314  894c2450             mov dword ptr [esp + 0x50], ecx
// 00728318  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0072831c  8908                 mov dword ptr [eax], ecx
// 0072831e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00728322  897804               mov dword ptr [eax + 4], edi
// 00728325  895008               mov dword ptr [eax + 8], edx
// 00728328  89580c               mov dword ptr [eax + 0xc], ebx
// 0072832b  8d442448             lea eax, [esp + 0x48]
// 0072832f  50                   push eax
// 00728330  51                   push ecx
// 00728331  8bcd                 mov ecx, ebp
// 00728333  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0072833b  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00728343  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0072834b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00728353  89742450             mov dword ptr [esp + 0x50], esi
// 00728357  e814590600           call 0x78dc70
// 0072835c  5f                   pop edi
// 0072835d  5e                   pop esi
// 0072835e  5d                   pop ebp
// 0072835f  5b                   pop ebx
// 00728360  83c430               add esp, 0x30
// 00728363  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlPopupGlyph@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
