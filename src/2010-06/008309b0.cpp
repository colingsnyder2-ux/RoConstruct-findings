// roc 2010-06 008309b0  unit: CXTPRibbonTheme  size: 431 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008309b0
//
// 008309b0  83ec40               sub esp, 0x40
// 008309b3  53                   push ebx
// 008309b4  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 008309b8  55                   push ebp
// 008309b9  56                   push esi
// 008309ba  57                   push edi
// 008309bb  8bf9                 mov edi, ecx
// 008309bd  b88c60a600           mov eax, 0xa6608c
// 008309c2  85db                 test ebx, ebx
// 008309c4  7505                 jne 0x8309cb
// 008309c6  b87460a600           mov eax, 0xa66074
// 008309cb  50                   push eax
// 008309cc  e82f180000           call 0x832200
// 008309d1  8bf0                 mov esi, eax
// 008309d3  85f6                 test esi, esi
// 008309d5  0f847a010000         je 0x830b55
// 008309db  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 008309df  8b85c0000000         mov eax, dword ptr [ebp + 0xc0]
// 008309e5  8b95c8000000         mov edx, dword ptr [ebp + 0xc8]
// 008309eb  8b8dc4000000         mov ecx, dword ptr [ebp + 0xc4]
// 008309f1  89442410             mov dword ptr [esp + 0x10], eax
// 008309f5  8b85cc000000         mov eax, dword ptr [ebp + 0xcc]
// 008309fb  89542418             mov dword ptr [esp + 0x18], edx
// 008309ff  8b5500               mov edx, dword ptr [ebp]
// 00830a02  894c2414             mov dword ptr [esp + 0x14], ecx
// 00830a06  8944241c             mov dword ptr [esp + 0x1c], eax
// 00830a0a  8b4278               mov eax, dword ptr [edx + 0x78]
// 00830a0d  8bcd                 mov ecx, ebp
// 00830a0f  ffd0                 call eax
// 00830a11  85c0                 test eax, eax
// 00830a13  7407                 je 0x830a1c
// 00830a15  bd02000000           mov ebp, 2
// 00830a1a  eb12                 jmp 0x830a2e
// 00830a1c  8b5500               mov edx, dword ptr [ebp]
// 00830a1f  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00830a22  8bcd                 mov ecx, ebp
// 00830a24  ffd0                 call eax
// 00830a26  8be8                 mov ebp, eax
// 00830a28  f7dd                 neg ebp
// 00830a2a  1bed                 sbb ebp, ebp
// 00830a2c  f7dd                 neg ebp
// 00830a2e  b85860a600           mov eax, 0xa66058
// 00830a33  85db                 test ebx, ebx
// 00830a35  7505                 jne 0x830a3c
// 00830a37  b83860a600           mov eax, 0xa66038
// 00830a3c  50                   push eax
// 00830a3d  8bcf                 mov ecx, edi
// 00830a3f  e8bc170000           call 0x832200
// 00830a44  6a03                 push 3
// 00830a46  55                   push ebp
// 00830a47  8d4c2448             lea ecx, [esp + 0x48]
// 00830a4b  8bd8                 mov ebx, eax
// 00830a4d  b806000000           mov eax, 6
// 00830a52  51                   push ecx
// 00830a53  8bce                 mov ecx, esi
// 00830a55  c7462c01000000       mov dword ptr [esi + 0x2c], 1
// 00830a5c  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 00830a64  89442430             mov dword ptr [esp + 0x30], eax
// 00830a68  c744243403000000     mov dword ptr [esp + 0x34], 3
// 00830a70  89442438             mov dword ptr [esp + 0x38], eax
// 00830a74  e8b7400600           call 0x894b30
// 00830a79  68ff00ff00           push 0xff00ff
// 00830a7e  8d542424             lea edx, [esp + 0x24]
// 00830a82  52                   push edx
// 00830a83  8b10                 mov edx, dword ptr [eax]
// 00830a85  83ec10               sub esp, 0x10
// 00830a88  8bcc                 mov ecx, esp
// 00830a8a  8911                 mov dword ptr [ecx], edx
// 00830a8c  8b5004               mov edx, dword ptr [eax + 4]
// 00830a8f  895104               mov dword ptr [ecx + 4], edx
// 00830a92  8b5008               mov edx, dword ptr [eax + 8]
// 00830a95  8b400c               mov eax, dword ptr [eax + 0xc]
// 00830a98  895108               mov dword ptr [ecx + 8], edx
// 00830a9b  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00830a9f  89410c               mov dword ptr [ecx + 0xc], eax
// 00830aa2  8d4c2428             lea ecx, [esp + 0x28]
// 00830aa6  51                   push ecx
// 00830aa7  52                   push edx
// 00830aa8  8bce                 mov ecx, esi
// 00830aaa  e8c1450600           call 0x895070
// 00830aaf  6a03                 push 3
// 00830ab1  6a00                 push 0
// 00830ab3  8d442448             lea eax, [esp + 0x48]
// 00830ab7  50                   push eax
// 00830ab8  8bcb                 mov ecx, ebx
// 00830aba  e871400600           call 0x894b30
// 00830abf  8b4808               mov ecx, dword ptr [eax + 8]
// 00830ac2  2b08                 sub ecx, dword ptr [eax]
// 00830ac4  8b700c               mov esi, dword ptr [eax + 0xc]
// 00830ac7  2b7004               sub esi, dword ptr [eax + 4]
// 00830aca  8b442410             mov eax, dword ptr [esp + 0x10]
// 00830ace  2bc1                 sub eax, ecx
// 00830ad0  03442418             add eax, dword ptr [esp + 0x18]
// 00830ad4  6a03                 push 3
// 00830ad6  99                   cdq 
// 00830ad7  2bc2                 sub eax, edx
// 00830ad9  8bf8                 mov edi, eax
// 00830adb  8b442420             mov eax, dword ptr [esp + 0x20]
// 00830adf  2bc6                 sub eax, esi
// 00830ae1  03442418             add eax, dword ptr [esp + 0x18]
// 00830ae5  d1ff                 sar edi, 1
// 00830ae7  99                   cdq 
// 00830ae8  2bc2                 sub eax, edx
// 00830aea  d1f8                 sar eax, 1
// 00830aec  89442438             mov dword ptr [esp + 0x38], eax
// 00830af0  897c2434             mov dword ptr [esp + 0x34], edi
// 00830af4  03f9                 add edi, ecx
// 00830af6  03c6                 add eax, esi
// 00830af8  55                   push ebp
// 00830af9  8d4c2448             lea ecx, [esp + 0x48]
// 00830afd  89442444             mov dword ptr [esp + 0x44], eax
// 00830b01  33c0                 xor eax, eax
// 00830b03  51                   push ecx
// 00830b04  8bcb                 mov ecx, ebx
// 00830b06  897c2444             mov dword ptr [esp + 0x44], edi
// 00830b0a  8944242c             mov dword ptr [esp + 0x2c], eax
// 00830b0e  89442430             mov dword ptr [esp + 0x30], eax
// 00830b12  89442434             mov dword ptr [esp + 0x34], eax
// 00830b16  89442438             mov dword ptr [esp + 0x38], eax
// 00830b1a  e811400600           call 0x894b30
// 00830b1f  68ff00ff00           push 0xff00ff
// 00830b24  8d542424             lea edx, [esp + 0x24]
// 00830b28  52                   push edx
// 00830b29  8b10                 mov edx, dword ptr [eax]
// 00830b2b  83ec10               sub esp, 0x10
// 00830b2e  8bcc                 mov ecx, esp
// 00830b30  8911                 mov dword ptr [ecx], edx
// 00830b32  8b5004               mov edx, dword ptr [eax + 4]
// 00830b35  895104               mov dword ptr [ecx + 4], edx
// 00830b38  8b5008               mov edx, dword ptr [eax + 8]
// 00830b3b  8b400c               mov eax, dword ptr [eax + 0xc]
// 00830b3e  895108               mov dword ptr [ecx + 8], edx
// 00830b41  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00830b45  89410c               mov dword ptr [ecx + 0xc], eax
// 00830b48  8d4c2448             lea ecx, [esp + 0x48]
// 00830b4c  51                   push ecx
// 00830b4d  52                   push edx
// 00830b4e  8bcb                 mov ecx, ebx
// 00830b50  e81b450600           call 0x895070
// 00830b55  5f                   pop edi
// 00830b56  5e                   pop esi
// 00830b57  5d                   pop ebp
// 00830b58  5b                   pop ebx
// 00830b59  83c440               add esp, 0x40
// 00830b5c  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonScrollButton@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp