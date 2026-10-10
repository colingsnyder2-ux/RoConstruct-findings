// roc 2008-06 00728140  unit: CXTPRibbonTheme  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00728140
//
// 00728140  83ec34               sub esp, 0x34
// 00728143  53                   push ebx
// 00728144  55                   push ebp
// 00728145  56                   push esi
// 00728146  8b742448             mov esi, dword ptr [esp + 0x48]
// 0072814a  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00728150  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 00728156  8bd9                 mov ebx, ecx
// 00728158  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0072815e  89442410             mov dword ptr [esp + 0x10], eax
// 00728162  8b06                 mov eax, dword ptr [esi]
// 00728164  894c2414             mov dword ptr [esp + 0x14], ecx
// 00728168  8954241c             mov dword ptr [esp + 0x1c], edx
// 0072816c  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0072816f  57                   push edi
// 00728170  8bbec8000000         mov edi, dword ptr [esi + 0xc8]
// 00728176  8bce                 mov ecx, esi
// 00728178  ffd2                 call edx
// 0072817a  8be8                 mov ebp, eax
// 0072817c  8b06                 mov eax, dword ptr [esi]
// 0072817e  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00728184  8bce                 mov ecx, esi
// 00728186  ffd2                 call edx
// 00728188  89442410             mov dword ptr [esp + 0x10], eax
// 0072818c  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00728192  83f8ff               cmp eax, -1
// 00728195  750f                 jne 0x7281a6
// 00728197  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0072819d  85c9                 test ecx, ecx
// 0072819f  7405                 je 0x7281a6
// 007281a1  e81a36f8ff           call 0x6ab7c0
// 007281a6  6828188600           push 0x861828
// 007281ab  8bcb                 mov ecx, ebx
// 007281ad  89442450             mov dword ptr [esp + 0x50], eax
// 007281b1  e83ad50000           call 0x7356f0
// 007281b6  8bf0                 mov esi, eax
// 007281b8  85ed                 test ebp, ebp
// 007281ba  7413                 je 0x7281cf
// 007281bc  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 007281c1  740c                 je 0x7281cf
// 007281c3  33c9                 xor ecx, ecx
// 007281c5  394c2410             cmp dword ptr [esp + 0x10], ecx
// 007281c9  0f95c1               setne cl
// 007281cc  41                   inc ecx
// 007281cd  eb02                 jmp 0x7281d1
// 007281cf  33c9                 xor ecx, ecx
// 007281d1  8b542418             mov edx, dword ptr [esp + 0x18]
// 007281d5  b802000000           mov eax, 2
// 007281da  89442424             mov dword ptr [esp + 0x24], eax
// 007281de  89442428             mov dword ptr [esp + 0x28], eax
// 007281e2  8944242c             mov dword ptr [esp + 0x2c], eax
// 007281e6  89442430             mov dword ptr [esp + 0x30], eax
// 007281ea  6a03                 push 3
// 007281ec  8bc7                 mov eax, edi
// 007281ee  2b83cc000000         sub eax, dword ptr [ebx + 0xcc]
// 007281f4  51                   push ecx
// 007281f5  8d4c241c             lea ecx, [esp + 0x1c]
// 007281f9  8944243c             mov dword ptr [esp + 0x3c], eax
// 007281fd  8b442428             mov eax, dword ptr [esp + 0x28]
// 00728201  51                   push ecx
// 00728202  8bce                 mov ecx, esi
// 00728204  89542444             mov dword ptr [esp + 0x44], edx
// 00728208  897c2448             mov dword ptr [esp + 0x48], edi
// 0072820c  8944244c             mov dword ptr [esp + 0x4c], eax
// 00728210  e81b550600           call 0x78d730
// 00728215  68ff00ff00           push 0xff00ff
// 0072821a  8d542428             lea edx, [esp + 0x28]
// 0072821e  52                   push edx
// 0072821f  8b10                 mov edx, dword ptr [eax]
// 00728221  83ec10               sub esp, 0x10
// 00728224  8bcc                 mov ecx, esp
// 00728226  8911                 mov dword ptr [ecx], edx
// 00728228  8b5004               mov edx, dword ptr [eax + 4]
// 0072822b  895104               mov dword ptr [ecx + 4], edx
// 0072822e  8b5008               mov edx, dword ptr [eax + 8]
// 00728231  8b400c               mov eax, dword ptr [eax + 0xc]
// 00728234  895108               mov dword ptr [ecx + 8], edx
// 00728237  8b542460             mov edx, dword ptr [esp + 0x60]
// 0072823b  89410c               mov dword ptr [ecx + 0xc], eax
// 0072823e  8d4c244c             lea ecx, [esp + 0x4c]
// 00728242  51                   push ecx
// 00728243  52                   push edx
// 00728244  8bce                 mov ecx, esi
// 00728246  e8255a0600           call 0x78dc70
// 0072824b  5f                   pop edi
// 0072824c  5e                   pop esi
// 0072824d  5d                   pop ebp
// 0072824e  5b                   pop ebx
// 0072824f  83c434               add esp, 0x34
// 00728252  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawSplitButtonPopup@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp
