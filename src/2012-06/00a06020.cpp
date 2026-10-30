// roc 2012-06 00a06020  unit: CXTPRibbonTheme  size: 431 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a06020
//
// 00a06020  83ec40               sub esp, 0x40
// 00a06023  53                   push ebx
// 00a06024  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00a06028  55                   push ebp
// 00a06029  56                   push esi
// 00a0602a  57                   push edi
// 00a0602b  8bf9                 mov edi, ecx
// 00a0602d  b864c1c100           mov eax, 0xc1c164
// 00a06032  85db                 test ebx, ebx
// 00a06034  7505                 jne 0xa0603b
// 00a06036  b84cc1c100           mov eax, 0xc1c14c
// 00a0603b  50                   push eax
// 00a0603c  e82f180000           call 0xa07870
// 00a06041  8bf0                 mov esi, eax
// 00a06043  85f6                 test esi, esi
// 00a06045  0f847a010000         je 0xa061c5
// 00a0604b  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00a0604f  8b85c0000000         mov eax, dword ptr [ebp + 0xc0]
// 00a06055  8b95c8000000         mov edx, dword ptr [ebp + 0xc8]
// 00a0605b  8b8dc4000000         mov ecx, dword ptr [ebp + 0xc4]
// 00a06061  89442410             mov dword ptr [esp + 0x10], eax
// 00a06065  8b85cc000000         mov eax, dword ptr [ebp + 0xcc]
// 00a0606b  89542418             mov dword ptr [esp + 0x18], edx
// 00a0606f  8b5500               mov edx, dword ptr [ebp]
// 00a06072  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a06076  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a0607a  8b4278               mov eax, dword ptr [edx + 0x78]
// 00a0607d  8bcd                 mov ecx, ebp
// 00a0607f  ffd0                 call eax
// 00a06081  85c0                 test eax, eax
// 00a06083  7407                 je 0xa0608c
// 00a06085  bd02000000           mov ebp, 2
// 00a0608a  eb12                 jmp 0xa0609e
// 00a0608c  8b5500               mov edx, dword ptr [ebp]
// 00a0608f  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00a06092  8bcd                 mov ecx, ebp
// 00a06094  ffd0                 call eax
// 00a06096  8be8                 mov ebp, eax
// 00a06098  f7dd                 neg ebp
// 00a0609a  1bed                 sbb ebp, ebp
// 00a0609c  f7dd                 neg ebp
// 00a0609e  b830c1c100           mov eax, 0xc1c130
// 00a060a3  85db                 test ebx, ebx
// 00a060a5  7505                 jne 0xa060ac
// 00a060a7  b810c1c100           mov eax, 0xc1c110
// 00a060ac  50                   push eax
// 00a060ad  8bcf                 mov ecx, edi
// 00a060af  e8bc170000           call 0xa07870
// 00a060b4  6a03                 push 3
// 00a060b6  55                   push ebp
// 00a060b7  8d4c2448             lea ecx, [esp + 0x48]
// 00a060bb  8bd8                 mov ebx, eax
// 00a060bd  b806000000           mov eax, 6
// 00a060c2  51                   push ecx
// 00a060c3  8bce                 mov ecx, esi
// 00a060c5  c7462c01000000       mov dword ptr [esi + 0x2c], 1
// 00a060cc  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 00a060d4  89442430             mov dword ptr [esp + 0x30], eax
// 00a060d8  c744243403000000     mov dword ptr [esp + 0x34], 3
// 00a060e0  89442438             mov dword ptr [esp + 0x38], eax
// 00a060e4  e807fa0500           call 0xa65af0
// 00a060e9  68ff00ff00           push 0xff00ff
// 00a060ee  8d542424             lea edx, [esp + 0x24]
// 00a060f2  52                   push edx
// 00a060f3  8b10                 mov edx, dword ptr [eax]
// 00a060f5  83ec10               sub esp, 0x10
// 00a060f8  8bcc                 mov ecx, esp
// 00a060fa  8911                 mov dword ptr [ecx], edx
// 00a060fc  8b5004               mov edx, dword ptr [eax + 4]
// 00a060ff  895104               mov dword ptr [ecx + 4], edx
// 00a06102  8b5008               mov edx, dword ptr [eax + 8]
// 00a06105  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a06108  895108               mov dword ptr [ecx + 8], edx
// 00a0610b  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00a0610f  89410c               mov dword ptr [ecx + 0xc], eax
// 00a06112  8d4c2428             lea ecx, [esp + 0x28]
// 00a06116  51                   push ecx
// 00a06117  52                   push edx
// 00a06118  8bce                 mov ecx, esi
// 00a0611a  e811ff0500           call 0xa66030
// 00a0611f  6a03                 push 3
// 00a06121  6a00                 push 0
// 00a06123  8d442448             lea eax, [esp + 0x48]
// 00a06127  50                   push eax
// 00a06128  8bcb                 mov ecx, ebx
// 00a0612a  e8c1f90500           call 0xa65af0
// 00a0612f  8b4808               mov ecx, dword ptr [eax + 8]
// 00a06132  2b08                 sub ecx, dword ptr [eax]
// 00a06134  8b700c               mov esi, dword ptr [eax + 0xc]
// 00a06137  2b7004               sub esi, dword ptr [eax + 4]
// 00a0613a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a0613e  2bc1                 sub eax, ecx
// 00a06140  03442418             add eax, dword ptr [esp + 0x18]
// 00a06144  6a03                 push 3
// 00a06146  99                   cdq 
// 00a06147  2bc2                 sub eax, edx
// 00a06149  8bf8                 mov edi, eax
// 00a0614b  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a0614f  2bc6                 sub eax, esi
// 00a06151  03442418             add eax, dword ptr [esp + 0x18]
// 00a06155  d1ff                 sar edi, 1
// 00a06157  99                   cdq 
// 00a06158  2bc2                 sub eax, edx
// 00a0615a  d1f8                 sar eax, 1
// 00a0615c  89442438             mov dword ptr [esp + 0x38], eax
// 00a06160  897c2434             mov dword ptr [esp + 0x34], edi
// 00a06164  03f9                 add edi, ecx
// 00a06166  03c6                 add eax, esi
// 00a06168  55                   push ebp
// 00a06169  8d4c2448             lea ecx, [esp + 0x48]
// 00a0616d  89442444             mov dword ptr [esp + 0x44], eax
// 00a06171  33c0                 xor eax, eax
// 00a06173  51                   push ecx
// 00a06174  8bcb                 mov ecx, ebx
// 00a06176  897c2444             mov dword ptr [esp + 0x44], edi
// 00a0617a  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a0617e  89442430             mov dword ptr [esp + 0x30], eax
// 00a06182  89442434             mov dword ptr [esp + 0x34], eax
// 00a06186  89442438             mov dword ptr [esp + 0x38], eax
// 00a0618a  e861f90500           call 0xa65af0
// 00a0618f  68ff00ff00           push 0xff00ff
// 00a06194  8d542424             lea edx, [esp + 0x24]
// 00a06198  52                   push edx
// 00a06199  8b10                 mov edx, dword ptr [eax]
// 00a0619b  83ec10               sub esp, 0x10
// 00a0619e  8bcc                 mov ecx, esp
// 00a061a0  8911                 mov dword ptr [ecx], edx
// 00a061a2  8b5004               mov edx, dword ptr [eax + 4]
// 00a061a5  895104               mov dword ptr [ecx + 4], edx
// 00a061a8  8b5008               mov edx, dword ptr [eax + 8]
// 00a061ab  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a061ae  895108               mov dword ptr [ecx + 8], edx
// 00a061b1  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00a061b5  89410c               mov dword ptr [ecx + 0xc], eax
// 00a061b8  8d4c2448             lea ecx, [esp + 0x48]
// 00a061bc  51                   push ecx
// 00a061bd  52                   push edx
// 00a061be  8bcb                 mov ecx, ebx
// 00a061c0  e86bfe0500           call 0xa66030
// 00a061c5  5f                   pop edi
// 00a061c6  5e                   pop esi
// 00a061c7  5d                   pop ebp
// 00a061c8  5b                   pop ebx
// 00a061c9  83c440               add esp, 0x40
// 00a061cc  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonScrollButton@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp