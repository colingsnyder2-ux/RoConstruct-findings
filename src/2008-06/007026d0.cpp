// from server: 100% by auto
// roc 2008-06 007026d0  unit: CXTPControlTabWorkspace  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007026d0
//
// 007026d0  83ec08               sub esp, 8
// 007026d3  53                   push ebx
// 007026d4  56                   push esi
// 007026d5  8bd9                 mov ebx, ecx
// 007026d7  8b8378010000         mov eax, dword ptr [ebx + 0x178]
// 007026dd  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007026e0  57                   push edi
// 007026e1  8dbb78010000         lea edi, [ebx + 0x178]
// 007026e7  8bcf                 mov ecx, edi
// 007026e9  ffd2                 call edx
// 007026eb  8bf0                 mov esi, eax
// 007026ed  85f6                 test esi, esi
// 007026ef  751c                 jne 0x70270d
// 007026f1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007026f5  8b742418             mov esi, dword ptr [esp + 0x18]
// 007026f9  50                   push eax
// 007026fa  56                   push esi
// 007026fb  8bcb                 mov ecx, ebx
// 007026fd  e87e91faff           call 0x6ab880
// 00702702  5f                   pop edi
// 00702703  8bc6                 mov eax, esi
// 00702705  5e                   pop esi
// 00702706  5b                   pop ebx
// 00702707  83c408               add esp, 8
// 0070270a  c20800               ret 8
// 0070270d  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00702713  57                   push edi
// 00702714  e8d7310800           call 0x7858f0
// 00702719  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0070271d  7403                 je 0x702722
// 0070271f  83c002               add eax, 2
// 00702722  8b8b00010000         mov ecx, dword ptr [ebx + 0x100]
// 00702728  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0070272e  83f902               cmp ecx, 2
// 00702731  740a                 je 0x70273d
// 00702733  83f903               cmp ecx, 3
// 00702736  7405                 je 0x70273d
// 00702738  83f905               cmp ecx, 5
// 0070273b  7510                 jne 0x70274d
// 0070273d  8b9360010000         mov edx, dword ptr [ebx + 0x160]
// 00702743  8944240c             mov dword ptr [esp + 0xc], eax
// 00702747  89542410             mov dword ptr [esp + 0x10], edx
// 0070274b  eb0e                 jmp 0x70275b
// 0070274d  8b8b60010000         mov ecx, dword ptr [ebx + 0x160]
// 00702753  894c240c             mov dword ptr [esp + 0xc], ecx
// 00702757  89442410             mov dword ptr [esp + 0x10], eax
// 0070275b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0070275f  8d4c240c             lea ecx, [esp + 0xc]
// 00702763  8b11                 mov edx, dword ptr [ecx]
// 00702765  8b4904               mov ecx, dword ptr [ecx + 4]
// 00702768  5f                   pop edi
// 00702769  5e                   pop esi
// 0070276a  8910                 mov dword ptr [eax], edx
// 0070276c  894804               mov dword ptr [eax + 4], ecx
// 0070276f  5b                   pop ebx
// 00702770  83c408               add esp, 8
// 00702773  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetSize@CXTPControlTabWorkspace@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
