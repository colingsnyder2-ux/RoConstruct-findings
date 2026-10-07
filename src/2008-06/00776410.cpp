// roc 2008-06 00776410  unit: CXTPPropertyGridPaintManager  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00776410
//
// 00776410  53                   push ebx
// 00776411  55                   push ebp
// 00776412  56                   push esi
// 00776413  8bd9                 mov ebx, ecx
// 00776415  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 00776418  57                   push edi
// 00776419  e87241f8ff           call 0x6fa590
// 0077641e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00776422  8b742418             mov esi, dword ptr [esp + 0x18]
// 00776426  8be8                 mov ebp, eax
// 00776428  85ff                 test edi, edi
// 0077642a  0f84f7000000         je 0x776527
// 00776430  83e801               sub eax, 1
// 00776433  0f84b4000000         je 0x7764ed
// 00776439  83e801               sub eax, 1
// 0077643c  747d                 je 0x7764bb
// 0077643e  83e801               sub eax, 1
// 00776441  0f85e0000000         jne 0x776527
// 00776447  e8f498f6ff           call 0x6dfd40
// 0077644c  6a14                 push 0x14
// 0077644e  8bc8                 mov ecx, eax
// 00776450  e8cb90f6ff           call 0x6df520
// 00776455  8bd8                 mov ebx, eax
// 00776457  e8e498f6ff           call 0x6dfd40
// 0077645c  6a10                 push 0x10
// 0077645e  8bc8                 mov ecx, eax
// 00776460  e8bb90f6ff           call 0x6df520
// 00776465  8b4e04               mov ecx, dword ptr [esi + 4]
// 00776468  8b16                 mov edx, dword ptr [esi]
// 0077646a  53                   push ebx
// 0077646b  50                   push eax
// 0077646c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0077646f  2bc1                 sub eax, ecx
// 00776471  50                   push eax
// 00776472  8b4608               mov eax, dword ptr [esi + 8]
// 00776475  2bc2                 sub eax, edx
// 00776477  50                   push eax
// 00776478  51                   push ecx
// 00776479  52                   push edx
// 0077647a  8bcf                 mov ecx, edi
// 0077647c  e8e1630400           call 0x7bc862
// 00776481  e8ba98f6ff           call 0x6dfd40
// 00776486  6a0f                 push 0xf
// 00776488  8bc8                 mov ecx, eax
// 0077648a  e89190f6ff           call 0x6df520
// 0077648f  8bd8                 mov ebx, eax
// 00776491  e8aa98f6ff           call 0x6dfd40
// 00776496  6a15                 push 0x15
// 00776498  8bc8                 mov ecx, eax
// 0077649a  e88190f6ff           call 0x6df520
// 0077649f  8b4e04               mov ecx, dword ptr [esi + 4]
// 007764a2  8b16                 mov edx, dword ptr [esi]
// 007764a4  53                   push ebx
// 007764a5  50                   push eax
// 007764a6  8b460c               mov eax, dword ptr [esi + 0xc]
// 007764a9  2bc1                 sub eax, ecx
// 007764ab  83e802               sub eax, 2
// 007764ae  50                   push eax
// 007764af  8b4608               mov eax, dword ptr [esi + 8]
// 007764b2  2bc2                 sub eax, edx
// 007764b4  83e802               sub eax, 2
// 007764b7  41                   inc ecx
// 007764b8  42                   inc edx
// 007764b9  eb62                 jmp 0x77651d
// 007764bb  8b4344               mov eax, dword ptr [ebx + 0x44]
// 007764be  83f8ff               cmp eax, -1
// 007764c1  7505                 jne 0x7764c8
// 007764c3  8b5340               mov edx, dword ptr [ebx + 0x40]
// 007764c6  eb02                 jmp 0x7764ca
// 007764c8  8bd0                 mov edx, eax
// 007764ca  83f8ff               cmp eax, -1
// 007764cd  7505                 jne 0x7764d4
// 007764cf  8b5b40               mov ebx, dword ptr [ebx + 0x40]
// 007764d2  eb02                 jmp 0x7764d6
// 007764d4  8bd8                 mov ebx, eax
// 007764d6  8b4604               mov eax, dword ptr [esi + 4]
// 007764d9  8b0e                 mov ecx, dword ptr [esi]
// 007764db  52                   push edx
// 007764dc  8b560c               mov edx, dword ptr [esi + 0xc]
// 007764df  53                   push ebx
// 007764e0  2bd0                 sub edx, eax
// 007764e2  52                   push edx
// 007764e3  8b5608               mov edx, dword ptr [esi + 8]
// 007764e6  2bd1                 sub edx, ecx
// 007764e8  52                   push edx
// 007764e9  50                   push eax
// 007764ea  51                   push ecx
// 007764eb  eb33                 jmp 0x776520
// 007764ed  e84e98f6ff           call 0x6dfd40
// 007764f2  6a06                 push 6
// 007764f4  8bc8                 mov ecx, eax
// 007764f6  e82590f6ff           call 0x6df520
// 007764fb  8bd8                 mov ebx, eax
// 007764fd  e83e98f6ff           call 0x6dfd40
// 00776502  6a06                 push 6
// 00776504  8bc8                 mov ecx, eax
// 00776506  e81590f6ff           call 0x6df520
// 0077650b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077650e  8b16                 mov edx, dword ptr [esi]
// 00776510  53                   push ebx
// 00776511  50                   push eax
// 00776512  8b460c               mov eax, dword ptr [esi + 0xc]
// 00776515  2bc1                 sub eax, ecx
// 00776517  50                   push eax
// 00776518  8b4608               mov eax, dword ptr [esi + 8]
// 0077651b  2bc2                 sub eax, edx
// 0077651d  50                   push eax
// 0077651e  51                   push ecx
// 0077651f  52                   push edx
// 00776520  8bcf                 mov ecx, edi
// 00776522  e83b630400           call 0x7bc862
// 00776527  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0077652c  744a                 je 0x776578
// 0077652e  83fd03               cmp ebp, 3
// 00776531  7517                 jne 0x77654a
// 00776533  b802000000           mov eax, 2
// 00776538  0106                 add dword ptr [esi], eax
// 0077653a  014604               add dword ptr [esi + 4], eax
// 0077653d  294608               sub dword ptr [esi + 8], eax
// 00776540  29460c               sub dword ptr [esi + 0xc], eax
// 00776543  5f                   pop edi
// 00776544  5e                   pop esi
// 00776545  5d                   pop ebp
// 00776546  5b                   pop ebx
// 00776547  c20c00               ret 0xc
// 0077654a  83fd02               cmp ebp, 2
// 0077654d  7419                 je 0x776568
// 0077654f  83fd01               cmp ebp, 1
// 00776552  7414                 je 0x776568
// 00776554  33c0                 xor eax, eax
// 00776556  0106                 add dword ptr [esi], eax
// 00776558  014604               add dword ptr [esi + 4], eax
// 0077655b  294608               sub dword ptr [esi + 8], eax
// 0077655e  29460c               sub dword ptr [esi + 0xc], eax
// 00776561  5f                   pop edi
// 00776562  5e                   pop esi
// 00776563  5d                   pop ebp
// 00776564  5b                   pop ebx
// 00776565  c20c00               ret 0xc
// 00776568  b801000000           mov eax, 1
// 0077656d  0106                 add dword ptr [esi], eax
// 0077656f  014604               add dword ptr [esi + 4], eax
// 00776572  294608               sub dword ptr [esi + 8], eax
// 00776575  29460c               sub dword ptr [esi + 0xc], eax
// 00776578  5f                   pop edi
// 00776579  5e                   pop esi
// 0077657a  5d                   pop ebp
// 0077657b  5b                   pop ebx
// 0077657c  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawPropertyGridBorder@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@AAUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
