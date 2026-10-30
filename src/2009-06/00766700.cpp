// roc 2009-06 00766700  unit: CXTPCustomizeCommandsPage  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00766700
//
// 00766700  8b442404             mov eax, dword ptr [esp + 4]
// 00766704  53                   push ebx
// 00766705  55                   push ebp
// 00766706  56                   push esi
// 00766707  57                   push edi
// 00766708  6aff                 push -1
// 0076670a  50                   push eax
// 0076670b  e890fcffff           call 0x7663a0
// 00766710  8b742418             mov esi, dword ptr [esp + 0x18]
// 00766714  8b4e04               mov ecx, dword ptr [esi + 4]
// 00766717  51                   push ecx
// 00766718  8bd8                 mov ebx, eax
// 0076671a  ff1524ee8900         call dword ptr [0x89ee24]
// 00766720  8bf8                 mov edi, eax
// 00766722  33ed                 xor ebp, ebp
// 00766724  897c2414             mov dword ptr [esp + 0x14], edi
// 00766728  85ff                 test edi, edi
// 0076672a  0f8e8c000000         jle 0x7667bc
// 00766730  8b5604               mov edx, dword ptr [esi + 4]
// 00766733  55                   push ebp
// 00766734  52                   push edx
// 00766735  ff1520ee8900         call dword ptr [0x89ee20]
// 0076673b  85c0                 test eax, eax
// 0076673d  7674                 jbe 0x7667b3
// 0076673f  55                   push ebp
// 00766740  56                   push esi
// 00766741  8bcb                 mov ecx, ebx
// 00766743  e858570000           call 0x76bea0
// 00766748  50                   push eax
// 00766749  e8a295ffff           call 0x75fcf0
// 0076674e  50                   push eax
// 0076674f  e87228fbff           call 0x718fc6
// 00766754  83c408               add esp, 8
// 00766757  85c0                 test eax, eax
// 00766759  7458                 je 0x7667b3
// 0076675b  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00766760  7451                 je 0x7667b3
// 00766762  8b10                 mov edx, dword ptr [eax]
// 00766764  8bc8                 mov ecx, eax
// 00766766  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 0076676c  ffd0                 call eax
// 0076676e  8bb8fc000000         mov edi, dword ptr [eax + 0xfc]
// 00766774  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00766777  33f6                 xor esi, esi
// 00766779  85c0                 test eax, eax
// 0076677b  7e2e                 jle 0x7667ab
// 0076677d  8d4900               lea ecx, [ecx]
// 00766780  85f6                 test esi, esi
// 00766782  7c11                 jl 0x766795
// 00766784  3bf0                 cmp esi, eax
// 00766786  7d0d                 jge 0x766795
// 00766788  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0076678b  7d3b                 jge 0x7667c8
// 0076678d  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00766790  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 00766793  eb02                 jmp 0x766797
// 00766795  33c0                 xor eax, eax
// 00766797  6a00                 push 0
// 00766799  6aff                 push -1
// 0076679b  50                   push eax
// 0076679c  8bcb                 mov ecx, ebx
// 0076679e  e82d5d0000           call 0x76c4d0
// 007667a3  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007667a6  46                   inc esi
// 007667a7  3bf0                 cmp esi, eax
// 007667a9  7cd5                 jl 0x766780
// 007667ab  8b742418             mov esi, dword ptr [esp + 0x18]
// 007667af  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007667b3  45                   inc ebp
// 007667b4  3bef                 cmp ebp, edi
// 007667b6  0f8c74ffffff         jl 0x766730
// 007667bc  5f                   pop edi
// 007667bd  5e                   pop esi
// 007667be  5d                   pop ebp
// 007667bf  b801000000           mov eax, 1
// 007667c4  5b                   pop ebx
// 007667c5  c20c00               ret 0xc
// 007667c8  e81725fbff           call 0x718ce4
// copied from an identical function in another client (function ?AddCategory@CXTPCustomizeCommandsPage@@QAEHPBDPAVCMenu@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCustomizeCommandsPage.cpp