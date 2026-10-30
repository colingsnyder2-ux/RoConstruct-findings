// roc 2009-12 00871760  unit: CXTPRibbonTheme  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00871760
//
// 00871760  83ec34               sub esp, 0x34
// 00871763  53                   push ebx
// 00871764  55                   push ebp
// 00871765  56                   push esi
// 00871766  8b742448             mov esi, dword ptr [esp + 0x48]
// 0087176a  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00871770  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 00871776  8bd9                 mov ebx, ecx
// 00871778  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0087177e  89442410             mov dword ptr [esp + 0x10], eax
// 00871782  8b06                 mov eax, dword ptr [esi]
// 00871784  894c2414             mov dword ptr [esp + 0x14], ecx
// 00871788  8954241c             mov dword ptr [esp + 0x1c], edx
// 0087178c  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0087178f  57                   push edi
// 00871790  8bbec8000000         mov edi, dword ptr [esi + 0xc8]
// 00871796  8bce                 mov ecx, esi
// 00871798  ffd2                 call edx
// 0087179a  8be8                 mov ebp, eax
// 0087179c  8b06                 mov eax, dword ptr [esi]
// 0087179e  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 008717a4  8bce                 mov ecx, esi
// 008717a6  ffd2                 call edx
// 008717a8  89442410             mov dword ptr [esp + 0x10], eax
// 008717ac  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008717b2  83f8ff               cmp eax, -1
// 008717b5  750f                 jne 0x8717c6
// 008717b7  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 008717bd  85c9                 test ecx, ecx
// 008717bf  7405                 je 0x8717c6
// 008717c1  e8ea4df8ff           call 0x7f65b0
// 008717c6  68440fa000           push 0xa00f44
// 008717cb  8bcb                 mov ecx, ebx
// 008717cd  89442450             mov dword ptr [esp + 0x50], eax
// 008717d1  e82ad50000           call 0x87ed00
// 008717d6  8bf0                 mov esi, eax
// 008717d8  85ed                 test ebp, ebp
// 008717da  7413                 je 0x8717ef
// 008717dc  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 008717e1  740c                 je 0x8717ef
// 008717e3  33c9                 xor ecx, ecx
// 008717e5  394c2410             cmp dword ptr [esp + 0x10], ecx
// 008717e9  0f95c1               setne cl
// 008717ec  41                   inc ecx
// 008717ed  eb02                 jmp 0x8717f1
// 008717ef  33c9                 xor ecx, ecx
// 008717f1  8b542418             mov edx, dword ptr [esp + 0x18]
// 008717f5  b802000000           mov eax, 2
// 008717fa  89442424             mov dword ptr [esp + 0x24], eax
// 008717fe  89442428             mov dword ptr [esp + 0x28], eax
// 00871802  8944242c             mov dword ptr [esp + 0x2c], eax
// 00871806  89442430             mov dword ptr [esp + 0x30], eax
// 0087180a  6a03                 push 3
// 0087180c  8bc7                 mov eax, edi
// 0087180e  2b83cc000000         sub eax, dword ptr [ebx + 0xcc]
// 00871814  51                   push ecx
// 00871815  8d4c241c             lea ecx, [esp + 0x1c]
// 00871819  8944243c             mov dword ptr [esp + 0x3c], eax
// 0087181d  8b442428             mov eax, dword ptr [esp + 0x28]
// 00871821  51                   push ecx
// 00871822  8bce                 mov ecx, esi
// 00871824  89542444             mov dword ptr [esp + 0x44], edx
// 00871828  897c2448             mov dword ptr [esp + 0x48], edi
// 0087182c  8944244c             mov dword ptr [esp + 0x4c], eax
// 00871830  e88bf00600           call 0x8e08c0
// 00871835  68ff00ff00           push 0xff00ff
// 0087183a  8d542428             lea edx, [esp + 0x28]
// 0087183e  52                   push edx
// 0087183f  8b10                 mov edx, dword ptr [eax]
// 00871841  83ec10               sub esp, 0x10
// 00871844  8bcc                 mov ecx, esp
// 00871846  8911                 mov dword ptr [ecx], edx
// 00871848  8b5004               mov edx, dword ptr [eax + 4]
// 0087184b  895104               mov dword ptr [ecx + 4], edx
// 0087184e  8b5008               mov edx, dword ptr [eax + 8]
// 00871851  8b400c               mov eax, dword ptr [eax + 0xc]
// 00871854  895108               mov dword ptr [ecx + 8], edx
// 00871857  8b542460             mov edx, dword ptr [esp + 0x60]
// 0087185b  89410c               mov dword ptr [ecx + 0xc], eax
// 0087185e  8d4c244c             lea ecx, [esp + 0x4c]
// 00871862  51                   push ecx
// 00871863  52                   push edx
// 00871864  8bce                 mov ecx, esi
// 00871866  e895f50600           call 0x8e0e00
// 0087186b  5f                   pop edi
// 0087186c  5e                   pop esi
// 0087186d  5d                   pop ebp
// 0087186e  5b                   pop ebx
// 0087186f  83c434               add esp, 0x34
// 00871872  c20800               ret 8
// copied from an identical function in another client (function ?DrawSplitButtonPopup@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp