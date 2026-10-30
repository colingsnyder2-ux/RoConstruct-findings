// roc 2009-12 00895680  unit: CXTPRibbonBar  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895680
//
// 00895680  53                   push ebx
// 00895681  56                   push esi
// 00895682  57                   push edi
// 00895683  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00895687  8b4760               mov eax, dword ptr [edi + 0x60]
// 0089568a  50                   push eax
// 0089568b  8bf1                 mov esi, ecx
// 0089568d  e80e08f6ff           call 0x7f5ea0
// 00895692  50                   push eax
// 00895693  e8a6e5f5ff           call 0x7f3c3e
// 00895698  8bd8                 mov ebx, eax
// 0089569a  83c408               add esp, 8
// 0089569d  85db                 test ebx, ebx
// 0089569f  0f84e2000000         je 0x895787
// 008956a5  837f7000             cmp dword ptr [edi + 0x70], 0
// 008956a9  0f85b0000000         jne 0x89575f
// 008956af  83bbd000000002       cmp dword ptr [ebx + 0xd0], 2
// 008956b6  0f85a3000000         jne 0x89575f
// 008956bc  8bbb58010000         mov edi, dword ptr [ebx + 0x158]
// 008956c2  85ff                 test edi, edi
// 008956c4  0f8434010000         je 0x8957fe
// 008956ca  8b476c               mov eax, dword ptr [edi + 0x6c]
// 008956cd  85c0                 test eax, eax
// 008956cf  0f8429010000         je 0x8957fe
// 008956d5  8b16                 mov edx, dword ptr [esi]
// 008956d7  50                   push eax
// 008956d8  8b82b4010000         mov eax, dword ptr [edx + 0x1b4]
// 008956de  8bce                 mov ecx, esi
// 008956e0  ffd0                 call eax
// 008956e2  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 008956e5  8b11                 mov edx, dword ptr [ecx]
// 008956e7  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 008956ed  ffd0                 call eax
// 008956ef  53                   push ebx
// 008956f0  8bcf                 mov ecx, edi
// 008956f2  e8e9450500           call 0x8e9ce0
// 008956f7  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 008956fa  8b11                 mov edx, dword ptr [ecx]
// 008956fc  8bd8                 mov ebx, eax
// 008956fe  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 00895704  ffd0                 call eax
// 00895706  8bf8                 mov edi, eax
// 00895708  85ff                 test edi, edi
// 0089570a  0f84ee000000         je 0x8957fe
// 00895710  83bfe000000000       cmp dword ptr [edi + 0xe0], 0
// 00895717  0f84e1000000         je 0x8957fe
// 0089571d  85db                 test ebx, ebx
// 0089571f  0f8cd9000000         jl 0x8957fe
// 00895725  8bcf                 mov ecx, edi
// 00895727  e824fbf6ff           call 0x805250
// 0089572c  3bd8                 cmp ebx, eax
// 0089572e  0f8dca000000         jge 0x8957fe
// 00895734  6a01                 push 1
// 00895736  57                   push edi
// 00895737  8bce                 mov ecx, esi
// 00895739  e892edf6ff           call 0x8044d0
// 0089573e  8bc8                 mov ecx, eax
// 00895740  e89b17f8ff           call 0x816ee0
// 00895745  53                   push ebx
// 00895746  8bcf                 mov ecx, edi
// 00895748  e813fbf6ff           call 0x805260
// 0089574d  8b10                 mov edx, dword ptr [eax]
// 0089574f  8bc8                 mov ecx, eax
// 00895751  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 00895757  ffd0                 call eax
// 00895759  5f                   pop edi
// 0089575a  5e                   pop esi
// 0089575b  5b                   pop ebx
// 0089575c  c20400               ret 4
// 0089575f  8b13                 mov edx, dword ptr [ebx]
// 00895761  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00895767  6a00                 push 0
// 00895769  8bcb                 mov ecx, ebx
// 0089576b  ffd0                 call eax
// 0089576d  85c0                 test eax, eax
// 0089576f  0f8489000000         je 0x8957fe
// 00895775  8b13                 mov edx, dword ptr [ebx]
// 00895777  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 0089577d  8bcb                 mov ecx, ebx
// 0089577f  ffd0                 call eax
// 00895781  5f                   pop edi
// 00895782  5e                   pop esi
// 00895783  5b                   pop ebx
// 00895784  c20400               ret 4
// 00895787  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 0089578a  51                   push ecx
// 0089578b  e8804c0500           call 0x8ea410
// 00895790  50                   push eax
// 00895791  e8a8e4f5ff           call 0x7f3c3e
// 00895796  83c408               add esp, 8
// 00895799  85c0                 test eax, eax
// 0089579b  7461                 je 0x8957fe
// 0089579d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008957a0  52                   push edx
// 008957a1  8bce                 mov ecx, esi
// 008957a3  e8b8f5ffff           call 0x894d60
// 008957a8  8b06                 mov eax, dword ptr [esi]
// 008957aa  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 008957b0  6a01                 push 1
// 008957b2  6a00                 push 0
// 008957b4  6a01                 push 1
// 008957b6  8bce                 mov ecx, esi
// 008957b8  ffd2                 call edx
// 008957ba  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008957c0  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 008957c6  8b06                 mov eax, dword ptr [esi]
// 008957c8  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 008957ce  6a01                 push 1
// 008957d0  52                   push edx
// 008957d1  8bce                 mov ecx, esi
// 008957d3  ffd0                 call eax
// 008957d5  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008957db  8b11                 mov edx, dword ptr [ecx]
// 008957dd  8b4270               mov eax, dword ptr [edx + 0x70]
// 008957e0  6a01                 push 1
// 008957e2  ffd0                 call eax
// 008957e4  8bce                 mov ecx, esi
// 008957e6  e8f5f9ffff           call 0x8951e0
// 008957eb  85c0                 test eax, eax
// 008957ed  750f                 jne 0x8957fe
// 008957ef  6a02                 push 2
// 008957f1  56                   push esi
// 008957f2  e8d9ecf6ff           call 0x8044d0
// 008957f7  8bc8                 mov ecx, eax
// 008957f9  e8e216f8ff           call 0x816ee0
// 008957fe  5f                   pop edi
// 008957ff  5e                   pop esi
// 00895800  5b                   pop ebx
// 00895801  c20400               ret 4
// copied from an identical function in another client (function ?OnKeyboardTip@CXTPRibbonBar@@MAEXPAVCXTPCommandBarKeyboardTip@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp